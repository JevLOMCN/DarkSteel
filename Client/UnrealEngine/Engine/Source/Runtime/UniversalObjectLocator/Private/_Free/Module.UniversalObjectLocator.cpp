// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 59

// `dynamic_initializer_for_'LogUniversalObjectLocator'' @ 140f86f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogUniversalObjectLocator__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogUniversalObjectLocator,L"LogUniversalObjectLocator",Log,Log);
  atexit(_dynamic_atexit_destructor_for__LogUniversalObjectLocator__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantUniversalObjectLocator'' @ 140f86f90

void __cdecl _dynamic_initializer_for__ModuleRegistrantUniversalObjectLocator__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "UniversalObjectLocator";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"UniversalObjectLocator",0x16);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<UE::UniversalObjectLocator::FUniversalObjectLocatorModule>
             ::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_DirectPathObjectLocator_h__Script_UniversalObjectLocator_3942818077'' @ 140f86fe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_DirectPathObjectLocator_h__Script_UniversalObjectLocator_3942818077__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UniversalObjectLocator",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_DirectPathObjectLocator_h__Script_UniversalObjectLocator_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_SubObjectLocator_h__Script_UniversalObjectLocator_2544527729'' @ 140f87020

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_SubObjectLocator_h__Script_UniversalObjectLocator_2544527729__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UniversalObjectLocator",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_SubObjectLocator_h__Script_UniversalObjectLocator_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocatorFragment_h__Script_UniversalObjectLocator_3851660218'' @ 140f87060

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocatorFragment_h__Script_UniversalObjectLocator_3851660218__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UniversalObjectLocator",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocatorFragment_h__Script_UniversalObjectLocator_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocatorResolveParams_h__Script_UniversalObjectLocator_1787567946'' @ 140f870a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocatorResolveParams_h__Script_UniversalObjectLocator_1787567946__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UniversalObjectLocator",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocatorResolveParams_h__Script_UniversalObjectLocator_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocator_h__Script_UniversalObjectLocator_1523131344'' @ 140f870f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocator_h__Script_UniversalObjectLocator_1523131344__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UniversalObjectLocator",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocator_h__Script_UniversalObjectLocator_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_UniversalObjectLocator'' @ 140f87130

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_UniversalObjectLocator__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x14d517e6;
  local_res8[0].DeclarationsHash = 0x9ac37eef;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_UniversalObjectLocator,L"/Script/UniversalObjectLocator",
             &Z_Registration_Info_UPackage__Script_UniversalObjectLocator,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 1443431c0

void * __thiscall
UE::UniversalObjectLocator::TFragmentPayload<FSubObjectLocator>::_scalar_deleting_destructor_
          (TFragmentPayload<FSubObjectLocator> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IFragmentPayload_UniversalObjectLocator_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UScriptStruct_FUniversalObjectLocatorFragment @ 144343220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUniversalObjectLocatorFragment(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FUniversalObjectLocatorFragment.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FUniversalObjectLocatorFragment.InnerSingleton,
               &Z_Construct_UScriptStruct_FUniversalObjectLocatorFragment_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FUniversalObjectLocatorFragment.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FUniversalObjectLocatorFragment.InnerSingleton;
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

// NewStructOps @ 1443432a0

void * __cdecl Z_Construct_UScriptStruct_FUniversalObjectLocator_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FUniversalObjectLocator,&UE::CoreUObject::Private::Construct<FUniversalObjectLocator>,&UE::CoreUObject::Private::ConstructForTests<FUniversalObjectLocator>,&UE::CoreUObject::Private::Destruct<FUniversalObjectLocator>,&UE::CoreUObject::Private::Copy<FUniversalObjectLocator>,&UE::CoreUObject::Private::Identical<FUniversalObjectLocator>,&UE::CoreUObject::Private::ExportTextItem<FUniversalObjectLocator>,&UE::CoreUObject::Private::ImportTextItem<FUniversalObjectLocator>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FUniversalObjectLocator>,&UE::CoreUObject::Private::GetStructTypeHash<FUniversalObjectLocator>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 144343320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::UniversalObjectLocator::FUniversalObjectLocatorModule::StartupModule'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__StartupModule_FUniversalObjectLocatorModule_UniversalObjectLocator_UE__UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UPackage__Script_UniversalObjectLocator @ 144343a00

UPackage * __cdecl Z_Construct_UPackage__Script_UniversalObjectLocator(void)

{
  if (Z_Registration_Info_UPackage__Script_UniversalObjectLocator.OuterSingleton == (UPackage *)0x0)
  {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_UniversalObjectLocator.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_UniversalObjectLocator.OuterSingleton;
}

// NewStructOps @ 144343a80

void * __cdecl Z_Construct_UScriptStruct_FUniversalObjectLocatorFragment_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FUniversalObjectLocatorFragment,&UE::CoreUObject::Private::Construct<FUniversalObjectLocatorFragment>,&UE::CoreUObject::Private::ConstructForTests<FUniversalObjectLocatorFragment>,&UE::CoreUObject::Private::Destruct<FUniversalObjectLocatorFragment>,&UE::CoreUObject::Private::SerializeArchive<FUniversalObjectLocatorFragment>,&UE::CoreUObject::Private::Copy<FUniversalObjectLocatorFragment>,&UE::CoreUObject::Private::Identical<FUniversalObjectLocatorFragment>,&UE::CoreUObject::Private::ExportTextItem<FUniversalObjectLocatorFragment>,&UE::CoreUObject::Private::ImportTextItem<FUniversalObjectLocatorFragment>,&UE::CoreUObject::Private::AddStructReferencedObjects<FUniversalObjectLocatorFragment>,&UE::CoreUObject::Private::GetStructTypeHash<FUniversalObjectLocatorFragment>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144343ac0

void * __cdecl
Z_Construct_UScriptStruct_FUniversalObjectLocatorEmptyPayload_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FUniversalObjectLocatorEmptyPayload,&UE::CoreUObject::Private::Construct<FUniversalObjectLocatorEmptyPayload>,&UE::CoreUObject::Private::ConstructForTests<FUniversalObjectLocatorEmptyPayload>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144343cb0

void * __cdecl Z_Construct_UScriptStruct_FDirectPathObjectLocator_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDirectPathObjectLocator,&UE::CoreUObject::Private::Construct<FDirectPathObjectLocator>,&UE::CoreUObject::Private::ConstructForTests<FDirectPathObjectLocator>,&UE::CoreUObject::Private::Destruct<FDirectPathObjectLocator>,&UE::CoreUObject::Private::Copy<FDirectPathObjectLocator>,&UE::CoreUObject::Private::Identical<FDirectPathObjectLocator>,&UE::CoreUObject::Private::GetStructTypeHash<FDirectPathObjectLocator>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 144343d90

void * __cdecl Z_Construct_UScriptStruct_FSubObjectLocator_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubObjectLocator,&UE::CoreUObject::Private::Construct<FSubObjectLocator>,&UE::CoreUObject::Private::ConstructForTests<FSubObjectLocator>,&UE::CoreUObject::Private::Destruct<FSubObjectLocator>,&UE::CoreUObject::Private::Copy<FSubObjectLocator>,&UE::CoreUObject::Private::Identical<FSubObjectLocator>,&UE::CoreUObject::Private::GetStructTypeHash<FSubObjectLocator>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 144343ee0

void * __thiscall
UE::UniversalObjectLocator::IUniversalObjectLocatorModule::_scalar_deleting_destructor_
          (IUniversalObjectLocatorModule *this,uint param_1)

{
  *this = (IUniversalObjectLocatorModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144344420

void * __thiscall
UE::UniversalObjectLocator::FUniversalObjectLocatorModule::_scalar_deleting_destructor_
          (FUniversalObjectLocatorModule *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// ELocatorResolveFlags_StaticEnum @ 1443444a0

UEnum * __cdecl ELocatorResolveFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELocatorResolveFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UniversalObjectLocator();
    Z_Registration_Info_UEnum_ELocatorResolveFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UniversalObjectLocator_ELocatorResolveFlags,
                       (UObject *)pUVar1,L"ELocatorResolveFlags");
  }
  return Z_Registration_Info_UEnum_ELocatorResolveFlags.OuterSingleton;
}

// AddStructReferencedObjectsOrNot<FUniversalObjectLocatorFragment> @ 144344c00

void __cdecl
AddStructReferencedObjectsOrNot<FUniversalObjectLocatorFragment>
          (void *param_1,FReferenceCollector *param_2)

{
  TObjectPtr<UScriptStruct_const_> *pTVar1;
  FFragmentType *pFVar2;
  void *pvVar3;
  
  pFVar2 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve
                     ((FFragmentTypeHandle *)((longlong)param_1 + 0x1e));
  if (pFVar2 != (FFragmentType *)0x0) {
    pTVar1 = &pFVar2->PayloadType;
    (**(code **)(param_2->_padding_ + 0x88))(param_2,pTVar1,0);
    if (((*(byte *)((longlong)param_1 + 0x1f) & 1) != 0) &&
       ((pTVar1->field0_0x0).DebugPtr != (UScriptStruct *)0x0)) {
      pvVar3 = FUniversalObjectLocatorFragment::GetPayload(param_1);
      FReferenceCollector::AddReferencedObjects
                (param_2,pTVar1,pvVar3,(UObject *)0x0,(FProperty *)0x0);
    }
  }
  return;
}

// CompareItems<FUniversalObjectLocatorFragment,int> @ 144344c80

bool __cdecl
CompareItems<FUniversalObjectLocatorFragment,int>
          (FUniversalObjectLocatorFragment *param_1,FUniversalObjectLocatorFragment *param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FFragmentType *pFVar4;
  void *pvVar5;
  void *pvVar6;
  UScriptStruct *this;
  FFragmentTypeHandle *pFVar7;
  FFragmentTypeHandle *this_00;
  
  if (param_3 != 0) {
    this_00 = &param_1->FragmentType;
    pFVar7 = &param_2->FragmentType;
    do {
      if ((this_00[1].Handle & 1) != (pFVar7[1].Handle & 1)) {
        return false;
      }
      if ((this_00[1].Handle & 1) != 0) {
        if (this_00->Handle != pFVar7->Handle) {
          return false;
        }
        pFVar4 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(this_00);
        if (pFVar4 == (FFragmentType *)0x0) {
          this = (UScriptStruct *)0x0;
LAB_144344cfe:
          bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("FragmentStruct",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                             ,0xf3,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        else {
          this = (pFVar4->PayloadType).field0_0x0.DebugPtr;
          if (this == (UScriptStruct *)0x0) goto LAB_144344cfe;
        }
        pvVar5 = FUniversalObjectLocatorFragment::GetPayload
                           ((FUniversalObjectLocatorFragment *)
                            (pFVar7 + (longlong)param_1 + (-0x1e - (longlong)param_2)));
        pvVar6 = FUniversalObjectLocatorFragment::GetPayload
                           ((FUniversalObjectLocatorFragment *)(pFVar7 + -0x1e));
        bVar2 = UScriptStruct::CompareScriptStruct(this,pvVar5,pvVar6,0);
        if (!bVar2) {
          return false;
        }
      }
      this_00 = this_00 + 0x20;
      pFVar7 = pFVar7 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<FUniversalObjectLocatorFragment,FUniversalObjectLocatorFragment,int> @ 144344d90

void __cdecl
ConstructItems<FUniversalObjectLocatorFragment,FUniversalObjectLocatorFragment,int>
          (void *param_1,FUniversalObjectLocatorFragment *param_2,int param_3)

{
  UScriptStruct *this;
  code *pcVar1;
  bool bVar2;
  FFragmentType *pFVar3;
  void *pvVar4;
  void *pvVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  
  if (param_3 != 0) {
    pbVar6 = &param_2->field_0x1f;
    puVar7 = (undefined1 *)((longlong)param_1 + 0x1f);
    do {
      ((FFragmentTypeHandle *)(puVar7 + -1))->Handle = pbVar6[-1];
      *puVar7 = 0;
      if ((*pbVar6 & 1) != 0) {
        pFVar3 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve
                           ((FFragmentTypeHandle *)(puVar7 + -1));
        if ((pFVar3 == (FFragmentType *)0x0) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("ResolvedFragmentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                               ,0x94,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUniversalObjectLocatorFragment::DefaultConstructPayload
                  ((FUniversalObjectLocatorFragment *)
                   (pbVar6 + (longlong)param_1 + (-0x1f - (longlong)param_2)),pFVar3);
        this = (pFVar3->PayloadType).field0_0x0.DebugPtr;
        pvVar4 = FUniversalObjectLocatorFragment::GetPayload
                           ((FUniversalObjectLocatorFragment *)(pbVar6 + -0x1f));
        pvVar5 = FUniversalObjectLocatorFragment::GetPayload
                           ((FUniversalObjectLocatorFragment *)
                            (pbVar6 + (longlong)param_1 + (-0x1f - (longlong)param_2)));
        UScriptStruct::CopyScriptStruct(this,pvVar5,pvVar4,1);
      }
      pbVar6 = pbVar6 + 0x20;
      puVar7 = puVar7 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<UE::UniversalObjectLocator::FFragmentType,int> @ 144344e90

void __cdecl
DestructItems<UE::UniversalObjectLocator::FFragmentType,int>(FFragmentType *param_1,int param_2)

{
  ITextData *pIVar1;
  FText *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->DisplayText;
    do {
      pIVar1 = (pFVar2->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pFVar2 = pFVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FUniversalObjectLocatorFragment,int> @ 144344ed0

void __cdecl
DestructItems<FUniversalObjectLocatorFragment,int>
          (FUniversalObjectLocatorFragment *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((param_1->bIsInitialized != 0) && (GIsRequestingExit == false)) {
      FUniversalObjectLocatorFragment::DestroyPayload(param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// GetTypeHash<FUniversalObjectLocatorFragment,TSizedDefaultAllocator<32>_> @ 144344f20

uint __cdecl
GetTypeHash<FUniversalObjectLocatorFragment,TSizedDefaultAllocator<32>_>
          (TArray<FUniversalObjectLocatorFragment,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  uint uVar2;
  FUniversalObjectLocatorFragment *pFVar3;
  FUniversalObjectLocatorFragment *pFVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  uVar5 = 0;
  pFVar3 = (FUniversalObjectLocatorFragment *)(param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FUniversalObjectLocatorFragment_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    uVar2 = GetTypeHash(pFVar3);
    uVar5 = uVar5 ^ (uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + uVar2;
    pFVar3 = pFVar3 + 1;
  }
  return uVar5;
}

// StaticEnum<enum_ELocatorResolveFlags> @ 1443454c0

UEnum * __cdecl StaticEnum<enum_ELocatorResolveFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELocatorResolveFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UniversalObjectLocator();
    Z_Registration_Info_UEnum_ELocatorResolveFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UniversalObjectLocator_ELocatorResolveFlags,
                       (UObject *)pUVar1,L"ELocatorResolveFlags");
  }
  return Z_Registration_Info_UEnum_ELocatorResolveFlags.OuterSingleton;
}

// Then<`UE::UniversalObjectLocator::FResolveResult::AsyncGet'::__l10::<lambda_1>_> @ 144345500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TFuture<void> * __thiscall
TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::
Then<_UE::UniversalObjectLocator::FResolveResult::AsyncGet_::__l10::<lambda_1>_>
          (TFutureBase<UE::UniversalObjectLocator::FResolveResultData> *this,
          TFuture<void> *__return_storage_ptr__,longlong *param_3)

{
  TFutureState<UE::UniversalObjectLocator::FResolveResultData> *lpCriticalSection;
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  TFuture<void> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  FEvent *pFVar12;
  void *this_00;
  longlong *plVar13;
  TReferenceControllerBase<1> *pTVar14;
  undefined1 auStack_f8 [32];
  code *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  TReferenceControllerBase<1> *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98;
  longlong local_88;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong *local_60;
  TFutureState<UE::UniversalObjectLocator::FResolveResultData> *local_58;
  TReferenceControllerBase<1> *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((this->State).Object == (TFutureState<UE::UniversalObjectLocator::FResolveResultData> *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x2aa,L"");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pTVar10 = (TFuture<void> *)(*pcVar1)();
      return pTVar10;
    }
  }
  pTVar11 = ::operator_new(0x90);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    pTVar14 = (TReferenceControllerBase<1> *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    *(undefined8 *)__return_storage_ptr__ = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TFutureState_X___00_SharedPointerInternals__6B_;
    pTVar11[1]._padding_ = 0;
    pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[2]._padding_ = 0;
    pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[3]._padding_ = 0;
    pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[4]._padding_ = 0;
    pTVar11[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[5]._padding_ = 0;
    pTVar11[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[6]._padding_ = 0;
    pTVar11[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[7]._padding_ = 0;
    pTVar11[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[7].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar11 + 1),4000);
    pTVar11[4]._padding_ = 0;
    pTVar11[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar12 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    pTVar14 = pTVar11 + 1;
    pTVar11[7]._padding_ = (longlong)pFVar12;
    *(undefined1 *)&pTVar11[7].SharedReferenceCount = 0;
    if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar1 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar1)();
        return pTVar10;
      }
    }
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar9) {
        pcVar1 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar1)();
        return pTVar10;
      }
    }
    *(TReferenceControllerBase<1> **)__return_storage_ptr__ = pTVar14;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar11;
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = *param_3;
  local_60 = (longlong *)param_3[5];
  param_3[5] = 0;
  local_68 = param_3[4];
  local_98 = 1;
  local_78 = param_3[2];
  lStack_70 = param_3[3];
  if (local_88 != 0) {
    *param_3 = 0;
  }
  local_58 = (this->State).Object;
  local_50 = (this->State).SharedReferenceCount.ReferenceController;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8 = (code *)0x0;
  local_a8 = pTVar14;
  local_a0 = pTVar11;
  uStack_b0 = FMemory::Malloc(0x70,0x10);
  *uStack_b0 = (longlong)
               &
               ___7__TFunction_OwnedObject_V<lambda_1>__1____Then_V<lambda_1>__9__AsyncGet_FResolveResult_UniversalObjectLocator_UE__QEAAX__QEAV__TUniqueFunction___A6AXAEBUFResolveResultData_UniversalObjectLocator_UE___Z___Z____TFutureBase_UFResolveResultData_UniversalObjectLocator_UE____IEAA_A_PV1_9__AsyncGet_FResolveResult_UniversalObjectLocator_UE__QEAAX__QEAV__TUniqueFunction___A6AXAEBUFResolveResultData_UniversalObjectLocator_UE___Z___Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  uStack_b0[2] = (longlong)local_a8;
  uStack_b0[3] = (longlong)local_a0;
  local_a0 = (TReferenceControllerBase<1> *)0x0;
  local_a8 = (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)(uStack_b0 + 4) = local_98;
  uStack_b0[6] = local_88;
  uStack_b0[0xb] = (longlong)local_60;
  local_60 = (longlong *)0x0;
  uStack_b0[8] = local_78;
  uStack_b0[9] = lStack_70;
  uStack_b0[10] = local_68;
  if (uStack_b0[6] != 0) {
    local_88 = 0;
  }
  uStack_b0[0xc] = (longlong)local_58;
  uStack_b0[0xd] = (longlong)local_50;
  if (uStack_b0 + 2 != (longlong *)0x0) {
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Then<`UE::UniversalObjectLocator::FResolveResult::AsyncGet'::__l10::<lambda_1>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  local_50 = (TReferenceControllerBase<1> *)0x0;
  local_58 = (TFutureState<UE::UniversalObjectLocator::FResolveResultData> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_88 != 0) {
    plVar13 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar13 = local_60;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if ((local_a8 != (TReferenceControllerBase<1> *)0x0) &&
     (*(char *)((longlong)local_a8 + 0x68) == '\0')) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pTVar10 = (TFuture<void> *)(*pcVar1)();
      return pTVar10;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
  lpCriticalSection = (this->State).Object;
  pTVar11 = (this->State).SharedReferenceCount.ReferenceController;
  (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->State).Object = (TFutureState<UE::UniversalObjectLocator::FResolveResultData> *)0x0;
  if (lpCriticalSection == (TFutureState<UE::UniversalObjectLocator::FResolveResultData> *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pTVar10 = (TFuture<void> *)(*pcVar1)();
      return pTVar10;
    }
  }
  if ((char)lpCriticalSection->_padding_ == '\0') {
    if (lpCriticalSection == (TFutureState<UE::UniversalObjectLocator::FResolveResultData> *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((char)lpCriticalSection->_padding_ == '\0') {
      pcVar1 = (code *)lpCriticalSection->_padding_;
      lVar6 = lpCriticalSection->_padding_;
      uVar2 = *(undefined4 *)((longlong)&lpCriticalSection->_padding_ + 4);
      lVar7 = lpCriticalSection->_padding_;
      uVar3 = *(undefined4 *)((longlong)&lpCriticalSection->_padding_ + 4);
      lVar8 = lpCriticalSection->_padding_;
      uVar4 = *(undefined4 *)((longlong)&lpCriticalSection->_padding_ + 4);
      lVar5 = lpCriticalSection->_padding_;
      plVar13 = (longlong *)lpCriticalSection->_padding_;
      lpCriticalSection->_padding_ = (longlong)local_d8;
      lpCriticalSection->_padding_ = CONCAT44(uStack_cc,uStack_d0);
      *(undefined4 *)&lpCriticalSection->_padding_ = local_c8;
      *(undefined4 *)((longlong)&lpCriticalSection->_padding_ + 4) = uStack_c4;
      *(undefined4 *)&lpCriticalSection->_padding_ = uStack_c0;
      *(undefined4 *)((longlong)&lpCriticalSection->_padding_ + 4) = uStack_bc;
      *(undefined4 *)&lpCriticalSection->_padding_ = (undefined4)local_b8;
      *(undefined4 *)((longlong)&lpCriticalSection->_padding_ + 4) = local_b8._4_4_;
      *(undefined4 *)&lpCriticalSection->_padding_ = (undefined4)uStack_b0;
      *(undefined4 *)((longlong)&lpCriticalSection->_padding_ + 4) = uStack_b0._4_4_;
      local_d8 = pcVar1;
      uStack_d0 = (int)lVar6;
      uStack_cc = uVar2;
      local_c8 = (int)lVar7;
      uStack_c4 = uVar3;
      uStack_c0 = (int)lVar8;
      uStack_bc = uVar4;
      local_b8 = lVar5;
      uStack_b0 = plVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_144345898;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_d8 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_d8);
    pcVar1 = local_d8;
    plVar13 = (longlong *)&local_c8;
    if (uStack_b0 != (longlong *)0x0) {
      plVar13 = uStack_b0;
    }
    this_00 = (void *)(**(code **)(*plVar13 + 8))();
    if (pcVar1 == UE::Core::Private::Function::
                  TFunctionRefCaller<`TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Then<`UE::UniversalObjectLocator::FResolveResult::AsyncGet'::__l10::<lambda_1>_>'::__l2::<lambda_1>,void>
                  ::Call) {
      `TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::
      Then<`UE::UniversalObjectLocator::FResolveResult::AsyncGet'::__l10::<lambda_1>_>'::__l2::
      <lambda_1>::operator()(this_00);
    }
    else {
      (*pcVar1)();
    }
  }
LAB_144345898:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if (local_d8 != (code *)0x0) {
    plVar13 = (longlong *)&local_c8;
    if (uStack_b0 != (longlong *)0x0) {
      plVar13 = uStack_b0;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (*param_3 != 0) {
    plVar13 = param_3 + 2;
    if ((longlong *)param_3[5] != (longlong *)0x0) {
      plVar13 = (longlong *)param_3[5];
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return __return_storage_ptr__;
}

// ~TFunction_OwnedObject<`TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Then<`UE::UniversalObjectLocator::FResolveResult::AsyncGet'::__l10::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 144345f10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Then<`UE::UniversalObjectLocator::FResolveResult::AsyncGet'::__l10::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Then<_UE::UniversalObjectLocator::FResolveResult::AsyncGet_::__l10::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____Then_V<lambda_1>__9__AsyncGet_FResolveResult_UniversalObjectLocator_UE__QEAAX__QEAV__TUniqueFunction___A6AXAEBUFResolveResultData_UniversalObjectLocator_UE___Z___Z____TFutureBase_UFResolveResultData_UniversalObjectLocator_UE____IEAA_A_PV1_9__AsyncGet_FResolveResult_UniversalObjectLocator_UE__QEAAX__QEAV__TUniqueFunction___A6AXAEBUFResolveResultData_UniversalObjectLocator_UE___Z___Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  `TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::
  Then<`UE::UniversalObjectLocator::FResolveResult::AsyncGet'::__l10::<lambda_1>_>'::__l2::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<``FUniversalObjectLocator::ResolveAsyncImpl'::__l2::FState::ProcessNext'::__l2::<lambda_1>,1,0> @ 144345f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FUniversalObjectLocator::ResolveAsyncImpl'::__l2::FState::ProcessNext'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__FUniversalObjectLocator::ResolveAsyncImpl_::__l2::FState::ProcessNext_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FUniversalObjectLocator::ResolveAsyncImpl'::`2'::FState::ProcessNext'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::UniversalObjectLocator::FUniversalObjectLocatorModule::StartupModule'::__l2::<lambda_1>,0,0> @ 144345f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::UniversalObjectLocator::FUniversalObjectLocatorModule::StartupModule'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::UniversalObjectLocator::FUniversalObjectLocatorModule::StartupModule_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__StartupModule_FUniversalObjectLocatorModule_UniversalObjectLocator_UE__UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// operator== @ 144346330

bool __cdecl operator==(FUniversalObjectLocator *param_1,FUniversalObjectLocator *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (param_1->Fragments).ArrayNum;
  if (iVar1 == (param_2->Fragments).ArrayNum) {
    bVar2 = CompareItems<FUniversalObjectLocatorFragment,int>
                      ((FUniversalObjectLocatorFragment *)
                       (param_1->Fragments).AllocatorInstance.Data,
                       (FUniversalObjectLocatorFragment *)
                       (param_2->Fragments).AllocatorInstance.Data,iVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// operator== @ 144346370

bool __cdecl
operator==(FUniversalObjectLocatorFragment *param_1,FUniversalObjectLocatorFragment *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FFragmentType *pFVar4;
  void *pvVar5;
  void *pvVar6;
  UScriptStruct *this;
  byte bVar7;
  
  bVar7 = param_1->bIsInitialized;
  if (bVar7 != param_2->bIsInitialized) {
    return false;
  }
  if (bVar7 == 0) {
    return true;
  }
  if ((param_1->FragmentType).Handle != (param_2->FragmentType).Handle) {
    return false;
  }
  pFVar4 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&param_1->FragmentType);
  if (pFVar4 == (FFragmentType *)0x0) {
    this = (UScriptStruct *)0x0;
  }
  else {
    this = (pFVar4->PayloadType).field0_0x0.DebugPtr;
    if (this != (UScriptStruct *)0x0) goto LAB_1443463f8;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("FragmentStruct",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                     ,0xf3,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_1443463f8:
  pvVar5 = FUniversalObjectLocatorFragment::GetPayload(param_1);
  pvVar6 = FUniversalObjectLocatorFragment::GetPayload(param_2);
  bVar2 = UScriptStruct::CompareScriptStruct(this,pvVar5,pvVar6,0);
  return bVar2;
}

// operator!= @ 144346440

bool __cdecl operator!=(FUniversalObjectLocator *param_1,FUniversalObjectLocator *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (param_1->Fragments).ArrayNum;
  if (iVar1 == (param_2->Fragments).ArrayNum) {
    bVar2 = CompareItems<FUniversalObjectLocatorFragment,int>
                      ((FUniversalObjectLocatorFragment *)
                       (param_1->Fragments).AllocatorInstance.Data,
                       (FUniversalObjectLocatorFragment *)
                       (param_2->Fragments).AllocatorInstance.Data,iVar1);
    if (bVar2) {
      return false;
    }
  }
  return true;
}

// operator!= @ 144346480

bool __cdecl
operator!=(FUniversalObjectLocatorFragment *param_1,FUniversalObjectLocatorFragment *param_2)

{
  bool bVar1;
  
  bVar1 = operator==(param_1,param_2);
  return !bVar1;
}

// `scalar_deleting_destructor' @ 144346730

void * __thiscall
UE::UniversalObjectLocator::TFragmentPayload<FDirectPathObjectLocator>::_scalar_deleting_destructor_
          (TFragmentPayload<FDirectPathObjectLocator> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IFragmentPayload_UniversalObjectLocator_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144346770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Then<`UE::UniversalObjectLocator::FResolveResult::AsyncGet'::__l10::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____Then_V<lambda_1>__9__AsyncGet_FResolveResult_UniversalObjectLocator_UE__QEAAX__QEAV__TUniqueFunction___A6AXAEBUFResolveResultData_UniversalObjectLocator_UE___Z___Z____TFutureBase_UFResolveResultData_UniversalObjectLocator_UE____IEAA_A_PV1_9__AsyncGet_FResolveResult_UniversalObjectLocator_UE__QEAAX__QEAV__TUniqueFunction___A6AXAEBUFResolveResultData_UniversalObjectLocator_UE___Z___Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  `TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::
  Then<`UE::UniversalObjectLocator::FResolveResult::AsyncGet'::__l10::<lambda_1>_>'::__l2::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443467c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FUniversalObjectLocator::ResolveAsyncImpl'::__l2::FState::ProcessNext'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FUniversalObjectLocator::ResolveAsyncImpl'::`2'::FState::ProcessNext'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144346810

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`FUniversalObjectLocator::ResolveAsyncImpl'::__l2::FState,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144346850

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::UniversalObjectLocator::FResolveResultData>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<UE::UniversalObjectLocator::FResolveResultData>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144346890

void * __thiscall
UE::UniversalObjectLocator::FRegistry::_scalar_deleting_destructor_(FRegistry *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<UE::UniversalObjectLocator::FFragmentType,int>
            ((FFragmentType *)(this->FragmentTypes).AllocatorInstance.Data,
             (this->FragmentTypes).ArrayNum);
  pFVar1 = (this->FragmentTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParameterTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144346900

void * __thiscall
UE::UniversalObjectLocator::IFragmentPayload::_scalar_deleting_destructor_
          (IFragmentPayload *this,uint param_1)

{
  *this = (IFragmentPayload)&___7IFragmentPayload_UniversalObjectLocator_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeDirectPathObjectLocator @ 144347620

void __cdecl EmptyLinkFunctionForGeneratedCodeDirectPathObjectLocator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSubObjectLocator @ 144347630

void __cdecl EmptyLinkFunctionForGeneratedCodeSubObjectLocator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUniversalObjectLocator @ 144347640

void __cdecl EmptyLinkFunctionForGeneratedCodeUniversalObjectLocator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUniversalObjectLocatorFragment @ 144347650

void __cdecl EmptyLinkFunctionForGeneratedCodeUniversalObjectLocatorFragment(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUniversalObjectLocatorResolveParams @ 144347660

void __cdecl EmptyLinkFunctionForGeneratedCodeUniversalObjectLocatorResolveParams(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUniversalObjectLocator_init @ 144347670

void __cdecl EmptyLinkFunctionForGeneratedCodeUniversalObjectLocator_init(void)

{
  return;
}

// GetTypeHash @ 1443482d0

uint __cdecl GetTypeHash(FDirectPathObjectLocator *param_1)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  uint uVar4;
  uint uVar5;
  
  FVar2 = (param_1->Path).AssetPath.AssetName;
  uVar4 = GetTypeHash(FVar2.ComparisonIndex.Value);
  FVar3 = (param_1->Path).AssetPath.PackageName;
  uVar5 = GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar5 = uVar5 + FVar3.Number;
  iVar1 = (param_1->Path).SubPathString.Data.ArrayNum;
  uVar5 = uVar5 * 0x40 + uVar4 + FVar2.Number + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  if (1 < iVar1) {
    uVar4 = FCrc::Strihash_DEPRECATED<char8_t>
                      (iVar1 + -1,(uchar *)(param_1->Path).SubPathString.Data.AllocatorInstance.Data
                      );
    return uVar4 + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
  }
  return uVar5;
}

// GetTypeHash @ 144348370

uint __cdecl GetTypeHash(FUniversalObjectLocator *param_1)

{
  int iVar1;
  uint uVar2;
  FUniversalObjectLocatorFragment *pFVar3;
  FUniversalObjectLocatorFragment *pFVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (param_1->Fragments).ArrayNum;
  uVar5 = 0;
  pFVar3 = (FUniversalObjectLocatorFragment *)(param_1->Fragments).AllocatorInstance.Data;
  pFVar4 = pFVar3 + iVar1;
  while( true ) {
    if ((param_1->Fragments).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FUniversalObjectLocatorFragment_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    uVar2 = GetTypeHash(pFVar3);
    uVar5 = uVar5 ^ (uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + uVar2;
    pFVar3 = pFVar3 + 1;
  }
  return uVar5;
}

// GetTypeHash @ 1443483f0

uint __cdecl GetTypeHash(FUniversalObjectLocatorFragment *param_1)

{
  byte bVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  int iVar4;
  FFragmentType *pFVar5;
  void *pvVar6;
  uint uVar7;
  
  if (param_1->bIsInitialized != 0) {
    bVar1 = (param_1->FragmentType).Handle;
    uVar7 = (uint)bVar1;
    pFVar5 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&param_1->FragmentType);
    if ((pFVar5 != (FFragmentType *)0x0) &&
       (pUVar2 = (pFVar5->PayloadType).field0_0x0.DebugPtr, pUVar2 != (UScriptStruct *)0x0)) {
      pcVar3 = *(code **)(pUVar2->_padding_ + 0x370);
      pvVar6 = FUniversalObjectLocatorFragment::GetPayload(param_1);
      iVar4 = (*pcVar3)(pUVar2,pvVar6);
      uVar7 = uVar7 ^ (bVar1 >> 2) + 0x9e3779b9 + (uint)bVar1 * 0x40 + iVar4;
    }
    return uVar7;
  }
  return 0;
}

// Z_Construct_UEnum_UniversalObjectLocator_ELocatorResolveFlags @ 14434d550

UEnum * __cdecl Z_Construct_UEnum_UniversalObjectLocator_ELocatorResolveFlags(void)

{
  if (Z_Registration_Info_UEnum_ELocatorResolveFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELocatorResolveFlags.InnerSingleton,
               &Z_Construct_UEnum_UniversalObjectLocator_ELocatorResolveFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELocatorResolveFlags.InnerSingleton;
}

// Z_Construct_UScriptStruct_FDirectPathObjectLocator @ 14434d590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDirectPathObjectLocator(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDirectPathObjectLocator.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDirectPathObjectLocator.InnerSingleton,
               &Z_Construct_UScriptStruct_FDirectPathObjectLocator_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDirectPathObjectLocator.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDirectPathObjectLocator.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSubObjectLocator @ 14434d610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubObjectLocator(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubObjectLocator.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubObjectLocator.InnerSingleton,
               &Z_Construct_UScriptStruct_FSubObjectLocator_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubObjectLocator.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSubObjectLocator.InnerSingleton;
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

// Z_Construct_UScriptStruct_FUniversalObjectLocator @ 14434d690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUniversalObjectLocator(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FUniversalObjectLocator.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FUniversalObjectLocator.InnerSingleton,
               &Z_Construct_UScriptStruct_FUniversalObjectLocator_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FUniversalObjectLocator.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FUniversalObjectLocator.InnerSingleton;
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

// Z_Construct_UScriptStruct_FUniversalObjectLocatorEmptyPayload @ 14434d710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUniversalObjectLocatorEmptyPayload(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FUniversalObjectLocatorEmptyPayload.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FUniversalObjectLocatorEmptyPayload.InnerSingleton
               ,&Z_Construct_UScriptStruct_FUniversalObjectLocatorEmptyPayload_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FUniversalObjectLocatorEmptyPayload.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FUniversalObjectLocatorEmptyPayload.InnerSingleton;
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

// IMPLEMENT_MODULE_UniversalObjectLocator @ 14434d790

void __cdecl IMPLEMENT_MODULE_UniversalObjectLocator(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogUniversalObjectLocator'' @ 15036b610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogUniversalObjectLocator__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogUniversalObjectLocator);
  return;
}

// `dynamic_atexit_destructor_for_'Registry'' @ 15036b630

void __cdecl
`UE::UniversalObjectLocator::FRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Registry__(void)

{
  DestructItems<UE::UniversalObjectLocator::FFragmentType,int>
            ((FFragmentType *)::Registry.FragmentTypes.AllocatorInstance.Data,
             ::Registry.FragmentTypes.ArrayNum);
  if (::Registry.FragmentTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Registry.FragmentTypes.AllocatorInstance.Data);
  }
  if (::Registry.ParameterTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Registry.ParameterTypes.AllocatorInstance.Data);
  }
  ::Registry._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&::Registry);
  return;
}

