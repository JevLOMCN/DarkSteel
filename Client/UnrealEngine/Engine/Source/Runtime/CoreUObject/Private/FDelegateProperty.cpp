// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 20

// ContainsObjectReference @ 142024750

bool __thiscall
FDelegateProperty::ContainsObjectReference
          (FDelegateProperty *this,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,
          EPropertyObjectReferenceType param_2)

{
  return (bool)((byte)(param_2 >> 1) & 1);
}

// FDelegateProperty @ 142160120

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FDelegateProperty * __thiscall
FDelegateProperty::FDelegateProperty
          (FDelegateProperty *this,FFieldVariant param_1,FDelegatePropertyParams *param_2)

{
  ulonglong uVar1;
  UFunction *pUVar2;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             CPF_HasGetValueTypeHash|CPF_ZeroConstructor);
  this->_padding_ =
       (longlong)
       &___7__TProperty_V__TScriptDelegate_UFNotThreadSafeDelegateMode____VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x18);
  pUVar2 = (UFunction *)0x0;
  this->_padding_ = (longlong)&___7FDelegateProperty__6B_;
  (this->SignatureFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  if (param_2->SignatureFunctionFunc != (_func___cdecl_UFunction_ptr *)0x0) {
    pUVar2 = (*param_2->SignatureFunctionFunc)();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UFunction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->SignatureFunction).field0_0x0.DebugPtr = pUVar2;
  return this;
}

// FDelegateProperty @ 142160200

FDelegateProperty * __thiscall
FDelegateProperty::FDelegateProperty
          (FDelegateProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  this->_padding_ =
       (longlong)
       &___7__TProperty_V__TScriptDelegate_UFNotThreadSafeDelegateMode____VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x18);
  this->_padding_ = (longlong)&___7FDelegateProperty__6B_;
  (this->SignatureFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  return this;
}

// operator() @ 142164ae0

void __thiscall
`FDelegateProperty::ExportText_Internal'::__l2::<lambda_1>::operator()
          (void *this,TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  bool bVar4;
  int iVar5;
  FName local_res8;
  FString local_b8;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FString local_78;
  FString local_68;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  bVar4 = false;
  if ((param_1 == (TScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptDelegate != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyDelegate.cpp"
                         ,0x8d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_40);
  local_res8 = param_1->FunctionName;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  ::FName::ToString(&local_res8,&local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_a8);
  pUVar3 = FWeakObjectPtr::Get(&param_1->Object);
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (pUVar3 != (UObject *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FWriteAccessScope *)&local_90);
    pUVar3 = FWeakObjectPtr::Get(&param_1->Object);
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar3,&local_78,(UObject *)0x0);
    bVar4 = true;
  }
  ::FString::PrintfImpl(&local_b8,L"%s.%s");
  iVar5 = local_b8.Data.ArrayNum + -1;
  if (local_b8.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(*(FString **)this,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar5);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// AddReferencedObjects @ 142166aa0

void __thiscall
FDelegateProperty::AddReferencedObjects(FDelegateProperty *this,FReferenceCollector *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->SignatureFunction).field0_0x0.DebugPtr;
  if (pUVar2 != (UFunction *)0x0) {
    pUVar4 = Z_Construct_UClass_ULinkerPlaceholderFunction_NoRegister();
    lVar3 = pUVar2->_padding_;
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->SignatureFunction,0,0);
    }
  }
  FField::AddReferencedObjects((FField *)this,param_1);
  return;
}

// BeginDestroy @ 142167f30

void __thiscall FDelegateProperty::BeginDestroy(FDelegateProperty *this)

{
  UFunction *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FFieldObjectUnion local_res8;
  
  if ((this->SignatureFunction).field0_0x0.DebugPtr != (UFunction *)0x0) {
    pUVar4 = Z_Construct_UClass_ULinkerPlaceholderFunction_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->SignatureFunction,pUVar4);
    if ((bVar3) &&
       (pUVar1 = (this->SignatureFunction).field0_0x0.DebugPtr, pUVar1 != (UFunction *)0x0)) {
      local_res8 = (FFieldObjectUnion)this;
      if (((ulonglong)this & 1) != 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsUObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x180,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::Remove
                ((TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator> *)
                 &pUVar1[1].EventGraphCallOffset,(FFieldVariant *)&local_res8);
    }
  }
  FField::BeginDestroy((FField *)this);
  return;
}

// Construct @ 14216a4f0

FField * __cdecl
FDelegateProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  FProperty *this;
  FFieldClass *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x78,0);
  if (this != (FProperty *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pFVar2 = FProperty::StaticClass();
        FFieldClass::FFieldClass
                  (&::StaticFieldClass,L"FDelegateProperty",0x800000,
                   CASTCLASS_FDelegateProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar2,Construct
                  );
        atexit(`FDelegateProperty::StaticClass'::__l2::
               _dynamic_atexit_destructor_for__StaticFieldClass__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    FField::FField((FField *)this,EC_InternalUseOnlyConstructor,&::StaticFieldClass);
    this->PropertyLinkNext = (FProperty *)0x0;
    this->NextRef = (FProperty *)0x0;
    this->DestructorLinkNext = (FProperty *)0x0;
    this->PostConstructLinkNext = (FProperty *)0x0;
    (this->RepNotifyFunc).ComparisonIndex = 0;
    (this->RepNotifyFunc).Number = 0;
    this->_padding_ = (longlong)&___7FDelegateProperty__6B_;
    this[1]._padding_ = 0;
    uVar1 = (param_1->Container).Unknown;
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    local_res20 = uVar1;
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    FProperty::FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
    this->_padding_ =
         (longlong)
         &___7__TProperty_V__TScriptDelegate_UFNotThreadSafeDelegateMode____VFProperty____6B_;
    FProperty::SetElementSize(this,0x18);
    this->_padding_ = (longlong)&___7FDelegateProperty__6B_;
    this[1]._padding_ = 0;
    return (FField *)this;
  }
  return (FField *)0x0;
}

// ExportText_Internal @ 142175f30

void __thiscall
FDelegateProperty::ExportText_Internal
          (FDelegateProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  char cVar1;
  FString *local_res10 [3];
  TScriptDelegate<FNotThreadSafeDelegateMode> local_28;
  
  local_res10[0] = param_1;
  if (param_3 == Container) {
    cVar1 = (**(code **)(this->_padding_ + 0x78))();
    if (cVar1 != '\0') {
      local_28._padding_ = 0;
      local_28.Object.ObjectIndex = 0;
      local_28.Object.ObjectSerialNumber = 0;
      local_28.FunctionName.ComparisonIndex.Value = 0;
      local_28.FunctionName.Number = 0;
      FProperty::GetValue_InContainer((FProperty *)this,param_2,&local_28);
      `FDelegateProperty::ExportText_Internal'::__l2::<lambda_1>::operator()(local_res10,&local_28);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&local_28);
      return;
    }
    param_2 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
  }
  `FDelegateProperty::ExportText_Internal'::__l2::<lambda_1>::operator()(local_res10,param_2);
  return;
}

// GetCPPType @ 14217a500

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
FDelegateProperty::GetCPPType
          (FDelegateProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  longlong *plVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  FUObjectItem *pFVar5;
  UClass *pUVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FName local_res8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FName local_98;
  FName local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (((this->SignatureFunction).field0_0x0.DebugPtr == (UFunction *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SignatureFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyDelegate.cpp"
                         ,0x65,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  local_res8 = (FName)((this->SignatureFunction).field0_0x0.DebugPtr)->_padding_;
  ::FName::ToString(&local_res8,&local_b8);
  pFVar4 = ::FString::FString(&local_58,L"__DelegateSignature");
  iVar7 = (pFVar4->Data).ArrayNum;
  iVar9 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar9 = 0;
  }
  iVar7 = 0;
  if (local_b8.Data.ArrayNum != 0) {
    iVar7 = local_b8.Data.ArrayNum + -1;
  }
  if (iVar7 - iVar9 < iVar7) {
    iVar7 = iVar7 - iVar9;
  }
  iVar8 = 0;
  if (0 < iVar7) {
    iVar8 = iVar7;
  }
  ::FString::RemoveAt(&local_b8,iVar8,iVar9,No);
  local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
  local_c8.Data.ArrayNum = local_b8.Data.ArrayNum;
  local_c8.Data.ArrayMax = local_b8.Data.ArrayMax;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pFVar5 = FUObjectArray::IndexToObject
                     (&GUObjectArray,
                      *(int *)((longlong)&((this->SignatureFunction).field0_0x0.DebugPtr)->_padding_
                              + 4));
  if (((param_2 >> 7 & 1) == 0) ||
     (((ulonglong)((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) == 0)) {
    pUVar6 = UField::GetOwnerClass((UField *)(this->SignatureFunction).field0_0x0.DebugPtr);
    if ((pUVar6 == (UClass *)0x0) ||
       (pUVar6 = UField::GetOwnerClass((UField *)(this->SignatureFunction).field0_0x0.DebugPtr),
       (pUVar6->ClassFlags >> 7 & 1) != 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((param_2 >> 7 & 1) != 0) && (bVar3)) {
      pFVar4 = UnicodeToCPPIdentifier(&local_48,&local_c8,false,L"");
      if (&local_c8 != pFVar4) {
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        local_c8.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Data.ArrayNum = (pFVar4->Data).ArrayNum;
        local_c8.Data.ArrayMax = (pFVar4->Data).ArrayMax;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      pUVar6 = UField::GetOwnerClass((UField *)(this->SignatureFunction).field0_0x0.DebugPtr);
      local_90 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_90,&local_68);
      UnicodeToCPPIdentifier(&local_78,&local_68,false,L"");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_a8,L"%s__%s");
      _Src.Data = local_a8.Data.AllocatorInstance.Data;
      local_c8.Data.ArrayNum = local_a8.Data.ArrayNum;
      if ((local_a8.Data.ArrayNum == 0) && (local_c8.Data.ArrayMax == 0)) {
        local_c8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_a8.Data.ArrayNum,local_c8.Data.ArrayMax,(ForAnyElementType *)&local_c8,
                   local_a8.Data.ArrayNum,&local_c8.Data.ArrayMax);
        if (local_a8.Data.ArrayNum != 0) {
          memcpy(local_c8.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_a8.Data.ArrayNum * 2
                );
        }
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    if ((param_2 & 8) != 0) {
      ::FString::AppendChars(&local_c8,L"__SinglecastDelegate",0x14);
    }
  }
  else {
    plVar1 = (longlong *)((this->SignatureFunction).field0_0x0.DebugPtr)->_padding_;
    if (plVar1 != (longlong *)0x0) {
      pUVar6 = Z_Construct_UClass_UStruct_NoRegister();
      iVar7 = (int)pUVar6->_padding_;
      if ((iVar7 <= *(int *)(plVar1[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar1[2] + 0x30) + (longlong)iVar7 * 8) ==
          &pUVar6->_padding_)) {
        local_98 = *(FName *)(plVar1 + 3);
        ::FName::ToString(&local_98,&local_88);
        (**(code **)(*plVar1 + 0x318))(plVar1);
        ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s::F%s");
        goto LAB_14217a874;
      }
    }
  }
  pFVar4 = ::FString::FString(&local_38,L"F");
  ::FString::ConcatFF(__return_storage_ptr__,pFVar4,&local_c8);
  local_88.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
LAB_14217a874:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetFieldSize @ 14217bc20

ulong64 __thiscall FDelegateProperty::GetFieldSize(FDelegateProperty *this)

{
  return 0x78;
}

// Identical @ 14217e270

bool __thiscall
FDelegateProperty::Identical(FDelegateProperty *this,void *param_1,void *param_2,uint param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UObject *this_00;
  UFunction *pUVar5;
  FReadAccessScope *this_01;
  FWeakObjectPtr local_res10 [3];
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  FReadAccessScope local_28;
  
  if (param_1 == (void *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("A",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyDelegate.cpp"
                       ,0x48,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (param_2 == (void *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(param_1,&local_58);
    if (*(longlong *)((longlong)param_1 + 0x10) != 0) {
      this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 8));
      if (this_00 != (UObject *)0x0) {
        pUVar5 = UObject::FindFunction(this_00,*(FName *)((longlong)param_1 + 0x10));
        bVar3 = pUVar5 == (UFunction *)0x0;
        this_01 = &local_58;
        goto LAB_14217e38b;
      }
    }
    bVar3 = true;
    this_01 = &local_58;
    goto LAB_14217e38b;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(param_2,&local_40);
  local_res10[0] = *(FWeakObjectPtr *)((longlong)param_2 + 8);
  lVar1 = *(longlong *)((longlong)param_2 + 0x10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(param_1,&local_28);
  if ((((FWeakObjectPtr *)((longlong)param_1 + 8))->ObjectIndex == local_res10[0].ObjectIndex) &&
     (*(int *)((longlong)param_1 + 0xc) == local_res10[0].ObjectSerialNumber)) {
LAB_14217e365:
    if (*(longlong *)((longlong)param_1 + 0x10) != lVar1) goto LAB_14217e384;
    bVar3 = true;
  }
  else {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 8));
    if (!bVar3) {
      bVar3 = FWeakObjectPtr::IsValid(local_res10);
      if (!bVar3) goto LAB_14217e365;
    }
LAB_14217e384:
    bVar3 = false;
  }
  this_01 = &local_28;
LAB_14217e38b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_01);
  return bVar3;
}

// ImportText_Internal @ 142180510

wchar_t * __thiscall
FDelegateProperty::ImportText_Internal
          (FDelegateProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  char cVar1;
  wchar_t *pwVar2;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_28;
  
  if (param_3 == Container) {
    cVar1 = (**(code **)(this->_padding_ + 0x70))();
    if (cVar1 != '\0') {
      local_28._padding_ = 0;
      local_28.Object.ObjectIndex = 0;
      local_28.Object.ObjectSerialNumber = 0;
      local_28.FunctionName.ComparisonIndex.Value = 0;
      local_28.FunctionName.Number = 0;
      pwVar2 = DelegatePropertyTools::ImportDelegateFromText
                         (&local_28,(this->SignatureFunction).field0_0x0.DebugPtr,param_1,param_4,
                          param_6);
      FProperty::SetValue_InContainer((FProperty *)this,param_2,&local_28);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&local_28);
      return pwVar2;
    }
    param_2 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
  }
  pwVar2 = DelegatePropertyTools::ImportDelegateFromText
                     (param_2,(this->SignatureFunction).field0_0x0.DebugPtr,param_1,param_4,param_6)
  ;
  return pwVar2;
}

// InstanceSubobjects @ 142182c70

void __thiscall
FDelegateProperty::InstanceSubobjects
          (FDelegateProperty *this,void *param_1,void *param_2,TNotNull<UObject_*> param_3,
          FObjectInstancingGraph *param_4)

{
  FWeakObjectPtr FVar1;
  TNotNull<UObject_*> TVar2;
  UObject *pUVar3;
  int iVar4;
  FWeakObjectPtr *this_00;
  UObject *local_res8;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  
  iVar4 = 0;
  if (0 < (int)this->_padding_) {
    this_00 = (FWeakObjectPtr *)((longlong)param_1 + 8);
    do {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(this_00 + -1),
                 (FWriteAccessScope *)&local_68);
      TVar2.Val = FWeakObjectPtr::Get(this_00);
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      if (TVar2.Val != (UObject *)0x0) {
        pUVar3 = (UObject *)0x0;
        if (param_2 != (void *)0x0) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     (((longlong)param_2 - (longlong)param_1) + -8 + (longlong)this_00),
                     (FWriteAccessScope *)&local_50);
          pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                       (((longlong)param_2 - (longlong)param_1) + (longlong)this_00)
                                      );
          if (local_50.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
          }
        }
        pUVar3 = FObjectInstancingGraph::InstancePropertyValue
                           (param_4,pUVar3,TVar2,param_3,DoNotCreateNewInstance|AllowSelfReference);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(this_00 + -1),
                   (FReadAccessScope *)&local_68);
        FVar1 = this_00[1];
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_68);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(this_00 + -1),
                   (FWriteAccessScope *)&local_68);
        local_res8 = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
        this_00[1] = FVar1;
        if (local_68.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
        }
      }
      iVar4 = iVar4 + 1;
      this_00 = this_00 + 3;
    } while (iVar4 < (int)this->_padding_);
  }
  return;
}

// NetSerializeItem @ 142186bf0

bool __thiscall
FDelegateProperty::NetSerializeItem
          (FDelegateProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  return true;
}

// PostDuplicate @ 1421870c0

void __thiscall FDelegateProperty::PostDuplicate(FDelegateProperty *this,FField *param_1)

{
  UObject *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = param_1[2].Owner.Container.Object, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->SignatureFunction).field0_0x0 = (TObjectPtr<UFunction>_u_0)param_1[2].Owner.Container;
  FProperty::PostDuplicate((FProperty *)this,param_1);
  return;
}

// SameType @ 142189860

bool __thiscall FDelegateProperty::SameType(FDelegateProperty *this,FProperty *param_1)

{
  bool bVar1;
  
  bVar1 = FProperty::SameType((FProperty *)this,param_1);
  if ((bVar1) &&
     ((this->SignatureFunction).field0_0x0.DebugPtr == (UFunction *)param_1[1]._padding_)) {
    return true;
  }
  return false;
}

// Serialize @ 14218a2e0

void __thiscall FDelegateProperty::Serialize(FDelegateProperty *this,FArchive *param_1)

{
  UFunction *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FFieldVariant local_res8;
  FDelegateProperty *local_res10;
  
  FProperty::Serialize((FProperty *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->SignatureFunction);
  if ((((param_1->field_0x28 & 1) != 0) || ((param_1->field_0x2b & 1) != 0)) &&
     ((this->SignatureFunction).field0_0x0.DebugPtr != (UFunction *)0x0)) {
    pUVar4 = Z_Construct_UClass_ULinkerPlaceholderFunction_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->SignatureFunction,pUVar4);
    if ((bVar3) &&
       (pUVar1 = (this->SignatureFunction).field0_0x0.DebugPtr, pUVar1 != (UFunction *)0x0)) {
      local_res10 = this;
      if (((ulonglong)this & 1) != 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsUObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x180,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::
      Emplace<FFieldVariant_const_&>
                ((TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator> *)
                 &pUVar1[1].EventGraphCallOffset,&local_res8,(bool *)&local_res10);
    }
  }
  return;
}

// SerializeItem @ 14218b720

void __thiscall
FDelegateProperty::SerializeItem
          (FDelegateProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(param_2,&local_28);
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 0x138))
            (*(longlong **)(*(longlong *)param_1 + 8),(longlong)param_2 + 8);
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 0x178))
            (*(longlong **)(*(longlong *)param_1 + 8),(longlong)param_2 + 0x10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// StaticClass @ 142193190

FFieldClass * __cdecl FDelegateProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FDelegateProperty",0x800000,
                 CASTCLASS_FDelegateProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct);
      atexit(`FDelegateProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// operator_new @ 142259ad0

void * __cdecl FDelegateProperty::operator_new(ulong64 param_1)

{
  FField *this;
  FFieldClass *pFVar1;
  
  this = FMemory::Malloc(param_1,0);
  if (this != (FField *)0x0) {
    pFVar1 = StaticClass();
    FField::FField(this,EC_InternalUseOnlyConstructor,pFVar1);
    this->_padding_ = (longlong)&___7FDelegateProperty__6B_;
    this[1].Next = (FField *)0x0;
    this[1].NamePrivate.ComparisonIndex = 0;
    this[1].NamePrivate.Number = 0;
    *(undefined8 *)&this[1].FlagsPrivate = 0;
    this[2]._padding_ = 0;
    this[2].ClassPrivate = (FFieldClass *)0x0;
    this[2].Owner.Container.Field = (FField *)0x0;
  }
  return this;
}

