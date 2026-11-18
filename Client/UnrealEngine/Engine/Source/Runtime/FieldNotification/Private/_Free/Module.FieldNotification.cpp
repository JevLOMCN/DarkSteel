// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldNotification
// Functions: 33

// `dynamic_initializer_for_'FFieldNotificationMulticastDelegateTestAutomationTestInstance'' @ 140f801c0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FFieldNotificationMulticastDelegateTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FFieldNotificationMulticastDelegateTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FFieldNotificationMulticastDelegateTestAutomationTestInstance,
             &local_18,false);
  FFieldNotificationMulticastDelegateTestAutomationTestInstance._0_8_ =
       &___7FFieldNotificationMulticastDelegateTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FFieldNotificationMulticastDelegateTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantFieldNotification'' @ 140f80220

void __cdecl _dynamic_initializer_for__ModuleRegistrantFieldNotification__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "FieldNotification";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"FieldNotification",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FieldNotification_Public_FieldNotificationId_h__Script_FieldNotification_2114880978'' @ 140f80270

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FieldNotification_Public_FieldNotificationId_h__Script_FieldNotification_2114880978__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FieldNotification",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FieldNotification_Public_FieldNotificationId_h__Script_FieldNotification_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h__Script_FieldNotification_2049313111'' @ 140f802b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h__Script_FieldNotification_2049313111__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FieldNotification",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h__Script_FieldNotification_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_FieldNotification'' @ 140f802f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_FieldNotification__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x13187b86;
  local_res8[0].DeclarationsHash = 0xc6b0d8b7;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_FieldNotification,L"/Script/FieldNotification",
             &Z_Registration_Info_UPackage__Script_FieldNotification,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 1441bdd60

void * __thiscall
FFieldNotificationMulticastDelegateTest::_scalar_deleting_destructor_
          (FFieldNotificationMulticastDelegateTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UPackage__Script_FieldNotification @ 1441bde30

UPackage * __cdecl Z_Construct_UPackage__Script_FieldNotification(void)

{
  if (Z_Registration_Info_UPackage__Script_FieldNotification.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_FieldNotification.OuterSingleton,&PackageParams
              );
  }
  return Z_Registration_Info_UPackage__Script_FieldNotification.OuterSingleton;
}

// Z_Construct_UScriptStruct_FFieldNotificationId @ 1441bdeb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFieldNotificationId(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFieldNotificationId.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFieldNotificationId.InnerSingleton,
               &Z_Construct_UScriptStruct_FFieldNotificationId_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFieldNotificationId.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FFieldNotificationId.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 1441bdf30

void * __cdecl Z_Construct_UScriptStruct_FFieldNotificationId_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFieldNotificationId,&UE::CoreUObject::Private::Construct<FFieldNotificationId>,&UE::CoreUObject::Private::ConstructForTests<FFieldNotificationId>,&UE::CoreUObject::Private::Destruct<FFieldNotificationId>,&UE::CoreUObject::Private::Copy<FFieldNotificationId>,&UE::CoreUObject::Private::GetStructTypeHash<FFieldNotificationId>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNotifyFieldValueChanged @ 1441be030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNotifyFieldValueChanged(void)

{
  if (Z_Registration_Info_UClass_UNotifyFieldValueChanged.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNotifyFieldValueChanged.OuterSingleton,
               &Z_Construct_UClass_UNotifyFieldValueChanged_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNotifyFieldValueChanged.OuterSingleton;
}

// CreateRaw<`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal> @ 1441be070

TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
          ::CreateRaw<_FFieldNotificationMulticastDelegateTest::RunTest_::__l2::FLocal>
                    (TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
                     *__return_storage_ptr__,FLocal *param_1,pmf_95f7dea9 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
  *pTVar5;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)__return_storage_ptr__);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::`2'::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
               ::_vftable_;
    puVar3[3] = param_1;
    *(pmf_95f7dea9 *)(puVar3 + 4) = param_2;
    if ((param_1 == (FLocal *)0x0) || (param_2 == (pmf_95f7dea9)0x0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// DereferenceIfNecessary<`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal,`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal_*_&> @ 1441be130

FLocal * __cdecl
UE::Core::Private::
DereferenceIfNecessary<_FFieldNotificationMulticastDelegateTest::RunTest_::__l2::FLocal,_FFieldNotificationMulticastDelegateTest::RunTest_::__l2::FLocal_*_&>
          (FLocal **param_1)

{
  return *param_1;
}

// DestructItems<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,int> @ 1441be150

void __cdecl
DestructItems<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,int>
          (FInvocationElement *param_1,int param_2)

{
  TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
  *this;
  
  if (param_2 != 0) {
    this = &param_1->Delegate;
    do {
      if ((*(int *)&this->field_0x8 != 0) && (*(undefined8 **)this != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)this)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)this,0,0,0x10);
        *(undefined4 *)&this->field_0x8 = 0;
      }
      if (*(void **)this != (void *)0x0) {
        FMemory::Free(*(void **)this);
      }
      this = this + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// InternalConstructor<UNotifyFieldValueChanged> @ 1441be1d0

void __cdecl InternalConstructor<UNotifyFieldValueChanged>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UNotifyFieldValueChanged__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UNotifyFieldValueChanged> @ 1441be200

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNotifyFieldValueChanged>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNotifyFieldValueChanged::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNotifyFieldValueChanged__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// RemoveFrom<`UE::FieldNotification::FFieldMulticastDelegate::RemoveFrom'::__l2::<lambda_1>_> @ 1441be2b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::FieldNotification::FFieldMulticastDelegate::
RemoveFrom<_UE::FieldNotification::FFieldMulticastDelegate::RemoveFrom_::__l2::<lambda_1>_>
          (FFieldMulticastDelegate *this,<lambda_1> *param_1,FFieldId *param_2,bool *param_3)

{
  short *psVar1;
  undefined8 uVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar3;
  atomic<unsigned___int64> aVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  UObject *pUVar9;
  bool *pbVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong lVar17;
  FNameEntryId local_a8;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  iVar12 = 0;
  uVar14 = (this->Delegates).ArrayNum;
  uVar13 = uVar14;
  if ((int)(uint)this->AddedEmplaceAt <= (int)uVar14) {
    uVar13 = (uint)this->AddedEmplaceAt;
  }
  if (0 < (int)uVar13) {
    local_a8 = (param_2->FieldName).ComparisonIndex;
    do {
      uVar16 = uVar13 >> 1;
      uVar2 = *(undefined8 *)
               ((this->Delegates).AllocatorInstance.Data +
               (longlong)(int)(uVar16 + iVar12) * 0x30 + 8);
      iVar11 = local_a8.Value - (int)uVar2;
      if (iVar11 == 0) {
        iVar11 = (param_2->FieldName).Number - (int)((ulonglong)uVar2 >> 0x20);
      }
      if (-1 < iVar11) {
        iVar12 = uVar16 + iVar12 + (uVar13 & 1);
      }
      uVar13 = uVar16;
    } while (uVar16 != 0);
  }
  uVar13 = iVar12 - 1;
  if ((-1 < (int)uVar13) && ((int)uVar13 < (int)uVar14)) {
    lVar17 = (longlong)(int)uVar13 * 0x30;
    do {
      uVar14 = 0;
      if ((int)uVar13 < (this->Delegates).ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar15 = (this->Delegates).AllocatorInstance.Data + lVar17;
      if (*(FName *)(pFVar15 + 8) != param_2->FieldName) break;
      pTVar3 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1->InDelegate;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(pTVar3,&local_98);
      aVar4 = pTVar3[2].AccessDetector.State;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_98);
      if (*(atomic<unsigned___int64> *)(pFVar15 + 0x14) == aVar4) {
        pTVar3 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1->InDelegate;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(pTVar3,&local_80)
        ;
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pTVar3 + 1));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_80);
        if ((((pUVar9 == (UObject *)0x0) || (*(int *)&pFVar15[0x28].field_0x0 == 0)) ||
            (plVar5 = *(longlong **)(pFVar15 + 0x20), plVar5 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar5 + 0x28))(plVar5,pUVar9), cVar8 == '\0'))
        goto LAB_1441be4a5;
        if (param_1->Self->DelegateLockCount < 1) {
          TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
          ::RemoveAt(&param_1->Self->Delegates,uVar13,Default);
          *param_1->bRemoved = true;
          pbVar10 = param_1->bFieldPresent;
        }
        else {
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)(pFVar15 + 0x20));
          psVar1 = &param_1->Self->CompactionCount;
          *psVar1 = *psVar1 + 1;
          *param_1->bRemoved = true;
          pbVar10 = param_1->bFieldPresent;
        }
LAB_1441be4de:
        if (*pbVar10 != false) break;
      }
      else {
LAB_1441be4a5:
        bVar7 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                          ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar15,
                           param_1->InObject);
        if (((bVar7) && (*(int *)&pFVar15[0x28].field_0x0 != 0)) &&
           ((*(longlong **)(pFVar15 + 0x20) != (longlong *)0x0 &&
            (cVar8 = (**(code **)(**(longlong **)(pFVar15 + 0x20) + 0x38))(), cVar8 != '\0')))) {
          *param_1->bFieldPresent = true;
          pbVar10 = param_1->bRemoved;
          goto LAB_1441be4de;
        }
      }
      lVar17 = lVar17 + -0x30;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  if ((*param_3 == false) &&
     (uVar14 = (this->Delegates).ArrayNum - 1, (int)(uint)this->AddedEmplaceAt <= (int)uVar14)) {
    lVar17 = (longlong)(int)uVar14 * 0x30;
    do {
      uVar13 = 0;
      if ((int)uVar14 < (this->Delegates).ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar15 = (this->Delegates).AllocatorInstance.Data + lVar17;
      if (*(FName *)(pFVar15 + 8) == param_2->FieldName) {
        pTVar3 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1->InDelegate;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(pTVar3,&local_68)
        ;
        aVar4 = pTVar3[2].AccessDetector.State;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_68);
        if (*(atomic<unsigned___int64> *)(pFVar15 + 0x14) == aVar4) {
          pTVar3 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1->InDelegate;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    (pTVar3,&local_50);
          pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pTVar3 + 1));
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_50);
          if ((((pUVar9 == (UObject *)0x0) || (*(int *)&pFVar15[0x28].field_0x0 == 0)) ||
              (plVar5 = *(longlong **)(pFVar15 + 0x20), plVar5 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar5 + 0x28))(plVar5,pUVar9), cVar8 == '\0'))
          goto LAB_1441be656;
          if (param_1->Self->DelegateLockCount < 1) {
            TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
            ::RemoveAt(&param_1->Self->Delegates,uVar14,Default);
            *param_1->bRemoved = true;
            pbVar10 = param_1->bFieldPresent;
          }
          else {
            TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)(pFVar15 + 0x20));
            psVar1 = &param_1->Self->CompactionCount;
            *psVar1 = *psVar1 + 1;
            *param_1->bRemoved = true;
            pbVar10 = param_1->bFieldPresent;
          }
        }
        else {
LAB_1441be656:
          bVar7 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                            ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar15,
                             param_1->InObject);
          if (((!bVar7) || (*(int *)&pFVar15[0x28].field_0x0 == 0)) ||
             ((*(longlong **)(pFVar15 + 0x20) == (longlong *)0x0 ||
              (cVar8 = (**(code **)(**(longlong **)(pFVar15 + 0x20) + 0x38))(), cVar8 == '\0'))))
          goto LAB_1441be699;
          *param_1->bFieldPresent = true;
          pbVar10 = param_1->bRemoved;
        }
        if (*pbVar10 != false) {
          return;
        }
      }
LAB_1441be699:
      uVar14 = uVar14 - 1;
      lVar17 = lVar17 + -0x30;
    } while ((int)(uint)this->AddedEmplaceAt <= (int)uVar14);
  }
  return;
}

// RemoveFrom<`UE::FieldNotification::FFieldMulticastDelegate::RemoveFrom'::__l2::<lambda_1>_> @ 1441be6d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::FieldNotification::FFieldMulticastDelegate::
RemoveFrom<_UE::FieldNotification::FFieldMulticastDelegate::RemoveFrom_::__l2::<lambda_1>_>
          (FFieldMulticastDelegate *this,<lambda_1>_conflict *param_1,FFieldId *param_2,
          bool *param_3)

{
  short *psVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  bool *pbVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  FNameEntryId local_48;
  
  iVar11 = 0;
  uVar13 = (this->Delegates).ArrayNum;
  uVar12 = uVar13;
  if ((int)(uint)this->AddedEmplaceAt <= (int)uVar13) {
    uVar12 = (uint)this->AddedEmplaceAt;
  }
  if (0 < (int)uVar12) {
    local_48 = (param_2->FieldName).ComparisonIndex;
    do {
      uVar14 = uVar12 >> 1;
      uVar2 = *(undefined8 *)
               ((this->Delegates).AllocatorInstance.Data +
               (longlong)(int)(uVar14 + iVar11) * 0x30 + 8);
      iVar8 = local_48.Value - (int)uVar2;
      if (iVar8 == 0) {
        iVar8 = (param_2->FieldName).Number - (int)((ulonglong)uVar2 >> 0x20);
      }
      if (-1 < iVar8) {
        iVar11 = uVar14 + iVar11 + (uVar12 & 1);
      }
      uVar12 = uVar14;
    } while (uVar14 != 0);
  }
  uVar12 = iVar11 - 1;
  if ((-1 < (int)uVar12) && ((int)uVar12 < (int)uVar13)) {
    lVar15 = (longlong)(int)uVar12 * 0x30;
    do {
      uVar13 = 0;
      if ((int)uVar12 < (this->Delegates).ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (this->Delegates).AllocatorInstance.Data + lVar15;
      if (*(FName *)(pFVar10 + 8) != param_2->FieldName) break;
      if ((*(int *)&pFVar10[0x28].field_0x0 == 0) ||
         (*(longlong **)(pFVar10 + 0x20) == (longlong *)0x0)) {
        lVar9 = 0;
      }
      else {
        plVar6 = (longlong *)(**(code **)(**(longlong **)(pFVar10 + 0x20) + 0x40))();
        lVar9 = *plVar6;
      }
      if (lVar9 == *(longlong *)param_1->InDynamicDelegate) {
        if (param_1->Self->DelegateLockCount < 1) {
          TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
          ::RemoveAt(&param_1->Self->Delegates,uVar12,Default);
          *param_1->bRemoved = true;
          pbVar7 = param_1->bFieldPresent;
        }
        else {
          if ((*(int *)&pFVar10[0x28].field_0x0 != 0) &&
             (*(undefined8 **)(pFVar10 + 0x20) != (undefined8 *)0x0)) {
            (**(code **)**(undefined8 **)(pFVar10 + 0x20))();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)(pFVar10 + 0x20),0,0,0x10);
            *(undefined4 *)&pFVar10[0x28].field_0x0 = 0;
          }
          psVar1 = &param_1->Self->CompactionCount;
          *psVar1 = *psVar1 + 1;
          *param_1->bRemoved = true;
          pbVar7 = param_1->bFieldPresent;
        }
LAB_1441be8c8:
        if (*pbVar7 != false) break;
      }
      else {
        bVar4 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                          ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar10,
                           param_1->InObject);
        if ((((bVar4) && (*(int *)&pFVar10[0x28].field_0x0 != 0)) &&
            (*(longlong **)(pFVar10 + 0x20) != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(**(longlong **)(pFVar10 + 0x20) + 0x38))(), cVar5 != '\0')) {
          *param_1->bFieldPresent = true;
          pbVar7 = param_1->bRemoved;
          goto LAB_1441be8c8;
        }
      }
      lVar15 = lVar15 + -0x30;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  if ((*param_3 == false) &&
     (uVar13 = (this->Delegates).ArrayNum - 1, (int)(uint)this->AddedEmplaceAt <= (int)uVar13)) {
    lVar15 = (longlong)(int)uVar13 * 0x30;
    do {
      uVar12 = 0;
      if ((int)uVar13 < (this->Delegates).ArrayNum) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (this->Delegates).AllocatorInstance.Data + lVar15;
      if (*(FName *)(pFVar10 + 8) == param_2->FieldName) {
        lVar9 = 0;
        if ((*(int *)&pFVar10[0x28].field_0x0 != 0) &&
           (*(longlong **)(pFVar10 + 0x20) != (longlong *)0x0)) {
          plVar6 = (longlong *)(**(code **)(**(longlong **)(pFVar10 + 0x20) + 0x40))();
          lVar9 = *plVar6;
        }
        if (lVar9 == *(longlong *)param_1->InDynamicDelegate) {
          if (param_1->Self->DelegateLockCount < 1) {
            TArray<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,TSizedDefaultAllocator<32>_>
            ::RemoveAt(&param_1->Self->Delegates,uVar13,Default);
            *param_1->bRemoved = true;
            pbVar7 = param_1->bFieldPresent;
          }
          else {
            if ((*(int *)&pFVar10[0x28].field_0x0 != 0) &&
               (*(undefined8 **)(pFVar10 + 0x20) != (undefined8 *)0x0)) {
              (**(code **)**(undefined8 **)(pFVar10 + 0x20))();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)(pFVar10 + 0x20),0,0,0x10);
              *(undefined4 *)&pFVar10[0x28].field_0x0 = 0;
            }
            psVar1 = &param_1->Self->CompactionCount;
            *psVar1 = *psVar1 + 1;
            *param_1->bRemoved = true;
            pbVar7 = param_1->bFieldPresent;
          }
        }
        else {
          bVar4 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                            ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar10,
                             param_1->InObject);
          if ((((!bVar4) || (*(int *)&pFVar10[0x28].field_0x0 == 0)) ||
              (*(longlong **)(pFVar10 + 0x20) == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(**(longlong **)(pFVar10 + 0x20) + 0x38))(), cVar5 == '\0'))
          goto LAB_1441bea49;
          *param_1->bFieldPresent = true;
          pbVar7 = param_1->bRemoved;
        }
        if (*pbVar7 != false) {
          return;
        }
      }
LAB_1441bea49:
      uVar13 = uVar13 - 1;
      lVar15 = lVar15 + -0x30;
    } while ((int)(uint)this->AddedEmplaceAt <= (int)uVar13);
  }
  return;
}

// UpperBoundInternal<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement_const_,int,UE::FieldNotification::FFieldId,FIdentityFunctor,TLess<void>_> @ 1441beb30

int __cdecl
AlgoImpl::
UpperBoundInternal<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement_const_,int,UE::FieldNotification::FFieldId,FIdentityFunctor,TLess<void>_>
          (FInvocationElement *param_1,int param_2,FFieldId *param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  int iVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      FVar2 = param_1[iVar1].Key.Id.FieldName;
      iVar5 = (param_3->FieldName).ComparisonIndex.Value - FVar2.ComparisonIndex.Value;
      if (iVar5 == 0) {
        iVar5 = (param_3->FieldName).Number - FVar2.Number;
      }
      if (-1 < iVar5) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar3 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar3 != 0);
  }
  return iVar4;
}

// UpperBoundInternal<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement_const_,int,UE::FieldNotification::FFieldMulticastDelegate::FInvocationKey,FIdentityFunctor,TLess<void>_> @ 1441bebb0

int __cdecl
AlgoImpl::
UpperBoundInternal<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement_const_,int,UE::FieldNotification::FFieldMulticastDelegate::FInvocationKey,FIdentityFunctor,TLess<void>_>
          (FInvocationElement *param_1,int param_2,FInvocationKey *param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (0 < param_2) {
    FVar2 = (param_3->Id).FieldName;
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      FVar3 = param_1[iVar1].Key.Id.FieldName;
      iVar6 = FVar2.ComparisonIndex.Value.Value - FVar3.ComparisonIndex.Value;
      if (iVar6 == 0) {
        iVar6 = FVar2.Number - FVar3.Number;
      }
      if (-1 < iVar6) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      uVar4 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar4 != 0);
  }
  return iVar5;
}

// `scalar_deleting_destructor' @ 1441c0880

void * __thiscall
IBaseDelegateInstance<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441c08b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441c08e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441c0910

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441c0940

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441c0970

void * __thiscall
UNotifyFieldValueChanged::_scalar_deleting_destructor_(UNotifyFieldValueChanged *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeFieldNotificationId @ 1441c1970

void __cdecl EmptyLinkFunctionForGeneratedCodeFieldNotificationId(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFieldNotification_init @ 1441c1980

void __cdecl EmptyLinkFunctionForGeneratedCodeFieldNotification_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeINotifyFieldValueChanged @ 1441c1990

void __cdecl EmptyLinkFunctionForGeneratedCodeINotifyFieldValueChanged(void)

{
  return;
}

// FFieldValueChangedDynamicDelegate_DelegateWrapper @ 1441c20d0

void __cdecl
FFieldValueChangedDynamicDelegate_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UObject *param_2,
          FFieldNotificationId param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this;
  UFunction *pUVar3;
  UObject *local_38;
  FName local_30;
  FDestructionSentinel local_28;
  
  local_38 = param_2;
  local_30 = param_3.FieldName;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  bVar2 = FWeakObjectPtr::IsValid(&param_1->Object);
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Object.IsValid() != false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bb,L"ProcessDelegate() called with no object bound to delegate!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->FunctionName == (FName)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("FunctionName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bc,L"ProcessDelegate() called with no function name set!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = FWeakObjectPtr::Get(&param_1->Object);
  pUVar3 = UObject::FindFunctionChecked(this,param_1->FunctionName);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar3,&local_38);
  return;
}

// Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister @ 1441c3ba0

UClass * __cdecl Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNotifyFieldValueChanged.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldNotification",L"NotifyFieldValueChanged",
               &Z_Registration_Info_UClass_UNotifyFieldValueChanged.InnerSingleton,
               UNotifyFieldValueChanged::StaticRegisterNativesUNotifyFieldValueChanged,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNotifyFieldValueChanged>,
               InternalVTableHelperCtorCaller<UNotifyFieldValueChanged>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNotifyFieldValueChanged.InnerSingleton;
}

// Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature @ 1441c3c60

UFunction * __cdecl
Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// IMPLEMENT_MODULE_FieldNotification @ 1441c3ca0

void __cdecl IMPLEMENT_MODULE_FieldNotification(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'FFieldNotificationMulticastDelegateTestAutomationTestInstance'' @ 1503694a0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FFieldNotificationMulticastDelegateTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FFieldNotificationMulticastDelegateTestAutomationTestInstance);
  return;
}

