// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 26

// ContainsObjectReference @ 142024850

bool __thiscall
FMulticastDelegateProperty::ContainsObjectReference
          (FMulticastDelegateProperty *this,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,
          EPropertyObjectReferenceType param_2)

{
  return (bool)((byte)(param_2 >> 1) & 1);
}

// FMulticastDelegateProperty @ 142161670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FMulticastDelegateProperty * __thiscall
FMulticastDelegateProperty::FMulticastDelegateProperty
          (FMulticastDelegateProperty *this,FFieldVariant param_1,
          FMulticastDelegatePropertyParams *param_2,EPropertyFlags param_3)

{
  UFunction *pUVar1;
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             param_3);
  pUVar1 = (UFunction *)0x0;
  this->_padding_ = (longlong)&___7FMulticastDelegateProperty__6B_;
  (this->SignatureFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  if (param_2->SignatureFunctionFunc != (_func___cdecl_UFunction_ptr *)0x0) {
    pUVar1 = (*param_2->SignatureFunctionFunc)();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UFunction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->SignatureFunction).field0_0x0.DebugPtr = pUVar1;
  return this;
}

// FMulticastDelegateProperty @ 142161710

FMulticastDelegateProperty * __thiscall
FMulticastDelegateProperty::FMulticastDelegateProperty
          (FMulticastDelegateProperty *this,FFieldVariant param_1,FName *param_2,
          EObjectFlags param_3)

{
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  this->_padding_ = (longlong)&___7FMulticastDelegateProperty__6B_;
  (this->SignatureFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  return this;
}

// AddDelegate @ 142166390

void __thiscall
FMulticastDelegateProperty::AddDelegate
          (FMulticastDelegateProperty *this,TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UObject *param_2,void *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
             ,0x1976,L"Pure virtual not implemented (%s)");
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// AddReferencedObjects @ 142166bd0

void __thiscall
FMulticastDelegateProperty::AddReferencedObjects
          (FMulticastDelegateProperty *this,FReferenceCollector *param_1)

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

// BeginDestroy @ 142168050

void __thiscall FMulticastDelegateProperty::BeginDestroy(FMulticastDelegateProperty *this)

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

// ClearDelegate @ 142169790

void __thiscall
FMulticastDelegateProperty::ClearDelegate
          (FMulticastDelegateProperty *this,UObject *param_1,void *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
             ,0x1978,L"Pure virtual not implemented (%s)");
  return;
}

// Construct @ 14216ba10

FField * __cdecl
FMulticastDelegateProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  FMulticastDelegateProperty *this;
  FFieldClass *pFVar1;
  FMulticastDelegateProperty *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x78,0);
  pFVar2 = (FMulticastDelegateProperty *)0x0;
  if (this != (FMulticastDelegateProperty *)0x0) {
    pFVar1 = StaticClass();
    FField::FField((FField *)this,EC_InternalUseOnlyConstructor,pFVar1);
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = (longlong)&___7FMulticastDelegateProperty__6B_;
    (this->SignatureFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
    local_res20 = (param_1->Container).Unknown;
    if ((((local_res20 & 1) != 0) &&
        ((UObject *)(local_res20 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res20 & 0xfffffffffffffffe));
    }
    pFVar2 = FMulticastDelegateProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
  }
  return (FField *)pFVar2;
}

// ConvertFromType @ 14216fd40

EConvertFromTypeResult __thiscall
FMulticastDelegateProperty::ConvertFromType
          (FMulticastDelegateProperty *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,
          uchar *param_3,UStruct *param_4,uchar *param_5)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FNameEntryId FVar5;
  EConvertFromTypeResult EVar6;
  undefined4 extraout_var;
  FFieldClass *pFVar7;
  FName FVar8;
  undefined1 local_res10 [8];
  
  FVar2 = param_1->Type;
  FVar5 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar8.Number = 0;
  FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  if (((FVar2 != FVar8) &&
      (pFVar7 = FMulticastInlineDelegateProperty::StaticClass(), param_1->Type != pFVar7->Name)) &&
     (pFVar7 = FMulticastSparseDelegateProperty::StaticClass(), param_1->Type != pFVar7->Name)) {
    return UseSerializeItem;
  }
  iVar1 = param_1->ArrayIndex;
  if (((iVar1 < 0) || ((int)this->_padding_ <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
  if ((param_3 == (uchar *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar6 = (*pcVar3)();
    return EVar6;
  }
  (**(code **)(this->_padding_ + 0xc0))
            (this,param_2,
             param_3 + (longlong)*(int *)((longlong)&this->_padding_ + 4) +
                       (longlong)iVar1 * (longlong)*(int *)((longlong)&this->_padding_ + 4),0);
  return Converted;
}

// ExportText_Internal @ 142176720

void __thiscall
FMulticastDelegateProperty::ExportText_Internal
          (FMulticastDelegateProperty *this,FString *param_1,void *param_2,
          EPropertyPointerType param_3,void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  UObject *pUVar8;
  UFunction *pUVar9;
  uint uVar10;
  FWeakObjectPtr *this_01;
  longlong lVar11;
  uint uVar12;
  FMRSWRecursiveAccessDetector local_a0;
  void *local_98;
  undefined8 local_90;
  FName local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FReadAccessScope local_50;
  
  uVar10 = 0;
  local_a0.State = (atomic<unsigned___int64>)0x0;
  local_98 = (void *)0x0;
  local_90 = 0;
  if ((param_3 == Container) && (cVar4 = (**(code **)(this->_padding_ + 0x78))(), cVar4 != '\0')) {
    FProperty::GetValue_InContainer((FProperty *)this,param_2,&local_a0);
    lVar11 = this->_padding_;
    param_2 = &local_a0;
  }
  else {
    lVar11 = this->_padding_;
    if (param_3 == Container) {
      param_2 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
    }
  }
  this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
            (**(code **)(lVar11 + 0x1f8))(this,param_2,0);
  ::FString::AppendChars(param_1,L"(",1);
  if ((this_00 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
     (this_00 != &EmptyDelegate)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_50);
    bVar3 = true;
    uVar7 = uVar10;
LAB_142176801:
    do {
      if (((int)uVar10 < 0) || ((this_00->InvocationList).ArrayNum <= (int)uVar10))
      goto LAB_142176ac6;
      uVar12 = ~uVar10 >> 0x1f;
      if (((int)uVar10 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar11 = (longlong)(int)uVar10 * 0x10;
      this_01 = (FWeakObjectPtr *)((this_00->InvocationList).AllocatorInstance.Data + lVar11);
      if (((this_01[1] != (FWeakObjectPtr)0x0) &&
          (pUVar8 = FWeakObjectPtr::Get(this_01), pUVar8 != (UObject *)0x0)) &&
         (pUVar9 = UObject::FindFunction(pUVar8,*(FName *)(this_01 + 1)), pUVar9 != (UFunction *)0x0
         )) {
        if (!bVar3) {
          ::FString::AppendChars(param_1,L",",1);
        }
        bVar3 = false;
        uVar6 = 0;
        if ((int)uVar10 < (this_00->InvocationList).ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar6 = 0;
        if ((int)uVar10 < (this_00->InvocationList).ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_88 = *(FName *)((this_00->InvocationList).AllocatorInstance.Data + lVar11 + 8);
        ::FName::ToString(&local_88,&local_60);
        uVar6 = 0;
        if ((int)uVar10 < (this_00->InvocationList).ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                     ((this_00->InvocationList).AllocatorInstance.Data + lVar11));
        if (pUVar8 != (UObject *)0x0) {
          uVar7 = 0;
          if ((int)uVar10 < (this_00->InvocationList).ArrayNum) {
            uVar7 = uVar12;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                       ((this_00->InvocationList).AllocatorInstance.Data + lVar11));
          uVar7 = 1;
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar8,&local_70,(UObject *)0x0);
        }
        ::FString::PrintfImpl(&local_80,L"%s.%s");
        iVar2 = local_80.Data.ArrayNum + -1;
        if (local_80.Data.ArrayNum == 0) {
          iVar2 = 0;
        }
        ::FString::AppendChars(param_1,(wchar_t *)local_80.Data.AllocatorInstance.Data,iVar2);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if ((uVar7 != 0) &&
           (uVar7 = 0, local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
          uVar10 = uVar10 + 1;
          goto LAB_142176801;
        }
      }
      uVar10 = uVar10 + 1;
    } while( true );
  }
LAB_142176ad7:
  ::FString::AppendChars(param_1,L")",1);
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0);
  return;
LAB_142176ac6:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  goto LAB_142176ad7;
}

// GetCPPType @ 14217ac90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
FMulticastDelegateProperty::GetCPPType
          (FMulticastDelegateProperty *this,FString *__return_storage_ptr__,FString *param_1,
          uint param_2)

{
  UFunction *pUVar1;
  longlong *plVar2;
  ForAnyElementType _Src;
  FString *pFVar3;
  UClass *pUVar4;
  FUObjectItem *pFVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pUVar1 = (this->SignatureFunction).field0_0x0.DebugPtr;
  if (pUVar1 == (UFunction *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"{multicast delegate type}");
    return __return_storage_ptr__;
  }
  local_res8 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_res8,&local_58);
  pFVar3 = ::FString::FString(&local_38,L"__DelegateSignature");
  iVar6 = (pFVar3->Data).ArrayNum;
  iVar9 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar9 = 0;
  }
  iVar6 = 0;
  if (local_58.Data.ArrayNum != 0) {
    iVar6 = local_58.Data.ArrayNum + -1;
  }
  if (iVar6 - iVar9 < iVar6) {
    iVar6 = iVar6 - iVar9;
  }
  iVar7 = 0;
  if (0 < iVar6) {
    iVar7 = iVar6;
  }
  ::FString::RemoveAt(&local_58,iVar7,iVar9,No);
  local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  local_68.Data.ArrayNum = local_58.Data.ArrayNum;
  local_68.Data.ArrayMax = local_58.Data.ArrayMax;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pUVar4 = UField::GetOwnerClass((UField *)(this->SignatureFunction).field0_0x0.DebugPtr);
  pFVar5 = FUObjectArray::IndexToObject
                     (&GUObjectArray,
                      *(int *)((longlong)&((this->SignatureFunction).field0_0x0.DebugPtr)->_padding_
                              + 4));
  if (((param_2 >> 7 & 1) == 0) ||
     (((ulonglong)((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) == 0)) {
    if (((param_2 & 0x80) != 0) &&
       ((pUVar4 != (UClass *)0x0 && ((pUVar4->ClassFlags >> 7 & 1) == 0)))) {
      pFVar3 = UnicodeToCPPIdentifier(&local_38,&local_68,false,L"");
      if (&local_68 != pFVar3) {
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        local_68.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.Data.ArrayNum = (pFVar3->Data).ArrayNum;
        local_68.Data.ArrayMax = (pFVar3->Data).ArrayMax;
        (pFVar3->Data).ArrayNum = 0;
        (pFVar3->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_res8 = (FName)pUVar4->_padding_;
      ::FName::ToString(&local_res8,&local_38);
      UnicodeToCPPIdentifier(&local_48,&local_38,false,L"");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_58,L"%s__%s");
      _Src.Data = local_58.Data.AllocatorInstance.Data;
      iVar6 = local_58.Data.ArrayNum;
      lVar8 = (longlong)local_58.Data.ArrayNum;
      local_68.Data.ArrayNum = local_58.Data.ArrayNum;
      if ((local_58.Data.ArrayNum == 0) && (local_68.Data.ArrayMax == 0)) {
        local_68.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_58.Data.ArrayNum,local_68.Data.ArrayMax,(ForAnyElementType *)&local_68,
                   local_58.Data.ArrayNum,&local_68.Data.ArrayMax);
        if (iVar6 != 0) {
          memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,lVar8 * 2);
        }
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if ((param_2 & 8) != 0) {
      ::FString::AppendChars(&local_68,L"__MulticastDelegate",0x13);
    }
  }
  else {
    plVar2 = (longlong *)((this->SignatureFunction).field0_0x0.DebugPtr)->_padding_;
    if (plVar2 != (longlong *)0x0) {
      pUVar4 = Z_Construct_UClass_UStruct_NoRegister();
      iVar6 = (int)pUVar4->_padding_;
      if ((iVar6 <= *(int *)(plVar2[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar6 * 8) ==
          &pUVar4->_padding_)) {
        local_res8 = *(FName *)(plVar2 + 3);
        ::FName::ToString(&local_res8,&local_58);
        (**(code **)(*plVar2 + 0x318))(plVar2);
        ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s::F%s");
        local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        goto LAB_14217affe;
      }
    }
  }
  pFVar3 = ::FString::FString(&local_38,L"F");
  ::FString::ConcatFF(__return_storage_ptr__,pFVar3,&local_68);
LAB_14217affe:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetFieldSize @ 14217bc80

ulong64 __thiscall FMulticastDelegateProperty::GetFieldSize(FMulticastDelegateProperty *this)

{
  return 0x78;
}

// GetMulticastDelegate @ 14217c5c0

TMulticastScriptDelegate<FNotThreadSafeDelegateMode> * __thiscall
FMulticastDelegateProperty::GetMulticastDelegate(FMulticastDelegateProperty *this,void *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
             ,0x1973,L"Pure virtual not implemented (%s)");
  return (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
}

// GetMulticastScriptDelegate @ 14217c670

TMulticastScriptDelegate<FNotThreadSafeDelegateMode> * __thiscall
FMulticastDelegateProperty::GetMulticastScriptDelegate
          (FMulticastDelegateProperty *this,void *param_1,int param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
             ,0x197e,L"Pure virtual not implemented (%s)");
  return &EmptyDelegate;
}

// Identical @ 14217e750

bool __thiscall
FMulticastDelegateProperty::Identical
          (FMulticastDelegateProperty *this,void *param_1,void *param_2,uint param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_01;
  UObject *pUVar6;
  UObject *pUVar7;
  FWeakObjectPtr *this_02;
  longlong lVar8;
  uint uVar9;
  undefined4 in_register_0000008c;
  longlong lVar10;
  FWeakObjectPtr *this_03;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if ((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) {
    return param_1 == param_2;
  }
  this_00 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
            (**(code **)(this->_padding_ + 0x1f8))
                      (this,param_1,0,CONCAT44(in_register_0000008c,param_3));
  this_01 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
            (**(code **)(this->_padding_ + 0x1f8))(this,param_2,0);
  if (this_00 == this_01) {
    bVar3 = true;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_01,&local_58);
    iVar1 = *(int *)&this_00[2].AccessDetector.State;
    if (iVar1 == *(int *)&this_01[2].AccessDetector.State) {
      uVar9 = 0;
      if ((longlong)iVar1 != 0) {
        lVar8 = 0;
        lVar10 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar9 < *(int *)&this_00[2].AccessDetector.State) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if (uVar5 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          this_02 = (FWeakObjectPtr *)((longlong)this_00[1].AccessDetector.State + lVar10);
          uVar5 = 0;
          if ((int)uVar9 < *(int *)&this_01[2].AccessDetector.State) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if (uVar5 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          this_03 = (FWeakObjectPtr *)((longlong)this_01[1].AccessDetector.State + lVar10);
          pUVar6 = FWeakObjectPtr::Get(this_02);
          pUVar7 = FWeakObjectPtr::Get(this_03);
          if (pUVar6 != pUVar7) goto LAB_14217e90e;
          if (this_02[1] != this_03[1]) goto LAB_14217e90e;
          uVar9 = uVar9 + 1;
          lVar8 = lVar8 + 1;
          lVar10 = lVar10 + 0x10;
        } while (lVar8 != iVar1);
      }
      bVar3 = true;
    }
    else {
LAB_14217e90e:
      bVar3 = false;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
  }
  return bVar3;
}

// ImportDelegateFromText @ 14217f810

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

wchar_t * __thiscall
FMulticastDelegateProperty::ImportDelegateFromText
          (FMulticastDelegateProperty *this,
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,wchar_t *param_2,
          UObject *param_3,FOutputDevice *param_4)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  <lambda_1> local_res18 [8];
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_68;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_58;
  FDestructionSentinel local_40;
  
  if (*param_2 == L'(') {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Clear(param_1);
    iVar1 = iswspace(param_2[1]);
    while (pwVar3 = param_2 + 1, iVar1 != 0) {
      iVar1 = iswspace(param_2[2]);
      param_2 = pwVar3;
    }
    if (*pwVar3 == L')') {
      return pwVar3;
    }
    do {
      local_58._padding_ = 0;
      local_58.Object.ObjectIndex = 0;
      local_58.Object.ObjectSerialNumber = 0;
      local_58.FunctionName.ComparisonIndex.Value = 0;
      local_58.FunctionName.Number = 0;
      pwVar2 = DelegatePropertyTools::ImportDelegateFromText
                         (&local_58,(this->SignatureFunction).field0_0x0.DebugPtr,pwVar3,param_3,
                          param_4);
      if (pwVar2 == (wchar_t *)0x0) {
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)&local_58);
        return (wchar_t *)0x0;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_58,
                 (FReadAccessScope *)&local_40);
      local_68.Object = local_58.Object;
      local_68.FunctionName = local_58.FunctionName;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_40);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
                 (FWriteAccessScope *)&local_40);
      TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
                (&param_1->InvocationList,&local_68);
      TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
      RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
                (&param_1->InvocationList,local_res18,Default);
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      iVar1 = iswspace(*pwVar2);
      while (iVar1 != 0) {
        pwVar3 = pwVar2 + 1;
        pwVar2 = pwVar2 + 1;
        iVar1 = iswspace(*pwVar3);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&local_58);
      pwVar3 = pwVar2 + 1;
    } while (*pwVar2 == L',');
    if (*pwVar2 == L')') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
                 (FReadAccessScope *)&local_40);
      iVar1 = (param_1->InvocationList).ArrayNum;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_40);
      if (iVar1 < 1) {
        return (wchar_t *)0x0;
      }
      return pwVar3;
    }
  }
  return (wchar_t *)0x0;
}

// ImportText_Add @ 14217f9c0

wchar_t * __thiscall
FMulticastDelegateProperty::ImportText_Add
          (FMulticastDelegateProperty *this,wchar_t *param_1,void *param_2,int param_3,
          UObject *param_4,FOutputDevice *param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_58;
  undefined8 local_40;
  FWeakObjectPtr local_38;
  FName local_30;
  FReadAccessScope local_28;
  
  bVar2 = FProperty::ValidateImportFlags((FProperty *)this,param_3,param_5);
  if (bVar2) {
    pwVar4 = (wchar_t *)0x0;
    local_58._padding_ = 0;
    local_58.Object.ObjectIndex = 0;
    local_58.Object.ObjectSerialNumber = 0;
    local_58.FunctionName.ComparisonIndex.Value = 0;
    local_58.FunctionName.Number = 0;
    pwVar5 = DelegatePropertyTools::ImportDelegateFromText
                       (&local_58,(this->SignatureFunction).field0_0x0.DebugPtr,param_1,param_4,
                        param_5);
    if (pwVar5 != (wchar_t *)0x0) {
      local_40 = 0;
      pcVar1 = *(code **)(this->_padding_ + 0x1e0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_58,&local_28);
      local_38 = local_58.Object;
      local_30 = local_58.FunctionName;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      (*pcVar1)(this,&local_40,param_4,param_2);
      iVar3 = iswspace(*pwVar5);
      pwVar4 = pwVar5;
      while (iVar3 != 0) {
        pwVar5 = pwVar4 + 1;
        pwVar4 = pwVar4 + 1;
        iVar3 = iswspace(*pwVar5);
      }
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&local_58);
  }
  else {
    pwVar4 = (wchar_t *)0x0;
  }
  return pwVar4;
}

// ImportText_Remove @ 142182560

wchar_t * __thiscall
FMulticastDelegateProperty::ImportText_Remove
          (FMulticastDelegateProperty *this,wchar_t *param_1,void *param_2,int param_3,
          UObject *param_4,FOutputDevice *param_5)

{
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_28;
  
  bVar1 = FProperty::ValidateImportFlags((FProperty *)this,param_3,param_5);
  if (bVar1) {
    pwVar3 = (wchar_t *)0x0;
    local_28._padding_ = 0;
    local_28.Object.ObjectIndex = 0;
    local_28.Object.ObjectSerialNumber = 0;
    local_28.FunctionName.ComparisonIndex.Value = 0;
    local_28.FunctionName.Number = 0;
    pwVar4 = DelegatePropertyTools::ImportDelegateFromText
                       (&local_28,(this->SignatureFunction).field0_0x0.DebugPtr,param_1,param_4,
                        param_5);
    if (pwVar4 != (wchar_t *)0x0) {
      (**(code **)(this->_padding_ + 0x1e8))(this,&local_28,param_4,param_2);
      iVar2 = iswspace(*pwVar4);
      pwVar3 = pwVar4;
      while (iVar2 != 0) {
        pwVar4 = pwVar3 + 1;
        pwVar3 = pwVar3 + 1;
        iVar2 = iswspace(*pwVar4);
      }
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&local_28);
  }
  else {
    pwVar3 = (wchar_t *)0x0;
  }
  return pwVar3;
}

// InstanceSubobjects @ 142183260

void __thiscall
FMulticastDelegateProperty::InstanceSubobjects
          (FMulticastDelegateProperty *this,void *param_1,void *param_2,TNotNull<UObject_*> param_3,
          FObjectInstancingGraph *param_4)

{
  FWeakObjectPtr FVar1;
  code *pcVar2;
  FMRSWRecursiveAccessDetector *pFVar3;
  bool bVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTVar5;
  UObject *pUVar6;
  TNotNull<UObject_*> TVar7;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar8;
  TArray<FMRSWRecursiveAccessDetector::FDestructionSentinel_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar9;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar10;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  FWeakObjectPtr *pFVar16;
  int local_bc;
  FDestructionSentinel *local_b8;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_b0;
  FDestructionSentinel local_a8;
  TNotNull<UObject_*> local_90;
  UObject *local_88;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_80;
  UObject *local_78;
  UObject *local_70;
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  
  if ((param_1 == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMulticastDelegate.cpp"
                         ,0x2f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar14 = (int)this->_padding_;
  if (param_2 == (void *)0x0) {
    iVar15 = 0;
    if (0 < iVar14) {
      do {
        pTVar5 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 (**(code **)(this->_padding_ + 0x1f8))(this,param_1,iVar15);
        if (pTVar5 != &EmptyDelegate) {
          local_a8.AccessType = Writer;
          local_a8.bDestroyed = false;
          local_a8.Accessor = (FMRSWRecursiveAccessDetector *)pTVar5;
          FVar10 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)
                   FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
          local_b8 = &local_a8;
          FVar8 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
                   ((longlong)FVar10 + 0x20);
          FVar11 = FVar10;
          if (FVar8 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
            FVar11 = FVar8;
          }
          if ((ulonglong)FVar11 <= &local_b8) {
            FVar11 = FVar10;
            if (FVar8 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0)
            {
              FVar11 = FVar8;
            }
            if ((&local_b8 <
                 (FDestructionSentinel **)
                 ((longlong)FVar11 + (longlong)*(int *)((longlong)FVar10 + 0x2c) * 8)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          iVar14 = *(int *)((longlong)FVar10 + 0x28);
          if (iVar14 == *(int *)((longlong)FVar10 + 0x2c)) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
                               (0x808,(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>
                                       *)FVar10,(int *)((longlong)FVar10 + 0x2c));
          }
          *(int *)((longlong)FVar10 + 0x28) = iVar14 + 1;
          if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
               ((longlong)FVar10 + 0x20) !=
              (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
            FVar10 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
                      ((longlong)FVar10 + 0x20);
          }
          *(FDestructionSentinel **)((longlong)FVar10 + (longlong)iVar14 * 8) = local_b8;
          FMRSWRecursiveAccessDetector::AcquireWriteAccess((FMRSWRecursiveAccessDetector *)pTVar5);
          for (iVar14 = 0; (-1 < iVar14 && (iVar14 < (pTVar5->InvocationList).ArrayNum));
              iVar14 = iVar14 + 1) {
            if ((iVar14 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar16 = (FWeakObjectPtr *)
                      ((pTVar5->InvocationList).AllocatorInstance.Data + (longlong)iVar14 * 0x10);
            TVar7.Val = FWeakObjectPtr::Get(pFVar16);
            if (TVar7.Val != (UObject *)0x0) {
              local_70 = FObjectInstancingGraph::InstancePropertyValue
                                   (param_4,(UObject *)0x0,TVar7,param_3,
                                    DoNotCreateNewInstance|AllowSelfReference);
              FVar1 = pFVar16[1];
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_70 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(local_70);
              }
              FWeakObjectPtr::operator=(pFVar16,(FObjectPtr)&local_70);
              pFVar16[1] = FVar1;
            }
          }
          if (local_a8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)this->_padding_);
    }
  }
  else {
    local_bc = 0;
    if (0 < iVar14) {
LAB_142183300:
      this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                (**(code **)(this->_padding_ + 0x1f8))(this,param_1,local_bc);
      local_80 = this_00;
      pTVar5 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               (**(code **)(this->_padding_ + 0x1f8))(this,param_2,local_bc);
      local_b0 = pTVar5;
      if ((this_00 != &EmptyDelegate) && (pTVar5 != &EmptyDelegate)) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_68);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar5,&local_50);
        for (uVar12 = 0; -1 < (int)uVar12; uVar12 = uVar12 + 1) {
          if (((this_00->InvocationList).ArrayNum <= (int)uVar12) ||
             ((pTVar5->InvocationList).ArrayNum <= (int)uVar12)) goto LAB_1421834b0;
          if (((int)uVar12 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar16 = (FWeakObjectPtr *)
                    ((this_00->InvocationList).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10
                    );
          local_90.Val = FWeakObjectPtr::Get(pFVar16);
          if (local_90.Val != (UObject *)0x0) {
            uVar13 = 0;
            if ((int)uVar12 < (local_b0->InvocationList).ArrayNum) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                         ((local_b0->InvocationList).AllocatorInstance.Data +
                                         (longlong)(int)uVar12 * 0x10));
            local_88 = FObjectInstancingGraph::InstancePropertyValue
                                 (param_4,pUVar6,local_90,param_3,
                                  DoNotCreateNewInstance|AllowSelfReference);
            FVar1 = pFVar16[1];
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_88);
            }
            FWeakObjectPtr::operator=(pFVar16,(FObjectPtr)&local_88);
            pFVar16[1] = FVar1;
          }
          pTVar5 = local_b0;
          this_00 = local_80;
        }
        goto LAB_142183577;
      }
      goto LAB_142183676;
    }
  }
  return;
LAB_1421834b0:
  for (; (-1 < (int)uVar12 && ((int)uVar12 < (this_00->InvocationList).ArrayNum));
      uVar12 = uVar12 + 1) {
    if (((int)uVar12 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar16 = (FWeakObjectPtr *)
              ((this_00->InvocationList).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10);
    TVar7.Val = FWeakObjectPtr::Get(pFVar16);
    if (TVar7.Val != (UObject *)0x0) {
      local_78 = FObjectInstancingGraph::InstancePropertyValue
                           (param_4,(UObject *)0x0,TVar7,param_3,
                            DoNotCreateNewInstance|AllowSelfReference);
      FVar1 = pFVar16[1];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_78);
      }
      FWeakObjectPtr::operator=(pFVar16,(FObjectPtr)&local_78);
      pFVar16[1] = FVar1;
    }
  }
LAB_142183577:
  pFVar3 = local_50.DestructionSentinel.Accessor;
  if (local_50.DestructionSentinel.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::RemoveReaderFromTls(local_50.DestructionSentinel.Accessor);
    LOCK();
    *pFVar3 = (FMRSWRecursiveAccessDetector)((longlong)pFVar3->State + -1);
    UNLOCK();
    FVar8 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)
            FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
    pTVar9 = FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
    uVar13 = pTVar9->ArrayNum - 1;
    uVar12 = 0;
    if ((int)uVar13 < *(int *)((longlong)FVar8 + 0x28)) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar11 = FVar8;
    if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
         ((longlong)FVar8 + 0x20) !=
        (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
      FVar11 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
                ((longlong)FVar8 + 0x20);
    }
    iVar14 = ~uVar13 + *(int *)((longlong)FVar8 + 0x28);
    if (1 < iVar14) {
      iVar14 = 1;
    }
    if (iVar14 != 0) {
      memmove((void *)((longlong)FVar11 + (longlong)(int)uVar13 * 8),
              (void *)((longlong)FVar11 + (longlong)(*(int *)((longlong)FVar8 + 0x28) - iVar14) * 8)
              ,(longlong)iVar14 << 3);
    }
    iVar14 = *(int *)((longlong)FVar8 + 0x28) + -1;
    *(int *)((longlong)FVar8 + 0x28) = iVar14;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
              (8,8,(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)FVar8,
               iVar14,(int *)((longlong)FVar8 + 0x2c));
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
LAB_142183676:
  local_bc = local_bc + 1;
  if ((int)this->_padding_ <= local_bc) {
    return;
  }
  goto LAB_142183300;
}

// NetSerializeItem @ 142186d00

bool __thiscall
FMulticastDelegateProperty::NetSerializeItem
          (FMulticastDelegateProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  return true;
}

// PostDuplicate @ 1421872f0

void __thiscall
FMulticastDelegateProperty::PostDuplicate(FMulticastDelegateProperty *this,FField *param_1)

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

// RemoveDelegate @ 142188ef0

void __thiscall
FMulticastDelegateProperty::RemoveDelegate
          (FMulticastDelegateProperty *this,TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UObject *param_2,void *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
             ,0x1977,L"Pure virtual not implemented (%s)");
  return;
}

// SameType @ 142189970

bool __thiscall
FMulticastDelegateProperty::SameType(FMulticastDelegateProperty *this,FProperty *param_1)

{
  bool bVar1;
  
  bVar1 = FProperty::SameType((FProperty *)this,param_1);
  if ((bVar1) &&
     ((this->SignatureFunction).field0_0x0.DebugPtr == (UFunction *)param_1[1]._padding_)) {
    return true;
  }
  return false;
}

// Serialize @ 14218a5c0

void __thiscall
FMulticastDelegateProperty::Serialize(FMulticastDelegateProperty *this,FArchive *param_1)

{
  UFunction *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FFieldVariant local_res8;
  FMulticastDelegateProperty *local_res10;
  
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

// SetMulticastDelegate @ 142191c40

void __thiscall
FMulticastDelegateProperty::SetMulticastDelegate
          (FMulticastDelegateProperty *this,void *param_1,
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_2)

{
  FScriptContainerElement *pFVar1;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
             ,0x1974,L"Pure virtual not implemented (%s)");
  pFVar1 = (param_2->InvocationList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// StaticClass @ 142193890

FFieldClass * __cdecl FMulticastDelegateProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FMulticastDelegateProperty",0x2000000,
                 CASTCLASS_FMulticastDelegateProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,
                 Construct);
      atexit(`FMulticastDelegateProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

