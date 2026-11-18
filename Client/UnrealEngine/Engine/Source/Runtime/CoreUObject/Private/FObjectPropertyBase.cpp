// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 56

// GetFieldSize @ 141f81ca0

ulong64 __thiscall FObjectPropertyBase::GetFieldSize(FObjectPropertyBase *this)

{
  return 0x78;
}

// LoadObjectPropertyValue @ 141f921e0

UObject * __thiscall
FObjectPropertyBase::LoadObjectPropertyValue(FObjectPropertyBase *this,void *param_1)

{
  UObject *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141f921e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UObject *)(**(code **)(this->_padding_ + 0x1f8))();
  return pUVar1;
}

// SupportsNetSharedSerialization @ 141fade80

bool __thiscall FObjectPropertyBase::SupportsNetSharedSerialization(FObjectPropertyBase *this)

{
  return false;
}

// FObjectPropertyBase @ 14212b770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FObjectPropertyBase * __thiscall
FObjectPropertyBase::FObjectPropertyBase
          (FObjectPropertyBase *this,FFieldVariant param_1,FObjectPropertyParams *param_2,
          EPropertyFlags param_3)

{
  UClass *pUVar1;
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             param_3);
  pUVar1 = (UClass *)0x0;
  this->_padding_ = (longlong)&___7FObjectPropertyBase__6B_;
  (this->PropertyClass).field0_0x0.DebugPtr = (UClass *)0x0;
  if (param_2->ClassFunc != (_func___cdecl_UClass_ptr *)0x0) {
    pUVar1 = (*param_2->ClassFunc)();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->PropertyClass).field0_0x0.DebugPtr = pUVar1;
  return this;
}

// FObjectPropertyBase @ 14212b810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FObjectPropertyBase * __thiscall
FObjectPropertyBase::FObjectPropertyBase
          (FObjectPropertyBase *this,FFieldVariant param_1,
          FObjectPropertyParamsWithoutClass *param_2,EPropertyFlags param_3)

{
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             param_3);
  this->_padding_ = (longlong)&___7FObjectPropertyBase__6B_;
  (this->PropertyClass).field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// FObjectPropertyBase @ 14212b890

FObjectPropertyBase * __thiscall
FObjectPropertyBase::FObjectPropertyBase
          (FObjectPropertyBase *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  this->_padding_ = (longlong)&___7FObjectPropertyBase__6B_;
  (this->PropertyClass).field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// AddReferencedObjects @ 142130f70

void __thiscall
FObjectPropertyBase::AddReferencedObjects(FObjectPropertyBase *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->PropertyClass,0,0);
  FField::AddReferencedObjects((FField *)this,param_1);
  return;
}

// AllowCrossLevel @ 1421311d0

bool __thiscall FObjectPropertyBase::AllowCrossLevel(FObjectPropertyBase *this)

{
  return false;
}

// AllowObjectTypeReinterpretationTo @ 1421311e0

bool __thiscall
FObjectPropertyBase::AllowObjectTypeReinterpretationTo
          (FObjectPropertyBase *this,FObjectPropertyBase *param_1)

{
  return false;
}

// BeginDestroy @ 142131ba0

void __thiscall FObjectPropertyBase::BeginDestroy(FObjectPropertyBase *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FFieldObjectUnion local_res8;
  
  if ((this->PropertyClass).field0_0x0.DebugPtr != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->PropertyClass,pUVar3);
    if ((bVar2) && (pUVar3 = (this->PropertyClass).field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
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

// CheckValidObject @ 142133c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FObjectPropertyBase::CheckValidObject
          (FObjectPropertyBase *this,void *param_1,TObjectPtr<UObject> param_2,void *param_3)

{
  int iVar1;
  UObjectBaseUtility *pUVar2;
  TConsoleVariableData<int> *pTVar3;
  UClass *pUVar4;
  bool bVar5;
  FLinkerLoad *pFVar6;
  UClass *pUVar7;
  uint *puVar8;
  FTlsAutoCleanup *pFVar9;
  UPackage *this_00;
  UObject *pUVar10;
  UObject *this_01;
  FObjectPtr_u_0 *pFVar11;
  FObjectPtr_u_0 FVar12;
  FObjectPtr_u_0 local_res8;
  void *local_res10;
  FObjectPtr_u_0 local_e8;
  FObjectPtr_u_0 *local_e0;
  FObjectPtr_u_0 local_d8;
  int local_d0;
  FObjectPtr_u_0 local_c8;
  undefined8 local_c0;
  FString local_b8;
  FObjectPtr_u_0 local_a8;
  UClass *local_a0;
  FObjectPtr_u_0 local_98;
  FObjectPtr_u_0 local_90;
  FObjectPtr_u_0 local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res10 = param_1;
  (**(code **)(this->_padding_ + 0x200))(this,&local_a8);
  if (local_a8.Handle == (UObject *)0x0) {
    return;
  }
  local_a0 = UE::CoreUObject::Private::GetClass(local_a8.Handle);
  if (local_a0 == (UClass *)0x0) {
    FObjectPtr::GetPathName((FObjectPtr *)&local_a8,(FString *)&local_e8);
    FVar12 = local_e8;
    FField::GetPathName((FField *)this,(FString *)&local_d8,(UObject *)0x0);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
    if (local_d8.Handle != (UObject *)0x0) {
      FMemory::Free(local_d8.Handle);
    }
    if (FVar12.Handle != (UObject *)0x0) {
      FMemory::Free(FVar12.Handle);
    }
  }
  pUVar4 = local_a0;
  this_01 = (UObject *)0x0;
  local_80 = 0;
  local_88.Handle = (UObject *)0x0;
  if ((this->PropertyClass).field0_0x0.DebugPtr == (UClass *)0x0) goto LAB_1421345dd;
  local_res8.Handle = local_a8.Handle;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8.Handle != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_a8.Handle);
  }
  bVar5 = CanPropertyHoldObject(this,(TObjectPtr<UObject_const_>)&local_res8,(FString *)&local_88);
  if ((bVar5) ||
     ((pUVar7 = (this->PropertyClass).field0_0x0.DebugPtr, pUVar7 != (UClass *)0x0 &&
      ((byte)(pUVar7->ClassFlags >> 0x1f) != (byte)(pUVar4->ClassFlags >> 0x1f)))))
  goto LAB_1421345dd;
  pFVar6 = FField::GetLinker((FField *)this);
  if ((pFVar6 == (FLinkerLoad *)0x0) || ((pFVar6->LoadFlags & 0x100000) != 0)) {
    pUVar7 = Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();
    if (pUVar7 != (UClass *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_1421345dd;
    }
    pUVar7 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    if (pUVar7 != (UClass *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_1421345dd;
    }
  }
  puVar8 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_e0 = &local_res8;
  local_e8.Handle =
       (UObject *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
       ::Call;
  pFVar9 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_e8,puVar8);
  if ((pFVar9[0x2f] == (FTlsAutoCleanup)0x0) ||
     (this_00 = *(UPackage **)((longlong)pFVar9[0x2f] + 0x30), this_00 == (UPackage *)0x0)) {
    this_00 = GetTransientPackage();
  }
  pTVar3 = UE::CoreUObject::Private::CVarNonNullableBehavior.Ref;
  if (((uint)this->_padding_ >> 0xc & 1) == 0) {
    if (2 < (byte)LogProperty._0_1_) {
      UE::CoreUObject::Private::GetFullName
                ((FString *)&local_d8,local_a8.Handle,(UObject *)0x0,None);
      FField::GetFullName((FField *)this,&local_78);
      if ((this_00 == (UPackage *)0x0) || (this_00->_padding_ == 0)) {
        ::FString::FString((FString *)&local_c8,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_00,(FString *)&local_c8,(UObject *)0x0,None);
      }
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)(this->PropertyClass).field0_0x0.DebugPtr,&local_b8,
                 (UObject *)0x0,None);
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)local_a0,(FString *)&local_e8,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
      if (local_e8.Handle != (UObject *)0x0) {
        FMemory::Free(local_e8.Handle);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_c8.Handle != (UObject *)0x0) {
        FMemory::Free(local_c8.Handle);
      }
      FVar12 = local_d8;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
        FVar12 = local_d8;
      }
      goto LAB_1421345b4;
    }
  }
  else {
    bVar5 = IsInParallelGameThread();
    if (bVar5) {
LAB_142133fc5:
      pUVar10 = this_01;
    }
    else {
      bVar5 = IsInGameThread();
      pUVar10 = (UObject *)&DAT_00000004;
      if (bVar5) goto LAB_142133fc5;
    }
    iVar1 = *(int *)(&pUVar10->field_0x0 + (longlong)pTVar3->ShadowedValue);
    if ((iVar1 < 0) || (2 < iVar1)) {
LAB_1421341af:
      local_c0 = 0;
      local_c8.Handle = (UObject *)0x0;
      this_01 = ConstructDefaultObjectValueIfNecessary
                          (this,*(UObject **)param_2.field0_0x0,(FString *)&local_c8,param_3);
      if (1 < (int)local_c0) {
        ::FString::FString((FString *)&local_e8,L" as ");
        ::FString::InsertAt((FString *)&local_c8,0,(FString *)&local_e8);
        if (local_e8.Handle != (UObject *)0x0) {
          FMemory::Free(local_e8.Handle);
        }
      }
      if (this_01 == (UObject *)0x0) {
LAB_1421343ed:
        FVar12 = local_c8;
        if ((byte)LogProperty._0_1_ < 2) goto LAB_1421345b4;
        UE::CoreUObject::Private::GetFullName
                  ((FString *)&local_e8,local_a8.Handle,(UObject *)0x0,None);
        local_res8.Handle = (UObject *)0x15060d16c;
        if ((int)local_e0 != 0) {
          local_res8 = local_e8;
        }
        FField::GetFullName((FField *)this,&local_68);
        if ((this_00 == (UPackage *)0x0) || (this_00->_padding_ == 0)) {
          ::FString::FString(&local_b8,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_00,&local_b8,(UObject *)0x0,None);
        }
        pUVar2 = *(UObjectBaseUtility **)param_2.field0_0x0;
        if ((pUVar2 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar2->field_0x10 == 0)) {
          ::FString::FString((FString *)&local_d8,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName(pUVar2,(FString *)&local_d8,(UObject *)0x0,None);
        }
        local_90 = (FObjectPtr_u_0)L"";
        if ((int)local_c0 != 0) {
          local_90 = local_c8;
        }
        local_98 = (FObjectPtr_u_0)L"";
        if ((int)local_80 != 0) {
          local_98 = local_88;
        }
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)(this->PropertyClass).field0_0x0.DebugPtr,&local_58,
                   (UObject *)0x0,None);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)local_a0,&local_48,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_d8.Handle != (UObject *)0x0) {
          FMemory::Free(local_d8.Handle);
        }
        local_48.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          local_48.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        }
      }
      else {
        FVar12 = local_c8;
        if ((byte)LogProperty._0_1_ < 3) goto LAB_1421345b4;
        UE::CoreUObject::Private::GetFullName
                  ((FString *)&local_e8,local_a8.Handle,(UObject *)0x0,None);
        local_90.Handle = (UObject *)0x15060d16c;
        if ((int)local_e0 != 0) {
          local_90 = local_e8;
        }
        pFVar11 = (FObjectPtr_u_0 *)FField::GetFullName((FField *)this,&local_48);
        if (*(int *)(pFVar11 + 1) == 0) {
          local_res8.Handle = (UObject *)0x15060d16c;
        }
        else {
          local_res8 = *pFVar11;
        }
        if ((this_00 == (UPackage *)0x0) || (this_00->_padding_ == 0)) {
          ::FString::FString((FString *)&local_d8,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_00,(FString *)&local_d8,(UObject *)0x0,None);
        }
        pUVar2 = *(UObjectBaseUtility **)param_2.field0_0x0;
        if ((pUVar2 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar2->field_0x10 == 0)) {
          ::FString::FString(&local_78,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName(pUVar2,&local_78,(UObject *)0x0,None);
        }
        if (*(longlong *)&this_01->field_0x10 == 0) {
          ::FString::FString(&local_b8,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_01,&local_b8,(UObject *)0x0,None);
        }
        local_98 = (FObjectPtr_u_0)L"";
        if ((int)local_80 != 0) {
          local_98 = local_88;
        }
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)(this->PropertyClass).field0_0x0.DebugPtr,&local_68,
                   (UObject *)0x0,None);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)local_a0,&local_58,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_d8.Handle != (UObject *)0x0) {
          FMemory::Free(local_d8.Handle);
        }
      }
      local_d8 = local_e8;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        local_d8 = local_e8;
      }
    }
    else {
      local_c8.Handle = (UObject *)0x0;
      local_c0 = 0;
      if (iVar1 == 2) goto LAB_1421341af;
      if (iVar1 != 0) goto LAB_1421343ed;
      FVar12.Handle = local_c8.Handle;
      if ((byte)LogProperty._0_1_ < 3) goto LAB_1421345b4;
      UE::CoreUObject::Private::GetFullName
                ((FString *)&local_d8,local_a8.Handle,(UObject *)0x0,None);
      local_res8 = (FObjectPtr_u_0)L"";
      if (local_d0 != 0) {
        local_res8 = local_d8;
      }
      FField::GetFullName((FField *)this,&local_58);
      if ((this_00 == (UPackage *)0x0) || (this_00->_padding_ == 0)) {
        ::FString::FString(&local_b8,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_b8,(UObject *)0x0,None)
        ;
      }
      pUVar2 = *(UObjectBaseUtility **)param_2.field0_0x0;
      if ((pUVar2 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar2->field_0x10 == 0)) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName(pUVar2,&local_78,(UObject *)0x0,None);
      }
      local_98 = (FObjectPtr_u_0)L"";
      if ((int)local_c0 != 0) {
        local_98 = local_c8;
      }
      local_90 = (FObjectPtr_u_0)L"";
      if ((int)local_80 != 0) {
        local_90 = local_88;
      }
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)(this->PropertyClass).field0_0x0.DebugPtr,&local_68,
                 (UObject *)0x0,None);
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)local_a0,(FString *)&local_e8,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
      if (local_e8.Handle != (UObject *)0x0) {
        FMemory::Free(local_e8.Handle);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    FVar12 = local_c8;
    if (local_d8.Handle != (UObject *)0x0) {
      FMemory::Free(local_d8.Handle);
      FVar12 = local_c8;
    }
LAB_1421345b4:
    if (FVar12.Handle != (UObject *)0x0) {
      FMemory::Free(FVar12.Handle);
    }
  }
  (**(code **)(this->_padding_ + 0x1d8))(this,local_res10,this_01);
LAB_1421345dd:
  if (local_88.Handle != (UObject *)0x0) {
    FMemory::Free(local_88.Handle);
  }
  return;
}

// Construct @ 142134ae0

FField * __cdecl
FObjectPropertyBase::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  FProperty *this;
  FFieldClass *pFVar1;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x78,0);
  if (this == (FProperty *)0x0) {
    this = (FProperty *)0x0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pFVar1 = FProperty::StaticClass();
        FFieldClass::FFieldClass
                  (&::StaticFieldClass,L"FObjectPropertyBase",0x4000000,
                   CASTCLASS_FObjectPropertyBase|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,
                   Construct);
        atexit(`FObjectPropertyBase::StaticClass'::__l2::
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
    this->_padding_ = (longlong)&___7FObjectPropertyBase__6B_;
    this[1]._padding_ = 0;
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
    FProperty::FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
    this->_padding_ = (longlong)&___7FObjectPropertyBase__6B_;
    this[1]._padding_ = 0;
  }
  return (FField *)this;
}

// ConstructDefaultObjectValueIfNecessary @ 142134d30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
FObjectPropertyBase::ConstructDefaultObjectValueIfNecessary
          (FObjectPropertyBase *this,UObject *param_1,FString *param_2,void *param_3)

{
  int iVar1;
  UClass *pUVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  UPackage *pUVar7;
  UObject *pUVar8;
  FName FVar9;
  EObjectFlags EVar10;
  FName FVar11;
  FName local_res10 [2];
  void *local_res20;
  FString local_58;
  undefined1 local_48 [16];
  
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  EVar10 = RF_NoFlags;
  local_res20 = param_3;
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_48._8_8_ = local_res10;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
       ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)local_48,puVar5);
  if ((pFVar6[0x2f] == (FTlsAutoCleanup)0x0) ||
     (pUVar7 = *(UPackage **)((longlong)pFVar6[0x2f] + 0x30), pUVar7 == (UPackage *)0x0)) {
    pUVar7 = GetTransientPackage();
  }
  if ((param_1 != (UObject *)0x0) && (*(longlong *)&param_1->field_0x10 != 0)) {
    local_res10[0] = (FName)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    bVar4 = CanPropertyHoldObject(this,(TObjectPtr<UObject_const_>)local_res10,(FString *)0x0);
    if (bVar4) {
      bVar4 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)param_1,RF_ArchetypeObject|RF_ClassDefaultObject);
      if ((!bVar4) || (*(UPackage **)&param_1->field_0x20 == pUVar7)) {
        return param_1;
      }
      local_res10[0].ComparisonIndex.Value = 0;
      local_res10[0].Number = 0;
      pUVar8 = NewObject<UObject>((UObject *)pUVar7,*(UClass **)&param_1->field_0x10,(FName)0x0,
                                  *(EObjectFlags *)&param_1->field_0x8 &
                                  (RF_MigratingAsset|RF_NonPIEDuplicateTransient|
                                   RF_DuplicateTransient|RF_InheritableComponentTemplate|
                                   RF_TextExportTransient|RF_DefaultSubObject|RF_Transient|
                                   RF_ArchetypeObject|RF_ClassDefaultObject|RF_Transactional|
                                   RF_Standalone|RF_Public),param_1,false,
                                  (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if (pUVar8 != (UObject *)0x0) {
        return pUVar8;
      }
    }
  }
  if (((this->PropertyClass).field0_0x0.DebugPtr == (UClass *)0x0) &&
     (local_res10[0] = (FName)this,
     bVar4 = `FObjectPropertyBase::ConstructDefaultObjectValueIfNecessary'::__l20::<lambda_1>::
             operator()(local_res10), !bVar4)) {
    if (param_2 == (FString *)0x0) {
      return (UObject *)0x0;
    }
    ::FString::operator=(param_2,L"malformed property: PropertyClass=null");
    return (UObject *)0x0;
  }
  pUVar2 = (this->PropertyClass).field0_0x0.DebugPtr;
  if ((pUVar2->ClassFlags & CLASS_Abstract) != CLASS_None) {
    if (param_2 == (FString *)0x0) {
      return (UObject *)0x0;
    }
    local_res10[0] = (FName)pUVar2->_padding_;
    ::FName::ToString(local_res10,(FString *)local_48);
    ::FString::PrintfImpl(&local_58,L"class \'%s\' is abstract");
    if (param_2 != &local_58) {
      pFVar3 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (param_2->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (param_2->Data).ArrayNum = local_58.Data.ArrayNum;
      (param_2->Data).ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_48._0_8_ == (FScriptContainerElement *)0x0) {
      return (UObject *)0x0;
    }
    FMemory::Free((void *)local_48._0_8_);
    return (UObject *)0x0;
  }
  FVar11 = FVar9;
  if (param_1 != (UObject *)0x0) {
    FVar11.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    FVar11.Number = *(uint *)&param_1->field_0x1c;
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  if ((FVar11 != (FName)0x0) &&
     (pUVar8 = StaticFindObjectFastInternal
                         ((UClass *)0x0,(UObject *)pUVar7,FVar11,ExactClass,RF_NoFlags,Borrowed),
     pUVar8 != (UObject *)0x0)) {
    pUVar2 = (this->PropertyClass).field0_0x0.DebugPtr;
    if (pUVar2 != (UClass *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_142134faa;
    }
    local_res10[0].ComparisonIndex.Value = 0;
    local_res10[0].Number = 0;
    FVar11 = FVar9;
  }
LAB_142134faa:
  if (param_1 != (UObject *)0x0) {
    EVar10 = *(EObjectFlags *)&param_1->field_0x8 &
             (RF_MigratingAsset|RF_NonPIEDuplicateTransient|RF_DuplicateTransient|
              RF_InheritableComponentTemplate|RF_TextExportTransient|RF_DefaultSubObject|
              RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject|RF_Transactional|RF_Standalone|
             RF_Public);
  }
  if (local_res20 != (void *)0x0) {
    pUVar8 = (UObject *)(**(code **)(this->_padding_ + 0x1f8))(this);
    if (pUVar8 == (UObject *)0x0) goto LAB_142135014;
    pUVar2 = (this->PropertyClass).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_142135014;
  }
  pUVar8 = (UObject *)0x0;
LAB_142135014:
  pUVar8 = NewObject<UObject>((UObject *)pUVar7,(this->PropertyClass).field0_0x0.DebugPtr,FVar11,
                              EVar10,pUVar8,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  return pUVar8;
}

// ExportText_Internal @ 1421391b0

void __thiscall
FObjectPropertyBase::ExportText_Internal
          (FObjectPropertyBase *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  FName this_00;
  FScriptContainerElement *pFVar1;
  char cVar2;
  FName *pFVar3;
  FString *pFVar4;
  UObject *pUVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  FName local_68;
  FName local_60;
  undefined1 local_58 [16];
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  if ((param_3 == Container) && (cVar2 = (**(code **)(this->_padding_ + 0x78))(), cVar2 != '\0')) {
    FProperty::GetValue_InContainer((FProperty *)this,param_2,&local_68);
  }
  else {
    pFVar3 = (FName *)(**(code **)(this->_padding_ + 0x200))(this,&local_60);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (*pFVar3 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)*pFVar3);
    }
    local_68 = *pFVar3;
  }
  bVar9 = local_68 == (FName)0x0;
  if (local_68 == (FName)0x0) {
    ::FString::AppendChars(param_1,L"None",4);
    return;
  }
  if (((uint)param_6 >> 0x15 & 1) == 0) {
    iVar7 = 0;
    if (((param_5 != (UObject *)0x0) && ((*(uint *)&param_5->field_0x8 & 0x10) == 0)) &&
       (bVar9 = UObjectBaseUtility::IsDefaultSubobject((UObjectBaseUtility *)local_68),
       this_00 = local_68, bVar9)) {
      pUVar5 = UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)param_5);
      bVar9 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)this_00,pUVar5);
      if (bVar9) {
        if ((param_6 & 1U) == 0) {
          if (local_68 == (FName)0x0) {
            local_60.ComparisonIndex.Value = 0;
            local_60.Number = 0;
            local_60 = (FName)&local_60;
          }
          else {
            local_60 = UE::CoreUObject::Private::GetFName((UObject *)local_58);
          }
          local_60 = *(FName *)local_60;
          ::FName::ToString(&local_60,&local_48);
          iVar6 = local_48.Data.ArrayNum + -1;
          if (local_48.Data.ArrayNum == 0) {
            iVar6 = iVar7;
          }
          ::FString::AppendChars(param_1,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar6);
          goto LAB_1421394b5;
        }
        bVar9 = local_68 == (FName)0x0;
        if (bVar9) {
          pFVar4 = ::FString::FString(&local_38,L"None");
        }
        else {
          local_60 = *(FName *)((longlong)local_68 + 0x18);
          ::FName::ToString(&local_60,(FString *)local_58);
          ::FString::ReplaceQuotesWithEscapedQuotes((FString *)local_58,&local_28);
          ::FString::PrintfImpl(&local_48,L"\"%s\"");
          pFVar4 = &local_48;
        }
        iVar6 = (pFVar4->Data).ArrayNum;
        iVar8 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar8 = iVar7;
        }
        ::FString::AppendChars(param_1,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar8);
        if ((bVar9) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if ((!bVar9) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        pFVar1 = (FScriptContainerElement *)local_58._0_8_;
        if ((!bVar9) &&
           (pFVar1 = (FScriptContainerElement *)local_58._0_8_,
           local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
          pFVar1 = (FScriptContainerElement *)local_58._0_8_;
        }
        goto joined_r0x000142139407;
      }
    }
    local_60 = local_68;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_68);
    }
    pFVar4 = GetExportPath(&local_28,(TObjectPtr<UObject_const_> *)&local_60,param_5,param_7,param_6
                          );
    iVar6 = (pFVar4->Data).ArrayNum;
    iVar8 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar8 = iVar7;
    }
    ::FString::AppendChars(param_1,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar8);
    local_48.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    if (bVar9) {
      pFVar4 = ::FString::FString(&local_48,L"None");
    }
    else {
      pFVar4 = UObjectBaseUtility::GetFullName
                         ((UObjectBaseUtility *)local_68,(FString *)local_58,(UObject *)0x0,None);
    }
    iVar7 = (pFVar4->Data).ArrayNum;
    iVar6 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar6);
    pFVar1 = (FScriptContainerElement *)local_58._0_8_;
    if ((bVar9) &&
       (pFVar1 = (FScriptContainerElement *)local_58._0_8_,
       local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      pFVar1 = (FScriptContainerElement *)local_58._0_8_;
    }
joined_r0x000142139407:
    local_48.Data.AllocatorInstance.Data = pFVar1;
    if (bVar9) {
      return;
    }
  }
LAB_1421394b5:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// FindImportedObject @ 142139870

/* WARNING: Enum "Type": Some values do not have unique names */

TObjectPtr<UObject> __cdecl
FObjectPropertyBase::FindImportedObject
          (FProperty *param_1,UObject *param_2,UClass *param_3,UClass *param_4,wchar_t *param_5,
          uint param_6,FUObjectSerializeContext *param_7,bool param_8)

{
  code *pcVar1;
  wchar_t *_Str;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  TObjectPtr<UObject> TVar6;
  size_t sVar7;
  UObject *pUVar8;
  UClass *this;
  FString *pFVar9;
  wchar_t *pwVar10;
  FLinkerLoad *this_00;
  longlong lVar11;
  UObject *pUVar12;
  UPackage *pUVar13;
  UPackage *pUVar14;
  ForAnyElementType _Str_00;
  UClass *pUVar15;
  undefined4 in_stack_00000034;
  char in_stack_00000048;
  uint in_stack_fffffffffffffe2c;
  FString local_1b8;
  TStringView<wchar_t> local_1a8;
  FSoftObjectPath local_198;
  FString local_178;
  FProperty *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  wchar_t *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  wchar_t *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  wchar_t *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  wchar_t *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  wchar_t *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  wchar_t *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [24];
  longlong lStack_e0;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  FString local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  FString local_68;
  FString local_58;
  uint local_3c;
  
  _Str = (wchar_t *)CONCAT44(in_stack_00000034,param_6);
  param_1->_padding_ = 0;
  if (param_5 == (wchar_t *)0x0) {
LAB_1421398dc:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ObjectClass->IsChildOf(RequiredMetaClass)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBaseObject.cpp"
                       ,0x1d4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar6.field0_0x0 = (TObjectPtr<UObject>_u_0)(*pcVar1)();
      return (TObjectPtr<UObject>)TVar6.field0_0x0;
    }
  }
  else {
    if (((int)param_4->_padding_ < *(int *)(param_5 + 0x1c)) ||
       (*(wchar_t **)(param_4->_padding_ + (longlong)*(int *)(param_5 + 0x1c) * 8) != param_5 + 0x18
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1421398dc;
  }
  if (((ulonglong)param_7 & 0x10000) != 0) {
    lVar11 = param_1->_padding_;
    for (pUVar15 = param_3; (lVar11 == 0 && (pUVar15 != (UClass *)0x0));
        pUVar15 = (UClass *)pUVar15->_padding_) {
      lVar11 = 0;
      this = pUVar15;
      while ((lVar11 == 0 && (this != (UClass *)0x0))) {
        uVar4 = 0;
        local_158 = _Str;
        if (_Str != (wchar_t *)0x0) {
          sVar7 = wcslen(_Str);
          uVar4 = (undefined4)sVar7;
        }
        lStack_e0 = CONCAT44(uStack_14c,uVar4);
        local_f8._16_8_ = local_158;
        uStack_150 = uVar4;
        pUVar8 = StaticFindObjectSafe
                           (param_4,(UObject *)this,(TStringView<wchar_t> *)(local_f8 + 0x10),None);
        if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar8 == (UObject *)0x0)) {
          param_1->_padding_ = (longlong)pUVar8;
          if (pUVar8 != (UObject *)0x0) goto LAB_1421399b5;
        }
        else {
          UE::GC::MarkAsReachable(pUVar8);
          param_1->_padding_ = (longlong)pUVar8;
LAB_1421399b5:
          bVar2 = UObjectBaseUtility::IsTemplate((UObjectBaseUtility *)pUVar8,RF_ClassDefaultObject)
          ;
          if (!bVar2) {
            param_1->_padding_ = 0;
          }
        }
        this = (UClass *)UObject::GetArchetype((UObject *)this);
        lVar11 = param_1->_padding_;
      }
      if (((uint)pUVar15->_padding_ >> 4 & 1) != 0) break;
      lVar11 = param_1->_padding_;
    }
  }
  lVar11 = param_1->_padding_;
  pUVar15 = param_3;
  if (lVar11 != 0) goto LAB_142139f89;
  do {
    if (pUVar15 == (UClass *)0x0) break;
    iVar5 = 0;
    local_148 = _Str;
    if (_Str != (wchar_t *)0x0) {
      sVar7 = wcslen(_Str);
      iVar5 = (int)sVar7;
    }
    local_d8._8_8_ = CONCAT44(uStack_13c,iVar5);
    local_d8.DataPtr = local_148;
    iStack_140 = iVar5;
    pUVar8 = StaticFindObjectSafe(param_4,(UObject *)pUVar15,&local_d8,None);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar8 == (UObject *)0x0)) {
      param_1->_padding_ = (longlong)pUVar8;
      if (pUVar8 != (UObject *)0x0) goto LAB_142139a73;
    }
    else {
      UE::GC::MarkAsReachable(pUVar8);
      param_1->_padding_ = (longlong)pUVar8;
LAB_142139a73:
      if ((((ulonglong)param_7 & 0x10000) != 0) &&
         (bVar2 = UObjectBaseUtility::IsTemplate((UObjectBaseUtility *)pUVar8,RF_ClassDefaultObject)
         , bVar2)) {
        param_1->_padding_ = 0;
      }
    }
    lVar11 = param_1->_padding_;
    pUVar15 = (UClass *)pUVar15->_padding_;
  } while (lVar11 == 0);
  if (lVar11 != 0) goto LAB_142139f89;
  iStack_130 = 0;
  local_138 = _Str;
  if (_Str != (wchar_t *)0x0) {
    sVar7 = wcslen(_Str);
    iStack_130 = (int)sVar7;
  }
  local_c8._8_8_ = CONCAT44(uStack_12c,iStack_130);
  local_c8.DataPtr = local_138;
  pUVar8 = StaticFindObjectSafe(param_4,(UObject *)0x0,&local_c8,None);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar8 == (UObject *)0x0)) {
    param_1->_padding_ = (longlong)pUVar8;
    if ((pUVar8 == (UObject *)0x0) && (((ulonglong)param_7 & 0x20) != 0)) {
      local_198.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_198.AssetPath.PackageName.Number = 0;
      iVar5 = 0;
      local_198.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_198.AssetPath.AssetName.Number = 0;
      local_198.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.SubPathString.Data.ArrayNum = 0;
      local_198.SubPathString.Data.ArrayMax = 0;
      iStack_120 = iVar5;
      local_128 = _Str;
      if (_Str != (wchar_t *)0x0) {
        sVar7 = wcslen(_Str);
        iStack_120 = (int)sVar7;
      }
      local_b8._8_8_ = CONCAT44(uStack_11c,iStack_120);
      local_b8._0_8_ = local_128;
      FSoftObjectPath::SetPath(&local_198,(TStringView<wchar_t> *)local_b8);
      bVar2 = FSoftObjectPath::PreSavePath(&local_198,(bool *)0x0);
      if (bVar2) {
        pFVar9 = FSoftObjectPath::ToString(&local_198,&local_98);
        if ((pFVar9->Data).ArrayNum == 0) {
          local_168 = (FProperty *)0x15060d16c;
LAB_142139c1f:
          sVar7 = wcslen((wchar_t *)local_168);
          iVar5 = (int)sVar7;
        }
        else {
          local_168 = (FProperty *)(pFVar9->Data).AllocatorInstance.Data;
          if (local_168 != (FProperty *)0x0) goto LAB_142139c1f;
        }
        local_a8._8_8_ = CONCAT44(uStack_15c,iVar5);
        local_a8._0_8_ = local_168;
        iStack_160 = iVar5;
        pUVar8 = StaticFindObjectSafe(param_4,(UObject *)0x0,(TStringView<wchar_t> *)local_a8,None);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        param_1->_padding_ = (longlong)pUVar8;
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      if (local_198.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.SubPathString.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    UE::GC::MarkAsReachable(pUVar8);
    param_1->_padding_ = (longlong)pUVar8;
  }
  lVar11 = param_1->_padding_;
  if (lVar11 != 0) goto LAB_142139f89;
  iVar5 = 0;
  if (in_stack_00000048 != '\0') {
    local_118 = _Str;
    if (_Str != (wchar_t *)0x0) {
      sVar7 = wcslen(_Str);
      iVar5 = (int)sVar7;
    }
    local_88._12_4_ = uStack_10c;
    local_88.Size = iVar5;
    local_88.DataPtr = local_118;
    iStack_110 = iVar5;
    pUVar8 = StaticFindFirstObject(param_4,&local_88,None,Warning,L"FindImportedObject");
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar8 == (UObject *)0x0)) {
      param_1->_padding_ = (longlong)pUVar8;
      if (pUVar8 == (UObject *)0x0) goto LAB_142139ca3;
    }
    else {
      UE::GC::MarkAsReachable(pUVar8);
      param_1->_padding_ = (longlong)pUVar8;
    }
    if ((((ulonglong)param_7 & 0x10000) != 0) &&
       (bVar2 = UObjectBaseUtility::IsTemplate((UObjectBaseUtility *)pUVar8,RF_ClassDefaultObject),
       bVar2)) {
      param_1->_padding_ = 0;
    }
  }
LAB_142139ca3:
  lVar11 = param_1->_padding_;
  if (lVar11 != 0) goto LAB_142139f89;
  pwVar10 = wcsrchr(_Str,L'.');
  if ((pwVar10 == (wchar_t *)0x0) || (((uint)param_7 >> 3 & 1) == 0)) {
    ::FString::FString(&local_1b8,_Str);
    if (pwVar10 != (wchar_t *)0x0) goto LAB_142139de6;
    if (param_1->_padding_ == 0) {
      iVar5 = ::FString::Find(&local_1b8,L"/",1,CaseSensitive,FromEnd,-1);
      if (-1 < iVar5) {
        ::FString::AppendChars(&local_1b8,L".",1);
        sVar7 = wcslen(_Str + (longlong)iVar5 + 1);
        ::FString::AppendChars(&local_1b8,_Str + (longlong)iVar5 + 1,(int)sVar7);
        _Str_00.Data = (FScriptContainerElement *)L"";
        if (local_1b8.Data.ArrayNum != 0) {
          _Str_00.Data = local_1b8.Data.AllocatorInstance.Data;
        }
        pwVar10 = wcsrchr((wchar_t *)_Str_00.Data,L'.');
      }
      goto LAB_142139de6;
    }
  }
  else {
    TVar6 = FindImportedObject((FProperty *)local_f8,param_2,param_3,param_4,param_5,
                               (int)pwVar10 + 2,
                               (FUObjectSerializeContext *)
                               ((ulonglong)in_stack_fffffffffffffe2c << 0x20),false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)TVar6.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)TVar6.field0_0x0);
    }
    param_1->_padding_ = *(longlong *)TVar6.field0_0x0;
    ::FString::FString(&local_1b8,_Str);
LAB_142139de6:
    if (((param_1->_padding_ == 0) && (pwVar10 != (wchar_t *)0x0)) && (GIsSavingPackage == false)) {
      if ((((param_3 != (UClass *)0x0) &&
           (this_00 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_3->_padding_),
           this_00 != (FLinkerLoad *)0x0)) ||
          (this_00 = FField::GetLinker((FField *)param_2), this_00 != (FLinkerLoad *)0x0)) &&
         ((this_00->LoadFlags & 0x100000) != 0)) {
        pUVar8 = FLinkerLoad::RequestPlaceholderValue(this_00,(FProperty *)param_2,param_4,_Str);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        param_1->_padding_ = (longlong)pUVar8;
      }
      if (param_1->_padding_ == 0) {
        if (5 < (byte)LogProperty._0_1_) {
          if ((param_4 == (UClass *)0x0) || (param_4->_padding_ == 0)) {
            ::FString::FString(&local_178,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_4,&local_178,(UObject *)0x0,None);
          }
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
        }
        iStack_100 = 0;
        local_1a8.DataPtr = (wchar_t *)0x0;
        local_1a8._8_8_ = (ulonglong)local_3c << 0x20;
        local_108 = _Str;
        if (_Str != (wchar_t *)0x0) {
          sVar7 = wcslen(_Str);
          iStack_100 = (int)sVar7;
        }
        local_78._12_4_ = uStack_fc;
        local_78.Size = iStack_100;
        local_78.DataPtr = local_108;
        pUVar8 = StaticLoadObject(param_4,(UObject *)0x0,&local_78,&local_1a8,0x4002,
                                  (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        param_1->_padding_ = (longlong)pUVar8;
      }
    }
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  lVar11 = param_1->_padding_;
  if (lVar11 == 0) {
    return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
  }
LAB_142139f89:
  if ((((*(uint *)(lVar11 + 8) & 1) == 0) && (param_3 != (UClass *)0x0)) &&
     (((uint)param_3->_padding_ >> 6 & 1) == 0)) {
    pUVar8 = UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)param_1->_padding_);
    pUVar12 = UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)param_3);
    if (pUVar8 != pUVar12) {
      pUVar13 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1->_padding_);
      pUVar14 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_3);
      if ((pUVar13 != pUVar14) &&
         (((param_2 == (UObject *)0x0 ||
           ((*(uint *)(*(longlong *)&param_2->field_0x8 + 0x18) >> 0x1a & 1) == 0)) ||
          (cVar3 = (**(code **)(*(longlong *)param_2 + 0x228))(param_2), cVar3 == '\0')))) {
        if (2 < (byte)LogProperty._0_1_) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_3,&local_58,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1->_padding_,&local_68,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        param_1->_padding_ = 0;
      }
    }
  }
  if (param_1->_padding_ != 0) {
    lVar11 = *(longlong *)(param_1->_padding_ + 0x10);
    if (((*(int *)(lVar11 + 0x38) < *(int *)(param_5 + 0x1c)) ||
        (*(wchar_t **)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(param_5 + 0x1c) * 8) !=
         param_5 + 0x18)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Result || Result->IsA(RequiredMetaClass)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBaseObject.cpp"
                           ,0x26a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar6.field0_0x0 = (TObjectPtr<UObject>_u_0)(*pcVar1)();
      return (TObjectPtr<UObject>)TVar6.field0_0x0;
    }
  }
  return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
}

// GetExportPath @ 14213d2a0

FString * __cdecl
FObjectPropertyBase::GetExportPath
          (FString *__return_storage_ptr__,TObjectPtr<UObject_const_> *param_1,UObject *param_2,
          UObject *param_3,uint param_4)

{
  FNameEntryId FVar1;
  bool bVar2;
  FString *pFVar3;
  UClass *this;
  FScriptContainerElement *pFVar4;
  ForAnyElementType FVar5;
  int iVar6;
  FString local_68;
  FTopLevelAssetPath local_58;
  FString local_48;
  FTopLevelAssetPath local_38;
  
  this = (UClass *)0x0;
  if ((param_4 & 4) == 0) {
LAB_14213d331:
    if (((param_4 >> 0xd & 1) != 0) && (param_2 != (UObject *)0x0)) {
      param_3 = (UObject *)UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_2);
LAB_14213d348:
      param_2 = param_3;
      if ((UPackage *)param_2 != (UPackage *)0x0) goto LAB_14213d34d;
    }
    FObjectPtr::GetPathName((FObjectPtr *)param_1,&local_48);
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
    iVar6 = local_48.Data.ArrayNum;
  }
  else {
    if ((param_3 == (UObject *)0x0) && (param_2 != (UObject *)0x0)) {
      param_3 = (UObject *)UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_2);
    }
    if ((((UPackage *)param_3 != (UPackage *)0x0) &&
        (bVar2 = UObjectBaseUtility::IsIn
                           ((UObjectBaseUtility *)(param_1->field0_0x0).DebugPtr,param_3), !bVar2))
       && ((param_3 = (UObject *)((UPackage *)param_3)->_padding_,
           (UPackage *)param_3 == (UPackage *)0x0 ||
           (bVar2 = UObjectBaseUtility::IsIn
                              ((UObjectBaseUtility *)(param_1->field0_0x0).DebugPtr,param_3), !bVar2
           )))) goto LAB_14213d331;
    if ((param_2 == (UObject *)0x0) ||
       (bVar2 = UObjectBaseUtility::IsIn
                          ((UObjectBaseUtility *)(param_1->field0_0x0).DebugPtr,param_2), !bVar2))
    goto LAB_14213d348;
LAB_14213d34d:
    pFVar3 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)(param_1->field0_0x0).DebugPtr,(FString *)&local_58,
                        param_2);
    FVar5.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar6 = (pFVar3->Data).ArrayNum;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (local_58.PackageName != (FName)0x0) {
      FMemory::Free((void *)local_58.PackageName);
    }
  }
  if ((param_1->field0_0x0).DebugPtr != (UObject *)0x0) {
    this = UE::CoreUObject::Private::GetClass((param_1->field0_0x0).DebugPtr);
  }
  UStruct::GetStructPathName((UStruct *)this,&local_38);
  pFVar4 = (FScriptContainerElement *)L"";
  if (iVar6 != 0) {
    pFVar4 = FVar5.Data;
  }
  ::FString::FString(&local_48,(wchar_t *)pFVar4);
  local_58.PackageName = local_38.PackageName;
  local_58.AssetName = local_38.AssetName;
  GetExportPath(__return_storage_ptr__,&local_58,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_4 & 1) != 0) {
    FVar1.Value = (__return_storage_ptr__->Data).ArrayNum;
    pFVar4 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    local_58.PackageName.ComparisonIndex.Value = 0;
    local_58.PackageName.Number = 0;
    local_58.AssetName.ComparisonIndex.Value = FVar1.Value;
    if (FVar1.Value == 0) {
      local_58.AssetName.ComparisonIndex.Value = 0;
      local_58.AssetName.Number = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,FVar1.Value,0,(ForAnyElementType *)&local_58,FVar1.Value,
                 (int *)&local_58.AssetName.Number);
      memcpy((void *)local_58.PackageName,pFVar4,(longlong)(int)FVar1.Value * 2);
    }
    ::FString::ReplaceQuotesWithEscapedQuotes((FString *)&local_58,&local_48);
    if (local_58.PackageName != (FName)0x0) {
      FMemory::Free((void *)local_58.PackageName);
    }
    ::FString::PrintfImpl(&local_68,L"\"%s\"");
    if (__return_storage_ptr__ != &local_68) {
      pFVar4 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return __return_storage_ptr__;
}

// GetExportPath @ 14213d510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FObjectPropertyBase::GetExportPath
          (FString *__return_storage_ptr__,FTopLevelAssetPath *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TStringBuilderBase<wchar_t> *this;
  wchar_t *pwVar3;
  FString *pFVar4;
  int iVar5;
  undefined1 auStack_288 [32];
  FName local_268;
  FString local_260;
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_288;
  local_248.Base = local_228;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.CurPos = local_228;
  local_248.End = (wchar_t *)local_28;
  local_268 = param_1->PackageName;
  ::FName::AppendString(&local_268,&local_248);
  if (local_248.End < local_248.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,1);
  }
  local_248.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_248.CurPos,1,".",1);
  local_260.Data.AllocatorInstance.Data = *(FScriptContainerElement **)&param_1->AssetName;
  ::FName::AppendString((FName *)&local_260,&local_248);
  if (local_248.End < local_248.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,1);
  }
  local_248.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_248.CurPos,1,"\'",1);
  iVar1 = (param_2->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                   (&local_248,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar5);
  if (this->End < this->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(this,1);
  }
  pwVar3 = FGenericPlatformString::Convert<char,wchar_t>(this->CurPos,1,"\'",1);
  this->CurPos = pwVar3;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar4 = ::FString::ConstructFromPtrSize
                     (&local_260,local_248.Base,
                      (int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1));
  if (__return_storage_ptr__ != pFVar4) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if ((FName)local_260.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  return __return_storage_ptr__;
}

// GetID @ 14213d810

FName __thiscall FObjectPropertyBase::GetID(FObjectPropertyBase *this)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  FName in_RDX;
  undefined1 local_res10 [24];
  
  FVar1 = FNameEntryId::FromValidEName((EName)local_res10);
  *(undefined4 *)in_RDX = *(undefined4 *)CONCAT44(extraout_var,FVar1.Value);
  *(undefined4 *)((longlong)in_RDX + 4) = 0;
  return in_RDX;
}

// GetObjectPropertyValue @ 14213de00

UObject * __thiscall
FObjectPropertyBase::GetObjectPropertyValue(FObjectPropertyBase *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBaseObject.cpp"
                     ,0x275,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  return (UObject *)0x0;
}

// GetObjectPropertyValue_InContainer @ 14213de40

UObject * __thiscall
FObjectPropertyBase::GetObjectPropertyValue_InContainer
          (FObjectPropertyBase *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBaseObject.cpp"
                     ,0x281,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  return (UObject *)0x0;
}

// GetObjectPtrPropertyValue @ 14213de80

TObjectPtr<UObject> __thiscall
FObjectPropertyBase::GetObjectPtrPropertyValue(FObjectPropertyBase *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<UObject> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBaseObject.cpp"
                     ,0x27b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.field0_0x0 = (TObjectPtr<UObject>_u_0)(*pcVar1)();
    return (TObjectPtr<UObject>)TVar3.field0_0x0;
  }
  *(undefined8 *)param_1 = 0;
  return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
}

// GetObjectPtrPropertyValue_InContainer @ 14213ded0

TObjectPtr<UObject> __thiscall
FObjectPropertyBase::GetObjectPtrPropertyValue_InContainer
          (FObjectPropertyBase *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<UObject> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBaseObject.cpp"
                     ,0x287,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.field0_0x0 = (TObjectPtr<UObject>_u_0)(*pcVar1)();
    return (TObjectPtr<UObject>)TVar3.field0_0x0;
  }
  *(undefined8 *)param_1 = 0;
  return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
}

// Identical @ 14213f410

bool __thiscall
FObjectPropertyBase::Identical(FObjectPropertyBase *this,void *param_1,void *param_2,uint param_3)

{
  FName FVar1;
  bool bVar2;
  bool bVar3;
  UObjectBaseUtility *this_00;
  UObjectBaseUtility *this_01;
  UObject *pUVar4;
  
  if ((param_3 >> 0x16 & 1) != 0) {
    return false;
  }
  this_01 = (UObjectBaseUtility *)0x0;
  this_00 = this_01;
  if (param_1 != (void *)0x0) {
    this_00 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x1f8))();
  }
  if (param_2 != (void *)0x0) {
    this_01 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x1f8))(this,param_2);
  }
  if (this_00 == this_01) {
    bVar3 = true;
  }
  else if ((this_00 == (UObjectBaseUtility *)0x0) || (this_01 == (UObjectBaseUtility *)0x0)) {
    bVar3 = false;
  }
  else {
    bVar3 = false;
    if ((*(longlong *)&this_00->field_0x10 == *(longlong *)&this_01->field_0x10) &&
       (bVar3 = false, *(longlong *)&this_00->field_0x18 == *(longlong *)&this_01->field_0x18)) {
      if ((param_3 >> 9 & 1) == 0) {
        if ((param_3 & 0x100) == 0) {
          return false;
        }
      }
      else if ((((param_3 & 0x100) == 0) &&
               (bVar2 = UObjectBaseUtility::IsTemplate
                                  (this_00,RF_ArchetypeObject|RF_ClassDefaultObject), bVar2)) &&
              (bVar2 = UObjectBaseUtility::IsTemplate
                                 (this_01,RF_ArchetypeObject|RF_ClassDefaultObject), bVar2)) {
        return false;
      }
      if (((param_3 >> 10 & 1) == 0) ||
         (FVar1.ComparisonIndex.Value = *(uint *)&this_00->field_0x18,
         FVar1.Number = *(uint *)&this_00->field_0x1c,
         pUVar4 = UClass::GetDefaultSubobjectByName(*(UClass **)&this_00->field_0x10,FVar1),
         pUVar4 != (UObject *)0x0)) {
        bVar3 = AreInstancedObjectsIdentical((UObject *)this_00,(UObject *)this_01,param_3);
      }
    }
  }
  return bVar3;
}

// ImportText_Internal @ 142142500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __thiscall
FObjectPropertyBase::ImportText_Internal
          (FObjectPropertyBase *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  EObjectFlags EVar5;
  uint *puVar6;
  FTlsAutoCleanup *pFVar7;
  UObjectBase *pUVar8;
  TObjectPtr<UObject>_u_0 TVar9;
  FString *pFVar10;
  FStaticBasicLogRecord *pFVar11;
  undefined1 auStackY_158 [32];
  wchar_t *local_118;
  undefined1 local_110 [8];
  TObjectPtr<UObject>_u_0 local_108;
  undefined1 local_100 [24];
  undefined1 local_e8 [128];
  void *local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_108.DebugPtr = (UObject *)0x0;
  local_118 = param_1;
  puVar6 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_100._8_8_ = local_110;
  local_100._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
       ::Call;
  pFVar7 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)local_100,puVar6);
  ParseObjectPropertyValue
            ((FProperty *)this,param_4,(this->PropertyClass).field0_0x0.DebugPtr,param_5,&local_118,
             (TObjectPtr<UObject> *)&local_108.ObjectPtr,(FUObjectSerializeContext *)pFVar7[0x2f],
             true);
  TVar9 = local_108;
  if (((local_108.DebugPtr != (UObject *)0x0) && (((uint)param_5 >> 0x12 & 1) != 0)) &&
     ((((uint)this->_padding_ >> 0x13 & 1) != 0 ||
      ((param_4 != (UObject *)0x0 && (*(char *)(*(longlong *)&param_4->field_0x10 + 0x128) != '\0'))
      )))) {
    FVar1.ComparisonIndex.Value = *(undefined4 *)((longlong)local_108 + 0x18);
    FVar1.Number = *(undefined4 *)((longlong)local_108 + 0x1c);
    pUVar8 = FindObjectWithOuter((UObjectBase *)param_4,(UClass *)0x0,FVar1);
    if (pUVar8 != (UObjectBase *)0x0) {
      (**(code **)(pUVar8->_padding_ + 0x170))(pUVar8,0,0,0x10);
    }
    if (param_4 == (UObject *)0x0) {
      EVar5 = RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|RF_HasExternalPackage|
              RF_WillBeLoaded|RF_ImmutableDefaultObject|RF_NonPIEDuplicateTransient|
              RF_StrongRefOnFrame|RF_DuplicateTransient|RF_InheritableComponentTemplate|
              RF_LoadCompleted|RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|
              RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|RF_NewerVersionExists|
              RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
              RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|
              RF_ArchetypeObject|RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|
              RF_Standalone|RF_Public;
    }
    else {
      EVar5 = *(EObjectFlags *)&param_4->field_0x8 &
              (RF_Transient|RF_ArchetypeObject|RF_Transactional|RF_Public);
    }
    InitStaticDuplicateObjectParams
              ((FObjectDuplicationParameters *)local_e8,TVar9.DebugPtr,param_4,FVar1,EVar5,
               (UClass *)0x0,Normal,
               PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|ClusterRoot|
               ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
               AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|ReachabilityFlag0);
    local_e8._24_4_ =
         local_e8._24_4_ &
         (RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|RF_HasExternalPackage|
          RF_WillBeLoaded|RF_ImmutableDefaultObject|RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|
          RF_DuplicateTransient|RF_InheritableComponentTemplate|RF_LoadCompleted|
          RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|
          RF_FinishDestroyed|RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
          RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|RF_TagGarbageTemp|
          RF_MarkAsRootSet|RF_Transient|RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|
          RF_Standalone|RF_Public);
    if ((param_4 == (UObject *)0x0) ||
       (bVar3 = UObjectBaseUtility::IsTemplate
                          ((UObjectBaseUtility *)param_4,RF_ArchetypeObject|RF_ClassDefaultObject),
       !bVar3)) {
      local_e8._32_4_ =
           local_e8._32_4_ &
           (RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|RF_HasExternalPackage|
            RF_WillBeLoaded|RF_ImmutableDefaultObject|RF_NonPIEDuplicateTransient|
            RF_StrongRefOnFrame|RF_DuplicateTransient|RF_InheritableComponentTemplate|
            RF_LoadCompleted|RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|
            RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|RF_NewerVersionExists|
            RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
            RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|
            RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public);
    }
    else {
      local_e8._32_4_ = local_e8._32_4_ | RF_ArchetypeObject;
    }
    TVar9.DebugPtr = StaticDuplicateObjectEx((FObjectDuplicationParameters *)local_e8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar9.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar9.DebugPtr);
    }
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_e8 + 0x40));
  }
  if ((param_3 == Container) && (cVar4 = (**(code **)(this->_padding_ + 0x70))(this), cVar4 != '\0')
     ) {
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1421426f1:
      if (TVar9.DebugPtr == (UObject *)0x0) goto LAB_1421426f6;
    }
    else {
      if (TVar9.DebugPtr != (UObject *)0x0) {
        UE::GC::MarkAsReachable(TVar9.DebugPtr);
        goto LAB_1421426f1;
      }
LAB_1421426f6:
      if (((uint)this->_padding_ >> 0xc & 1) != 0) {
        if ((byte)LogProperty._0_1_ < 6) {
          return local_118;
        }
        FField::GetFullName((FField *)this,(FString *)local_100);
        pFVar11 = &::LOG_Static;
        goto LAB_142142733;
      }
    }
    pcVar2 = *(code **)(this->_padding_ + 0x1f0);
    local_108 = TVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar9.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar9.DebugPtr);
    }
    (*pcVar2)(this,param_2,&local_108,0);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar9.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar9.DebugPtr);
    }
    if (param_3 == Container) {
      param_2 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
    }
    if ((TVar9.DebugPtr != (UObject *)0x0) || (((uint)this->_padding_ >> 0xc & 1) == 0)) {
      pcVar2 = *(code **)(this->_padding_ + 0x1e0);
      local_108 = TVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar9.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar9.DebugPtr);
      }
      (*pcVar2)(this,param_2,&local_108);
      return local_118;
    }
    if ((byte)LogProperty._0_1_ < 6) {
      return local_118;
    }
    pFVar10 = FField::GetFullName((FField *)this,(FString *)local_100);
    if ((pFVar10->Data).ArrayNum == 0) {
      pFVar11 = &::LOG_Static;
    }
    else {
      pFVar11 = &::LOG_Static;
    }
LAB_142142733:
    UE::Logging::Private::BasicLog<6>(pFVar11,(FLogCategoryBase *)&LogProperty);
    if ((FScriptContainerElement *)local_100._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_100._0_8_);
    }
  }
  return local_118;
}

// InstanceSubobjects @ 142143030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FObjectPropertyBase::InstanceSubobjects
          (FObjectPropertyBase *this,void *param_1,void *param_2,TNotNull<UObject_*> param_3,
          FObjectInstancingGraph *param_4)

{
  EInstancePropertyValueFlags EVar1;
  TNotNull<UObject_*> TVar2;
  undefined8 *puVar3;
  UObject *pUVar4;
  EInstancePropertyValueFlags EVar5;
  int iVar6;
  TNotNull<UObject_*> local_res8;
  undefined1 local_48 [8];
  FString local_40;
  
  iVar6 = 0;
  if (0 < (int)this->_padding_) {
    do {
      (**(code **)(this->_padding_ + 0x200))
                (this,&local_res8,
                 (longlong)(iVar6 * *(int *)((longlong)&this->_padding_ + 4)) + (longlong)param_1);
      TVar2.Val = local_res8.Val;
      if (local_res8.Val != (UObject *)0x0) {
        if (param_2 == (void *)0x0) {
          pUVar4 = (UObject *)0x0;
        }
        else {
          puVar3 = (undefined8 *)
                   (**(code **)(this->_padding_ + 0x200))
                             (this,local_48,
                              (longlong)(iVar6 * *(int *)((longlong)&this->_padding_ + 4)) +
                              (longlong)param_2);
          pUVar4 = (UObject *)*puVar3;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        EVar5 = (EInstancePropertyValueFlags)((ulonglong)this->_padding_ >> 0x13) & CausesInstancing
        ;
        EVar1 = EVar5 | AllowSelfReference;
        if (((ulonglong)this->_padding_ >> 0x3c & 1) == 0) {
          EVar1 = EVar5;
        }
        pUVar4 = FObjectInstancingGraph::InstancePropertyValue(param_4,pUVar4,TVar2,param_3,EVar1);
        if ((pUVar4 == (UObject *)0x0) && (((uint)this->_padding_ >> 0xc & 1) != 0)) {
          if (5 < (byte)LogProperty._0_1_) {
            FField::GetFullName((FField *)this,&local_40);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
            if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_40.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          (**(code **)(this->_padding_ + 0x1d8))
                    (this,(longlong)(iVar6 * *(int *)((longlong)&this->_padding_ + 4)) +
                          (longlong)param_1,pUVar4);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)this->_padding_);
  }
  return;
}

// NetSerializeItem @ 142145600

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FObjectPropertyBase::NetSerializeItem
          (FObjectPropertyBase *this,FArchive *param_1,UPackageMap *param_2,void *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined1 uVar1;
  longlong local_res8;
  FString local_18;
  
  local_res8 = (**(code **)(this->_padding_ + 0x1f8))(this,param_3);
  uVar1 = (**(code **)(param_2->_padding_ + 0x2b8))
                    (param_2,param_1,(this->PropertyClass).field0_0x0.DebugPtr,&local_res8,0);
  if (local_res8 != 0) {
    if ((*(uint *)(local_res8 + 8) >> 0x1e & 1) != 0) {
      return (bool)uVar1;
    }
    if (local_res8 != 0) goto LAB_1421456c9;
  }
  if (((uint)this->_padding_ >> 0xc & 1) != 0) {
    if ((byte)LogProperty._0_1_ < 6) {
      return (bool)uVar1;
    }
    FField::GetFullName((FField *)this,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return (bool)uVar1;
    }
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return (bool)uVar1;
  }
LAB_1421456c9:
  (**(code **)(this->_padding_ + 0x1d8))(this,param_3);
  return (bool)uVar1;
}

// ParseObjectPropertyValue @ 142146120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FObjectPropertyBase::ParseObjectPropertyValue
          (FProperty *param_1,UObject *param_2,UClass *param_3,uint param_4,wchar_t **param_5,
          TObjectPtr<UObject> *param_6,FUObjectSerializeContext *param_7,bool param_8)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  TObjectPtr<UObject> TVar7;
  UClass *pUVar8;
  FProperty *pFVar9;
  undefined1 auStackY_328 [32];
  undefined4 in_stack_fffffffffffffd0c;
  FString local_2c0;
  undefined1 local_2a8 [16];
  FString local_298;
  FString local_288;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_328;
  if ((param_1 == (FProperty *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Property",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBaseObject.cpp"
                         ,0x158,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (param_3 == (UClass *)0x0) {
    if (1 < (byte)LogProperty._0_1_) {
      FField::GetFullName((FField *)param_1,&local_2c0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
      if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
      }
    }
    (param_6->field0_0x0).DebugPtr = (UObject *)0x0;
    return false;
  }
  local_2c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)*param_5;
  local_278.Base = local_258;
  local_278.CurPos = local_258;
  local_278.End = (wchar_t *)local_58;
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  pwVar6 = FPropertyHelpers::ReadToken
                     ((wchar_t *)local_2c0.Data.AllocatorInstance.Data,&local_278,true);
  *param_5 = pwVar6;
  if (pwVar6 == (wchar_t *)0x0) {
LAB_14214640d:
    bVar3 = false;
  }
  else {
    if (((int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1) == 4) &&
       (iVar5 = FGenericPlatformStricmp::Strnicmp(L"None",local_278.Base,4), iVar5 == 0)) {
      (param_6->field0_0x0).DebugPtr = (UObject *)0x0;
    }
    else {
      SkipWhitespace(param_5);
      if (**param_5 == L'\'') {
        pwVar6 = *param_5 + 1;
        local_278.CurPos = local_278.Base;
        *param_5 = pwVar6;
        pwVar6 = FPropertyHelpers::ReadToken(pwVar6,&local_278,true);
        *param_5 = pwVar6;
        if ((pwVar6 == (wchar_t *)0x0) || (wVar1 = *pwVar6, *param_5 = pwVar6 + 1, wVar1 != L'\''))
        goto LAB_14214640d;
        if (local_278.End < local_278.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_278,1);
        }
        *local_278.CurPos = L'\0';
        pFVar9 = (FProperty *)local_2a8;
      }
      else {
        if (local_278.End < local_278.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_278,1);
        }
        *local_278.CurPos = L'\0';
        pFVar9 = (FProperty *)(local_2a8 + 8);
      }
      TVar7 = FindImportedObject(pFVar9,(UObject *)param_1,(UClass *)param_2,param_3,
                                 (wchar_t *)param_3,(uint)local_278.Base,
                                 (FUObjectSerializeContext *)
                                 CONCAT44(in_stack_fffffffffffffd0c,param_4),SUB81(param_7,0));
      TObjectPtr<UObject>::operator=(param_6,(TObjectPtr<UObject> *)TVar7.field0_0x0);
      if ((param_6->field0_0x0).DebugPtr != (UObject *)0x0) {
        pUVar8 = UE::CoreUObject::Private::GetClass((param_6->field0_0x0).DebugPtr);
        iVar5 = (int)param_3->_padding_;
        if (((int)pUVar8->_padding_ < iVar5) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
            &param_3->_padding_)) {
          if (((param_4 & 2) != 0) && (1 < (byte)LogProperty._0_1_)) {
            FField::GetFullName((FField *)param_1,&local_298);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
            if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_298.Data.AllocatorInstance.Data);
            }
          }
          (param_6->field0_0x0).DebugPtr = (UObject *)0x0;
          goto LAB_14214640d;
        }
      }
      if ((param_6->field0_0x0).DebugPtr == (UObject *)0x0) {
        if (((param_4 & 2) != 0) && (2 < (byte)LogProperty._0_1_)) {
          FField::GetFullName((FField *)param_1,&local_288);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14214640d;
      }
    }
    bVar3 = true;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
  return bVar3;
}

// PostDuplicate @ 142146960

void __thiscall FObjectPropertyBase::PostDuplicate(FObjectPropertyBase *this,FField *param_1)

{
  UObject *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = param_1[2].Owner.Container.Object, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->PropertyClass).field0_0x0 = (TObjectPtr<UClass>_u_0)param_1[2].Owner.Container;
  *(int *)&this->_padding_ = (int)param_1[1]._padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1[1]._padding_ + 4);
  this->_padding_ = (longlong)param_1[1].ClassPrivate;
  *(undefined2 *)&this->_padding_ = *(undefined2 *)&param_1[1].Owner.Container;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1[1].Owner.Container + 4);
  this->_padding_ = (longlong)param_1[2].ClassPrivate;
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1[1].Owner.Container + 2);
  FField::PostDuplicate((FField *)this,param_1);
  return;
}

// ResolveVisitedPathInfo @ 14214b2a0

void * __thiscall
FObjectPropertyBase::ResolveVisitedPathInfo
          (FObjectPropertyBase *this,void *param_1,FPropertyVisitorInfo *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  UObject *pUVar1;
  UClass *pUVar2;
  void *pvVar3;
  
  pUVar1 = (UObject *)(**(code **)(this->_padding_ + 0x1f8))();
  if (pUVar1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    pUVar2 = UE::CoreUObject::Private::GetClass(pUVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar2->_padding_ + 0x348);
                    /* WARNING: Could not recover jumptable at 0x00014214b2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (void *)(*UNRECOVERED_JUMPTABLE)(pUVar2,pUVar1,param_2,UNRECOVERED_JUMPTABLE);
    return pvVar3;
  }
  return (void *)0x0;
}

// SameType @ 14214b530

bool __thiscall FObjectPropertyBase::SameType(FObjectPropertyBase *this,FProperty *param_1)

{
  char cVar1;
  
  if (param_1 == (FProperty *)0x0) {
    return false;
  }
  if (this->_padding_ != param_1->_padding_) {
    if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x1a & 1) == 0) {
      return false;
    }
    cVar1 = (**(code **)(param_1->_padding_ + 0x220))(param_1,this);
    if (cVar1 == '\0') {
      return false;
    }
  }
  if ((this->PropertyClass).field0_0x0.DebugPtr != (UClass *)param_1[1]._padding_) {
    return false;
  }
  return true;
}

// Serialize @ 14214ca40

void __thiscall FObjectPropertyBase::Serialize(FObjectPropertyBase *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FFieldVariant local_res8;
  FObjectPropertyBase *local_res10;
  
  FProperty::Serialize((FProperty *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->PropertyClass);
  if ((((param_1->field_0x28 & 1) != 0) || ((param_1->field_0x2b & 1) != 0)) &&
     ((this->PropertyClass).field0_0x0.DebugPtr != (UClass *)0x0)) {
    pUVar3 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->PropertyClass,pUVar3);
    if ((bVar2) && (pUVar3 = (this->PropertyClass).field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
      local_res10 = this;
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
      TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::
      Emplace<FFieldVariant_const_&>
                ((TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator> *)
                 &pUVar3[1].bCooked,&local_res8,(bool *)&local_res10);
    }
  }
  return;
}

// SetObjectPropertyValue @ 142150160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FObjectPropertyBase::SetObjectPropertyValue
          (FObjectPropertyBase *this,void *param_1,UObject *param_2)

{
  FString local_18;
  
  if ((param_2 == (UObject *)0x0) && (((uint)this->_padding_ >> 0xc & 1) != 0)) {
    if (5 < (byte)LogProperty._0_1_) {
      FField::GetFullName((FField *)this,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001421501c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x1d8))();
  return;
}

// SetObjectPropertyValueUnchecked @ 1421501e0

void __thiscall
FObjectPropertyBase::SetObjectPropertyValueUnchecked
          (FObjectPropertyBase *this,void *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBaseObject.cpp"
                     ,0x28d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetObjectPropertyValueUnchecked_InContainer @ 142150220

void __thiscall
FObjectPropertyBase::SetObjectPropertyValueUnchecked_InContainer
          (FObjectPropertyBase *this,void *param_1,UObject *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBaseObject.cpp"
                     ,0x297,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetObjectPropertyValue_InContainer @ 142150260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FObjectPropertyBase::SetObjectPropertyValue_InContainer
          (FObjectPropertyBase *this,void *param_1,UObject *param_2,int param_3)

{
  FString local_18;
  
  if ((param_2 == (UObject *)0x0) && (((uint)this->_padding_ >> 0xc & 1) != 0)) {
    if (5 < (byte)LogProperty._0_1_) {
      FField::GetFullName((FField *)this,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001421502c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x1e8))();
  return;
}

// SetObjectPtrPropertyValue @ 1421502e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FObjectPropertyBase::SetObjectPtrPropertyValue
          (FObjectPropertyBase *this,void *param_1,TObjectPtr<UObject> param_2)

{
  code *pcVar1;
  UObject *local_res18 [2];
  FString local_18;
  
  local_res18[0] = *(UObject **)param_2.field0_0x0;
  if ((local_res18[0] == (UObject *)0x0) && (((uint)this->_padding_ >> 0xc & 1) != 0)) {
    if (5 < (byte)LogProperty._0_1_) {
      FField::GetFullName((FField *)this,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    pcVar1 = *(code **)(this->_padding_ + 0x1e0);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    (*pcVar1)(this,param_1,local_res18);
  }
  return;
}

// SetObjectPtrPropertyValueUnchecked @ 1421503b0

void __thiscall
FObjectPropertyBase::SetObjectPtrPropertyValueUnchecked
          (FObjectPropertyBase *this,void *param_1,TObjectPtr<UObject> param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBaseObject.cpp"
                     ,0x292,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetObjectPtrPropertyValueUnchecked_InContainer @ 1421503f0

void __thiscall
FObjectPropertyBase::SetObjectPtrPropertyValueUnchecked_InContainer
          (FObjectPropertyBase *this,void *param_1,TObjectPtr<UObject> param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBaseObject.cpp"
                     ,0x29c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetObjectPtrPropertyValue_InContainer @ 142150430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FObjectPropertyBase::SetObjectPtrPropertyValue_InContainer
          (FObjectPropertyBase *this,void *param_1,TObjectPtr<UObject> param_2,int param_3)

{
  code *pcVar1;
  UObject *local_res18;
  FString local_18;
  
  local_res18 = *(UObject **)param_2.field0_0x0;
  if ((local_res18 == (UObject *)0x0) && (((uint)this->_padding_ >> 0xc & 1) != 0)) {
    if (5 < (byte)LogProperty._0_1_) {
      FField::GetFullName((FField *)this,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    pcVar1 = *(code **)(this->_padding_ + 0x1f0);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18);
    }
    (*pcVar1)(this,param_1,&local_res18,param_3);
  }
  return;
}

// SetPropertyClass @ 142150530

void __thiscall FObjectPropertyBase::SetPropertyClass(FObjectPropertyBase *this,UClass *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FFieldVariant local_res8;
  FObjectPropertyBase *local_res10;
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
  if ((this->PropertyClass).field0_0x0.DebugPtr != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->PropertyClass,pUVar4);
    if ((bVar3) && (pUVar4 = (this->PropertyClass).field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)) {
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
  (this->PropertyClass).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticClass @ 1421525a0

FFieldClass * __cdecl FObjectPropertyBase::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FObjectPropertyBase",0x4000000,
                 CASTCLASS_FObjectPropertyBase|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct
                );
      atexit(`FObjectPropertyBase::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// StaticIdentical @ 142152ae0

bool __cdecl FObjectPropertyBase::StaticIdentical(UObject *param_1,UObject *param_2,uint param_3)

{
  FName FVar1;
  bool bVar2;
  UObject *pUVar3;
  
  if (param_1 == param_2) {
    return true;
  }
  if ((param_1 != (UObject *)0x0) && (param_2 != (UObject *)0x0)) {
    bVar2 = false;
    if ((*(longlong *)&param_1->field_0x10 == *(longlong *)&param_2->field_0x10) &&
       (*(longlong *)&param_1->field_0x18 == *(longlong *)&param_2->field_0x18)) {
      if ((param_3 >> 9 & 1) == 0) {
        if ((param_3 & 0x100) == 0) {
          return false;
        }
      }
      else if ((((param_3 & 0x100) == 0) &&
               (bVar2 = UObjectBaseUtility::IsTemplate
                                  ((UObjectBaseUtility *)param_1,
                                   RF_ArchetypeObject|RF_ClassDefaultObject), bVar2)) &&
              (bVar2 = UObjectBaseUtility::IsTemplate
                                 ((UObjectBaseUtility *)param_2,
                                  RF_ArchetypeObject|RF_ClassDefaultObject), bVar2)) {
        return false;
      }
      if (((param_3 >> 10 & 1) != 0) &&
         (FVar1.ComparisonIndex.Value = *(uint *)&param_1->field_0x18,
         FVar1.Number = *(uint *)&param_1->field_0x1c,
         pUVar3 = UClass::GetDefaultSubobjectByName(*(UClass **)&param_1->field_0x10,FVar1),
         pUVar3 == (UObject *)0x0)) {
        return false;
      }
      bVar2 = AreInstancedObjectsIdentical(param_1,param_2,param_3);
    }
    return bVar2;
  }
  return false;
}

// Visit @ 142154da0

EPropertyVisitorControlFlow __thiscall
FObjectPropertyBase::Visit
          (FObjectPropertyBase *this,FPropertyVisitorContext *param_1,
          TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)>
          *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  EPropertyVisitorControlFlow EVar4;
  FPropertyVisitorInfo *pFVar5;
  UClass *pUVar6;
  undefined8 local_38;
  undefined8 local_30;
  FPropertyVisitorPath *local_28;
  UObject *local_20;
  void *local_18;
  EScope local_10;
  
  pFVar5 = FPropertyVisitorPath::Top(param_1->Path);
  pFVar5->bContainsInnerProperties = true;
  pcVar1 = *(code **)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  pFVar5 = FPropertyVisitorPath::Top(param_1->Path);
  if (((FObjectPropertyBase *)pFVar5->Property != this) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.Path.Top().Property == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                         ,0x4d8,L"The property set in the info has to match to this property"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    EVar4 = (*pcVar1)();
    return EVar4;
  }
  EVar4 = (*pcVar1)(uVar2,param_1);
  if (EVar4 == StepInto) {
    local_20 = (UObject *)(**(code **)(this->_padding_ + 0x1f8))(this,(param_1->Data).PropertyData);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (local_20 == (UObject *)0x0) {
        return StepInto;
      }
      UE::GC::MarkAsReachable(local_20);
    }
    if (local_20 != (UObject *)0x0) {
      local_28 = param_1->Path;
      local_18 = (param_1->Data).ParentStructData;
      local_10 = param_1->Scope;
      pUVar6 = UE::CoreUObject::Private::GetClass(local_20);
      local_38 = *(undefined8 *)param_2;
      local_30 = *(undefined8 *)&param_2->field_0x8;
      EVar4 = (**(code **)(pUVar6->_padding_ + 0x340))(pUVar6,&local_28,&local_38);
    }
  }
  return EVar4;
}

// GetWrappedUObjectPtrValues<FLazyObjectPtr,UObject_*> @ 142156ad0

void __thiscall
FObjectPropertyBase::GetWrappedUObjectPtrValues<FLazyObjectPtr,UObject_*>
          (FObjectPropertyBase *this,UObject **param_1,void *param_2,EPropertyMemoryAccess param_3,
          int param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UObject *pUVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  TPersistentObjectPtr<FUniqueObjectGuid> local_38;
  
  uVar9 = (ulonglong)param_4;
  uVar8 = (ulonglong)(uint)param_5;
  if (((((param_4 < 0) || (param_5 < 0)) || (iVar1 = (int)this->_padding_, iVar1 < param_4)) ||
      ((iVar1 < param_5 || (iVar1 - param_5 < param_4)))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xb50,
                         L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3 == InContainer) {
    cVar4 = (**(code **)(this->_padding_ + 0x78))(this);
    if (cVar4 != '\0') {
      if (param_5 == 1) {
        local_38.WeakPtr.ObjectIndex = 0;
        local_38.WeakPtr.ObjectSerialNumber = 0;
        local_38.ObjectID.Guid.C = 0;
        local_38.ObjectID.Guid.D = 0;
        local_38.ObjectID.Guid.A = 0;
        local_38.ObjectID.Guid.B = 0;
        FProperty::GetValue_InContainer((FProperty *)this,param_2,&local_38);
        pUVar5 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(&local_38);
        *param_1 = pUVar5;
        return;
      }
      pvVar6 = FProperty::AllocateAndInitializeValue((FProperty *)this);
      FProperty::GetValue_InContainer((FProperty *)this,param_2,pvVar6);
      if (param_5 != 0) {
        lVar7 = 0;
        do {
          pUVar5 = TPersistentObjectPtr<FUniqueObjectGuid>::Get
                             ((TPersistentObjectPtr<FUniqueObjectGuid> *)
                              ((longlong)pvVar6 + (longlong)(int)uVar9 * 0x18));
          param_1[lVar7] = pUVar5;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          lVar7 = lVar7 + 1;
        } while (lVar7 != param_5);
      }
      FProperty::DestroyAndFreeValue((FProperty *)this,pvVar6);
      return;
    }
    if (((param_4 < 0) || ((int)this->_padding_ <= param_4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((param_2 == (void *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    param_2 = (void *)((longlong)param_2 +
                      uVar9 * (longlong)*(int *)((longlong)&this->_padding_ + 4) +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4));
  }
  if (param_5 == 1) {
    pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0x1f8))(this,param_2);
    *param_1 = pUVar5;
  }
  else if (param_5 != 0) {
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    do {
      pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0x1f8))(this,param_2);
      param_2 = (void *)((longlong)param_2 + (longlong)iVar1);
      *param_1 = pUVar5;
      param_1 = param_1 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

// GetWrappedUObjectPtrValues<FObjectPtr,UObject_*> @ 142156cf0

void __thiscall
FObjectPropertyBase::GetWrappedUObjectPtrValues<FObjectPtr,UObject_*>
          (FObjectPropertyBase *this,UObject **param_1,void *param_2,EPropertyMemoryAccess param_3,
          int param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  UObject *pUVar5;
  UObject **ppUVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  UObject *local_28 [2];
  
  lVar11 = (longlong)param_4;
  uVar9 = (ulonglong)(uint)param_5;
  if (((((param_4 < 0) || (param_5 < 0)) || (iVar8 = (int)this->_padding_, iVar8 < param_4)) ||
      ((iVar8 < param_5 || (iVar8 - param_5 < param_4)))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xb50,
                         L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3 == InContainer) {
    cVar3 = (**(code **)(this->_padding_ + 0x78))(this);
    if (cVar3 != '\0') {
      if (param_5 == 1) {
        local_28[0] = (UObject *)0x0;
        FProperty::GetValue_InContainer((FProperty *)this,param_2,local_28);
        *param_1 = local_28[0];
        return;
      }
      pvVar4 = FProperty::AllocateAndInitializeValue((FProperty *)this);
      FProperty::GetValue_InContainer((FProperty *)this,param_2,pvVar4);
      iVar7 = 0;
      iVar8 = iVar7;
      if ((param_5 != 0) && (iVar8 = 0, 1 < (uint)param_5)) {
        ppUVar6 = (UObject **)((longlong)pvVar4 + lVar11 * 8);
        if (((UObject **)((longlong)pvVar4 + (longlong)(param_5 + -1 + param_4) * 8) < param_1) ||
           (param_1 + (param_5 + -1) < ppUVar6)) {
          memcpy(param_1,ppUVar6,(longlong)param_5 * 8);
          do {
            iVar7 = iVar7 + 1;
            iVar8 = iVar7;
          } while (iVar7 != param_5);
        }
      }
      lVar10 = (longlong)iVar8;
      if (lVar10 != param_5) {
        ppUVar6 = param_1 + lVar10;
        lVar10 = param_5 - lVar10;
        do {
          *ppUVar6 = *(UObject **)
                      ((lVar11 * 8 - (longlong)param_1) + (longlong)pvVar4 + (longlong)ppUVar6);
          ppUVar6 = ppUVar6 + 1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      FProperty::DestroyAndFreeValue((FProperty *)this,pvVar4);
      return;
    }
    if (((param_4 < 0) || ((int)this->_padding_ <= param_4)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar2)
       ) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_2 == (void *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_2 = (void *)((longlong)param_2 +
                      *(int *)((longlong)&this->_padding_ + 4) * lVar11 +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4));
  }
  if (param_5 == 1) {
    pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0x1f8))(this,param_2);
    *param_1 = pUVar5;
  }
  else if (param_5 != 0) {
    iVar8 = *(int *)((longlong)&this->_padding_ + 4);
    do {
      pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0x1f8))(this,param_2);
      param_2 = (void *)((longlong)param_2 + (longlong)iVar8);
      *param_1 = pUVar5;
      param_1 = param_1 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

// GetWrappedUObjectPtrValues<FSoftObjectPtr,UObject_*> @ 142156f60

void __thiscall
FObjectPropertyBase::GetWrappedUObjectPtrValues<FSoftObjectPtr,UObject_*>
          (FObjectPropertyBase *this,UObject **param_1,void *param_2,EPropertyMemoryAccess param_3,
          int param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  FUObjectItem *pFVar7;
  void *pvVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  UObject *local_48;
  FWeakObjectPtr local_40;
  FSoftObjectPath local_38;
  
  uVar11 = (ulonglong)param_4;
  uVar10 = (ulonglong)(uint)param_5;
  if (((((param_4 < 0) || (param_5 < 0)) || (iVar1 = (int)this->_padding_, iVar1 < param_4)) ||
      ((iVar1 < param_5 || (iVar1 - param_5 < param_4)))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xb50,
                         L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3 != InContainer) {
LAB_1421571f5:
    if (param_5 == 1) {
      pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0x1f8))(this,param_2);
      *param_1 = pUVar5;
    }
    else if (param_5 != 0) {
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      do {
        pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0x1f8))(this,param_2);
        param_2 = (void *)((longlong)param_2 + (longlong)iVar1);
        *param_1 = pUVar5;
        param_1 = param_1 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    return;
  }
  cVar4 = (**(code **)(this->_padding_ + 0x78))(this);
  if (cVar4 == '\0') {
    if (((param_4 < 0) || ((int)this->_padding_ <= param_4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((param_2 == (void *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    param_2 = (void *)((longlong)param_2 +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4) * uVar11 +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4));
    goto LAB_1421571f5;
  }
  if (param_5 != 1) {
    pvVar8 = FProperty::AllocateAndInitializeValue((FProperty *)this);
    FProperty::GetValue_InContainer((FProperty *)this,param_2,pvVar8);
    if (param_5 != 0) {
      lVar9 = 0;
      do {
        pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                           ((TPersistentObjectPtr<FSoftObjectPath> *)
                            ((longlong)pvVar8 + (longlong)(int)uVar11 * 0x28));
        param_1[lVar9] = pUVar5;
        uVar11 = (ulonglong)((int)uVar11 + 1);
        lVar9 = lVar9 + 1;
      } while (lVar9 != param_5);
    }
    FProperty::DestroyAndFreeValue((FProperty *)this,pvVar8);
    return;
  }
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  local_40.ObjectIndex = 0;
  local_40.ObjectSerialNumber = 0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_38.SubPathString,0);
  FProperty::GetValue_InContainer((FProperty *)this,param_2,&local_40);
  pUVar5 = FWeakObjectPtr::Get(&local_40);
  if ((pUVar5 != (UObject *)0x0) || (local_38.AssetPath.PackageName == (FName)0x0))
  goto LAB_142157107;
  pUVar6 = FSoftObjectPath::ResolveObject(&local_38);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  bVar3 = (*IsInAsyncLoadingThread)();
  if (((bVar3) && (pUVar6 != (UObject *)0x0)) &&
     (pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar6->field_0xc),
     ((pFVar7->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_1421570ec:
    bVar3 = true;
    if ((*(uint *)&pUVar6->field_0x8 >> 0x1e & 1) != 0) goto LAB_1421570fa;
  }
  else {
    local_48 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&local_40,(FObjectPtr)&local_48);
    if (pUVar6 != (UObject *)0x0) goto LAB_1421570ec;
LAB_1421570fa:
    bVar3 = false;
  }
  pUVar5 = (UObject *)0x0;
  if (bVar3) {
    pUVar5 = pUVar6;
  }
LAB_142157107:
  *param_1 = pUVar5;
  if (local_38.SubPathString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  return;
}

// GetWrappedUObjectPtrValues<FSoftObjectPtr,TObjectPtr<UObject>_> @ 142157260

void __thiscall
FObjectPropertyBase::GetWrappedUObjectPtrValues<FSoftObjectPtr,TObjectPtr<UObject>_>
          (FObjectPropertyBase *this,TObjectPtr<UObject> *param_1,void *param_2,
          EPropertyMemoryAccess param_3,int param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  FUObjectItem *pFVar7;
  void *pvVar8;
  TObjectPtr<UObject> TVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  UObject *local_48;
  FWeakObjectPtr local_40;
  FSoftObjectPath local_38;
  
  uVar11 = (ulonglong)param_4;
  uVar12 = (ulonglong)(uint)param_5;
  if (((((param_4 < 0) || (param_5 < 0)) || (iVar1 = (int)this->_padding_, iVar1 < param_4)) ||
      ((iVar1 < param_5 || (iVar1 - param_5 < param_4)))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xb50,
                         L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3 != InContainer) {
LAB_14215751e:
    if (param_5 == 1) {
      pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0x1f8))(this,param_2);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      (param_1->field0_0x0).DebugPtr = pUVar5;
    }
    else if (param_5 != 0) {
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      do {
        TVar9.field0_0x0 =
             (TObjectPtr<UObject>_u_0)(**(code **)(this->_padding_ + 0x1f8))(this,param_2);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar9.field0_0x0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar9.field0_0x0);
        }
        *param_1 = (TObjectPtr<UObject>)TVar9.field0_0x0;
        param_2 = (void *)((longlong)param_2 + (longlong)iVar1);
        param_1 = param_1 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    return;
  }
  cVar4 = (**(code **)(this->_padding_ + 0x78))(this);
  if (cVar4 == '\0') {
    if (((param_4 < 0) || ((int)this->_padding_ <= param_4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((param_2 == (void *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    param_2 = (void *)((longlong)param_2 +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4) * uVar11 +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4));
    goto LAB_14215751e;
  }
  if (param_5 != 1) {
    pvVar8 = FProperty::AllocateAndInitializeValue((FProperty *)this);
    FProperty::GetValue_InContainer((FProperty *)this,param_2,pvVar8);
    if (param_5 != 0) {
      lVar10 = 0;
      do {
        TVar9.field0_0x0 =
             (TObjectPtr<UObject>_u_0)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)
                        ((longlong)pvVar8 + (longlong)(int)uVar11 * 0x28));
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar9.field0_0x0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar9.field0_0x0);
        }
        param_1[lVar10].field0_0x0 = TVar9.field0_0x0;
        uVar11 = (ulonglong)((int)uVar11 + 1);
        lVar10 = lVar10 + 1;
      } while (lVar10 != param_5);
    }
    FProperty::DestroyAndFreeValue((FProperty *)this,pvVar8);
    return;
  }
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  local_40.ObjectIndex = 0;
  local_40.ObjectSerialNumber = 0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_38.SubPathString,0);
  FProperty::GetValue_InContainer((FProperty *)this,param_2,&local_40);
  pUVar5 = FWeakObjectPtr::Get(&local_40);
  if ((pUVar5 != (UObject *)0x0) || (local_38.AssetPath.PackageName == (FName)0x0))
  goto LAB_142157401;
  pUVar6 = FSoftObjectPath::ResolveObject(&local_38);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  bVar3 = (*IsInAsyncLoadingThread)();
  if (((bVar3) && (pUVar6 != (UObject *)0x0)) &&
     (pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar6->field_0xc),
     ((pFVar7->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_1421573e6:
    bVar3 = true;
    if ((*(uint *)&pUVar6->field_0x8 >> 0x1e & 1) != 0) goto LAB_1421573f4;
  }
  else {
    local_48 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&local_40,(FObjectPtr)&local_48);
    if (pUVar6 != (UObject *)0x0) goto LAB_1421573e6;
LAB_1421573f4:
    bVar3 = false;
  }
  pUVar5 = (UObject *)0x0;
  if (bVar3) {
    pUVar5 = pUVar6;
  }
LAB_142157401:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  (param_1->field0_0x0).DebugPtr = pUVar5;
  if (local_38.SubPathString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  return;
}

// SetWrappedUObjectPtrValues<FLazyObjectPtr,UObject_*> @ 14215a560

void __thiscall
FObjectPropertyBase::SetWrappedUObjectPtrValues<FLazyObjectPtr,UObject_*>
          (FObjectPropertyBase *this,void *param_1,EPropertyMemoryAccess param_2,UObject **param_3,
          int param_4,int param_5)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  UObject *local_58;
  UObject *local_50;
  TPersistentObjectPtr<FUniqueObjectGuid> local_48;
  
  uVar8 = (ulonglong)param_4;
  uVar7 = (ulonglong)(uint)param_5;
  if (((((param_4 < 0) || (param_5 < 0)) || (iVar1 = (int)this->_padding_, iVar1 < param_4)) ||
      ((iVar1 < param_5 || (iVar1 - param_5 < param_4)))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xb8a,
                         L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2 == InContainer) {
    cVar5 = (**(code **)(this->_padding_ + 0x70))(this);
    if (cVar5 != '\0') {
      if (param_5 == 1) {
        pUVar2 = *param_3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_48.WeakPtr.ObjectIndex = 0;
        local_48.WeakPtr.ObjectSerialNumber = 0;
        local_48.ObjectID.Guid.C = 0;
        local_48.ObjectID.Guid.D = 0;
        local_48.ObjectID.Guid.A = 0;
        local_48.ObjectID.Guid.B = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_58 = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        TPersistentObjectPtr<FUniqueObjectGuid>::operator=(&local_48,(FObjectPtr)&local_58);
        FProperty::SetValue_InContainer((FProperty *)this,param_1,&local_48);
        return;
      }
      pvVar6 = FProperty::AllocateAndInitializeValue((FProperty *)this);
      FProperty::GetValue_InContainer((FProperty *)this,param_1,pvVar6);
      if (param_5 != 0) {
        lVar9 = 0;
        do {
          pUVar2 = param_3[lVar9];
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          local_50 = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          TPersistentObjectPtr<FUniqueObjectGuid>::operator=
                    ((TPersistentObjectPtr<FUniqueObjectGuid> *)
                     ((longlong)pvVar6 + (longlong)(int)uVar8 * 0x18),(FObjectPtr)&local_50);
          uVar8 = (ulonglong)((int)uVar8 + 1);
          lVar9 = lVar9 + 1;
        } while (lVar9 != param_5);
      }
      FProperty::SetValue_InContainer((FProperty *)this,param_1,pvVar6);
      FProperty::DestroyAndFreeValue((FProperty *)this,pvVar6);
      return;
    }
    if (((param_4 < 0) || ((int)this->_padding_ <= param_4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4)
       ) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_1 == (void *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1 = (void *)((longlong)param_1 +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4) * uVar8 +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4));
  }
  if (param_5 == 1) {
    SetObjectPropertyValue(this,param_1,*param_3);
  }
  else if (param_5 != 0) {
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    do {
      SetObjectPropertyValue(this,param_1,*param_3);
      param_1 = (void *)((longlong)param_1 + (longlong)iVar1);
      param_3 = param_3 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// SetWrappedUObjectPtrValues<FLazyObjectPtr,TObjectPtr<UObject>_> @ 14215a810

void __thiscall
FObjectPropertyBase::SetWrappedUObjectPtrValues<FLazyObjectPtr,TObjectPtr<UObject>_>
          (FObjectPropertyBase *this,void *param_1,EPropertyMemoryAccess param_2,
          TObjectPtr<UObject> *param_3,int param_4,int param_5)

{
  int iVar1;
  UObject *pUVar2;
  TObjectPtr<UObject>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  void *pvVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  UObject *local_58;
  TObjectPtr<UObject>_u_0 local_50;
  TPersistentObjectPtr<FUniqueObjectGuid> local_48;
  
  uVar10 = (ulonglong)param_4;
  uVar8 = (ulonglong)(uint)param_5;
  if (((((param_4 < 0) || (param_5 < 0)) || (iVar1 = (int)this->_padding_, iVar1 < param_4)) ||
      ((iVar1 < param_5 || (iVar1 - param_5 < param_4)))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xb8a,
                         L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_2 == InContainer) {
    cVar6 = (**(code **)(this->_padding_ + 0x70))(this);
    if (cVar6 != '\0') {
      if (param_5 == 1) {
        pUVar2 = (param_3->field0_0x0).DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar2 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
        }
        local_48.WeakPtr.ObjectIndex = 0;
        local_48.WeakPtr.ObjectSerialNumber = 0;
        local_48.ObjectID.Guid.C = 0;
        local_48.ObjectID.Guid.D = 0;
        local_48.ObjectID.Guid.A = 0;
        local_48.ObjectID.Guid.B = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_58 = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        TPersistentObjectPtr<FUniqueObjectGuid>::operator=(&local_48,(FObjectPtr)&local_58);
        FProperty::SetValue_InContainer((FProperty *)this,param_1,&local_48);
        return;
      }
      pvVar7 = FProperty::AllocateAndInitializeValue((FProperty *)this);
      FProperty::GetValue_InContainer((FProperty *)this,param_1,pvVar7);
      if (param_5 != 0) {
        lVar9 = 0;
        do {
          TVar3 = (TObjectPtr<UObject>_u_0)param_3[lVar9].field0_0x0.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (TVar3 != (UObject *)0x0) {
              UE::GC::MarkAsReachable((UObject *)TVar3);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar3);
            }
          }
          local_50 = TVar3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar3);
          }
          TPersistentObjectPtr<FUniqueObjectGuid>::operator=
                    ((TPersistentObjectPtr<FUniqueObjectGuid> *)
                     ((longlong)pvVar7 + (longlong)(int)uVar10 * 0x18),(FObjectPtr)&local_50);
          uVar10 = (ulonglong)((int)uVar10 + 1);
          lVar9 = lVar9 + 1;
        } while (lVar9 != param_5);
      }
      FProperty::SetValue_InContainer((FProperty *)this,param_1,pvVar7);
      FProperty::DestroyAndFreeValue((FProperty *)this,pvVar7);
      return;
    }
    if (((param_4 < 0) || ((int)this->_padding_ <= param_4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5)
       ) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_1 == (void *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    param_1 = (void *)((longlong)param_1 +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4) * uVar10 +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4));
  }
  if (param_5 == 1) {
    SetObjectPropertyValue(this,param_1,(param_3->field0_0x0).DebugPtr);
  }
  else if (param_5 != 0) {
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    do {
      SetObjectPropertyValue(this,param_1,param_3->field0_0x0);
      param_1 = (void *)((longlong)param_1 + (longlong)iVar1);
      param_3 = param_3 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

// SetWrappedUObjectPtrValues<FObjectPtr,UObject_*> @ 14215ab00

void __thiscall
FObjectPropertyBase::SetWrappedUObjectPtrValues<FObjectPtr,UObject_*>
          (FObjectPropertyBase *this,void *param_1,EPropertyMemoryAccess param_2,UObject **param_3,
          int param_4,int param_5)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  UObject *local_28 [2];
  
  uVar8 = (ulonglong)(uint)param_5;
  if (((((param_4 < 0) || (param_5 < 0)) || (iVar1 = (int)this->_padding_, iVar1 < param_4)) ||
      ((iVar1 < param_5 || (iVar1 - param_5 < param_4)))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xb8a,
                         L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2 == InContainer) {
    cVar5 = (**(code **)(this->_padding_ + 0x70))(this);
    if (cVar5 != '\0') {
      if (param_5 == 1) {
        local_28[0] = *param_3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_28[0]);
        }
        FProperty::SetValue_InContainer((FProperty *)this,param_1,local_28);
        return;
      }
      pvVar6 = FProperty::AllocateAndInitializeValue((FProperty *)this);
      FProperty::GetValue_InContainer((FProperty *)this,param_1,pvVar6);
      lVar7 = (longlong)param_5;
      if (param_5 != 0) {
        lVar9 = (longlong)param_4 * 8 - (longlong)param_3;
        do {
          pUVar2 = *param_3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          *(UObject **)((longlong)param_3 + lVar9 + (longlong)pvVar6) = pUVar2;
          param_3 = param_3 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      FProperty::SetValue_InContainer((FProperty *)this,param_1,pvVar6);
      FProperty::DestroyAndFreeValue((FProperty *)this,pvVar6);
      return;
    }
    if (((param_4 < 0) || ((int)this->_padding_ <= param_4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4)
       ) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_1 == (void *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1 = (void *)((longlong)param_1 +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4) * (longlong)param_4 +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4));
  }
  if (param_5 == 1) {
    SetObjectPropertyValue(this,param_1,*param_3);
  }
  else if (param_5 != 0) {
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    do {
      SetObjectPropertyValue(this,param_1,*param_3);
      param_1 = (void *)((longlong)param_1 + (longlong)iVar1);
      param_3 = param_3 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

// SetWrappedUObjectPtrValues<FSoftObjectPtr,UObject_*> @ 14215ad30

void __thiscall
FObjectPropertyBase::SetWrappedUObjectPtrValues<FSoftObjectPtr,UObject_*>
          (FObjectPropertyBase *this,void *param_1,EPropertyMemoryAccess param_2,UObject **param_3,
          int param_4,int param_5)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  UObject *local_58;
  UObject *local_50;
  undefined1 local_48 [24];
  FUtf8String local_30;
  
  uVar9 = (ulonglong)param_4;
  uVar8 = (ulonglong)(uint)param_5;
  if (((((param_4 < 0) || (param_5 < 0)) || (iVar1 = (int)this->_padding_, iVar1 < param_4)) ||
      ((iVar1 < param_5 || (iVar1 - param_5 < param_4)))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xb8a,
                         L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2 == InContainer) {
    cVar5 = (**(code **)(this->_padding_ + 0x70))(this);
    if (cVar5 != '\0') {
      if (param_5 != 1) {
        pvVar6 = FProperty::AllocateAndInitializeValue((FProperty *)this);
        FProperty::GetValue_InContainer((FProperty *)this,param_1,pvVar6);
        if (param_5 != 0) {
          lVar7 = 0;
          do {
            local_50 = param_3[lVar7];
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_50);
            }
            FSoftObjectPtr::operator=
                      ((FSoftObjectPtr *)((longlong)pvVar6 + (longlong)(int)uVar9 * 0x28),
                       (FObjectPtr)&local_50);
            uVar9 = (ulonglong)((int)uVar9 + 1);
            lVar7 = lVar7 + 1;
          } while (lVar7 != param_5);
        }
        FProperty::SetValue_InContainer((FProperty *)this,param_1,pvVar6);
        FProperty::DestroyAndFreeValue((FProperty *)this,pvVar6);
        return;
      }
      pUVar2 = *param_3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_30.Data.ArrayNum = 0;
      local_30.Data.ArrayMax = 0;
      local_48._0_8_ = 0;
      local_48._16_8_ = 0;
      local_48._8_8_ = 0;
      FUtf8String::Reset(&local_30,0);
      local_58 = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FSoftObjectPtr::operator=((FSoftObjectPtr *)local_48,(FObjectPtr)&local_58);
      FProperty::SetValue_InContainer((FProperty *)this,param_1,local_48);
      if (local_30.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
      return;
    }
    if (((param_4 < 0) || ((int)this->_padding_ <= param_4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4)
       ) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_1 == (void *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1 = (void *)((longlong)param_1 +
                      uVar9 * (longlong)*(int *)((longlong)&this->_padding_ + 4) +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4));
  }
  if (param_5 == 1) {
    SetObjectPropertyValue(this,param_1,*param_3);
  }
  else if (param_5 != 0) {
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    do {
      SetObjectPropertyValue(this,param_1,*param_3);
      param_1 = (void *)((longlong)param_1 + (longlong)iVar1);
      param_3 = param_3 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

// SetWrappedUObjectPtrValues<FSoftObjectPtr,TObjectPtr<UObject>_> @ 14215afe0

void __thiscall
FObjectPropertyBase::SetWrappedUObjectPtrValues<FSoftObjectPtr,TObjectPtr<UObject>_>
          (FObjectPropertyBase *this,void *param_1,EPropertyMemoryAccess param_2,
          TObjectPtr<UObject> *param_3,int param_4,int param_5)

{
  int iVar1;
  UObject *pUVar2;
  TObjectPtr<UObject>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  void *pvVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  UObject *local_68;
  TObjectPtr<UObject>_u_0 local_60;
  undefined1 local_58 [24];
  FUtf8String local_40;
  
  uVar9 = (ulonglong)param_4;
  uVar8 = (ulonglong)(uint)param_5;
  if (((((param_4 < 0) || (param_5 < 0)) || (iVar1 = (int)this->_padding_, iVar1 < param_4)) ||
      ((iVar1 < param_5 || (iVar1 - param_5 < param_4)))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xb8a,
                         L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_2 == InContainer) {
    cVar6 = (**(code **)(this->_padding_ + 0x70))(this);
    if (cVar6 != '\0') {
      if (param_5 != 1) {
        pvVar7 = FProperty::AllocateAndInitializeValue((FProperty *)this);
        FProperty::GetValue_InContainer((FProperty *)this,param_1,pvVar7);
        if (param_5 != 0) {
          lVar10 = 0;
          do {
            TVar3 = (TObjectPtr<UObject>_u_0)param_3[lVar10].field0_0x0.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar3);
            }
            local_60 = TVar3;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar3);
            }
            FSoftObjectPtr::operator=
                      ((FSoftObjectPtr *)((longlong)pvVar7 + (longlong)(int)uVar9 * 0x28),
                       (FObjectPtr)&local_60);
            uVar9 = (ulonglong)((int)uVar9 + 1);
            lVar10 = lVar10 + 1;
          } while (lVar10 != param_5);
        }
        FProperty::SetValue_InContainer((FProperty *)this,param_1,pvVar7);
        FProperty::DestroyAndFreeValue((FProperty *)this,pvVar7);
        return;
      }
      pUVar2 = (param_3->field0_0x0).DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar2 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
      }
      local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_40.Data.ArrayNum = 0;
      local_40.Data.ArrayMax = 0;
      local_58._0_8_ = 0;
      local_58._16_8_ = 0;
      local_58._8_8_ = 0;
      FUtf8String::Reset(&local_40,0);
      local_68 = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FSoftObjectPtr::operator=((FSoftObjectPtr *)local_58,(FObjectPtr)&local_68);
      FProperty::SetValue_InContainer((FProperty *)this,param_1,local_58);
      if (local_40.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
      return;
    }
    if (((param_4 < 0) || ((int)this->_padding_ <= param_4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5)
       ) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_1 == (void *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    param_1 = (void *)((longlong)param_1 +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4) * uVar9 +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4));
  }
  if (param_5 == 1) {
    SetObjectPropertyValue(this,param_1,(param_3->field0_0x0).DebugPtr);
  }
  else if (param_5 != 0) {
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    do {
      SetObjectPropertyValue(this,param_1,param_3->field0_0x0);
      param_1 = (void *)((longlong)param_1 + (longlong)iVar1);
      param_3 = param_3 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

// GetWrappedUObjectPtrValues<FWeakObjectPtr,UObject_*> @ 1421a1af0

void __thiscall
FObjectPropertyBase::GetWrappedUObjectPtrValues<FWeakObjectPtr,UObject_*>
          (FObjectPropertyBase *this,UObject **param_1,void *param_2,EPropertyMemoryAccess param_3,
          int param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UObject *pUVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  FWeakObjectPtr local_28 [2];
  
  uVar9 = (ulonglong)param_4;
  uVar8 = (ulonglong)(uint)param_5;
  if (((((param_4 < 0) || (param_5 < 0)) || (iVar1 = (int)this->_padding_, iVar1 < param_4)) ||
      ((iVar1 < param_5 || (iVar1 - param_5 < param_4)))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xb50,
                         L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3 == InContainer) {
    cVar4 = (**(code **)(this->_padding_ + 0x78))(this);
    if (cVar4 != '\0') {
      if (param_5 == 1) {
        local_28[0].ObjectIndex = 0;
        local_28[0].ObjectSerialNumber = 0;
        FProperty::GetValue_InContainer((FProperty *)this,param_2,local_28);
        pUVar5 = FWeakObjectPtr::Get(local_28);
        *param_1 = pUVar5;
        return;
      }
      pvVar6 = FProperty::AllocateAndInitializeValue((FProperty *)this);
      FProperty::GetValue_InContainer((FProperty *)this,param_2,pvVar6);
      if (param_5 != 0) {
        lVar7 = 0;
        do {
          pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                       ((longlong)pvVar6 + (longlong)(int)uVar9 * 8));
          param_1[lVar7] = pUVar5;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          lVar7 = lVar7 + 1;
        } while (lVar7 != param_5);
      }
      FProperty::DestroyAndFreeValue((FProperty *)this,pvVar6);
      return;
    }
    if (((param_4 < 0) || ((int)this->_padding_ <= param_4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((param_2 == (void *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    param_2 = (void *)((longlong)param_2 +
                      uVar9 * (longlong)*(int *)((longlong)&this->_padding_ + 4) +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4));
  }
  if (param_5 == 1) {
    pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0x1f8))(this,param_2);
    *param_1 = pUVar5;
  }
  else if (param_5 != 0) {
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    do {
      pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0x1f8))(this,param_2);
      param_2 = (void *)((longlong)param_2 + (longlong)iVar1);
      *param_1 = pUVar5;
      param_1 = param_1 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

// SetWrappedUObjectPtrValues<FWeakObjectPtr,UObject_*> @ 1421ab5d0

void __thiscall
FObjectPropertyBase::SetWrappedUObjectPtrValues<FWeakObjectPtr,UObject_*>
          (FObjectPropertyBase *this,void *param_1,EPropertyMemoryAccess param_2,UObject **param_3,
          int param_4,int param_5)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  FWeakObjectPtr local_38;
  UObject *local_30;
  UObject *local_28 [2];
  
  uVar9 = (ulonglong)param_4;
  uVar8 = (ulonglong)(uint)param_5;
  if (((((param_4 < 0) || (param_5 < 0)) || (iVar1 = (int)this->_padding_, iVar1 < param_4)) ||
      ((iVar1 < param_5 || (iVar1 - param_5 < param_4)))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xb8a,
                         L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2 == InContainer) {
    cVar5 = (**(code **)(this->_padding_ + 0x70))(this);
    if (cVar5 != '\0') {
      if (param_5 == 1) {
        pUVar2 = *param_3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_38.ObjectIndex = 0;
        local_38.ObjectSerialNumber = 0;
        local_30 = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_30);
        FProperty::SetValue_InContainer((FProperty *)this,param_1,&local_38);
        return;
      }
      pvVar6 = FProperty::AllocateAndInitializeValue((FProperty *)this);
      FProperty::GetValue_InContainer((FProperty *)this,param_1,pvVar6);
      if (param_5 != 0) {
        lVar7 = 0;
        do {
          local_28[0] = param_3[lVar7];
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_28[0] != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(local_28[0]);
          }
          FWeakObjectPtr::operator=
                    ((FWeakObjectPtr *)((longlong)pvVar6 + (longlong)(int)uVar9 * 8),
                     (FObjectPtr)local_28);
          uVar9 = (ulonglong)((int)uVar9 + 1);
          lVar7 = lVar7 + 1;
        } while (lVar7 != param_5);
      }
      FProperty::SetValue_InContainer((FProperty *)this,param_1,pvVar6);
      FProperty::DestroyAndFreeValue((FProperty *)this,pvVar6);
      return;
    }
    if (((param_4 < 0) || ((int)this->_padding_ <= param_4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4)
       ) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_1 == (void *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1 = (void *)((longlong)param_1 +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4) * uVar9 +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4));
  }
  if (param_5 == 1) {
    SetObjectPropertyValue(this,param_1,*param_3);
  }
  else if (param_5 != 0) {
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    do {
      SetObjectPropertyValue(this,param_1,*param_3);
      param_1 = (void *)((longlong)param_1 + (longlong)iVar1);
      param_3 = param_3 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

// SetWrappedUObjectPtrValues<FWeakObjectPtr,TObjectPtr<UObject>_> @ 1421ab840

void __thiscall
FObjectPropertyBase::SetWrappedUObjectPtrValues<FWeakObjectPtr,TObjectPtr<UObject>_>
          (FObjectPropertyBase *this,void *param_1,EPropertyMemoryAccess param_2,
          TObjectPtr<UObject> *param_3,int param_4,int param_5)

{
  int iVar1;
  UObject *pUVar2;
  TObjectPtr<UObject>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  void *pvVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  FWeakObjectPtr local_48;
  UObject *local_40;
  TObjectPtr<UObject>_u_0 local_38;
  
  uVar9 = (ulonglong)param_4;
  uVar8 = (ulonglong)(uint)param_5;
  if (((((param_4 < 0) || (param_5 < 0)) || (iVar1 = (int)this->_padding_, iVar1 < param_4)) ||
      ((iVar1 < param_5 || (iVar1 - param_5 < param_4)))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xb8a,
                         L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_2 == InContainer) {
    cVar6 = (**(code **)(this->_padding_ + 0x70))(this);
    if (cVar6 != '\0') {
      if (param_5 == 1) {
        pUVar2 = (param_3->field0_0x0).DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar2 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
        }
        local_48.ObjectIndex = 0;
        local_48.ObjectSerialNumber = 0;
        local_40 = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_40);
        FProperty::SetValue_InContainer((FProperty *)this,param_1,&local_48);
        return;
      }
      pvVar7 = FProperty::AllocateAndInitializeValue((FProperty *)this);
      FProperty::GetValue_InContainer((FProperty *)this,param_1,pvVar7);
      if (param_5 != 0) {
        lVar10 = 0;
        do {
          TVar3 = (TObjectPtr<UObject>_u_0)param_3[lVar10].field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar3);
          }
          local_38 = TVar3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar3);
          }
          FWeakObjectPtr::operator=
                    ((FWeakObjectPtr *)((longlong)pvVar7 + (longlong)(int)uVar9 * 8),
                     (FObjectPtr)&local_38);
          uVar9 = (ulonglong)((int)uVar9 + 1);
          lVar10 = lVar10 + 1;
        } while (lVar10 != param_5);
      }
      FProperty::SetValue_InContainer((FProperty *)this,param_1,pvVar7);
      FProperty::DestroyAndFreeValue((FProperty *)this,pvVar7);
      return;
    }
    if (((param_4 < 0) || ((int)this->_padding_ <= param_4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5)
       ) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_1 == (void *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    param_1 = (void *)((longlong)param_1 +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4) * uVar9 +
                      (longlong)*(int *)((longlong)&this->_padding_ + 4));
  }
  if (param_5 == 1) {
    SetObjectPropertyValue(this,param_1,(param_3->field0_0x0).DebugPtr);
  }
  else if (param_5 != 0) {
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    do {
      SetObjectPropertyValue(this,param_1,param_3->field0_0x0);
      param_1 = (void *)((longlong)param_1 + (longlong)iVar1);
      param_3 = param_3 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

// operator() @ 150486270

bool __thiscall
`FObjectPropertyBase::ConstructDefaultObjectValueIfNecessary'::__l20::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7705422047739903180>);
  if (bVar2) {
    FField::GetFullName(*(FField **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7705422047739903180>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504862d7;
    }
  }
  bVar2 = false;
LAB_1504862d7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

