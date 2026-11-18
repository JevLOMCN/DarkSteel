// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 16

// GetFieldSize @ 141f81c10

ulong64 __thiscall FClassProperty::GetFieldSize(FClassProperty *this)

{
  return 0x80;
}

// FClassProperty @ 14215fec0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FClassProperty * __thiscall
FClassProperty::FClassProperty
          (FClassProperty *this,FFieldVariant param_1,FClassPropertyParams *param_2)

{
  ulonglong uVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((((uVar1 & 1) == 0) || ((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
     (!UE::GC::GIsIncrementalReachabilityPending)) {
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14215ff38;
      goto LAB_14215ff51;
    }
LAB_14215ff75:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_14215ff94;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14215ff38:
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14215ff51:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_14215ff75;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14215ff75;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_14215ff94:
  FObjectPropertyBase::FObjectPropertyBase
            ((FObjectPropertyBase *)this,(FFieldVariant)&local_res8,(FObjectPropertyParams *)param_2
             ,CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_ZeroConstructor);
  this->_padding_ = (longlong)&___7__TProperty_U__TObjectPtr_VUObject____VFObjectPropertyBase____6B_
  ;
  FProperty::SetElementSize((FProperty *)this,8);
  pUVar3 = (UClass *)0x0;
  this->_padding_ = (longlong)&___7__TFObjectPropertyBase_U__TObjectPtr_VUObject______6B_;
  pUVar2 = pUVar3;
  if (param_2->ClassFunc != (_func___cdecl_UClass_ptr *)0x0) {
    pUVar2 = (*param_2->ClassFunc)();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar2 == (UClass *)0x0)) {
    this->_padding_ = (longlong)pUVar2;
    this->_padding_ = (longlong)&___7FClassProperty__6B_;
    (this->MetaClass).field0_0x0.DebugPtr = (UClass *)0x0;
    if (pUVar2 == (UClass *)0x0) {
      pUVar2 = Z_Construct_UClass_UClass_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      this->_padding_ = (longlong)pUVar2;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
    this->_padding_ = (longlong)pUVar2;
    this->_padding_ = (longlong)&___7FClassProperty__6B_;
    (this->MetaClass).field0_0x0.DebugPtr = (UClass *)0x0;
  }
  if (param_2->MetaClassFunc != (_func___cdecl_UClass_ptr *)0x0) {
    pUVar3 = (*param_2->MetaClassFunc)();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->MetaClass).field0_0x0.DebugPtr = pUVar3;
  return this;
}

// FClassProperty @ 1421600a0

FClassProperty * __thiscall
FClassProperty::FClassProperty
          (FClassProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FObjectProperty::FObjectProperty
            ((FObjectProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  this->_padding_ = (longlong)&___7FClassProperty__6B_;
  (this->MetaClass).field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// AddReferencedObjects @ 142166a50

void __thiscall
FClassProperty::AddReferencedObjects(FClassProperty *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->MetaClass,0,0);
  FObjectPropertyBase::AddReferencedObjects((FObjectPropertyBase *)this,param_1);
  return;
}

// BeginDestroy @ 142167ea0

void __thiscall FClassProperty::BeginDestroy(FClassProperty *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FFieldObjectUnion local_res8;
  
  if ((this->MetaClass).field0_0x0.DebugPtr != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->MetaClass,pUVar3);
    if ((bVar2) && (pUVar3 = (this->MetaClass).field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
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
  FObjectPropertyBase::BeginDestroy((FObjectPropertyBase *)this);
  return;
}

// Construct @ 14216a3f0

FField * __cdecl
FClassProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  FObjectProperty *this;
  FFieldClass *pFVar1;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x80,0);
  if (this == (FObjectProperty *)0x0) {
    this = (FObjectProperty *)0x0;
  }
  else {
    pFVar1 = StaticClass();
    FField::FField((FField *)this,EC_InternalUseOnlyConstructor,pFVar1);
    *(undefined8 *)&this->field_0x48 = 0;
    *(undefined8 *)&this->field_0x50 = 0;
    *(undefined8 *)&this->field_0x58 = 0;
    *(undefined8 *)&this->field_0x60 = 0;
    *(undefined8 *)&this->field_0x68 = 0;
    *(undefined8 *)&this->field_0x70 = 0;
    *(undefined ***)this = &___7FClassProperty__6B_;
    *(undefined8 *)(this + 1) = 0;
    local_res20 = (param_1->Container).Unknown;
    if ((((local_res20 & 1) != 0) &&
        ((UObject *)(local_res20 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res20 & 0xfffffffffffffffe));
    }
    if ((((local_res20 & 1) != 0) &&
        ((UObject *)(local_res20 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res20 & 0xfffffffffffffffe));
    }
    FObjectProperty::FObjectProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
    *(undefined ***)this = &___7FClassProperty__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return (FField *)this;
}

// GetCPPMacroType @ 142179310

FString * __thiscall
FClassProperty::GetCPPMacroType
          (FClassProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t *pwVar2;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if ((this->_padding_ & 0x100000000000000U) == 0) {
    ::FString::operator=(param_1,L"UClass");
    pwVar2 = L"OBJECT";
  }
  else {
    local_res8 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(*(longlong *)this->_padding_ + 0x318))();
    ::FString::PrintfImpl(&local_28,L"TObjectPtr<%s%s>");
    if (param_1 != &local_28) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
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
    pwVar2 = L"OBJECTPTR";
  }
  ::FString::FString(__return_storage_ptr__,pwVar2);
  return __return_storage_ptr__;
}

// GetCPPType @ 14217a370

FString * __thiscall
FClassProperty::GetCPPType
          (FClassProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FName local_res8;
  FName local_48;
  FName local_40;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (((this->MetaClass).field0_0x0.DebugPtr == (UClass *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MetaClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyClass.cpp"
                         ,0xa0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  if (((ulonglong)this->_padding_ >> 0x38 & 1) == 0) {
    if (((ulonglong)this->_padding_ >> 0x32 & 1) != 0) {
      local_48 = (FName)((this->MetaClass).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_48,&local_28);
      (**(code **)(((this->MetaClass).field0_0x0.DebugPtr)->_padding_ + 0x318))();
      ::FString::PrintfImpl(__return_storage_ptr__,L"TSubclassOf<%s%s>");
      local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      goto LAB_14217a4ca;
    }
  }
  else if ((param_2 >> 8 & 1) == 0) {
    local_res8 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_res8,&local_38);
    (**(code **)(*(longlong *)this->_padding_ + 0x318))();
    ::FString::PrintfImpl(__return_storage_ptr__,L"TObjectPtr<%s%s>");
    goto LAB_14217a4ca;
  }
  local_40 = *(FName *)(this->_padding_ + 0x18);
  ::FName::ToString(&local_40,&local_18);
  (**(code **)(*(longlong *)this->_padding_ + 0x318))();
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s*");
  local_38.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
LAB_14217a4ca:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Identical @ 14217e140

bool __thiscall
FClassProperty::Identical(FClassProperty *this,void *param_1,void *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FObjectPtr_u_0 *pFVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 FVar6;
  undefined4 in_register_0000008c;
  FObjectPtr_u_0 local_res10;
  FObjectPtr_u_0 local_res18;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  FVar6.Handle = (UObject *)0x0;
  local_res18.Handle = FVar6.Handle;
  if (param_1 != (void *)0x0) {
    pFVar4 = (FObjectPtr_u_0 *)
             (**(code **)(this->_padding_ + 0x200))
                       (this,local_18,param_1,CONCAT44(in_register_0000008c,param_3));
    local_res18.Handle = pFVar4->Handle;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18.Handle != (UObject *)0x0)
     ) {
    UE::GC::MarkAsReachable(local_res18.Handle);
  }
  if (param_2 != (void *)0x0) {
    pFVar4 = (FObjectPtr_u_0 *)(**(code **)(this->_padding_ + 0x200))(this,local_10,param_2);
    FVar6 = (FObjectPtr_u_0)pFVar4->Handle;
  }
  local_res10 = FVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6.Handle != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(FVar6.Handle);
  }
  if (local_res18.Handle != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UClass_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar5);
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectA == nullptr || ObjectA.IsA<UClass>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyClass.cpp"
                           ,0xc9,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (local_res10.Handle != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UClass_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar5);
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectB == nullptr || ObjectB.IsA<UClass>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyClass.cpp"
                           ,0xca,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return local_res18.Handle == local_res10.Handle;
}

// ImportText_Internal @ 142180150

wchar_t * __thiscall
FClassProperty::ImportText_Internal
          (FClassProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  wchar_t *pwVar6;
  UClass *pUVar7;
  UObjectBaseUtility *this_00;
  FLinkerLoad *pFVar8;
  UClass *pUVar9;
  void *pvVar10;
  FObjectPtr_u_0 local_78;
  FObjectPtr_u_0 local_70;
  FClassProperty *local_68;
  undefined8 local_60;
  FString local_58;
  FScopedPlaceholderContainerTracker local_48;
  FString local_38;
  
  pwVar6 = FObjectPropertyBase::ImportText_Internal
                     ((FObjectPropertyBase *)this,param_1,param_2,param_3,param_4,param_5,param_6);
  if (pwVar6 == (wchar_t *)0x0) goto LAB_1421802b6;
  pvVar10 = param_2;
  if (param_3 == Container) {
    pvVar10 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
  }
  (**(code **)(this->_padding_ + 0x200))(this,&local_78,pvVar10);
  local_70.Handle = local_78.Handle;
  pcVar2 = *(code **)(this->_padding_ + 0x218);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78.Handle != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_78.Handle);
  }
  (*pcVar2)(this,pvVar10,&local_70,0);
  if (local_78.Handle != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_78,pUVar7);
    if (bVar4) {
      if (local_78.Handle != (UObject *)0x0) {
        local_48.bEnabled = GEventDrivenLoaderEnabled == false;
        if (GEventDrivenLoaderEnabled == false) {
          FScopedPlaceholderContainerTracker::Push(&local_48,param_4);
        }
        local_68 = this;
        if ((((ulonglong)this & 1) != 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsUObject()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x180,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pwVar6 = (wchar_t *)(*pcVar2)();
          return pwVar6;
        }
        FLinkerPlaceholderBase::AddReferencingPropertyValue
                  ((FLinkerPlaceholderBase *)(local_78.Handle + 0xd),(FFieldVariant)&local_68,
                   pvVar10);
        if (local_48.bEnabled != false) {
          FScopedPlaceholderContainerTracker::Pop(&local_48);
          goto LAB_1421802bf;
        }
      }
LAB_1421802b6:
      if (pwVar6 == (wchar_t *)0x0) {
        return (wchar_t *)0x0;
      }
    }
  }
LAB_1421802bf:
  pvVar10 = param_2;
  if (param_3 == Container) {
    pvVar10 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
  }
  this_00 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x1f8))(this,pvVar10);
  if (this_00 == (UObjectBaseUtility *)0x0) {
    return pwVar6;
  }
  pUVar7 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if (*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar1) {
    return pwVar6;
  }
  if ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_) {
    return pwVar6;
  }
  if (param_4 == (UObject *)0x0) {
    pFVar8 = FField::GetLinker((FField *)this);
  }
  else {
    pFVar8 = UObjectBaseUtility::GetLinker(*(UObjectBaseUtility **)&param_4->field_0x10);
  }
  pUVar7 = (this->MetaClass).field0_0x0.DebugPtr;
  if (pUVar7 == (UClass *)0x0) {
LAB_14218036c:
    if ((pFVar8 == (FLinkerLoad *)0x0) || ((pFVar8->LoadFlags & 0x100000) != 0)) {
      pUVar7 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
         (((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar7->_padding_ &&
          (bVar4 = FLinkerPlaceholderBase::IsMarkedResolved
                             ((FLinkerPlaceholderBase *)(this_00 + 0xd)), !bVar4))))
      goto LAB_1421803b1;
    }
    bVar4 = false;
  }
  else {
    pUVar9 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if (((*(int *)(pUVar7->_padding_ + 0x38) < iVar1) ||
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar9->_padding_)) ||
       (bVar4 = FLinkerPlaceholderBase::IsMarkedResolved((FLinkerPlaceholderBase *)(pUVar7 + 1)),
       bVar4)) goto LAB_14218036c;
LAB_1421803b1:
    bVar4 = true;
  }
  pUVar7 = (this->MetaClass).field0_0x0.DebugPtr;
  if (pUVar7 != (UClass *)0x0) {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)&this_00[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&this_00[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return pwVar6;
    }
  }
  if (!bVar4) {
    bVar4 = IsThisNotNull(this,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&this->_padding_,&local_58);
    }
    else {
      ::FString::FString(&local_58,L"None");
    }
    UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
    FOutputDevice::LogfImpl(param_6,L"Invalid object \'%s\' specified for property \'%s\'");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (param_3 == Container) {
      cVar5 = (**(code **)(this->_padding_ + 0x70))(this);
      if (cVar5 == '\0') {
        FObjectPropertyBase::SetObjectPropertyValue
                  ((FObjectPropertyBase *)this,
                   (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2),
                   (UObject *)0x0);
        pwVar6 = (wchar_t *)0x0;
      }
      else {
        local_60 = 0;
        FProperty::SetValue_InContainer((FProperty *)this,param_2,&local_60);
        pwVar6 = (wchar_t *)0x0;
      }
    }
    else {
      FObjectPropertyBase::SetObjectPropertyValue
                ((FObjectPropertyBase *)this,param_2,(UObject *)0x0);
      pwVar6 = (wchar_t *)0x0;
    }
  }
  return pwVar6;
}

// PostDuplicate @ 142187070

void __thiscall FClassProperty::PostDuplicate(FClassProperty *this,FField *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1[2].Next != (FField *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1[2].Next);
  }
  (this->MetaClass).field0_0x0 = (TObjectPtr<UClass>_u_0)param_1[2].Next;
  FObjectPropertyBase::PostDuplicate((FObjectPropertyBase *)this,param_1);
  return;
}

// SameType @ 142189810

bool __thiscall FClassProperty::SameType(FClassProperty *this,FProperty *param_1)

{
  bool bVar1;
  
  bVar1 = FObjectPropertyBase::SameType((FObjectPropertyBase *)this,param_1);
  if ((bVar1) && ((this->MetaClass).field0_0x0.DebugPtr == (UClass *)param_1[1]._padding_)) {
    return true;
  }
  return false;
}

// Serialize @ 14218a190

void __thiscall FClassProperty::Serialize(FClassProperty *this,FArchive *param_1)

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
  FClassProperty *local_res10;
  
  FObjectPropertyBase::Serialize((FObjectPropertyBase *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->MetaClass);
  if (((param_1->field_0x28 & 1) != 0) || ((param_1->field_0x2b & 1) != 0)) {
    if ((this->MetaClass).field0_0x0.DebugPtr == (UClass *)0x0) goto LAB_14218a240;
    pUVar5 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->MetaClass,pUVar5);
    if ((bVar4) && (pUVar5 = (this->MetaClass).field0_0x0.DebugPtr, pUVar5 != (UClass *)0x0)) {
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
  if ((this->MetaClass).field0_0x0.DebugPtr != (UClass *)0x0) {
    return;
  }
LAB_14218a240:
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
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyClass.cpp"
                             ,0x55,
                             L"Class property tried to serialize a missing class.  Did you remove a native class and not fully recompile?"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// SetMetaClass @ 1421919c0

void __thiscall FClassProperty::SetMetaClass(FClassProperty *this,UClass *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FFieldVariant local_res8;
  FClassProperty *local_res10;
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
  if ((this->MetaClass).field0_0x0.DebugPtr != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->MetaClass,pUVar4);
    if ((bVar3) && (pUVar4 = (this->MetaClass).field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)) {
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
  (this->MetaClass).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticClass @ 1421930e0

FFieldClass * __cdecl FClassProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FObjectProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FClassProperty",0x400,
                 CASTCLASS_FObjectPropertyBase|CASTCLASS_FObjectProperty|CASTCLASS_FProperty|
                 CASTCLASS_FClassProperty|CASTCLASS_UField,pFVar1,Construct);
      atexit(`FClassProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__
            );
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// operator_new @ 142259a70

void * __cdecl FClassProperty::operator_new(ulong64 param_1)

{
  FField *this;
  FFieldClass *pFVar1;
  
  this = FMemory::Malloc(param_1,0);
  if (this != (FField *)0x0) {
    pFVar1 = StaticClass();
    FField::FField(this,EC_InternalUseOnlyConstructor,pFVar1);
    this->_padding_ = (longlong)&___7FClassProperty__6B_;
    this[1].Next = (FField *)0x0;
    this[1].NamePrivate.ComparisonIndex = 0;
    this[1].NamePrivate.Number = 0;
    *(undefined8 *)&this[1].FlagsPrivate = 0;
    this[2]._padding_ = 0;
    this[2].ClassPrivate = (FFieldClass *)0x0;
    this[2].Owner.Container.Field = (FField *)0x0;
    this[2].Next = (FField *)0x0;
  }
  return this;
}

