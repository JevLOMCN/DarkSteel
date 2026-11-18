// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 23

// EmitReferenceInfo @ 14203ddc0

void __thiscall
FInterfaceProperty::EmitReferenceInfo
          (FInterfaceProperty *this,FSchemaBuilder *param_1,int param_2,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FPropertyStack *param_4)

{
  uint uVar1;
  int iVar2;
  FName FVar3;
  FString *pFVar4;
  FName *pFVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  FName local_res8;
  FString local_68;
  FName local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  FMemberDeclaration local_38;
  
  uVar1 = (uint)this->_padding_;
  uVar8 = *(int *)((longlong)&this->_padding_ + 4) + param_2;
  if (0 < (int)uVar1) {
    uVar7 = (ulonglong)uVar1;
    do {
      pFVar4 = UE::GC::FPropertyStack::GetPropertyPath(param_4,&local_68);
      iVar2 = (pFVar4->Data).ArrayNum;
      iVar6 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar6 = 0;
      }
      pFVar5 = ::FName::FName(&local_res8,iVar6,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,
                              FNAME_Add);
      FVar3 = *pFVar5;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      uStack_4c = CONCAT31(uStack_4c._1_3_,2);
      local_38._12_4_ = uStack_4c;
      local_38.Offset = uVar8;
      local_48 = 0;
      local_38.ExtraWord.ObjectARO = (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0;
      local_58 = FVar3;
      uStack_50 = uVar8;
      local_38.DebugName = FVar3;
      UE::GC::FSchemaBuilder::Add(param_1,&local_38);
      uVar8 = uVar8 + 0x10;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// FInterfaceProperty @ 142161140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FInterfaceProperty * __thiscall
FInterfaceProperty::FInterfaceProperty
          (FInterfaceProperty *this,FFieldVariant param_1,FInterfacePropertyParams *param_2)

{
  ulonglong uVar1;
  UClass *pUVar2;
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
             CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData|CPF_ZeroConstructor);
  this->_padding_ = (longlong)&___7__TProperty_VFScriptInterface__VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x10);
  pUVar2 = (UClass *)0x0;
  this->_padding_ = (longlong)&___7FInterfaceProperty__6B_;
  this->_padding_ = this->_padding_ & 0xffffff7ffff7fff7;
  (this->InterfaceClass).field0_0x0.DebugPtr = (UClass *)0x0;
  if (param_2->InterfaceClassFunc != (_func___cdecl_UClass_ptr *)0x0) {
    pUVar2 = (*param_2->InterfaceClassFunc)();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->InterfaceClass).field0_0x0.DebugPtr = pUVar2;
  return this;
}

// FInterfaceProperty @ 142161230

FInterfaceProperty * __thiscall
FInterfaceProperty::FInterfaceProperty
          (FInterfaceProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

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
  this->_padding_ = (longlong)&___7__TProperty_VFScriptInterface__VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x10);
  this->_padding_ = (longlong)&___7FInterfaceProperty__6B_;
  (this->InterfaceClass).field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// AddReferencedObjects @ 142166b30

void __thiscall
FInterfaceProperty::AddReferencedObjects(FInterfaceProperty *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->InterfaceClass,0,0);
  FField::AddReferencedObjects((FField *)this,param_1);
  return;
}

// BeginDestroy @ 142167fc0

void __thiscall FInterfaceProperty::BeginDestroy(FInterfaceProperty *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FFieldObjectUnion local_res8;
  
  if ((this->InterfaceClass).field0_0x0.DebugPtr != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->InterfaceClass,pUVar3);
    if ((bVar2) && (pUVar3 = (this->InterfaceClass).field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
      local_res8 = (FFieldObjectUnion)this;
      if (((ulonglong)this & 1) != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsUObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x180,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::Remove
                ((TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator> *)
                 &pUVar3[1].bCooked,(FFieldVariant *)&local_res8);
    }
  }
  FField::BeginDestroy((FField *)this);
  return;
}

// Construct @ 14216b460

FField * __cdecl
FInterfaceProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

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
                  (&::StaticFieldClass,L"FInterfaceProperty",0x1000,
                   CASTCLASS_FProperty|CASTCLASS_FInterfaceProperty|CASTCLASS_UField,pFVar2,
                   Construct);
        atexit(`FInterfaceProperty::StaticClass'::__l2::
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
    this->_padding_ = (longlong)&___7FInterfaceProperty__6B_;
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
    this->_padding_ = (longlong)&___7__TProperty_VFScriptInterface__VFProperty____6B_;
    FProperty::SetElementSize(this,0x10);
    this->_padding_ = (longlong)&___7FInterfaceProperty__6B_;
    this[1]._padding_ = 0;
    return (FField *)this;
  }
  return (FField *)0x0;
}

// ContainsObjectReference @ 14216d260

bool __thiscall
FInterfaceProperty::ContainsObjectReference
          (FInterfaceProperty *this,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,
          EPropertyObjectReferenceType param_2)

{
  return (bool)((byte)param_2 & 1);
}

// ExportText_Internal @ 142175fd0

void __thiscall
FInterfaceProperty::ExportText_Internal
          (FInterfaceProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  char cVar1;
  bool bVar2;
  FName this_00;
  int iVar3;
  FName local_48;
  undefined8 uStack_40;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (param_3 == Container) {
    cVar1 = (**(code **)(this->_padding_ + 0x78))();
    if (cVar1 == '\0') {
      param_2 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
      goto LAB_14217602a;
    }
    local_48.ComparisonIndex.Value = 0;
    local_48.Number = 0;
    uStack_40 = 0;
    FProperty::GetValue_InContainer((FProperty *)this,param_2,&local_48);
    this_00 = local_48;
  }
  else {
LAB_14217602a:
    this_00 = *(FName *)param_2;
  }
  if (this_00 == (FName)0x0) {
    ::FString::AppendChars(param_1,L"None",4);
    return;
  }
  if ((param_6 & 4U) != 0) {
    if ((param_7 == (UObject *)0x0) && (param_5 != (UObject *)0x0)) {
      param_7 = (UObject *)UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_5);
    }
    bVar2 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)this_00,param_7);
    if (bVar2) goto LAB_14217609c;
  }
  param_7 = (UObject *)(UPackage *)0x0;
  if (((param_6 & 0x2000U) != 0) && (param_5 != (UObject *)0x0)) {
    param_7 = (UObject *)UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_5);
  }
LAB_14217609c:
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,param_7);
  local_48 = *(FName *)(*(longlong *)((longlong)this_00 + 0x10) + 0x18);
  ::FName::ToString(&local_48,&local_28);
  ::FString::PrintfImpl(&local_38,L"%s\'%s\'");
  iVar3 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetCPPMacroType @ 142179440

FString * __thiscall
FInterfaceProperty::GetCPPMacroType
          (FInterfaceProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  UClass *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  for (pUVar1 = (this->InterfaceClass).field0_0x0.DebugPtr; pUVar1 != (UClass *)0x0;
      pUVar1 = (UClass *)pUVar1->_padding_) {
    if ((pUVar1->ClassFlags & CLASS_Native) != CLASS_None) goto LAB_1421794a4;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("ExportClass",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyInterface.cpp"
                     ,0x4d,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
LAB_1421794a4:
  if (((pUVar1->ClassFlags & CLASS_Interface) == CLASS_None) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExportClass->HasAnyClassFlags(CLASS_Interface)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyInterface.cpp"
                         ,0x4e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  local_res8 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_res8,&local_18);
  ::FString::PrintfImpl(&local_28,L"I%s");
  if (param_1 != &local_28) {
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_28.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(__return_storage_ptr__,L"TINTERFACE");
  return __return_storage_ptr__;
}

// GetCPPType @ 14217a8c0

FString * __thiscall
FInterfaceProperty::GetCPPType
          (FInterfaceProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  UClass *pUVar5;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  if (param_1 == (FString *)0x0) goto LAB_14217aa07;
  pUVar5 = (this->InterfaceClass).field0_0x0.DebugPtr;
  if ((param_2 & 0x80) == 0) {
    for (; pUVar5 != (UClass *)0x0; pUVar5 = (UClass *)pUVar5->_padding_) {
      if ((pUVar5->ClassFlags & CLASS_Native) != CLASS_None) goto LAB_14217a93b;
    }
LAB_14217a919:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExportClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyInterface.cpp"
                       ,0x68,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  else if (pUVar5 == (UClass *)0x0) goto LAB_14217a919;
LAB_14217a93b:
  if ((((pUVar5->ClassFlags & CLASS_Interface) == CLASS_None) && ((param_2 & 0x80) == 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExportClass->HasAnyClassFlags(CLASS_Interface) || 0 != (CPPF_BlueprintCppBackend & CPPExportFlags)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyInterface.cpp"
                         ,0x69,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  local_res10 = (FName)pUVar5->_padding_;
  ::FName::ToString(&local_res10,&local_28);
  ::FString::PrintfImpl(&local_38,L"<I%s>");
  if (param_1 != &local_38) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_38.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_14217aa07:
  ::FString::FString(__return_storage_ptr__,L"TScriptInterface");
  return __return_storage_ptr__;
}

// GetFieldSize @ 14217bc50

ulong64 __thiscall FInterfaceProperty::GetFieldSize(FInterfaceProperty *this)

{
  return 0x78;
}

// Identical @ 14217e410

bool __thiscall
FInterfaceProperty::Identical(FInterfaceProperty *this,void *param_1,void *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == (void *)0x0) {
    return *(longlong *)param_1 == 0;
  }
  if (*(longlong *)param_1 == *(longlong *)param_2) {
    lVar1 = 0;
    lVar2 = lVar1;
    if (*(longlong *)param_1 != 0) {
      lVar2 = *(longlong *)((longlong)param_1 + 8);
    }
    if (*(longlong *)param_2 != 0) {
      lVar1 = *(longlong *)((longlong)param_2 + 8);
    }
    if (lVar2 == lVar1) {
      return true;
    }
  }
  return false;
}

// ImportText_Internal @ 1421805f0

wchar_t * __thiscall
FInterfaceProperty::ImportText_Internal
          (FInterfaceProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  TObjectPtr<UObject>_u_0 *pTVar1;
  TObjectPtr<UObject>_u_0 TVar2;
  bool bVar3;
  char cVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  TObjectPtr<UObject>_u_0 *pTVar7;
  TObjectPtr<UObject>_u_0 TVar8;
  TObjectPtr<UObject>_u_0 local_res8;
  wchar_t *local_res10;
  FName local_res18;
  TObjectPtr<UObject>_u_0 local_58;
  TObjectPtr<UObject>_u_0 local_50;
  FString local_48;
  
  pTVar7 = param_2;
  if (param_3 == Container) {
    pTVar7 = (TObjectPtr<UObject>_u_0 *)
             ((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
  }
  local_res8.DebugPtr = pTVar7->DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8.DebugPtr);
  }
  local_res10 = param_1;
  pUVar5 = Z_Construct_UClass_UObject_NoRegister();
  TVar8.DebugPtr = (UObject *)0x0;
  bVar3 = FObjectPropertyBase::ParseObjectPropertyValue
                    ((FProperty *)this,param_4,pUVar5,param_5,&local_res10,
                     (TObjectPtr<UObject> *)&local_res8.ObjectPtr,(FUObjectSerializeContext *)0x0,
                     true);
  TVar2 = local_res8;
  if (!bVar3) {
    pTVar1 = pTVar7 + 1;
    if (pTVar7->DebugPtr != (UObject *)0x0) {
      TVar8.DebugPtr = *(UObject **)pTVar1;
    }
    if ((param_3 == Container) &&
       (cVar4 = (**(code **)(this->_padding_ + 0x70))(this), cVar4 != '\0')) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar2.DebugPtr);
      }
      local_58.DebugPtr = TVar2.DebugPtr;
      local_50 = TVar8;
      FProperty::SetValue_InContainer((FProperty *)this,param_2,&local_58);
      return (wchar_t *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (TVar2.DebugPtr == (UObject *)0x0))
    {
      pTVar7->DebugPtr = (UObject *)TVar2;
      if (TVar2.DebugPtr == (UObject *)0x0) {
        pTVar1->DebugPtr = (UObject *)0x0;
        return (wchar_t *)0x0;
      }
    }
    else {
      UE::GC::MarkAsReachable(TVar2.DebugPtr);
      pTVar7->DebugPtr = (UObject *)TVar2;
    }
    *pTVar1 = TVar8;
    return (wchar_t *)0x0;
  }
  if (local_res8.DebugPtr == (UObject *)0x0) {
    if ((param_3 == Container) &&
       (cVar4 = (**(code **)(this->_padding_ + 0x70))(this), cVar4 != '\0')) {
      local_58.DebugPtr = (UObject *)0x0;
      local_50 = (TObjectPtr<UObject>_u_0)0x0;
      FProperty::SetValue_InContainer((FProperty *)this,param_2,&local_58);
      return local_res10;
    }
    pTVar7->DebugPtr = (UObject *)0x0;
    pTVar7[1].DebugPtr = (UObject *)0x0;
    return local_res10;
  }
  pUVar6 = UObjectBaseUtility::GetInterfaceAddress
                     (local_res8.DebugPtr,(this->InterfaceClass).field0_0x0.DebugPtr);
  TVar8 = local_res8;
  if (pUVar6 == (UObject *)0x0) {
    bVar3 = UClass::ImplementsInterface
                      (*(UClass **)&(local_res8.DebugPtr)->field_0x10,
                       (this->InterfaceClass).field0_0x0.DebugPtr);
    TVar8 = local_res8;
    if (!bVar3) {
      local_res18 = (FName)((this->InterfaceClass).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_res18,(FString *)&local_58.ObjectPtr);
      FField::GetFullName((FField *)this,&local_48);
      FOutputDevice::LogfImpl
                (param_6,
                 L"%s: specified object doesn\'t implement the required interface class \'%s\': %s")
      ;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.DebugPtr != (UObject *)0x0) {
        FMemory::Free(local_58.DebugPtr);
      }
      return (wchar_t *)0x0;
    }
    if ((param_3 == Container) &&
       (cVar4 = (**(code **)(this->_padding_ + 0x70))(this), cVar4 != '\0')) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar8.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar8.DebugPtr);
      }
      local_58.DebugPtr = TVar8.DebugPtr;
      local_50 = (TObjectPtr<UObject>_u_0)0x0;
      FProperty::SetValue_InContainer((FProperty *)this,param_2,&local_58);
      return local_res10;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar8.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar8.DebugPtr);
    }
    pTVar7->DebugPtr = (UObject *)TVar8;
LAB_1421807e9:
    pTVar7[1].DebugPtr = (UObject *)0x0;
  }
  else {
    if ((param_3 == Container) &&
       (cVar4 = (**(code **)(this->_padding_ + 0x70))(this), cVar4 != '\0')) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar8.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar8.DebugPtr);
      }
      local_58.DebugPtr = TVar8.DebugPtr;
      local_50.DebugPtr = pUVar6;
      FProperty::SetValue_InContainer((FProperty *)this,param_2,&local_58);
      return local_res10;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (TVar8.DebugPtr == (UObject *)0x0))
    {
      pTVar7->DebugPtr = (UObject *)TVar8;
      if (TVar8.DebugPtr == (UObject *)0x0) goto LAB_1421807e9;
    }
    else {
      UE::GC::MarkAsReachable(TVar8.DebugPtr);
      pTVar7->DebugPtr = (UObject *)TVar8;
    }
    pTVar7[1].DebugPtr = pUVar6;
  }
  return local_res10;
}

// LinkInternal @ 142184f60

void __thiscall FInterfaceProperty::LinkInternal(FInterfaceProperty *this,FArchive *param_1)

{
  this->_padding_ = this->_padding_ & 0xffffff7ffff7fff7;
  FProperty::SetElementSize((FProperty *)this,0x10);
  this->_padding_ = this->_padding_ | 0x8001040000200;
  return;
}

// NetSerializeItem @ 142186c00

bool __thiscall
FInterfaceProperty::NetSerializeItem
          (FInterfaceProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  void *pvVar3;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEngineNetworkCustomVersion::Guid);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  if (uVar2 < 0x14) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_2->_padding_ + 0x2b8))
                      (param_2,param_1,(this->InterfaceClass).field0_0x0.DebugPtr,param_3,0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_3);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      if (*(UObjectBaseUtility **)param_3 == (UObjectBaseUtility *)0x0) {
        *(undefined8 *)((longlong)param_3 + 8) = 0;
      }
      else {
        pvVar3 = UObjectBaseUtility::GetInterfaceAddress
                           (*(UObjectBaseUtility **)param_3,
                            (this->InterfaceClass).field0_0x0.DebugPtr);
        *(void **)((longlong)param_3 + 8) = pvVar3;
      }
    }
  }
  return (bool)uVar1;
}

// PostDuplicate @ 142187110

void __thiscall FInterfaceProperty::PostDuplicate(FInterfaceProperty *this,FField *param_1)

{
  UObject *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = param_1[2].Owner.Container.Object, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->InterfaceClass).field0_0x0 = (TObjectPtr<UClass>_u_0)param_1[2].Owner.Container;
  FProperty::PostDuplicate((FProperty *)this,param_1);
  return;
}

// SameType @ 1421898b0

bool __thiscall FInterfaceProperty::SameType(FInterfaceProperty *this,FProperty *param_1)

{
  bool bVar1;
  
  bVar1 = FProperty::SameType((FProperty *)this,param_1);
  if ((bVar1) && ((this->InterfaceClass).field0_0x0.DebugPtr == (UClass *)param_1[1]._padding_)) {
    return true;
  }
  return false;
}

// Serialize @ 14218a3a0

void __thiscall FInterfaceProperty::Serialize(FInterfaceProperty *this,FArchive *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UStruct *this_00;
  UPackage *pUVar6;
  UPackage *pUVar7;
  FFieldVariant local_res8;
  FInterfaceProperty *local_res10;
  
  FProperty::Serialize((FProperty *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->InterfaceClass);
  if (((param_1->field_0x28 & 1) != 0) || ((param_1->field_0x2b & 1) != 0)) {
    if ((this->InterfaceClass).field0_0x0.DebugPtr == (UClass *)0x0) goto LAB_14218a450;
    pUVar5 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->InterfaceClass,pUVar5);
    if ((bVar4) && (pUVar5 = (this->InterfaceClass).field0_0x0.DebugPtr, pUVar5 != (UClass *)0x0)) {
      local_res10 = this;
      if ((((ulonglong)this & 1) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsUObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x180,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::
      Emplace<FFieldVariant_const_&>
                ((TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator> *)
                 &pUVar5[1].bCooked,&local_res8,(bool *)&local_res10);
    }
  }
  if ((this->InterfaceClass).field0_0x0.DebugPtr != (UClass *)0x0) {
    return;
  }
LAB_14218a450:
  this_00 = FField::GetOwnerStruct((FField *)this);
  if (this_00 != (UStruct *)0x0) {
    pUVar5 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) &&
        (uVar2 = *(uint *)((longlong)&this_00[1]._padding_ + 4), (uVar2 >> 7 & 1) != 0)) &&
       (-1 < (int)uVar2)) {
      pUVar6 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00);
      pUVar7 = GetTransientPackage();
      if ((pUVar6 != pUVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyInterface.cpp"
                             ,0x13a,
                             L"Interface property tried to serialize a missing interface.  Did you remove a native class and not fully recompile?"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// SerializeItem @ 14218b780

void __thiscall
FInterfaceProperty::SerializeItem
          (FInterfaceProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  void *pvVar3;
  FSlotBase local_res10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  pFVar1 = (local_res10.StructuredArchive)->Formatter->Inner;
  (**(code **)(*(longlong *)pFVar1 + 0x150))(pFVar1,param_2);
  if (((pFVar2->field_0x28 & 1) != 0) || ((pFVar2->field_0x2b & 1) != 0)) {
    if (*(UObjectBaseUtility **)param_2 != (UObjectBaseUtility *)0x0) {
      pvVar3 = UObjectBaseUtility::GetInterfaceAddress
                         (*(UObjectBaseUtility **)param_2,(this->InterfaceClass).field0_0x0.DebugPtr
                         );
      *(void **)((longlong)param_2 + 8) = pvVar3;
      return;
    }
    *(undefined8 *)((longlong)param_2 + 8) = 0;
  }
  return;
}

// SetInterfaceClass @ 142191880

void __thiscall FInterfaceProperty::SetInterfaceClass(FInterfaceProperty *this,UClass *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FFieldVariant local_res8;
  FInterfaceProperty *local_res10;
  FFieldObjectUnion local_res18 [2];
  
  if (param_1 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
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
                 &param_1[1].bCooked,&local_res8,(bool *)&local_res10);
    }
  }
  if ((this->InterfaceClass).field0_0x0.DebugPtr != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->InterfaceClass,pUVar4);
    if ((bVar3) && (pUVar4 = (this->InterfaceClass).field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)) {
      local_res18[0] = (FFieldObjectUnion)this;
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
                 &pUVar4[1].bCooked,(FFieldVariant *)local_res18);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->InterfaceClass).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticClass @ 142193670

FFieldClass * __cdecl FInterfaceProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FInterfaceProperty",0x1000,
                 CASTCLASS_FProperty|CASTCLASS_FInterfaceProperty|CASTCLASS_UField,pFVar1,Construct)
      ;
      atexit(`FInterfaceProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// SupportsNetSharedSerialization @ 1421943a0

bool __thiscall FInterfaceProperty::SupportsNetSharedSerialization(FInterfaceProperty *this)

{
  return false;
}

// operator_new @ 142259b90

void * __cdecl FInterfaceProperty::operator_new(ulong64 param_1)

{
  FField *this;
  FFieldClass *pFVar1;
  
  this = FMemory::Malloc(param_1,0);
  if (this != (FField *)0x0) {
    pFVar1 = StaticClass();
    FField::FField(this,EC_InternalUseOnlyConstructor,pFVar1);
    this->_padding_ = (longlong)&___7FInterfaceProperty__6B_;
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

