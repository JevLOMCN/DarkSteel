// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: JsonUtilities
// Functions: 53

// ExportCallback_WriteISO8601Dates'' @ 140f93a40

void __cdecl
`dynamic_initializer_for_'FJsonObjectConverter::ExportCallback_WriteISO8601Dates__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined8 local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FJsonObjectConverter::ExportCallback_WriteISO8601Dates,(FWriteAccessScope *)&local_28)
  ;
  local_10 = 0x155081138;
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)
                           &FJsonObjectConverter::ExportCallback_WriteISO8601Dates.field_0x8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFJsonValue___00__PEAVFProperty__PEBX_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy,FJsonObjectConverter::<lambda_5>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  atexit(`dynamic_atexit_destructor_for_'FJsonObjectConverter::ExportCallback_WriteISO8601Dates__);
  return;
}

// `dynamic_initializer_for_'GDumpSplitUETypeInformation'' @ 140f93ac0

void __cdecl UE::JsonUtilities::_dynamic_initializer_for__GDumpSplitUETypeInformation__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::JsonUtilities::<lambda_7>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GDumpSplitUETypeInformation,L"JsonUtilities.DumpSplitUETypeInformation",
             L"Dumps all of the type information into a folder",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__GDumpSplitUETypeInformation__);
  return;
}

// `dynamic_initializer_for_'GDumpUETypeInformation'' @ 140f93bf0

void __cdecl UE::JsonUtilities::_dynamic_initializer_for__GDumpUETypeInformation__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::JsonUtilities::<lambda_6>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GDumpUETypeInformation,L"JsonUtilities.DumpUETypeInformation",
             L"Dumps all of the type information into a monolithic json file",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__GDumpUETypeInformation__);
  return;
}

// `dynamic_initializer_for_'GStructConvertersMap'' @ 140f93d20

void __cdecl JsonObjectStructInterface::_dynamic_initializer_for__GStructConvertersMap__(void)

{
  atexit(_dynamic_atexit_destructor_for__GStructConvertersMap__);
  return;
}

// `dynamic_initializer_for_'GStructConvertersMapCriticalSection'' @ 140f93d40

void __cdecl
JsonObjectStructInterface::_dynamic_initializer_for__GStructConvertersMapCriticalSection__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&GStructConvertersMapCriticalSection,4000);
  atexit(_dynamic_atexit_destructor_for__GStructConvertersMapCriticalSection__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantJsonUtilities'' @ 140f93d70

void __cdecl _dynamic_initializer_for__ModuleRegistrantJsonUtilities__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "JsonUtilities";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"JsonUtilities",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_DateTime'' @ 140f93dc0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__NAME_DateTime__(void)

{
  ::FName::FName(&NAME_DateTime,L"DateTime");
  return;
}

// `dynamic_initializer_for_'ObjectClassNameKey'' @ 140f93de0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__ObjectClassNameKey__(void)

{
  ::FString::FString(&ObjectClassNameKey,"_ClassName");
  atexit(_dynamic_atexit_destructor_for__ObjectClassNameKey__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h__Script_JsonUtilities_3333469293'' @ 140f93e10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h__Script_JsonUtilities_3333469293__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/JsonUtilities",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h__Script_JsonUtilities_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h__Script_JsonUtilities_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_JsonUtilities'' @ 140f93e60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_JsonUtilities__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x7433ef9a;
  local_res8[0].DeclarationsHash = 0x84f59bfe;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_JsonUtilities,L"/Script/JsonUtilities",
             &Z_Registration_Info_UPackage__Script_JsonUtilities,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14461c3a0

void * __thiscall
IBaseDelegateInstance<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14461c3f0

void * __thiscall
TCommonDelegateInstanceState<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14461c720

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy,FJsonObjectConverter::<lambda_5>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy,FJsonObjectConverter::<lambda_5>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UPackage__Script_JsonUtilities @ 14461c750

UPackage * __cdecl Z_Construct_UPackage__Script_JsonUtilities(void)

{
  if (Z_Registration_Info_UPackage__Script_JsonUtilities.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_JsonUtilities.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_JsonUtilities.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14461c980

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::JsonUtilities::<lambda_6>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::JsonUtilities::<lambda_6>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14461cba0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::JsonUtilities::<lambda_7>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::JsonUtilities::<lambda_7>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UJsonUtilitiesDummyObject @ 14461cbd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UJsonUtilitiesDummyObject(void)

{
  if (Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.OuterSingleton,
               &Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.OuterSingleton;
}

// NewStructOps @ 14461cc10

void * __cdecl Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FJsonObjectWrapper,&UE::CoreUObject::Private::Construct<FJsonObjectWrapper>,&UE::CoreUObject::Private::ConstructForTests<FJsonObjectWrapper>,&UE::CoreUObject::Private::Destruct<FJsonObjectWrapper>,&UE::CoreUObject::Private::PostSerialize<FJsonObjectWrapper>,&UE::CoreUObject::Private::Copy<FJsonObjectWrapper>,&UE::CoreUObject::Private::ExportTextItem<FJsonObjectWrapper>,&UE::CoreUObject::Private::ImportTextItem<FJsonObjectWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// HeapSortInternal<FFieldClass_*,int,FIdentityFunctor,TDereferenceWrapper<FFieldClass_*,`UE::JsonUtilities::DumpUETypeInformation'::__l25::<lambda_2>_>_> @ 14461e700

void __cdecl
AlgoImpl::
HeapSortInternal<FFieldClass_*,int,FIdentityFunctor,TDereferenceWrapper<FFieldClass_*,_UE::JsonUtilities::DumpUETypeInformation_::__l25::<lambda_2>_>_>
          (FFieldClass **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FFieldClass_*,_void___cdecl_UE::JsonUtilities::DumpUETypeInformation(FString_const_&,bool,bool)_::_25_::<lambda_2>_>
          param_4)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar9 = iVar5;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14461e81e:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  bVar3 = `UE::JsonUtilities::DumpUETypeInformation'::__l25::<lambda_2>::operator()
                                    (param_4.Predicate,param_1[(longlong)iVar7 + 2],param_1[iVar4]);
                  if (bVar3) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = `UE::JsonUtilities::DumpUETypeInformation'::__l25::<lambda_2>::operator()
                                  (param_4.Predicate,param_1[iVar9],param_1[iVar4]);
                if (!bVar3) break;
                pFVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = pFVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `UE::JsonUtilities::DumpUETypeInformation'::__l25::<lambda_2>::operator()
                        (param_4.Predicate,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `UE::JsonUtilities::DumpUETypeInformation'::__l25::<lambda_2>::operator()
                      (param_4.Predicate,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_14461e81e;
    pFVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pFVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<UField_const_*,int,FIdentityFunctor,TDereferenceWrapper<UField_const_*,`UE::JsonUtilities::DumpUETypeInformation'::__l9::<lambda_1>_>_> @ 14461e900

void __cdecl
AlgoImpl::
HeapSortInternal<UField_const_*,int,FIdentityFunctor,TDereferenceWrapper<UField_const_*,_UE::JsonUtilities::DumpUETypeInformation_::__l9::<lambda_1>_>_>
          (UField **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UField_const_*,_void___cdecl_UE::JsonUtilities::DumpUETypeInformation(FString_const_&,bool,bool)_::_9_::<lambda_1>_>
          param_4)

{
  UField *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar9 = iVar5;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14461ea1e:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            pUVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = pUVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  bVar3 = `UE::JsonUtilities::DumpUETypeInformation'::__l9::<lambda_1>::operator()
                                    (param_4.Predicate,param_1[(longlong)iVar7 + 2],param_1[iVar4]);
                  if (bVar3) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = `UE::JsonUtilities::DumpUETypeInformation'::__l9::<lambda_1>::operator()
                                  (param_4.Predicate,param_1[iVar9],param_1[iVar4]);
                if (!bVar3) break;
                pUVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = pUVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `UE::JsonUtilities::DumpUETypeInformation'::__l9::<lambda_1>::operator()
                        (param_4.Predicate,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `UE::JsonUtilities::DumpUETypeInformation'::__l9::<lambda_1>::operator()
                      (param_4.Predicate,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_14461ea1e;
    pUVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pUVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<TTuple<FName,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FName,int>,`UE::JsonUtilities::WriteUField'::__l5::<lambda_1>_>_> @ 14461eb00

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FName,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FName,int>,_UE::JsonUtilities::WriteUField_::__l5::<lambda_1>_>_>
          (TTuple<FName,int> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<FName,int>,_void___cdecl_UE::JsonUtilities::WriteUField(UField_const_*,UE::JsonUtilities::FJsonUETypeWriter_&)_::_5_::<lambda_1>_>
          param_4)

{
  TTuple<FName,int> *pTVar1;
  TTuple<FName,int> *pTVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  TTuple<FName,int> *pTVar11;
  longlong lVar12;
  int iVar13;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar8 = iVar7 * 2 + 1;
  iVar13 = iVar8;
  iVar9 = iVar7;
  do {
    while (param_2 <= iVar8) {
LAB_14461ec0d:
      if (iVar9 == 0) {
        iVar8 = param_2 + -1;
        lVar12 = (longlong)iVar8;
        if (0 < iVar8) {
          pTVar11 = param_1 + lVar12;
          do {
            uVar3 = *(undefined8 *)param_1;
            uVar4 = *(undefined4 *)&param_1->field_0x8;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar11;
            *(undefined4 *)&param_1->field_0x8 = *(undefined4 *)&pTVar11->field_0x8;
            *(undefined8 *)pTVar11 = uVar3;
            *(undefined4 *)&pTVar11->field_0x8 = uVar4;
            iVar13 = 0;
            if (1 < iVar8) {
              do {
                iVar7 = iVar13 * 2;
                iVar9 = iVar7 + 1;
                if (iVar7 + 2 < iVar8) {
                  if (*(int *)&param_1[(longlong)iVar7 + 2].field_0x8 <
                      *(int *)&param_1[iVar9].field_0x8) {
                    iVar9 = iVar7;
                  }
                  iVar9 = iVar9 + 1;
                }
                pTVar1 = param_1 + iVar9;
                pTVar2 = param_1 + iVar13;
                if (*(int *)&pTVar1->field_0x8 <= *(int *)&param_1[iVar13].field_0x8) break;
                uVar3 = *(undefined8 *)pTVar2;
                uVar4 = *(undefined4 *)&pTVar2->field_0x8;
                *(undefined8 *)pTVar2 = *(undefined8 *)pTVar1;
                *(undefined4 *)&pTVar2->field_0x8 = *(undefined4 *)&pTVar1->field_0x8;
                *(undefined8 *)pTVar1 = uVar3;
                *(undefined4 *)&pTVar1->field_0x8 = uVar4;
                iVar13 = iVar9;
              } while (iVar9 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar12 = lVar12 + -1;
            pTVar11 = pTVar11 + -1;
          } while (0 < lVar12);
        }
        return;
      }
      iVar7 = iVar9 + -1;
      iVar8 = iVar13 + -2;
      iVar13 = iVar8;
      iVar9 = iVar7;
    }
    iVar8 = iVar7 * 2;
    iVar10 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      if (*(int *)&param_1[(longlong)iVar8 + 2].field_0x8 < *(int *)&param_1[iVar10].field_0x8) {
        iVar10 = iVar8;
      }
      iVar10 = iVar10 + 1;
    }
    pTVar11 = param_1 + iVar10;
    pTVar1 = param_1 + iVar7;
    if (*(int *)&pTVar11->field_0x8 <= *(int *)&param_1[iVar7].field_0x8) goto LAB_14461ec0d;
    uVar3 = *(undefined8 *)pTVar1;
    uVar4 = *(undefined4 *)&pTVar1->field_0x8;
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar11;
    *(undefined4 *)&pTVar1->field_0x8 = *(undefined4 *)&pTVar11->field_0x8;
    iVar8 = iVar10 * 2 + 1;
    *(undefined8 *)pTVar11 = uVar3;
    *(undefined4 *)&pTVar11->field_0x8 = uVar4;
    iVar7 = iVar10;
  } while( true );
}

// InternalConstructor<UJsonUtilitiesDummyObject> @ 14461ed20

void __cdecl InternalConstructor<UJsonUtilitiesDummyObject>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UJsonUtilitiesDummyObject__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UJsonUtilitiesDummyObject> @ 14461ed50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UJsonUtilitiesDummyObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UJsonUtilitiesDummyObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UJsonUtilitiesDummyObject__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FFieldClass_*,int,FIdentityFunctor,TDereferenceWrapper<FFieldClass_*,`UE::JsonUtilities::DumpUETypeInformation'::__l25::<lambda_2>_>_> @ 14461ee00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FFieldClass_*,int,FIdentityFunctor,TDereferenceWrapper<FFieldClass_*,_UE::JsonUtilities::DumpUETypeInformation_::__l25::<lambda_2>_>_>
          (FFieldClass **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FFieldClass_*,_void___cdecl_UE::JsonUtilities::DumpUETypeInformation(FString_const_&,bool,bool)_::_25_::<lambda_2>_>
          param_4)

{
  FFieldClass *pFVar1;
  bool bVar2;
  int iVar3;
  FFieldClass **ppFVar4;
  FFieldClass **ppFVar5;
  int iVar6;
  FFieldClass ***pppFVar7;
  FFieldClass **ppFVar8;
  FFieldClass **ppFVar9;
  FFieldClass **ppFVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  FFieldClass **local_358;
  FFieldClass **local_348;
  FFieldClass **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    pppFVar7 = &local_348;
    do {
      ppFVar4 = pppFVar7[1];
      ppFVar5 = *pppFVar7;
      local_358 = pppFVar7[2];
      iVar3 = (int)((longlong)ppFVar4 - (longlong)ppFVar5 >> 3) + 1;
      ppFVar10 = ppFVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14461eec0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar8 = ppFVar4 + 1;
          pFVar1 = ppFVar10[iVar3 >> 1];
          ppFVar10[iVar3 >> 1] = *ppFVar10;
          *ppFVar10 = pFVar1;
          ppFVar5 = ppFVar10;
LAB_14461eef0:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar4) goto code_r0x00014461eef9;
          goto LAB_14461ef10;
        }
        for (; ppFVar8 = ppFVar10, ppFVar5 = ppFVar10, ppFVar10 < ppFVar4; ppFVar4 = ppFVar4 + -1) {
          while (ppFVar9 = ppFVar8, ppFVar5 = ppFVar5 + 1, ppFVar5 <= ppFVar4) {
            bVar2 = `UE::JsonUtilities::DumpUETypeInformation'::__l25::<lambda_2>::operator()
                              (param_4.Predicate,*ppFVar9,*ppFVar5);
            ppFVar8 = ppFVar5;
            if (!bVar2) {
              ppFVar8 = ppFVar9;
            }
          }
          pFVar1 = *ppFVar9;
          *ppFVar9 = *ppFVar4;
          *ppFVar4 = pFVar1;
        }
        goto LAB_14461efd6;
      }
LAB_14461efc5:
      HeapSortInternal<FFieldClass_*,int,FIdentityFunctor,TDereferenceWrapper<FFieldClass_*,_UE::JsonUtilities::DumpUETypeInformation_::__l25::<lambda_2>_>_>
                (ppFVar5,iVar3,param_3,param_4);
LAB_14461efd6:
      pppFVar7 = pppFVar7 + -3;
    } while (&local_348 <= pppFVar7);
  }
  return;
code_r0x00014461eef9:
  bVar2 = `UE::JsonUtilities::DumpUETypeInformation'::__l25::<lambda_2>::operator()
                    (param_4.Predicate,*ppFVar10,*ppFVar5);
  if (!bVar2) goto LAB_14461eef0;
LAB_14461ef10:
  do {
    ppFVar9 = ppFVar8;
    ppFVar8 = ppFVar9 + -1;
    if (ppFVar8 <= ppFVar10) break;
    bVar2 = `UE::JsonUtilities::DumpUETypeInformation'::__l25::<lambda_2>::operator()
                      (param_4.Predicate,*ppFVar8,*ppFVar10);
  } while (!bVar2);
  if (ppFVar5 <= ppFVar8) {
    pFVar1 = *ppFVar5;
    *ppFVar5 = *ppFVar8;
    *ppFVar8 = pFVar1;
    goto LAB_14461eef0;
  }
  pFVar1 = *ppFVar10;
  iVar6 = iVar6 + -1;
  *ppFVar10 = *ppFVar8;
  *ppFVar8 = pFVar1;
  if ((longlong)((longlong)ppFVar8 + (-8 - (longlong)ppFVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar4 - (longlong)ppFVar5 & 0xfffffffffffffff8U)) {
    if (ppFVar5 < ppFVar4) {
      *pppFVar7 = ppFVar5;
      pppFVar7[1] = ppFVar4;
      *(int *)(pppFVar7 + 2) = iVar6;
      pppFVar7 = pppFVar7 + 3;
    }
    if (ppFVar8 <= ppFVar10 + 1) goto LAB_14461efd6;
    ppFVar4 = ppFVar9 + -2;
    ppFVar5 = ppFVar10;
  }
  else {
    if (ppFVar10 + 1 < ppFVar8) {
      *pppFVar7 = ppFVar10;
      pppFVar7[1] = ppFVar9 + -2;
      *(int *)(pppFVar7 + 2) = iVar6;
      pppFVar7 = pppFVar7 + 3;
    }
    if (ppFVar4 <= ppFVar5) goto LAB_14461efd6;
  }
  iVar3 = (int)((longlong)ppFVar4 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar10 = ppFVar5;
  if (iVar6 == 0) goto LAB_14461efc5;
  goto LAB_14461eec0;
}

// IntroSortInternal<UField_const_*,int,FIdentityFunctor,TDereferenceWrapper<UField_const_*,`UE::JsonUtilities::DumpUETypeInformation'::__l9::<lambda_1>_>_> @ 14461f0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UField_const_*,int,FIdentityFunctor,TDereferenceWrapper<UField_const_*,_UE::JsonUtilities::DumpUETypeInformation_::__l9::<lambda_1>_>_>
          (UField **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UField_const_*,_void___cdecl_UE::JsonUtilities::DumpUETypeInformation(FString_const_&,bool,bool)_::_9_::<lambda_1>_>
          param_4)

{
  UField *pUVar1;
  bool bVar2;
  int iVar3;
  UField **ppUVar4;
  UField **ppUVar5;
  int iVar6;
  UField ***pppUVar7;
  UField **ppUVar8;
  UField **ppUVar9;
  UField **ppUVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  UField **local_358;
  UField **local_348;
  UField **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    pppUVar7 = &local_348;
    do {
      ppUVar4 = pppUVar7[1];
      ppUVar5 = *pppUVar7;
      local_358 = pppUVar7[2];
      iVar3 = (int)((longlong)ppUVar4 - (longlong)ppUVar5 >> 3) + 1;
      ppUVar10 = ppUVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14461f160:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppUVar8 = ppUVar4 + 1;
          pUVar1 = ppUVar10[iVar3 >> 1];
          ppUVar10[iVar3 >> 1] = *ppUVar10;
          *ppUVar10 = pUVar1;
          ppUVar5 = ppUVar10;
LAB_14461f190:
          ppUVar5 = ppUVar5 + 1;
          if (ppUVar5 <= ppUVar4) goto code_r0x00014461f199;
          goto LAB_14461f1b0;
        }
        for (; ppUVar8 = ppUVar10, ppUVar5 = ppUVar10, ppUVar10 < ppUVar4; ppUVar4 = ppUVar4 + -1) {
          while (ppUVar9 = ppUVar8, ppUVar5 = ppUVar5 + 1, ppUVar5 <= ppUVar4) {
            bVar2 = `UE::JsonUtilities::DumpUETypeInformation'::__l9::<lambda_1>::operator()
                              (param_4.Predicate,*ppUVar9,*ppUVar5);
            ppUVar8 = ppUVar5;
            if (!bVar2) {
              ppUVar8 = ppUVar9;
            }
          }
          pUVar1 = *ppUVar9;
          *ppUVar9 = *ppUVar4;
          *ppUVar4 = pUVar1;
        }
        goto LAB_14461f276;
      }
LAB_14461f265:
      HeapSortInternal<UField_const_*,int,FIdentityFunctor,TDereferenceWrapper<UField_const_*,_UE::JsonUtilities::DumpUETypeInformation_::__l9::<lambda_1>_>_>
                (ppUVar5,iVar3,param_3,param_4);
LAB_14461f276:
      pppUVar7 = pppUVar7 + -3;
    } while (&local_348 <= pppUVar7);
  }
  return;
code_r0x00014461f199:
  bVar2 = `UE::JsonUtilities::DumpUETypeInformation'::__l9::<lambda_1>::operator()
                    (param_4.Predicate,*ppUVar10,*ppUVar5);
  if (!bVar2) goto LAB_14461f190;
LAB_14461f1b0:
  do {
    ppUVar9 = ppUVar8;
    ppUVar8 = ppUVar9 + -1;
    if (ppUVar8 <= ppUVar10) break;
    bVar2 = `UE::JsonUtilities::DumpUETypeInformation'::__l9::<lambda_1>::operator()
                      (param_4.Predicate,*ppUVar8,*ppUVar10);
  } while (!bVar2);
  if (ppUVar5 <= ppUVar8) {
    pUVar1 = *ppUVar5;
    *ppUVar5 = *ppUVar8;
    *ppUVar8 = pUVar1;
    goto LAB_14461f190;
  }
  pUVar1 = *ppUVar10;
  iVar6 = iVar6 + -1;
  *ppUVar10 = *ppUVar8;
  *ppUVar8 = pUVar1;
  if ((longlong)((longlong)ppUVar8 + (-8 - (longlong)ppUVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppUVar4 - (longlong)ppUVar5 & 0xfffffffffffffff8U)) {
    if (ppUVar5 < ppUVar4) {
      *pppUVar7 = ppUVar5;
      pppUVar7[1] = ppUVar4;
      *(int *)(pppUVar7 + 2) = iVar6;
      pppUVar7 = pppUVar7 + 3;
    }
    if (ppUVar8 <= ppUVar10 + 1) goto LAB_14461f276;
    ppUVar4 = ppUVar9 + -2;
    ppUVar5 = ppUVar10;
  }
  else {
    if (ppUVar10 + 1 < ppUVar8) {
      *pppUVar7 = ppUVar10;
      pppUVar7[1] = ppUVar9 + -2;
      *(int *)(pppUVar7 + 2) = iVar6;
      pppUVar7 = pppUVar7 + 3;
    }
    if (ppUVar4 <= ppUVar5) goto LAB_14461f276;
  }
  iVar3 = (int)((longlong)ppUVar4 - (longlong)ppUVar5 >> 3) + 1;
  ppUVar10 = ppUVar5;
  if (iVar6 == 0) goto LAB_14461f265;
  goto LAB_14461f160;
}

// IntroSortInternal<TTuple<FName,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FName,int>,`UE::JsonUtilities::WriteUField'::__l5::<lambda_1>_>_> @ 14461f340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FName,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FName,int>,_UE::JsonUtilities::WriteUField_::__l5::<lambda_1>_>_>
          (TTuple<FName,int> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<FName,int>,_void___cdecl_UE::JsonUtilities::WriteUField(UField_const_*,UE::JsonUtilities::FJsonUETypeWriter_&)_::_5_::<lambda_1>_>
          param_4)

{
  TTuple<FName,int> *pTVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  TTuple<FName,int> *pTVar6;
  TTuple<FName,int> *pTVar7;
  TTuple<FName,int> *pTVar8;
  TTuple<FName,int> *pTVar9;
  TTuple<FName,int> *pTVar10;
  TTuple<FName,int> *pTVar11;
  TTuple<FName,int> **ppTVar12;
  float fVar13;
  undefined1 auStack_378 [48];
  TTuple<FName,int> *local_348;
  TTuple<FName,int> *local_338;
  TTuple<FName,int> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar13;
    memset(local_320,0,0x2e8);
    ppTVar12 = &local_338;
    do {
      pTVar6 = ppTVar12[1];
      pTVar11 = *ppTVar12;
      pTVar1 = ppTVar12[2];
      local_348._0_4_ = (int)pTVar1;
      iVar5 = (int)(((longlong)pTVar6 - (longlong)pTVar11) / 0xc) + 1;
      pTVar10 = pTVar11;
      if ((int)local_348 != 0) {
LAB_14461f410:
        if (8 < iVar5) {
          pTVar8 = pTVar6 + 1;
          iVar5 = iVar5 / 2;
          uVar2 = *(undefined8 *)(pTVar10 + iVar5);
          uVar3 = *(undefined4 *)&pTVar10[iVar5].field_0x8;
          *(undefined8 *)(pTVar10 + iVar5) = *(undefined8 *)pTVar10;
          *(undefined4 *)&pTVar10[iVar5].field_0x8 = *(undefined4 *)&pTVar10->field_0x8;
          *(undefined8 *)pTVar10 = uVar2;
          *(undefined4 *)&pTVar10->field_0x8 = uVar3;
          pTVar11 = pTVar10;
LAB_14461f456:
          pTVar7 = pTVar11;
          pTVar11 = pTVar7 + 1;
          if (pTVar11 <= pTVar6) goto code_r0x00014461f45f;
          goto LAB_14461f470;
        }
        for (; pTVar11 = pTVar10, pTVar1 = pTVar10, pTVar10 < pTVar6; pTVar6 = pTVar6 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar6) {
            if (*(int *)&pTVar11->field_0x8 < *(int *)&pTVar1->field_0x8) {
              pTVar11 = pTVar1;
            }
          }
          uVar2 = *(undefined8 *)pTVar11;
          uVar3 = *(undefined4 *)&pTVar11->field_0x8;
          *(undefined8 *)pTVar11 = *(undefined8 *)pTVar6;
          *(undefined4 *)&pTVar11->field_0x8 = *(undefined4 *)&pTVar6->field_0x8;
          *(undefined8 *)pTVar6 = uVar2;
          *(undefined4 *)&pTVar6->field_0x8 = uVar3;
        }
        goto LAB_14461f586;
      }
LAB_14461f577:
      local_348 = pTVar1;
      HeapSortInternal<TTuple<FName,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FName,int>,_UE::JsonUtilities::WriteUField_::__l5::<lambda_1>_>_>
                (pTVar11,iVar5,param_3,param_4);
LAB_14461f586:
      ppTVar12 = ppTVar12 + -3;
    } while (&local_338 <= ppTVar12);
  }
  return;
code_r0x00014461f45f:
  if (*(int *)&pTVar7[1].field_0x8 <= *(int *)&pTVar10->field_0x8) goto LAB_14461f456;
LAB_14461f470:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if (pTVar8 <= pTVar10) break;
  } while (*(int *)&pTVar10->field_0x8 <= *(int *)&pTVar9[-1].field_0x8);
  if (pTVar11 <= pTVar8) {
    uVar2 = *(undefined8 *)pTVar11;
    uVar3 = *(undefined4 *)&pTVar7[1].field_0x8;
    *(undefined8 *)pTVar11 = *(undefined8 *)pTVar8;
    *(undefined4 *)&pTVar7[1].field_0x8 = *(undefined4 *)&pTVar9[-1].field_0x8;
    *(undefined8 *)pTVar8 = uVar2;
    *(undefined4 *)&pTVar9[-1].field_0x8 = uVar3;
    goto LAB_14461f456;
  }
  uVar3 = *(undefined4 *)&pTVar10->field_0x8;
  local_348._0_4_ = (int)local_348 + -1;
  uVar2 = *(undefined8 *)pTVar10;
  *(undefined8 *)pTVar10 = *(undefined8 *)pTVar8;
  *(undefined4 *)&pTVar10->field_0x8 = *(undefined4 *)&pTVar9[-1].field_0x8;
  *(undefined8 *)pTVar8 = uVar2;
  *(undefined4 *)&pTVar9[-1].field_0x8 = uVar3;
  lVar4 = (longlong)pTVar8 + (-0xc - (longlong)pTVar10);
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  if ((lVar4 >> 1) - (lVar4 >> 0x3f) < ((longlong)pTVar6 - (longlong)pTVar11) / 0xc) {
    if (pTVar11 < pTVar6) {
      *ppTVar12 = pTVar11;
      ppTVar12[1] = pTVar6;
      *(int *)(ppTVar12 + 2) = (int)local_348;
      ppTVar12 = ppTVar12 + 3;
    }
    if (pTVar8 <= pTVar10 + 1) goto LAB_14461f586;
    pTVar6 = pTVar9 + -2;
    pTVar11 = pTVar10;
  }
  else {
    if (pTVar10 + 1 < pTVar8) {
      *ppTVar12 = pTVar10;
      ppTVar12[1] = pTVar9 + -2;
      *(int *)(ppTVar12 + 2) = (int)local_348;
      ppTVar12 = ppTVar12 + 3;
    }
    if (pTVar6 <= pTVar11) goto LAB_14461f586;
  }
  iVar5 = (int)(((longlong)pTVar6 - (longlong)pTVar11) / 0xc) + 1;
  pTVar10 = pTVar11;
  if ((int)local_348 == 0) goto LAB_14461f577;
  goto LAB_14461f410;
}

// MakeShared<TJsonValueString<wchar_t>,1,FString_&> @ 14461f640

TSharedRef<TJsonValueString<wchar_t>,1> * __cdecl
MakeShared<TJsonValueString<wchar_t>,1,FString_&>
          (TSharedRef<TJsonValueString<wchar_t>,1> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<TJsonValueString<wchar_t>,1> *pTVar4;
  
  pTVar3 = operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (TJsonValueString<wchar_t> *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TJsonValueString__W___00_SharedPointerInternals__6B_
    ;
    FJsonValue::FJsonValue((FJsonValue *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&___7__TJsonValueString__W__6B_;
    FString::FString((FString *)(pTVar3 + 2),param_1);
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x2;
    __return_storage_ptr__->Object = (TJsonValueString<wchar_t> *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((TJsonValueString<wchar_t> *)(pTVar3 + 1) == (TJsonValueString<wchar_t> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<TJsonValueString<wchar_t>,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<TJsonValueString<wchar_t>,1,FString_const_&> @ 14461f730

TSharedRef<TJsonValueString<wchar_t>,1> * __cdecl
MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>
          (TSharedRef<TJsonValueString<wchar_t>,1> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<TJsonValueString<wchar_t>,1> *pTVar4;
  
  pTVar3 = operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (TJsonValueString<wchar_t> *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TJsonValueString__W___00_SharedPointerInternals__6B_
    ;
    FJsonValue::FJsonValue((FJsonValue *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&___7__TJsonValueString__W__6B_;
    FString::FString((FString *)(pTVar3 + 2),param_1);
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x2;
    __return_storage_ptr__->Object = (TJsonValueString<wchar_t> *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((TJsonValueString<wchar_t> *)(pTVar3 + 1) == (TJsonValueString<wchar_t> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<TJsonValueString<wchar_t>,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FJsonValueObject,1,TSharedRef<FJsonObject,1>_&> @ 14461f820

TSharedRef<FJsonValueObject,1> * __cdecl
MakeShared<FJsonValueObject,1,TSharedRef<FJsonObject,1>_&>
          (TSharedRef<FJsonValueObject,1> *__return_storage_ptr__,TSharedRef<FJsonObject,1> *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FJsonValueObject,1> *pTVar4;
  TSharedPtr<FJsonObject,1> local_18;
  
  pTVar3 = operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValueObject *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    local_18.Object = param_1->Object;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar3 + 1),&local_18);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FJsonValueObject *)(pTVar3 + 1);
    if ((FJsonValueObject *)(pTVar3 + 1) == (FJsonValueObject *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FJsonValueObject,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// UStructToJsonObjectStringInternal<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> @ 14461ff10

bool __cdecl
UStructToJsonObjectStringInternal<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
          (TSharedRef<FJsonObject,1> *param_1,FString *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  TSharedPtr<FJsonObject,1> local_38;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_28;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_18;
  
  TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create(&local_18,param_2,param_3)
  ;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_38.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.SharedReferenceCount.ReferenceController = pTVar1;
  MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
            (&local_28,&local_38);
  bVar2 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(&local_28,local_18.Object,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (**(code **)((local_18.Object)->_padding_ + 8))(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// UStructToJsonObjectStringInternal<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> @ 14461ffb0

bool __cdecl
UStructToJsonObjectStringInternal<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
          (TSharedRef<FJsonObject,1> *param_1,FString *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *this;
  TRawPtrProxy<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_> local_res8;
  TSharedPtr<FJsonObject,1> local_38;
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1> local_28;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_18;
  
  this = operator_new(0x40);
  local_res8.Object = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)0x0;
  if (this != (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)0x0) {
    local_res8.Object =
         TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>::
         TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>(this,param_2,param_3);
  }
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1>::
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_>
            (&local_28,&local_res8);
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  local_38.Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.SharedReferenceCount.ReferenceController = pTVar1;
  MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
            (&local_18,&local_38);
  bVar2 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
                    (&local_18,
                     (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)local_28.Object,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (**(code **)((local_28.Object)->_padding_ + 8))(local_28.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// WriteSortedObjectHelper<FField_const_*,`UE::JsonUtilities::WriteUField'::__l28::<lambda_2>,`UE::JsonUtilities::WriteUField'::__l28::<lambda_3>_> @ 144622760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::JsonUtilities::
WriteSortedObjectHelper<FField_const_*,_UE::JsonUtilities::WriteUField_::__l28::<lambda_2>,_UE::JsonUtilities::WriteUField_::__l28::<lambda_3>_>
          (wchar_t *param_1,TArray<FField_const_*,TSizedDefaultAllocator<32>_> *param_2,
          FJsonUETypeWriter *param_3,<lambda_2> *param_4,<lambda_3> *param_5)

{
  void *_Dst;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  undefined1 auStackY_138 [32];
  undefined1 local_108;
  FIdentityFunctor local_107 [7];
  undefined2 local_100 [4];
  undefined2 local_f8 [4];
  uint local_f0 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_e8;
  uint local_d8;
  undefined1 local_d4 [20];
  FString *local_c0;
  uint *local_b8;
  FString local_b0;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator> local_98
  ;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_d4._12_8_ = param_5;
  if (param_2->ArrayNum != 0) {
    local_d4._4_8_ = param_1;
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_*_&>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_3,
               (wchar_t **)(local_d4 + 4));
    iVar5 = param_2->ArrayNum;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    local_f0[0] = 0;
    if (0 < iVar5) {
      do {
        uVar4 = local_f0[0];
        uVar9 = 0;
        if ((int)local_f0[0] < iVar5) {
          uVar9 = ~local_f0[0] >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FField::GetFullName(*(FField **)
                             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 8),
                            &local_b0);
        local_c0 = &local_b0;
        local_b8 = local_f0;
        TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FString_&&,int_const_&>_>
                  (&local_98,(TPairInitializer<FString_&&,int_const_&> *)local_d4,(bool *)&local_c0)
        ;
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        iVar5 = param_2->ArrayNum;
        local_f0[0] = local_f0[0] + 1;
      } while ((int)local_f0[0] < iVar5);
    }
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
    GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                *)&local_98,&local_e8);
    AlgoImpl::
    IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
              ((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum,local_107[0],
               (TLess<void> *)local_107);
    uVar6 = (ulonglong)local_e8.ArrayNum;
    pFVar12 = local_e8.AllocatorInstance.Data + uVar6 * 0x10;
    local_d8 = local_e8.ArrayNum;
    uVar11 = uVar6;
    FVar13.Data = local_e8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar6 != (int)uVar11) {
        local_108 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_108);
      }
      if (FVar13.Data == pFVar12) break;
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<FString_const_&>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_3,
                 (FString *)FVar13.Data);
      if (*(int *)(FVar13.Data + 8) == 0) {
        pwVar10 = L"";
        uVar4 = 0;
      }
      else {
        pwVar10 = *(wchar_t **)FVar13.Data;
        uVar4 = *(int *)(FVar13.Data + 8) - 1;
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar4,pwVar10);
      iVar5 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(&local_98,uVar4,(FString *)FVar13.Data);
      puVar8 = (uint *)0x0;
      if (iVar5 != -1) {
        puVar8 = (uint *)((longlong)iVar5 * 0x20 + local_98.Elements._0_8_);
      }
      puVar7 = puVar8 + 4;
      if (puVar8 == (uint *)0x0) {
        puVar7 = (uint *)0x0;
      }
      uVar4 = *puVar7;
      uVar9 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar9 = ~uVar4 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      WriteFField(*(FField **)((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 8),
                  param_5->Writer);
      uVar9 = *(int *)&param_3->field_0x18 - 1;
      uVar4 = 0;
      if ((int)uVar9 < *(int *)&param_3->field_0x18) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(int *)(*(longlong *)&param_3->field_0x10 + -4 +
                   (longlong)*(int *)&param_3->field_0x18 * 4) != 6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Stack.Top() == EJson::Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0x8e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(**(longlong **)&param_3->field_0x8 + 0x188))
                (*(longlong **)&param_3->field_0x8,L"\r\n",4);
      *(int *)&param_3->field_0x24 = *(int *)&param_3->field_0x24 + -1;
      plVar1 = *(longlong **)&param_3->field_0x8;
      if (0 < (int)*(uint *)&param_3->field_0x24) {
        uVar11 = (ulonglong)*(uint *)&param_3->field_0x24;
        do {
          local_100[0] = 9;
          (**(code **)(*plVar1 + 0x188))(plVar1,local_100,2);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      local_f8[0] = 0x7d;
      (**(code **)(**(longlong **)&param_3->field_0x8 + 0x188))
                (*(longlong **)&param_3->field_0x8,local_f8,2);
      if ((*(int *)&param_3->field_0x18 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = *(int *)&param_3->field_0x18 - 1;
      _Dst = (void *)(*(longlong *)&param_3->field_0x10 + (longlong)(int)uVar4 * 4);
      iVar5 = ~uVar4 + *(int *)&param_3->field_0x18;
      if (iVar5 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar5 << 2);
      }
      *(int *)&param_3->field_0x18 = *(int *)&param_3->field_0x18 + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(ForAnyElementType *)&param_3->field_0x10,*(int *)&param_3->field_0x18,
                 (int *)&param_3->field_0x1c);
      uVar6 = local_e8._8_8_ & 0xffffffff;
      FVar13.Data = FVar13.Data + 0x10;
      uVar11 = (ulonglong)local_d8;
      *(undefined4 *)&param_3->field_0x20 = 3;
      param_5 = (<lambda_3> *)local_d4._12_8_;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_3);
    DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  return;
}

// WriteSortedObjectHelper<FRepRecord,`UE::JsonUtilities::WriteUField'::__l113::<lambda_5>,`UE::JsonUtilities::WriteUField'::__l113::<lambda_6>_> @ 144622bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::JsonUtilities::
WriteSortedObjectHelper<FRepRecord,_UE::JsonUtilities::WriteUField_::__l113::<lambda_5>,_UE::JsonUtilities::WriteUField_::__l113::<lambda_6>_>
          (wchar_t *param_1,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_2,
          FJsonUETypeWriter *param_3,<lambda_5> *param_4,<lambda_6> *param_5)

{
  void *_Dst;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  undefined1 auStackY_138 [32];
  undefined1 local_108;
  FIdentityFunctor local_107 [7];
  undefined2 local_100 [4];
  undefined2 local_f8 [4];
  uint local_f0 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_e8;
  uint local_d8;
  undefined1 local_d4 [20];
  FString *local_c0;
  uint *local_b8;
  FString local_b0;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator> local_98
  ;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_d4._12_8_ = param_5;
  if (param_2->ArrayNum != 0) {
    local_d4._4_8_ = param_1;
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<wchar_t_const_*_&>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_3,
               (wchar_t **)(local_d4 + 4));
    iVar5 = param_2->ArrayNum;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    local_f0[0] = 0;
    if (0 < iVar5) {
      do {
        uVar4 = local_f0[0];
        uVar9 = 0;
        if ((int)local_f0[0] < iVar5) {
          uVar9 = ~local_f0[0] >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FField::GetFullName(*(FField **)
                             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x10),
                            &local_b0);
        local_c0 = &local_b0;
        local_b8 = local_f0;
        TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FString_&&,int_const_&>_>
                  (&local_98,(TPairInitializer<FString_&&,int_const_&> *)local_d4,(bool *)&local_c0)
        ;
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        iVar5 = param_2->ArrayNum;
        local_f0[0] = local_f0[0] + 1;
      } while ((int)local_f0[0] < iVar5);
    }
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
    GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                *)&local_98,&local_e8);
    AlgoImpl::
    IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
              ((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum,local_107[0],
               (TLess<void> *)local_107);
    uVar6 = (ulonglong)local_e8.ArrayNum;
    pFVar12 = local_e8.AllocatorInstance.Data + uVar6 * 0x10;
    local_d8 = local_e8.ArrayNum;
    uVar11 = uVar6;
    FVar13.Data = local_e8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar6 != (int)uVar11) {
        local_108 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_108);
      }
      if (FVar13.Data == pFVar12) break;
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<FString_const_&>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_3,
                 (FString *)FVar13.Data);
      if (*(int *)(FVar13.Data + 8) == 0) {
        pwVar10 = L"";
        uVar4 = 0;
      }
      else {
        pwVar10 = *(wchar_t **)FVar13.Data;
        uVar4 = *(int *)(FVar13.Data + 8) - 1;
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar4,pwVar10);
      iVar5 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(&local_98,uVar4,(FString *)FVar13.Data);
      puVar8 = (uint *)0x0;
      if (iVar5 != -1) {
        puVar8 = (uint *)((longlong)iVar5 * 0x20 + local_98.Elements._0_8_);
      }
      puVar7 = puVar8 + 4;
      if (puVar8 == (uint *)0x0) {
        puVar7 = (uint *)0x0;
      }
      uVar4 = *puVar7;
      uVar9 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar9 = ~uVar4 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
      WriteValue<int_const_&,wchar_t_const_(&)[6]>
                ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_5->Writer,
                 (wchar_t (*) [6])L"Index",
                 (int *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x10 + 8));
      uVar9 = *(int *)&param_3->field_0x18 - 1;
      uVar4 = 0;
      if ((int)uVar9 < *(int *)&param_3->field_0x18) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(int *)(*(longlong *)&param_3->field_0x10 + -4 +
                   (longlong)*(int *)&param_3->field_0x18 * 4) != 6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Stack.Top() == EJson::Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0x8e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(**(longlong **)&param_3->field_0x8 + 0x188))
                (*(longlong **)&param_3->field_0x8,L"\r\n",4);
      *(int *)&param_3->field_0x24 = *(int *)&param_3->field_0x24 + -1;
      plVar1 = *(longlong **)&param_3->field_0x8;
      if (0 < (int)*(uint *)&param_3->field_0x24) {
        uVar11 = (ulonglong)*(uint *)&param_3->field_0x24;
        do {
          local_100[0] = 9;
          (**(code **)(*plVar1 + 0x188))(plVar1,local_100,2);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      local_f8[0] = 0x7d;
      (**(code **)(**(longlong **)&param_3->field_0x8 + 0x188))
                (*(longlong **)&param_3->field_0x8,local_f8,2);
      if ((*(int *)&param_3->field_0x18 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = *(int *)&param_3->field_0x18 - 1;
      _Dst = (void *)(*(longlong *)&param_3->field_0x10 + (longlong)(int)uVar4 * 4);
      iVar5 = ~uVar4 + *(int *)&param_3->field_0x18;
      if (iVar5 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar5 << 2);
      }
      *(int *)&param_3->field_0x18 = *(int *)&param_3->field_0x18 + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(ForAnyElementType *)&param_3->field_0x10,*(int *)&param_3->field_0x18,
                 (int *)&param_3->field_0x1c);
      uVar6 = local_e8._8_8_ & 0xffffffff;
      FVar13.Data = FVar13.Data + 0x10;
      uVar11 = (ulonglong)local_d8;
      *(undefined4 *)&param_3->field_0x20 = 3;
      param_5 = (<lambda_6> *)local_d4._12_8_;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)param_3);
    DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  return;
}

// `scalar_deleting_destructor' @ 144626420

void * __thiscall
UE::JsonUtilities::FArchiveMD5Generator::_scalar_deleting_destructor_
          (FArchiveMD5Generator *this,uint param_1)

{
  FMD5::~FMD5(&this->HashBuilder);
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144626470

void * __thiscall
UE::JsonUtilities::FJsonUETypeWriter::_scalar_deleting_destructor_
          (FJsonUETypeWriter *this,uint param_1)

{
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>::
  ~TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>
            ((TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446264b0

void * __thiscall
UJsonUtilitiesDummyObject::_scalar_deleting_destructor_
          (UJsonUtilitiesDummyObject *this,uint param_1)

{
  *(undefined ***)this = &___7UJsonUtilitiesDummyObject__6B_;
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

// ConvertScalarFPropertyToJsonValueWithContainer @ 1446265d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FJsonValue,1> * __cdecl
`anonymous_namespace'::ConvertScalarFPropertyToJsonValueWithContainer
          (TSharedPtr<FJsonValue,1> *__return_storage_ptr__,FProperty *param_1,void *param_2,
          UObject *param_3,
          TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *param_4,
          long64 param_5,long64 param_6,
          TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
          *param_7,FProperty *param_8,EJsonObjectConversionFlags param_9)

{
  byte bVar1;
  byte bVar2;
  EArrayPropertyFlags EVar3;
  longlong *plVar4;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar5;
  ForElementType<unsigned_int> FVar6;
  UScriptStruct *pUVar7;
  code *pcVar8;
  undefined8 uVar9;
  UObject *pUVar10;
  FScriptSetHelper *pFVar11;
  FScriptMapHelper *pFVar12;
  FScriptMapHelper_u_16 FVar13;
  char cVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  UEnum *pUVar18;
  long64 lVar19;
  TSharedRef<FJsonValueNumber,1> *pTVar20;
  longlong lVar21;
  undefined1 *puVar22;
  TSharedPtr<FJsonValue,1> *pTVar23;
  TSharedRef<FJsonValueArray,1> *pTVar24;
  uchar *puVar25;
  FString *pFVar26;
  TSharedRef<FJsonValueObject,1> *pTVar27;
  TReferenceControllerBase<1> *pTVar28;
  FUtf8String *pFVar29;
  FProperty *pFVar30;
  UObjectBaseUtility *this;
  UScriptStruct *pUVar31;
  IJsonObjectStructConverter *pIVar32;
  TSharedRef<FJsonObject,1> *pTVar33;
  ICppStructOps *pIVar34;
  _func___cdecl_void *p_Var35;
  FMapProperty *pFVar36;
  TSharedRef<TJsonValueString<wchar_t>,1> *pTVar37;
  FMapProperty *pFVar38;
  ForElementType<unsigned_int> FVar39;
  FMapProperty *pFVar40;
  uint uVar41;
  int iVar42;
  FMapProperty *pFVar43;
  void *pvVar44;
  ulonglong uVar45;
  undefined1 auStackY_4d8 [32];
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_468;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_458;
  FString local_448;
  undefined4 local_438 [2];
  long64 local_430;
  UObject *local_428;
  TSharedPtr<FJsonValue,1> local_420;
  TSharedPtr<FJsonValue,1> local_410;
  TScriptContainerIterator<FScriptSetHelper> local_3f8;
  FScriptMapHelper *local_3e8;
  uint uStack_3e0;
  uint uStack_3dc;
  FString local_3d8;
  int local_3c8;
  int local_3c4;
  int local_3c0;
  int local_3bc;
  TSharedPtr<FJsonValue,1> *local_3b8;
  FJsonObject *local_3a8;
  TReferenceControllerBase<1> *pTStack_3a0;
  FString local_398;
  FJsonValue *local_388;
  TReferenceControllerBase<1> *local_380;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  TSharedPtr<FJsonValue,1> local_338;
  TSharedRef<FJsonObject,1> local_328;
  TSharedRef<FJsonObject,1> local_318;
  double local_308;
  UObjectBaseUtility *local_300;
  UObjectBaseUtility *local_2f8;
  TSharedPtr<FJsonValue,1> local_2f0;
  TSharedRef<FJsonObject,1> local_2e0;
  FScriptArrayHelper local_2d0;
  FString local_2b0;
  FString local_2a0;
  TSharedRef<FJsonValueObject,1> local_290;
  TSharedPtr<FJsonObject,1> local_280;
  TSharedRef<TJsonValueString<wchar_t>,1> local_270;
  TSharedRef<TJsonValueString<wchar_t>,1> local_260;
  TSharedRef<TJsonValueString<wchar_t>,1> local_250;
  TSharedRef<TJsonValueString<wchar_t>,1> local_240;
  TSharedRef<FJsonValueNumber,1> local_230;
  TSharedRef<TJsonValueString<wchar_t>,1> local_220;
  TSharedRef<FJsonValueArray,1> local_210;
  TSharedRef<FJsonValueArray,1> local_200;
  TScriptContainerIterator<FScriptMapHelper> local_1e8;
  TScriptContainerIterator<FScriptMapHelper> local_1d8;
  FString local_1c8;
  FString local_1b8;
  TSharedRef<FJsonValueObject,1> local_1a8;
  FString local_198;
  TSharedRef<TJsonValueString<wchar_t>,1> local_188;
  FString local_178;
  TSharedRef<TJsonValueString<wchar_t>,1> local_168;
  TSharedRef<FJsonObject,1> local_158;
  TSharedPtr<FJsonObject,1> local_148;
  TSharedRef<FJsonObject,1> local_138;
  TSharedRef<TJsonValueString<wchar_t>,1> local_128;
  TSharedRef<FJsonValueObject,1> local_118;
  TSharedRef<TJsonValueString<wchar_t>,1> local_108;
  FReadAccessScope local_f8;
  FReadAccessScope local_e0;
  FScriptMapHelper local_c8;
  FScriptSetHelper local_90;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  pFVar38 = (FMapProperty *)0x0;
  local_430 = param_6;
  local_428 = (UObject *)param_7;
  local_3b8 = __return_storage_ptr__;
  if (param_7 !=
      (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
       *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_7,&local_f8);
    puVar22 = &param_7->field_0x8;
    if (((*(int *)&param_7->field_0x10 == 0) ||
        (plVar4 = *(longlong **)puVar22, plVar4 == (longlong *)0x0)) ||
       (cVar14 = (**(code **)(*plVar4 + 0x38))(), cVar14 == '\0')) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f8);
    param_7 = (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
               *)local_428;
    if (bVar15) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_428,&local_e0);
      pFVar36 = pFVar38;
      if (*(int *)&((UObject *)param_7)->field_0x10 != 0) {
        pFVar36 = *(FMapProperty **)puVar22;
      }
      (**(code **)(pFVar36->_padding_ + 0x60))(pFVar36,&local_388);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e0);
      if (local_388 != (FJsonValue *)0x0) {
        __return_storage_ptr__->Object = local_388;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_380;
        local_380 = (TReferenceControllerBase<1> *)0x0;
        local_388 = (FJsonValue *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_380)
      ;
    }
  }
  pFVar36 = pFVar38;
  if (param_1 != (FProperty *)0x0) {
    if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0) {
      pUVar18 = (UEnum *)param_1[1]._padding_;
      lVar19 = (**(code **)(*(longlong *)param_1[1]._padding_ + 0x210))
                         ((longlong *)param_1[1]._padding_,param_2);
      UEnum::GetAuthoredNameStringByValue(pUVar18,&local_2a0,lVar19);
      pTVar37 = MakeShared<TJsonValueString<wchar_t>,1,FString_&>(&local_220,&local_2a0);
      __return_storage_ptr__->Object = (FJsonValue *)pTVar37->Object;
      pTVar28 = (pTVar37->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar28;
      if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_220.SharedReferenceCount.ReferenceController);
      goto LAB_144627d64;
    }
    uVar16 = *(uint *)(param_1->_padding_ + 0x18);
    if ((uVar16 >> 0x18 & 1) != 0) {
      pUVar18 = (UEnum *)(**(code **)(param_1->_padding_ + 0x1e0))(param_1);
      if (pUVar18 != (UEnum *)0x0) {
        lVar19 = (**(code **)(param_1->_padding_ + 0x210))(param_1,param_2);
        UEnum::GetAuthoredNameStringByValue(pUVar18,&local_2b0,lVar19);
        pTVar37 = MakeShared<TJsonValueString<wchar_t>,1,FString_&>(&local_240,&local_2b0);
        __return_storage_ptr__->Object = (FJsonValue *)pTVar37->Object;
        pTVar28 = (pTVar37->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar28;
        if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_240.SharedReferenceCount.ReferenceController);
        local_2a0.Data.AllocatorInstance.Data = local_2b0.Data.AllocatorInstance.Data;
        goto LAB_144627d64;
      }
      cVar14 = (**(code **)(param_1->_padding_ + 0x1d0))(param_1);
      if (cVar14 != '\0') {
        local_308 = (double)(**(code **)(param_1->_padding_ + 0x230))(param_1,param_2);
        pTVar20 = MakeShared<FJsonValueNumber,1,double>(&local_230,&local_308);
        __return_storage_ptr__->Object = (FJsonValue *)pTVar20->Object;
        pTVar28 = (pTVar20->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar28;
        if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_230.SharedReferenceCount.ReferenceController);
        return __return_storage_ptr__;
      }
      cVar14 = (**(code **)(param_1->_padding_ + 0x1d8))(param_1);
      if (cVar14 != '\0') {
        lVar21 = (**(code **)(param_1->_padding_ + 0x210))(param_1,param_2);
        pTVar28 = ::operator_new(0x28);
        if (pTVar28 == (TReferenceControllerBase<1> *)0x0) goto LAB_144626902;
        pTVar28->SharedReferenceCount = (atomic<int>)0x1;
        pTVar28->WeakReferenceCount = (atomic<int>)0x1;
        pTVar28->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_
        ;
        FJsonValueNumber::FJsonValueNumber((FJsonValueNumber *)(pTVar28 + 1),(double)lVar21);
        goto LAB_1446268b8;
      }
      goto LAB_144627ce1;
    }
    if ((uVar16 >> 0x11 & 1) != 0) {
      if (((char)param_1[1]._padding_ == '\0') &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("FieldSize != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0xa4b,L""), bVar15)) {
        pcVar8 = (code *)swi(3);
        pTVar23 = (TSharedPtr<FJsonValue,1> *)(*pcVar8)();
        return pTVar23;
      }
      bVar1 = *(byte *)((ulonglong)*(byte *)((longlong)&param_1[1]._padding_ + 1) +
                       (longlong)param_2);
      bVar2 = *(byte *)((longlong)&param_1[1]._padding_ + 3);
      pTVar28 = ::operator_new(0x28);
      if (pTVar28 == (TReferenceControllerBase<1> *)0x0) goto LAB_144626902;
      pTVar28->SharedReferenceCount = (atomic<int>)0x1;
      pTVar28->WeakReferenceCount = (atomic<int>)0x1;
      pTVar28->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueBoolean___00_SharedPointerInternals__6B_;
      FJsonValueBoolean::FJsonValueBoolean((FJsonValueBoolean *)(pTVar28 + 1),(bVar2 & bVar1) != 0);
      goto LAB_1446268b8;
    }
    if ((uVar16 >> 0xe & 1) != 0) {
      pTVar37 = MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>(&local_250,param_2);
      __return_storage_ptr__->Object = (FJsonValue *)pTVar37->Object;
      pTVar28 = (pTVar37->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar28;
      if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_250.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    if ((uVar16 >> 0x1e & 1) != 0) {
      if ((param_9 & WriteTextAsComplexString) == None) {
        pFVar26 = FText::ToString(param_2);
        pTVar37 = MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>(&local_260,pFVar26);
        __return_storage_ptr__->Object = (FJsonValue *)pTVar37->Object;
        pTVar28 = (pTVar37->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar28;
        if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_260.SharedReferenceCount.ReferenceController);
        return __return_storage_ptr__;
      }
      local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_378.Data.ArrayNum = 0;
      local_378.Data.ArrayMax = 0;
      FTextStringHelper::WriteToBuffer(&local_378,param_2,false,false);
      pTVar37 = MakeShared<TJsonValueString<wchar_t>,1,FString_&>(&local_270,&local_378);
      __return_storage_ptr__->Object = (FJsonValue *)pTVar37->Object;
      pTVar28 = (pTVar37->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar28;
      if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_270.SharedReferenceCount.ReferenceController);
      local_2a0.Data.AllocatorInstance.Data = local_378.Data.AllocatorInstance.Data;
      goto LAB_144627d64;
    }
    if ((uVar16 >> 0x15 & 1) != 0) {
      pFVar36 = (FMapProperty *)param_1;
    }
  }
  if (pFVar36 == (FMapProperty *)0x0) {
    if ((param_1 == (FProperty *)0x0) ||
       (pFVar36 = (FMapProperty *)param_1,
       (*(ulonglong *)(param_1->_padding_ + 0x18) & 0x800000000000) == 0)) {
      pFVar36 = pFVar38;
    }
    if (pFVar36 == (FMapProperty *)0x0) {
      if ((param_1 == (FProperty *)0x0) ||
         (pFVar36 = (FMapProperty *)param_1,
         (*(ulonglong *)(param_1->_padding_ + 0x18) & 0x400000000000) == 0)) {
        pFVar36 = pFVar38;
      }
      if (pFVar36 != (FMapProperty *)0x0) {
        MakeShared<FJsonObject,1>(&local_2e0);
        FScriptMapHelper::FScriptMapHelper(&local_c8,pFVar36,param_2);
        local_3e8 = &local_c8;
        uStack_3dc = 0xffffffff;
        uStack_3e0 = 0;
        iVar17 = ((local_c8.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
        pFVar40 = pFVar38;
        if (0 < iVar17) {
          do {
            local_3c8 = (int)pFVar40;
            bVar15 = FScriptMapHelper::
                     WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                               (&local_c8,(<lambda_1> *)&local_3c8);
            if (bVar15) break;
            uVar16 = (int)pFVar40 + 1;
            pFVar40 = (FMapProperty *)(ulonglong)uVar16;
          } while ((int)uVar16 < iVar17);
          uStack_3e0 = (uint)pFVar40;
        }
        uStack_3dc = 0;
        local_438[0] = SUB84(pFVar40,0);
        bVar15 = FScriptMapHelper::
                 WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                           (&local_c8,(<lambda_1> *)local_438);
        if (bVar15) {
          do {
            pFVar12 = local_3e8;
            uVar9._4_4_ = uStack_3dc;
            uVar9._0_4_ = uStack_3e0;
            local_1e8.Container = local_3e8;
            local_1e8._8_8_ = uVar9;
            puVar25 = FScriptMapHelper::GetKeyPtr(&local_c8,&local_1e8);
            FPropertyToJsonValueWithContainer
                      (&local_338,pFVar36->KeyProp,puVar25,param_3,param_4,
                       param_5 & 0xfffffffff7ff7a7dU,local_430,param_7,(FProperty *)pFVar36,param_9)
            ;
            FVar13 = local_c8.field2_0x10;
            iVar17 = (int)pFVar40;
            if ((local_c8.MapFlags & UsesMemoryImageAllocator) == None) {
              local_3c0 = iVar17;
              bVar15 = FScriptMapHelper::
                       WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                 (&local_c8,(<lambda_1> *)&local_3c0);
              if ((!bVar15) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Iterator",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x133f,
                                      L"Invalid Iterator. Test Iterator before calling this method."
                                     ), bVar15)) {
                pcVar8 = (code *)swi(3);
                pTVar23 = (TSharedPtr<FJsonValue,1> *)(*pcVar8)();
                return pTVar23;
              }
              pvVar44 = (void *)((longlong)
                                 (local_c8.MapLayout.SetLayout.SparseArrayLayout.Size * iVar17) +
                                 (longlong)local_c8.MapLayout.ValueOffset +
                                ((FVar13.FreezableMap)->Pairs).Elements.Data._padding_);
            }
            else {
              local_3c4 = iVar17;
              bVar15 = FScriptMapHelper::
                       WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                 (&local_c8,(<lambda_1> *)&local_3c4);
              if ((!bVar15) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Iterator",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x133f,
                                      L"Invalid Iterator. Test Iterator before calling this method."
                                     ), bVar15)) {
                pcVar8 = (code *)swi(3);
                pTVar23 = (TSharedPtr<FJsonValue,1> *)(*pcVar8)();
                return pTVar23;
              }
              puVar22 = (undefined1 *)((FVar13.FreezableMap)->Pairs).Elements.Data._padding_;
              if (((ulonglong)puVar22 & 1) != 0) {
                puVar22 = &(FVar13.HeapMap)->field_0x0 + ((longlong)puVar22 >> 0x18);
              }
              pvVar44 = puVar22 + (longlong)local_c8.MapLayout.ValueOffset +
                                  (longlong)
                                  (local_c8.MapLayout.SetLayout.SparseArrayLayout.Size * iVar17);
            }
            FPropertyToJsonValueWithContainer
                      (&local_2f0,pFVar36->ValueProp,pvVar44,param_3,param_4,
                       param_5 & 0xfffffffff7ff7a7dU,local_430,param_7,(FProperty *)pFVar36,param_9)
            ;
            if ((local_338.Object != (FJsonValue *)0x0) && (local_2f0.Object != (FJsonValue *)0x0))
            {
              local_448.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_448.Data.ArrayNum = 0;
              local_448.Data.ArrayMax = 0;
              if ((local_338.Object == (FJsonValue *)0x0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar15)) {
                pcVar8 = (code *)swi(3);
                pTVar23 = (TSharedPtr<FJsonValue,1> *)(*pcVar8)();
                return pTVar23;
              }
              cVar14 = (**(code **)((local_338.Object)->_padding_ + 0x58))
                                 (local_338.Object,&local_448);
              if (cVar14 == '\0') {
                pFVar30 = pFVar36->KeyProp;
                local_1d8.Container = pFVar12;
                local_1d8._8_8_ = uVar9;
                puVar25 = FScriptMapHelper::GetKeyPtr(&local_c8,&local_1d8);
                (**(code **)(pFVar30->_padding_ + 0xe0))(pFVar30,&local_448,puVar25,0);
                if (local_448.Data.ArrayNum < 2) {
                  if (1 < (byte)LogJson._0_1_) {
                    FField::GetAuthoredName((FField *)pFVar36,&local_1c8);
                    UE::Logging::Private::BasicLog<2>
                              (&`ConvertScalarFPropertyToJsonValueWithContainer'::`74'::LOG_Static,
                               (FLogCategoryBase *)&LogJson);
                    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
                    }
                  }
                  ::FString::PrintfImpl(&local_398,L"Unparsed Key %d");
                  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_448.Data.AllocatorInstance.Data);
                  }
                  local_448.Data.AllocatorInstance.Data = local_398.Data.AllocatorInstance.Data;
                  local_448.Data.ArrayNum = local_398.Data.ArrayNum;
                  local_448.Data.ArrayMax = local_398.Data.ArrayMax;
                  local_398.Data.ArrayNum = 0;
                  local_398.Data.ArrayMax = 0;
                  local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                }
              }
              pFVar30 = pFVar36->KeyProp;
              if ((pFVar30 != (FProperty *)0x0) &&
                 ((((*(ulonglong *)(pFVar30->_padding_ + 0x18) & 0x1000000000000) != 0 ||
                   ((pFVar30 != (FProperty *)0x0 &&
                    ((*(uint *)(pFVar30->_padding_ + 0x18) >> 0xd & 1) != 0)))) &&
                  ((param_9 & SkipStandardizeCase) == None)))) {
                pFVar26 = FJsonObjectConverter::StandardizeCase(&local_1b8,&local_448);
                if (&local_448 != pFVar26) {
                  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_448.Data.AllocatorInstance.Data);
                  }
                  local_448.Data.AllocatorInstance.Data = (pFVar26->Data).AllocatorInstance.Data;
                  (pFVar26->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_448.Data.ArrayNum = (pFVar26->Data).ArrayNum;
                  local_448.Data.ArrayMax = (pFVar26->Data).ArrayMax;
                  (pFVar26->Data).ArrayNum = 0;
                  (pFVar26->Data).ArrayMax = 0;
                }
                if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                }
              }
              FJsonObject::SetField(local_2e0.Object,&local_448,&local_2f0);
              if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_448.Data.AllocatorInstance.Data);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2f0.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_338.SharedReferenceCount.ReferenceController);
            uStack_3e0 = iVar17 + 1;
            pFVar40 = (FMapProperty *)(ulonglong)uStack_3e0;
            iVar17 = ((local_c8.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
            if ((int)uStack_3e0 < iVar17) {
              do {
                local_3bc = (int)pFVar40;
                bVar15 = FScriptMapHelper::
                         WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                   (&local_c8,(<lambda_1> *)&local_3bc);
                if (bVar15) break;
                uVar16 = (int)pFVar40 + 1;
                pFVar40 = (FMapProperty *)(ulonglong)uVar16;
              } while ((int)uVar16 < iVar17);
              uStack_3e0 = (uint)pFVar40;
            }
            uStack_3dc = (int)pFVar38 + 1;
            pFVar38 = (FMapProperty *)(ulonglong)uStack_3dc;
            local_438[0] = SUB84(pFVar40,0);
            bVar15 = FScriptMapHelper::
                     WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                               (&local_c8,(<lambda_1> *)local_438);
            __return_storage_ptr__ = local_3b8;
          } while (bVar15);
        }
        pTVar27 = MakeShared<FJsonValueObject,1,TSharedRef<FJsonObject,1>_&>(&local_1a8,&local_2e0);
        __return_storage_ptr__->Object = (FJsonValue *)pTVar27->Object;
        pTVar28 = (pTVar27->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar28;
        if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2e0.SharedReferenceCount.ReferenceController);
        return __return_storage_ptr__;
      }
      if (param_1 != (FProperty *)0x0) {
        lVar21 = param_1->_padding_;
        if ((*(uint *)(lVar21 + 0x18) >> 0x14 & 1) != 0) {
          pUVar31 = FJsonObjectWrapper::StaticStruct();
          pUVar7 = (UScriptStruct *)param_1[1]._padding_;
          if (pUVar7 == (UScriptStruct *)0x0) {
            bVar15 = pUVar31 == (UScriptStruct *)0x0;
          }
          else {
            bVar15 = pUVar7 == pUVar31;
          }
          if (!bVar15) {
            pIVar32 = UE::Json::Private::GetStructConverterInterface(pUVar7);
            if (pIVar32 != (IJsonObjectStructConverter *)0x0) {
              pTVar33 = MakeShared<FJsonObject,1>(&local_158);
              local_3a8 = pTVar33->Object;
              pTStack_3a0 = (pTVar33->SharedReferenceCount).ReferenceController;
              if (pTStack_3a0 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTStack_3a0->SharedReferenceCount =
                     (atomic<int>)((int)pTStack_3a0->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_158.SharedReferenceCount.ReferenceController);
              iVar17 = (**(code **)*pIVar32)(pIVar32,param_2,&local_3a8);
              if (iVar17 != 0) {
                if (iVar17 == 1) {
                  __return_storage_ptr__->Object = (FJsonValue *)0x0;
                  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                       (TReferenceControllerBase<1> *)0x0;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTStack_3a0);
                  return __return_storage_ptr__;
                }
                if (iVar17 == 2) {
                  pTVar33 = MakeShared<FJsonObject,1>(&local_138);
                  pFVar36 = ::operator_new(0x30);
                  if (pFVar36 == (FMapProperty *)0x0) {
                    __return_storage_ptr__->Object = (FJsonValue *)0x10;
                    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                         (TReferenceControllerBase<1> *)0x0;
                  }
                  else {
                    *(atomic<int> *)&pFVar36->_padding_ = (atomic<int>)0x1;
                    ((atomic<int> *)&pFVar36->_padding_)[1] = (atomic<int>)0x1;
                    pFVar36->_padding_ =
                         (longlong)
                         &
                         ___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_
                    ;
                    local_280.SharedReferenceCount.ReferenceController =
                         (pTVar33->SharedReferenceCount).ReferenceController;
                    local_280.Object = pTVar33->Object;
                    if (local_280.SharedReferenceCount.ReferenceController !=
                        (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      (local_280.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                           (atomic<int>)
                           ((int)(local_280.SharedReferenceCount.ReferenceController)->
                                 SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    FJsonValueObject::FJsonValueObject
                              ((FJsonValueObject *)&pFVar36->_padding_,&local_280);
                    if ((&pFVar36->_padding_ == (longlong *)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InObject != nullptr",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x246,L""), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      pTVar23 = (TSharedPtr<FJsonValue,1> *)(*pcVar8)();
                      return pTVar23;
                    }
                    __return_storage_ptr__->Object = (FJsonValue *)&pFVar36->_padding_;
                    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                         (TReferenceControllerBase<1> *)pFVar36;
                    LOCK();
                    *(atomic<int> *)&pFVar36->_padding_ =
                         (atomic<int>)((int)*(atomic<int> *)&pFVar36->_padding_ + 1);
                    UNLOCK();
                    pFVar38 = pFVar36;
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)pFVar38);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_138.SharedReferenceCount.ReferenceController)
                  ;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTStack_3a0);
                  return __return_storage_ptr__;
                }
                if (iVar17 == 3) {
                  pFVar36 = ::operator_new(0x30);
                  if (pFVar36 == (FMapProperty *)0x0) {
                    __return_storage_ptr__->Object = (FJsonValue *)0x10;
                    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                         (TReferenceControllerBase<1> *)0x0;
                  }
                  else {
                    *(atomic<int> *)&pFVar36->_padding_ = (atomic<int>)0x1;
                    ((atomic<int> *)&pFVar36->_padding_)[1] = (atomic<int>)0x1;
                    pFVar36->_padding_ =
                         (longlong)
                         &
                         ___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_
                    ;
                    local_148.Object = local_3a8;
                    local_148.SharedReferenceCount.ReferenceController = pTStack_3a0;
                    if (pTStack_3a0 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      pTStack_3a0->SharedReferenceCount =
                           (atomic<int>)((int)pTStack_3a0->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    FJsonValueObject::FJsonValueObject
                              ((FJsonValueObject *)&pFVar36->_padding_,&local_148);
                    if ((&pFVar36->_padding_ == (longlong *)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InObject != nullptr",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x246,L""), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      pTVar23 = (TSharedPtr<FJsonValue,1> *)(*pcVar8)();
                      return pTVar23;
                    }
                    __return_storage_ptr__->Object = (FJsonValue *)&pFVar36->_padding_;
                    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                         (TReferenceControllerBase<1> *)pFVar36;
                    LOCK();
                    *(atomic<int> *)&pFVar36->_padding_ =
                         (atomic<int>)((int)*(atomic<int> *)&pFVar36->_padding_ + 1);
                    UNLOCK();
                    pFVar38 = pFVar36;
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)pFVar38);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTStack_3a0);
                  return __return_storage_ptr__;
                }
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Unimplemented function called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\JsonUtilities\\Private\\JsonObjectConverter.cpp"
                                    ,0xf5,L"");
                if (bVar15) {
                  pcVar8 = (code *)swi(3);
                  pTVar23 = (TSharedPtr<FJsonValue,1> *)(*pcVar8)();
                  return pTVar23;
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStack_3a0);
            }
            pIVar34 = UScriptStruct::GetCppStructOps((UScriptStruct *)param_1[1]._padding_);
            if ((pIVar34 != (ICppStructOps *)0x0) &&
               ((pIVar34->FakeVPtr->Capabilities).HasExportTextItem)) {
              local_358.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_358.Data.ArrayNum = 0;
              local_358.Data.ArrayMax = 0;
              p_Var35 = UE::CoreUObject::Private::FStructOpsFakeVTable::GetHandlingFuncImpl
                                  (pIVar34->FakeVPtr,ExportTextItem);
              (*p_Var35)(&local_358,param_2,0,0);
              pTVar37 = MakeShared<TJsonValueString<wchar_t>,1,FString_&>(&local_128,&local_358);
              __return_storage_ptr__->Object = (FJsonValue *)pTVar37->Object;
              pTVar28 = (pTVar37->SharedReferenceCount).ReferenceController;
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar28;
              if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar28->SharedReferenceCount =
                     (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_128.SharedReferenceCount.ReferenceController);
              local_2a0.Data.AllocatorInstance.Data = local_358.Data.AllocatorInstance.Data;
              goto LAB_144627d64;
            }
          }
          MakeShared<FJsonObject,1>(&local_318);
          bVar15 = UStructToJsonAttributesWithContainer
                             ((UStruct *)param_1[1]._padding_,param_2,param_3,param_4,
                              &(local_318.Object)->Values,param_5 & 0xfffffffff7ff7a7d,local_430,
                              param_7,param_9);
          if (bVar15) {
            pTVar27 = MakeShared<FJsonValueObject,1,TSharedRef<FJsonObject,1>_&>
                                (&local_118,&local_318);
            __return_storage_ptr__->Object = (FJsonValue *)pTVar27->Object;
            pTVar28 = (pTVar27->SharedReferenceCount).ReferenceController;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar28;
            if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_118.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_318.SharedReferenceCount.ReferenceController);
            return __return_storage_ptr__;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_318.SharedReferenceCount.ReferenceController);
LAB_144627ce1:
          __return_storage_ptr__->Object = (FJsonValue *)0x0;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          return __return_storage_ptr__;
        }
        if ((*(uint *)(lVar21 + 0x18) >> 0x10 & 1) != 0) {
          this = (UObjectBaseUtility *)(**(code **)(param_1->_padding_ + 0x1f8))(param_1,param_2);
          local_2f8 = this;
          if ((this != (UObjectBaseUtility *)0x0) &&
             ((((param_1->PropertyFlags & CPF_PersistentInstance) != CPF_None ||
               ((param_8 != (FProperty *)0x0 &&
                ((param_8->PropertyFlags & CPF_PersistentInstance) != CPF_None)))) ||
              ((this != (UObjectBaseUtility *)param_3 &&
               ((((param_4 ==
                   (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *)
                   0x0 || (uVar16 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^
                                    (uint)((ulonglong)this >> 4)) * -0x7a143595,
                          uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb, local_300 = this,
                          iVar17 = TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>
                                   ::FindIndexByHash<UObject_const_*>
                                             (param_4,uVar16 >> 0x10 ^ uVar16,(UObject **)&local_300
                                             ), iVar17 == -1)) && (param_3 != (UObject *)0x0)) &&
                (bVar15 = UObjectBaseUtility::IsInOuter(this,param_3), bVar15)))))))) {
            MakeShared<FJsonObject,1>(&local_328);
            if ((param_9 & SuppressClassNameForPersistentObject) == None) {
              pFVar26 = UObjectBaseUtility::GetPathName
                                  (*(UObjectBaseUtility **)&this->field_0x10,&local_178,
                                   (UObject *)0x0);
              FJsonObject::SetStringField(local_328.Object,&ObjectClassNameKey,pFVar26);
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
            }
            if (param_4 !=
                (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *)0x0
               ) {
              TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>::
              Emplace<UObject_*_&>(param_4,&local_428,(bool *)&local_2f8);
            }
            bVar15 = UStructToJsonAttributesWithContainer
                               (*(UStruct **)&this->field_0x10,this,(UObject *)this,param_4,
                                &(local_328.Object)->Values,param_5,local_430,param_7,param_9);
            if (bVar15) {
              MakeShared<FJsonValueObject,1,TSharedRef<FJsonObject,1>_&>(&local_290,&local_328);
              *(EJson *)&(local_290.Object)->_padding_ = Object;
              __return_storage_ptr__->Object = (FJsonValue *)local_290.Object;
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                   local_290.SharedReferenceCount.ReferenceController;
              if (local_290.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_290.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_290.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_290.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_328.SharedReferenceCount.ReferenceController);
              return __return_storage_ptr__;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_328.SharedReferenceCount.ReferenceController);
            __return_storage_ptr__->Object = (FJsonValue *)0x0;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            return __return_storage_ptr__;
          }
          local_368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_368.Data.ArrayNum = 0;
          local_368.Data.ArrayMax = 0;
          (**(code **)(param_1->_padding_ + 0xe0))(param_1,&local_368,param_2,0);
          pTVar37 = MakeShared<TJsonValueString<wchar_t>,1,FString_&>(&local_168,&local_368);
          __return_storage_ptr__->Object = (FJsonValue *)pTVar37->Object;
          pTVar28 = (pTVar37->SharedReferenceCount).ReferenceController;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar28;
          if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_168.SharedReferenceCount.ReferenceController);
          local_2a0.Data.AllocatorInstance.Data = local_368.Data.AllocatorInstance.Data;
          goto LAB_144627d64;
        }
        if ((*(ulonglong *)(lVar21 + 0x18) & 0x100000000000000) != 0) {
          bVar15 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)(param_1 + 1),param_2);
          if (bVar15) {
            pFVar38 = param_2;
          }
          if (pFVar38 != (FMapProperty *)0x0) {
            pFVar30 = FOptionalPropertyLayout::GetValueProperty
                                ((FOptionalPropertyLayout *)(param_1 + 1));
            ConvertScalarFPropertyToJsonValueWithContainer
                      (__return_storage_ptr__,pFVar30,pFVar38,param_3,param_4,param_5,local_430,
                       (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                        *)local_428,param_1,param_9);
            return __return_storage_ptr__;
          }
          bVar15 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)(param_1 + 1),param_2);
          if ((bVar15) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!OptionalProperty->IsSet(Value)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\JsonUtilities\\Private\\JsonObjectConverter.cpp"
                                  ,0x135,L""), bVar15)) {
            pcVar8 = (code *)swi(3);
            pTVar23 = (TSharedPtr<FJsonValue,1> *)(*pcVar8)();
            return pTVar23;
          }
          pTVar28 = ::operator_new(0x20);
          if (pTVar28 == (TReferenceControllerBase<1> *)0x0) {
LAB_144626902:
            __return_storage_ptr__->Object = (FJsonValue *)0x10;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            return __return_storage_ptr__;
          }
          pTVar28->SharedReferenceCount = (atomic<int>)0x1;
          pTVar28->WeakReferenceCount = (atomic<int>)0x1;
          pTVar28->_padding_ =
               (longlong)
               &___7__TIntrusiveReferenceController_VFJsonValueNull___00_SharedPointerInternals__6B_
          ;
          FJsonValueNull::FJsonValueNull((FJsonValueNull *)(pTVar28 + 1));
LAB_1446268b8:
          if ((pTVar28 + 1 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar15)) {
            pcVar8 = (code *)swi(3);
            pTVar23 = (TSharedPtr<FJsonValue,1> *)(*pcVar8)();
            return pTVar23;
          }
          __return_storage_ptr__->Object = (FJsonValue *)(pTVar28 + 1);
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar28;
          LOCK();
          pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar28);
          return __return_storage_ptr__;
        }
        if ((*(ulonglong *)(lVar21 + 0x18) & 0x800000000000000) != 0) {
          local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3d8.Data.ArrayNum = 0;
          local_3d8.Data.ArrayMax = 0;
          pFVar29 = Verse::FNativeString::FCopyOnWrite::Read(param_2);
          iVar17 = (pFVar29->Data).ArrayNum;
          pFVar29 = Verse::FNativeString::FCopyOnWrite::Read(param_2);
          iVar42 = iVar17 + -1;
          if (iVar17 == 0) {
            iVar42 = 0;
          }
          pFVar26 = ::FString::ConstructFromPtrSize
                              (&local_198,(uchar *)(pFVar29->Data).AllocatorInstance.Data,iVar42);
          if (&local_3d8 != pFVar26) {
            local_3d8.Data.AllocatorInstance.Data = (pFVar26->Data).AllocatorInstance.Data;
            (pFVar26->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3d8.Data.ArrayNum = (pFVar26->Data).ArrayNum;
            local_3d8.Data.ArrayMax = (pFVar26->Data).ArrayMax;
            (pFVar26->Data).ArrayNum = 0;
            (pFVar26->Data).ArrayMax = 0;
          }
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          pTVar37 = MakeShared<TJsonValueString<wchar_t>,1,FString>(&local_188,&local_3d8);
          __return_storage_ptr__->Object = (FJsonValue *)pTVar37->Object;
          pTVar28 = (pTVar37->SharedReferenceCount).ReferenceController;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar28;
          if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_188.SharedReferenceCount.ReferenceController);
          local_2a0.Data.AllocatorInstance.Data = local_3d8.Data.AllocatorInstance.Data;
          goto LAB_144627d64;
        }
        if ((*(byte *)(lVar21 + 0x18) & 0x40) != 0) {
          pTVar28 = ::operator_new(0x28);
          if (pTVar28 == (TReferenceControllerBase<1> *)0x0) goto LAB_144626902;
          pTVar28->SharedReferenceCount = (atomic<int>)0x1;
          pTVar28->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_
          ;
          pTVar28->WeakReferenceCount = (atomic<int>)0x1;
          FJsonValueNumber::FJsonValueNumber
                    ((FJsonValueNumber *)(pTVar28 + 1),(double)*(byte *)param_2);
          goto LAB_1446268b8;
        }
      }
      local_348.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_348.Data.ArrayNum = 0;
      local_348.Data.ArrayMax = 0;
      (**(code **)(param_1->_padding_ + 0xe0))(param_1,&local_348,param_2,0);
      pTVar37 = MakeShared<TJsonValueString<wchar_t>,1,FString_&>(&local_108,&local_348);
      __return_storage_ptr__->Object = (FJsonValue *)pTVar37->Object;
      pTVar28 = (pTVar37->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar28;
      if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.SharedReferenceCount.ReferenceController);
      local_2a0.Data.AllocatorInstance.Data = local_348.Data.AllocatorInstance.Data;
    }
    else {
      local_458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_458.ArrayNum = 0;
      local_458.ArrayMax = 0;
      FScriptSetHelper::FScriptSetHelper(&local_90,(FSetProperty *)pFVar36,param_2);
      local_3f8.Container = &local_90;
      local_3f8.InternalIndex = -1;
      local_3f8.LogicalIndex = -1;
      TScriptContainerIterator<FScriptSetHelper>::Advance(&local_3f8);
      while( true ) {
        pFVar11 = local_3f8.Container;
        uVar16 = local_3f8.InternalIndex;
        pTVar5 = (local_3f8.Container)->Set;
        if ((local_3f8.InternalIndex < 0) ||
           ((pTVar5->Elements).AllocationFlags.NumBits <= local_3f8.InternalIndex)) break;
        if (((pTVar5->Elements).AllocationFlags.NumBits <= local_3f8.InternalIndex) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x8c4,L""), bVar15)) {
          pcVar8 = (code *)swi(3);
          pTVar23 = (TSharedPtr<FJsonValue,1> *)(*pcVar8)();
          return pTVar23;
        }
        FVar6 = (pTVar5->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar39 = (ForElementType<unsigned_int>)&(pTVar5->Elements).AllocationFlags;
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FVar39 = FVar6;
        }
        uVar41 = uVar16;
        if ((int)uVar16 < 0) {
          uVar41 = uVar16 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar39 + (longlong)((int)uVar41 >> 5) * 4) >> (uVar16 & 0x1f) & 1)
            == 0) break;
        iVar17 = local_3f8.InternalIndex;
        pTVar5 = pFVar11->Set;
        if (((int)uVar16 < 0) || ((pTVar5->Elements).AllocationFlags.NumBits <= (int)uVar16)) {
LAB_144626e4e:
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Iterator",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method."
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            pTVar23 = (TSharedPtr<FJsonValue,1> *)(*pcVar8)();
            return pTVar23;
          }
        }
        else {
          if (((pTVar5->Elements).AllocationFlags.NumBits <= (int)uVar16) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x8c4,L""), bVar15)) {
            pcVar8 = (code *)swi(3);
            pTVar23 = (TSharedPtr<FJsonValue,1> *)(*pcVar8)();
            return pTVar23;
          }
          FVar6 = (pTVar5->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
          FVar39 = (ForElementType<unsigned_int>)&(pTVar5->Elements).AllocationFlags;
          if (FVar6 != (ForElementType<unsigned_int>)0x0) {
            FVar39 = FVar6;
          }
          uVar41 = uVar16 & 0x1f;
          if ((int)uVar16 < 0) {
            uVar16 = uVar16 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar39 + (longlong)((int)uVar16 >> 5) * 4) >> uVar41 & 1) == 0)
          goto LAB_144626e4e;
        }
        FPropertyToJsonValueWithContainer
                  (&local_410,pFVar36->KeyProp,
                   (void *)((longlong)(local_90.SetLayout.SparseArrayLayout.Size * iVar17) +
                           ((local_90.Set)->Elements).Data._padding_),param_3,param_4,
                   param_5 & 0xfffffffff7ff7a7d,local_430,param_7,(FProperty *)pFVar36,param_9);
        if (local_410.Object != (FJsonValue *)0x0) {
          if (((local_458.AllocatorInstance.Data <= &local_410) &&
              (&local_410 <
               (TSharedPtr<FJsonValue,1> *)
               (local_458.AllocatorInstance.Data + (longlong)local_458.ArrayMax * 0x10))) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar8 = (code *)swi(3);
            pTVar23 = (TSharedPtr<FJsonValue,1> *)(*pcVar8)();
            return pTVar23;
          }
          iVar17 = local_458.ArrayNum;
          if (local_458.ArrayNum == local_458.ArrayMax) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_458.AllocatorInstance,&local_458.ArrayMax);
          }
          local_458.ArrayNum = iVar17 + 1;
          *(FJsonValue **)&local_458.AllocatorInstance.Data[(longlong)iVar17 * 0x10].field_0x0 =
               local_410.Object;
          *(TReferenceControllerBase<1> **)
           (local_458.AllocatorInstance.Data + (longlong)iVar17 * 0x10 + 8) =
               local_410.SharedReferenceCount.ReferenceController;
          if (local_410.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_410.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_410.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_410.SharedReferenceCount.ReferenceController);
        TScriptContainerIterator<FScriptSetHelper>::Advance(&local_3f8);
      }
      pTVar24 = MakeShared<FJsonValueArray,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&>
                          (&local_200,&local_458);
      __return_storage_ptr__ = local_3b8;
      local_3b8->Object = (FJsonValue *)pTVar24->Object;
      pTVar28 = (pTVar24->SharedReferenceCount).ReferenceController;
      (local_3b8->SharedReferenceCount).ReferenceController = pTVar28;
      if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_200.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_458.AllocatorInstance.Data,local_458.ArrayNum);
      local_2a0.Data.AllocatorInstance.Data = local_458.AllocatorInstance.Data;
    }
  }
  else {
    EVar3 = *(EArrayPropertyFlags *)&pFVar36->KeyProp;
    local_468.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_468.ArrayNum = 0;
    local_468.ArrayMax = 0;
    uVar16 = (**(code **)(**(longlong **)&pFVar36->ValueProp + 0x168))();
    FScriptArrayHelper::FScriptArrayHelper
              (&local_2d0,Internal,*(FProperty **)&pFVar36->ValueProp,param_2,
               (*(FProperty **)&pFVar36->ValueProp)->ElementSize,uVar16,EVar3);
    pUVar10 = local_428;
    if (0 < (local_2d0.field1_0x8.FreezableArray)->ArrayNum) {
      uVar45 = (ulonglong)(uint)(local_2d0.field1_0x8.FreezableArray)->ArrayNum;
      pFVar40 = pFVar38;
      do {
        pFVar43 = pFVar38;
        if ((local_2d0.field1_0x8.FreezableArray)->ArrayNum != 0) {
          puVar22 = (undefined1 *)(local_2d0.field1_0x8.FreezableArray)->_padding_;
          if (((local_2d0.ArrayFlags & UsesMemoryImageAllocator) != None) &&
             (((ulonglong)puVar22 & 1) != 0)) {
            puVar22 = &(local_2d0.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar22 >> 0x18);
          }
          pFVar43 = (FMapProperty *)(puVar22 + (longlong)local_2d0.ElementSize * (longlong)pFVar40);
        }
        FPropertyToJsonValueWithContainer
                  (&local_420,*(FProperty **)&pFVar36->ValueProp,pFVar43,param_3,param_4,
                   param_5 & 0xfffffffff7ff7a7d,local_430,
                   (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                    *)pUVar10,(FProperty *)pFVar36,param_9);
        if (local_420.Object != (FJsonValue *)0x0) {
          if (((local_468.AllocatorInstance.Data <= &local_420) &&
              (&local_420 <
               (TSharedPtr<FJsonValue,1> *)
               (local_468.AllocatorInstance.Data + (longlong)local_468.ArrayMax * 0x10))) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar8 = (code *)swi(3);
            pTVar23 = (TSharedPtr<FJsonValue,1> *)(*pcVar8)();
            return pTVar23;
          }
          iVar17 = local_468.ArrayNum;
          if (local_468.ArrayNum == local_468.ArrayMax) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_468.AllocatorInstance,&local_468.ArrayMax);
          }
          local_468.ArrayNum = iVar17 + 1;
          *(FJsonValue **)&local_468.AllocatorInstance.Data[(longlong)iVar17 * 0x10].field_0x0 =
               local_420.Object;
          *(TReferenceControllerBase<1> **)
           (local_468.AllocatorInstance.Data + (longlong)iVar17 * 0x10 + 8) =
               local_420.SharedReferenceCount.ReferenceController;
          if (local_420.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_420.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_420.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_420.SharedReferenceCount.ReferenceController);
        pFVar40 = (FMapProperty *)((longlong)&pFVar40->_padding_ + 1);
        uVar45 = uVar45 - 1;
        __return_storage_ptr__ = local_3b8;
      } while (uVar45 != 0);
    }
    pTVar24 = MakeShared<FJsonValueArray,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&>
                        (&local_210,&local_468);
    __return_storage_ptr__->Object = (FJsonValue *)pTVar24->Object;
    pTVar28 = (pTVar24->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar28;
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_210.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_468.AllocatorInstance.Data,local_468.ArrayNum);
    local_2a0.Data.AllocatorInstance.Data = local_468.AllocatorInstance.Data;
  }
LAB_144627d64:
  if ((TSharedPtr<FJsonValue,1> *)local_2a0.Data.AllocatorInstance.Data !=
      (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConvertScalarJsonValueToFPropertyWithContainer @ 144627db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl
`anonymous_namespace'::ConvertScalarJsonValueToFPropertyWithContainer
          (TSharedPtr<FJsonValue,1> *param_1,FProperty *param_2,void *param_3,UStruct *param_4,
          void *param_5,long64 param_6,long64 param_7,bool param_8,FText *param_9,
          TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
          *param_10)

{
  FScriptSparseArrayLayout *pFVar1;
  float fVar2;
  float fVar3;
  EArrayPropertyFlags EVar4;
  EJson EVar5;
  FProperty *pFVar6;
  ITextData *pIVar7;
  TReferenceControllerBase<1> *pTVar8;
  ForElementType<unsigned_int> FVar9;
  UStruct *pUVar10;
  UClass *pUVar11;
  _func___cdecl_void_FObjectInitializer_ptr *p_Var12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
  *pTVar16;
  FFeedbackContext *pFVar17;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar18;
  FScriptMapHelper_u_16 FVar19;
  char cVar20;
  bool bVar21;
  bool bVar22;
  undefined1 uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  FNameEntryId FVar27;
  FColor FVar28;
  TSharedRef<FJsonObject,1> *pTVar29;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar30;
  TSharedPtr<FJsonValue,1> *pTVar31;
  TSharedRef<TJsonValueString<wchar_t>,1> *pTVar32;
  uchar *puVar33;
  FString *pFVar34;
  UEnum *this;
  FName *pFVar35;
  long64 lVar36;
  IJsonObjectStructConverter *pIVar37;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  FDateTime FVar38;
  ICppStructOps *pIVar39;
  _func___cdecl_void *p_Var40;
  undefined1 auVar41 [8];
  UClass *pUVar42;
  longlong *plVar43;
  FJsonObject *pFVar44;
  TStringView<wchar_t> *pTVar45;
  FText *pFVar46;
  FText *pFVar47;
  FText *pFVar48;
  UObject *pUVar49;
  FObjectInitializer *pFVar50;
  TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar51;
  wchar_t *pwVar52;
  FJsonValue *pFVar53;
  FString *pFVar54;
  wchar_t *pwVar55;
  FText *pFVar56;
  FText *pFVar57;
  FTextFormat *pFVar58;
  byte bVar59;
  void *_Dst;
  ulonglong uVar60;
  ForAnyElementType FVar61;
  TBitArray<FDefaultBitArrayAllocator> *pTVar62;
  longlong lVar63;
  ForElementType<unsigned_int> FVar64;
  longlong lVar65;
  UPackage *pUVar66;
  int iVar67;
  void *pvVar68;
  FScriptArrayHelper_u_8 FVar69;
  uint uVar70;
  FProperty **this_00;
  double dVar71;
  undefined1 auStackY_1348 [32];
  undefined1 local_12e0 [8];
  UPackage *local_12d8;
  UClass *local_12d0;
  ForAnyElementType local_12c8;
  int local_12c0;
  int local_12bc;
  ForAnyElementType local_12b8;
  int local_12b0;
  int local_12ac;
  longlong local_12a8;
  TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
  *local_12a0;
  TBitArray<FDefaultBitArrayAllocator> *local_1298;
  TSharedPtr<FJsonValue,1> *local_1290;
  FString local_1288;
  TJsonValueString<wchar_t> *local_1278;
  FString local_1270;
  FScriptArrayHelper local_1260;
  undefined1 local_1240 [8];
  int local_1238;
  int local_1234;
  TSharedPtr<FJsonValue,1> *local_1230;
  FString local_1228;
  FString local_1218;
  TSharedPtr<FJsonObject,1> local_1208;
  FText local_11f8;
  TSharedPtr<FJsonObject,1> local_11e8;
  undefined8 local_11d8;
  TSharedPtr<FJsonObject,1> local_11d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_11c0;
  undefined8 uStack_11a0;
  int local_1198;
  undefined4 uStack_1194;
  FString local_1190;
  FText local_1180;
  FString local_1170;
  FString local_1160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1150;
  undefined1 local_1130 [4];
  undefined1 local_112c [12];
  TSharedPtr<FJsonObject,1> local_1120;
  TSharedPtr<FJsonValue,1> local_1110;
  FString local_1100;
  wchar_t *local_10e8;
  undefined8 uStack_10e0;
  undefined1 local_10d8 [8];
  FJsonObject *local_10d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_10c8;
  undefined8 uStack_10a8;
  FScriptContainerElement *local_1098;
  int iStack_1090;
  undefined4 uStack_108c;
  FScriptContainerElement *local_1088;
  int iStack_1080;
  undefined4 uStack_107c;
  FString local_1078;
  TSharedPtr<FCulture,1> local_1068;
  <lambda_1> local_1058;
  undefined1 local_1048 [16];
  FString local_1038;
  FString local_1028;
  TSharedPtr<FCulture,1> local_1018;
  TSharedRef<FJsonObject,1> local_1008;
  FString local_ff8;
  FText local_fe8;
  FText local_fd8;
  FString local_fc8;
  FString local_fb8;
  FText local_fa8;
  FText local_f98;
  FString local_f88;
  FString local_f78;
  FText local_f68;
  FText local_f58;
  FString local_f48;
  FString local_f38;
  FText local_f28;
  FText local_f18;
  FString local_f08;
  TSharedRef<TJsonValueString<wchar_t>,1> local_ef8;
  FString local_ee8;
  FText local_ed8;
  FText local_ec8;
  FString local_eb8;
  FString local_ea8;
  FText local_e98;
  FText local_e88;
  FString local_e78;
  FString local_e68;
  FText local_e58;
  FText local_e48;
  FString local_e38;
  FString local_e28;
  FText local_e18;
  FText local_e08;
  FString local_df8;
  FString local_de8;
  FText local_dd8;
  FText local_dc8;
  FString local_db8;
  FString local_da8;
  FString local_d98;
  FText local_d88;
  FText local_d78;
  FString local_d68;
  FString local_d58;
  FString local_d48;
  FText local_d38;
  FText local_d28;
  FString local_d18;
  FString local_d08;
  FText local_cf8;
  FText local_ce8;
  FString local_cd8;
  FString local_cc8;
  FString local_cb8;
  FText local_ca8;
  FText local_c98;
  FString local_c88;
  FString local_c78;
  FString local_c68;
  FString local_c58;
  FText local_c48;
  FText local_c38;
  FString local_c28;
  FString local_c18;
  FString local_c08;
  FText local_bf8;
  FText local_be8;
  FString local_bd8;
  FString local_bc8;
  FString local_bb8;
  FText local_ba8;
  FText local_b98;
  FString local_b88;
  FString local_b78;
  FString local_b68;
  FString local_b58;
  FText local_b48;
  FText local_b38;
  FString local_b28;
  FString local_b18;
  FString local_b08;
  FString local_af8;
  FText local_ae8;
  FText local_ad8;
  FString local_ac8;
  FString local_ab8;
  TStringView<wchar_t> local_aa8;
  TStringView<wchar_t> local_a98;
  TStringView<wchar_t> local_a88;
  TStringView<wchar_t> local_a78;
  TStringView<wchar_t> local_a68;
  FString local_a58;
  FString local_a48;
  FText local_a38;
  FText local_a28;
  FString local_a18;
  FString local_a08;
  FString local_9f8;
  FString local_9e8;
  FText local_9d8;
  FText local_9c8;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  FText local_978;
  FText local_968;
  FString local_958;
  FString local_948;
  FString local_938;
  FString local_928;
  FString local_918;
  FText local_908;
  FText local_8f8;
  FString local_8e8;
  FString local_8d8;
  FString local_8c8;
  FString local_8b8;
  FText local_8a8;
  FText local_898;
  FString local_888;
  FName local_878;
  FName local_870 [2];
  FText local_860;
  FReadAccessScope local_850;
  FReadAccessScope local_838;
  longlong local_818;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_810;
  uint local_808;
  int iStack_804;
  ulonglong uStack_800;
  FTextFormat local_7f0;
  FText local_7e0;
  FTextFormat local_7d0;
  FText local_7c0;
  FText local_7b0;
  FText local_7a0;
  FTextFormat local_790;
  FText local_780;
  FText local_770;
  FText local_760;
  FTextFormat local_750;
  FText local_740;
  FTextFormat local_730;
  FText local_720;
  FText local_710;
  FText local_700;
  FTextFormat local_6f0;
  FText local_6e0;
  FTextFormat local_6d0;
  FText local_6c0;
  FText local_6b0;
  FText local_6a0;
  FTextFormat local_690;
  FText local_680;
  FText local_670;
  FTextFormat local_660;
  FText local_650;
  FText local_640;
  FText local_630;
  FTextFormat local_620;
  FText local_610;
  FText local_600;
  FText local_5f0;
  FTextFormat local_5e0;
  FText local_5d0;
  FText local_5c0;
  FText local_5b0;
  FTextFormat local_5a0;
  FText local_590;
  FTextFormat local_580;
  FText local_570;
  FText local_560;
  FTextFormat local_550;
  FText local_540;
  FText local_530;
  FTextFormat local_520;
  FText local_510;
  FText local_500;
  FTextFormat local_4f0;
  TStringView<wchar_t> local_4e0;
  TStringView<wchar_t> local_4d0;
  FText local_4c0;
  FText local_4b0;
  FText local_4a0;
  FText local_490;
  FTextFormat local_480;
  FText local_470;
  FText local_460;
  FText local_450;
  FTextFormat local_440;
  FText local_430;
  FText local_420;
  FText local_410;
  FTextFormat local_400;
  FText local_3f0;
  FText local_3e0;
  FTextFormat local_3d0;
  FText local_3c0;
  FTextFormat local_3b0;
  FText local_3a0;
  FText local_390;
  FText local_380;
  FTextFormat local_370;
  FText local_360;
  FTextFormat local_350;
  FText local_340;
  FScriptSetHelper local_330;
  FScriptMapHelper local_308;
  FObjectInitializer local_2c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1348;
  local_12d8 = param_5;
  local_12a0 = param_10;
  local_12d0 = (UClass *)param_4;
LAB_144627e1e:
  do {
    if (param_10 !=
        (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
         *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_10,&local_850);
      if (((*(int *)&param_10->field_0x10 == 0) ||
          (*(longlong **)&param_10->field_0x8 == (longlong *)0x0)) ||
         (cVar20 = (**(code **)(**(longlong **)&param_10->field_0x8 + 0x38))(), cVar20 == '\0')) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_850);
      if (bVar21) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_10,&local_838);
        plVar43 = (longlong *)0x0;
        if (*(int *)&param_10->field_0x10 != 0) {
          plVar43 = *(longlong **)&param_10->field_0x8;
        }
        cVar20 = (**(code **)(*plVar43 + 0x60))(plVar43,param_1,param_2,param_3);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_838);
        if (cVar20 != '\0') {
          return true;
        }
      }
    }
    pFVar17 = GWarn;
    uVar70 = 0;
    if ((FMapProperty *)param_2 == (FMapProperty *)0x0) goto LAB_14462b6fe;
    lVar65 = ((FMapProperty *)param_2)->_padding_;
    if ((*(ulonglong *)(lVar65 + 0x18) & 0x1000000000000) != 0) {
      if ((param_1->Object == (FJsonValue *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar13 = (code *)swi(3);
        uVar23 = (*pcVar13)();
        return (bool)uVar23;
      }
      if (param_1->Object->Type != String) {
        pFVar6 = ((FMapProperty *)param_2)->KeyProp;
        pcVar13 = *(code **)(pFVar6->_padding_ + 0x1e8);
        pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
        dVar71 = FJsonValue::AsNumber(pFVar53);
        (*pcVar13)(pFVar6,param_3,(longlong)dVar71);
        return true;
      }
      pFVar6 = ((FMapProperty *)param_2)->ValueProp;
      if ((pFVar6 == (FProperty *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Enum",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\JsonUtilities\\Private\\JsonObjectConverter.cpp"
                              ,0x221,L""), bVar21)) {
        pcVar13 = (code *)swi(3);
        uVar23 = (*pcVar13)();
        return (bool)uVar23;
      }
      pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
      FJsonValue::AsString(pFVar53,&local_1228);
      FVar61.Data = (FScriptContainerElement *)L"";
      if (local_1228.Data.ArrayNum != 0) {
        FVar61.Data = local_1228.Data.AllocatorInstance.Data;
      }
      pFVar35 = ::FName::FName(local_870,(wchar_t *)FVar61.Data);
      lVar36 = UEnum::GetValueByName((UEnum *)pFVar6,*pFVar35,CheckAuthoredName);
      if (lVar36 != -1) {
        (**(code **)(((FMapProperty *)param_2)->KeyProp->_padding_ + 0x1e8))
                  (((FMapProperty *)param_2)->KeyProp,param_3,lVar36);
        local_1028.Data.AllocatorInstance.Data = local_1228.Data.AllocatorInstance.Data;
        goto LAB_144628129;
      }
      if (1 < (byte)LogJson._0_1_) {
        FField::GetAuthoredName((FField *)param_2,&local_d08);
        UE::Logging::Private::BasicLog<2>
                  (&`ConvertScalarJsonValueToFPropertyWithContainer'::`25'::LOG_Static,
                   (FLogCategoryBase *)&LogJson);
        if (local_d08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d08.Data.AllocatorInstance.Data);
        }
      }
      if (param_9 != (FText *)0x0) {
        pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_cd8);
        pFVar56 = FText::FromString(&local_650,pFVar54);
        pFVar57 = FText::FromString(&local_640,&local_1228);
        pFVar47 = FText::FromString(&local_630,(FString *)&pFVar6->ArrayDim);
        pFVar48 = FText::AsLocalizable_Advanced_LocText
                            (&local_ce8,L"JsonObjectConverter",L"FailImportEnumFromString",
                             L"Unable to import enum {0} from string value {1} for property {2}");
        pFVar58 = FTextFormat::FTextFormat(&local_620,pFVar48,Default);
        pFVar56 = FText::Format<FText,FText,FText>(&local_cf8,pFVar58,pFVar47,pFVar57,pFVar56);
        FText::operator=(param_9,pFVar56);
        if (local_cf8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_cf8.TextData.Reference + 0x10))();
        }
        if (local_ce8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_ce8.TextData.Reference + 0x10))();
        }
        if (local_cd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_cd8.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14462b857;
    }
    if ((*(uint *)(lVar65 + 0x18) >> 0x18 & 1) != 0) {
      lVar65 = (**(code **)(((FMapProperty *)param_2)->_padding_ + 0x1e0))(param_2);
      if ((lVar65 == 0) ||
         (pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1), pFVar53->Type != String)) {
        cVar20 = (**(code **)(((FMapProperty *)param_2)->_padding_ + 0x1d0))(param_2);
        lVar65 = ((FMapProperty *)param_2)->_padding_;
        if (cVar20 != '\0') {
          pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
          dVar71 = FJsonValue::AsNumber(pFVar53);
          (**(code **)(lVar65 + 0x1f8))(param_2,param_3,SUB84(dVar71,0));
          return true;
        }
        cVar20 = (**(code **)(lVar65 + 0x1d8))(param_2);
        if (cVar20 != '\0') {
          pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
          pcVar13 = *(code **)(((FMapProperty *)param_2)->_padding_ + 0x1e8);
          if (pFVar53->Type != String) {
            pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
            dVar71 = FJsonValue::AsNumber(pFVar53);
            (*pcVar13)(param_2,param_3,(longlong)dVar71);
            return true;
          }
          pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
          pFVar54 = FJsonValue::AsString(pFVar53,&local_d58);
          if ((pFVar54->Data).ArrayNum == 0) {
            pwVar55 = L"";
          }
          else {
            pwVar55 = (wchar_t *)(pFVar54->Data).AllocatorInstance.Data;
          }
          lVar65 = _wtoi64(pwVar55);
          (*pcVar13)(param_2,param_3,lVar65);
          local_1028.Data.AllocatorInstance.Data = local_d58.Data.AllocatorInstance.Data;
          goto LAB_144628129;
        }
        if (1 < (byte)LogJson._0_1_) {
          FField::GetAuthoredName((FField *)param_2,&local_d48);
          ::FName::ToString((FName *)((FMapProperty *)param_2)->_padding_,&local_1100);
          UE::Logging::Private::BasicLog<2>
                    (&`ConvertScalarJsonValueToFPropertyWithContainer'::`101'::LOG_Static,
                     (FLogCategoryBase *)&LogJson);
          if (local_1100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1100.Data.AllocatorInstance.Data);
          }
          if (local_d48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d48.Data.AllocatorInstance.Data);
          }
        }
        if (param_9 == (FText *)0x0) {
          return false;
        }
        pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_d18);
        pFVar56 = FText::FromString(&local_680,pFVar54);
        ::FName::ToString((FName *)((FMapProperty *)param_2)->_padding_,&local_1038);
        pFVar57 = FText::FromString(&local_670,&local_1038);
        pFVar47 = FText::AsLocalizable_Advanced_LocText
                            (&local_d28,L"JsonObjectConverter",L"FailImportNumericProperty",
                             L"Unable to import json value into {0} numeric property {1}");
        pFVar58 = FTextFormat::FTextFormat(&local_660,pFVar47,Default);
        pFVar56 = FText::Format<FText,FText>(&local_d38,pFVar58,pFVar57,pFVar56);
        FText::operator=(param_9,pFVar56);
        if (local_d38.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_d38.TextData.Reference + 0x10))();
        }
        if (local_d28.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_d28.TextData.Reference + 0x10))();
        }
        local_1228.Data.AllocatorInstance.Data = local_d18.Data.AllocatorInstance.Data;
        if (local_1038.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1038.Data.AllocatorInstance.Data);
          local_1228.Data.AllocatorInstance.Data = local_d18.Data.AllocatorInstance.Data;
        }
      }
      else {
        this = (UEnum *)(**(code **)(((FMapProperty *)param_2)->_padding_ + 0x1e0))(param_2);
        if ((this == (UEnum *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Enum",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\JsonUtilities\\Private\\JsonObjectConverter.cpp"
                                ,0x23b,L""), bVar21)) {
          pcVar13 = (code *)swi(3);
          uVar23 = (*pcVar13)();
          return (bool)uVar23;
        }
        pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
        FJsonValue::AsString(pFVar53,&local_1218);
        FVar61.Data = (FScriptContainerElement *)L"";
        if (local_1218.Data.ArrayNum != 0) {
          FVar61.Data = local_1218.Data.AllocatorInstance.Data;
        }
        pFVar35 = ::FName::FName(&local_878,(wchar_t *)FVar61.Data);
        lVar36 = UEnum::GetValueByName(this,*pFVar35,CheckAuthoredName);
        if (lVar36 != -1) {
          (**(code **)(((FMapProperty *)param_2)->_padding_ + 0x1e8))(param_2,param_3,lVar36);
          local_1028.Data.AllocatorInstance.Data = local_1218.Data.AllocatorInstance.Data;
          goto LAB_144628129;
        }
        if (1 < (byte)LogJson._0_1_) {
          FField::GetAuthoredName((FField *)param_2,&local_d98);
          UE::Logging::Private::BasicLog<2>
                    (&`ConvertScalarJsonValueToFPropertyWithContainer'::`65'::LOG_Static,
                     (FLogCategoryBase *)&LogJson);
          if (local_d98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d98.Data.AllocatorInstance.Data);
          }
        }
        local_1228.Data.AllocatorInstance.Data = local_1218.Data.AllocatorInstance.Data;
        if (param_9 != (FText *)0x0) {
          pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_d68);
          pFVar56 = FText::FromString(&local_6c0,pFVar54);
          pFVar57 = FText::FromString(&local_6b0,&local_1218);
          pFVar47 = FText::FromString(&local_6a0,&this->CppType);
          pFVar48 = FText::AsLocalizable_Advanced_LocText
                              (&local_d78,L"JsonObjectConverter",L"FailImportEnumFromNumeric",
                               L"Unable to import enum {0} from numeric value {1} for property {2}")
          ;
          pFVar58 = FTextFormat::FTextFormat(&local_690,pFVar48,Default);
          pFVar56 = FText::Format<FText,FText,FText>(&local_d88,pFVar58,pFVar47,pFVar57,pFVar56);
          FText::operator=(param_9,pFVar56);
          if (local_d88.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d88.TextData.Reference + 0x10))();
          }
          if (local_d78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d78.TextData.Reference + 0x10))();
          }
          local_1228.Data.AllocatorInstance.Data = local_1218.Data.AllocatorInstance.Data;
          if (local_d68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d68.Data.AllocatorInstance.Data);
            local_1228.Data.AllocatorInstance.Data = local_1218.Data.AllocatorInstance.Data;
          }
        }
      }
      goto LAB_14462b857;
    }
    if ((*(uint *)(lVar65 + 0x18) >> 0x11 & 1) != 0) {
      pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
      bVar21 = FJsonValue::AsBool(pFVar53);
      if ((*(char *)&((FMapProperty *)param_2)->KeyProp == '\0') &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("FieldSize != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0xa61,L""), bVar22)) {
        pcVar13 = (code *)swi(3);
        uVar23 = (*pcVar13)();
        return (bool)uVar23;
      }
      uVar60 = (ulonglong)*(byte *)((longlong)&((FMapProperty *)param_2)->KeyProp + 1);
      bVar59 = *(byte *)((longlong)&((FMapProperty *)param_2)->KeyProp + 3);
      if (bVar21) {
        *(byte *)(uVar60 + (longlong)param_3) =
             ~bVar59 & *(byte *)(uVar60 + (longlong)param_3) |
             *(byte *)((longlong)&((FMapProperty *)param_2)->KeyProp + 2);
        return true;
      }
      *(byte *)(uVar60 + (longlong)param_3) = ~bVar59 & *(byte *)(uVar60 + (longlong)param_3);
      return true;
    }
    if ((*(uint *)(lVar65 + 0x18) >> 0xe & 1) != 0) {
      pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
      pFVar54 = FJsonValue::AsString(pFVar53,&local_da8);
      ::FString::operator=(param_3,pFVar54);
      local_1028.Data.AllocatorInstance.Data = local_da8.Data.AllocatorInstance.Data;
      goto LAB_144628129;
    }
    if ((*(uint *)(lVar65 + 0x18) >> 0x15 & 1) != 0) {
      pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
      if (pFVar53->Type != Array) {
        if (1 < (byte)LogJson._0_1_) {
          FField::GetAuthoredName((FField *)param_2,&local_de8);
          UE::Logging::Private::BasicLog<2>
                    (&`ConvertScalarJsonValueToFPropertyWithContainer'::`168'::LOG_Static,
                     (FLogCategoryBase *)&LogJson);
          if (local_de8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_de8.Data.AllocatorInstance.Data);
          }
        }
        if (param_9 == (FText *)0x0) {
          return false;
        }
        pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_db8);
        pFVar56 = FText::FromString(&local_6e0,pFVar54);
        pFVar57 = FText::AsLocalizable_Advanced_LocText
                            (&local_dc8,L"JsonObjectConverter",L"FailImportArray",
                             L"Unable to import non-array JSON value into Array property {0}");
        pFVar58 = FTextFormat::FTextFormat(&local_6d0,pFVar57,Default);
        pFVar56 = FText::Format<FText>(&local_dd8,pFVar58,pFVar56);
        FText::operator=(param_9,pFVar56);
        if (local_dd8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_dd8.TextData.Reference + 0x10))();
        }
        local_1228.Data.AllocatorInstance.Data = local_db8.Data.AllocatorInstance.Data;
        if (local_dc8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_dc8.TextData.Reference + 0x10))();
          local_1228.Data.AllocatorInstance.Data = local_db8.Data.AllocatorInstance.Data;
        }
        goto LAB_14462b857;
      }
      pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
      pTVar30 = FJsonValue::AsArray(pFVar53);
      local_12c8.Data = (FScriptContainerElement *)0x0;
      iVar24 = pTVar30->ArrayNum;
      pTVar31 = (TSharedPtr<FJsonValue,1> *)(pTVar30->AllocatorInstance).Data;
      local_12c0 = iVar24;
      if (iVar24 == 0) {
        local_12bc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar24,0,&local_12c8,iVar24,&local_12bc);
        ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                  (local_12c8.Data,pTVar31,iVar24);
      }
      iVar24 = local_12c0;
      EVar4 = *(EArrayPropertyFlags *)&((FMapProperty *)param_2)->KeyProp;
      local_1260.ElementAlignment =
           (**(code **)(((FMapProperty *)param_2)->ValueProp->_padding_ + 0x168))();
      local_1260.InnerProperty = ((FMapProperty *)param_2)->ValueProp;
      local_1260.ElementSize = (local_1260.InnerProperty)->ElementSize;
      local_1260.field1_0x8 = (FScriptArrayHelper_u_8)param_3;
      local_1260.ArrayFlags = EVar4;
      if ((local_1260.ElementSize < 1) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ElementSize > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x1177,L""), bVar21)) {
        pcVar13 = (code *)swi(3);
        uVar23 = (*pcVar13)();
        return (bool)uVar23;
      }
      if ((local_1260.InnerProperty == (FProperty *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("InnerProperty",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x1178,L""), bVar21)) {
        pcVar13 = (code *)swi(3);
        uVar23 = (*pcVar13)();
        return (bool)uVar23;
      }
      if (iVar24 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((longlong)iVar24);
      }
      iVar67 = (local_1260.field1_0x8.FreezableArray)->ArrayNum;
      if (iVar67 < iVar24) {
        FScriptArrayHelper::AddValues(&local_1260,iVar24 - iVar67);
      }
      else if (iVar24 < iVar67) {
        FScriptArrayHelper::RemoveValues(&local_1260,iVar24,iVar67 - iVar24);
      }
      if (iVar24 < 1) goto LAB_14462976c;
      lVar63 = 0;
      lVar65 = lVar63;
      FVar69 = local_1260.field1_0x8;
      break;
    }
    if ((*(ulonglong *)(lVar65 + 0x18) & 0x400000000000) != 0) {
      pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
      if (pFVar53->Type != Object) {
        if (1 < (byte)LogJson._0_1_) {
          FField::GetAuthoredName((FField *)param_2,&local_e68);
          UE::Logging::Private::BasicLog<2>
                    (&`ConvertScalarJsonValueToFPropertyWithContainer'::`260'::LOG_Static,
                     (FLogCategoryBase *)&LogJson);
          if (local_e68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e68.Data.AllocatorInstance.Data);
          }
        }
        if (param_9 == (FText *)0x0) {
          return false;
        }
        pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_e38);
        pFVar56 = FText::FromString(&local_740,pFVar54);
        pFVar57 = FText::AsLocalizable_Advanced_LocText
                            (&local_e48,L"JsonObjectConverter",L"FailImportMap",
                             L"Unable to import non-object JSON value into Map property {0}");
        pFVar58 = FTextFormat::FTextFormat(&local_730,pFVar57,Default);
        pFVar56 = FText::Format<FText>(&local_e58,pFVar58,pFVar56);
        FText::operator=(param_9,pFVar56);
        if (local_e58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e58.TextData.Reference + 0x10))();
        }
        local_1228.Data.AllocatorInstance.Data = local_e38.Data.AllocatorInstance.Data;
        if (local_e48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e48.TextData.Reference + 0x10))();
          local_1228.Data.AllocatorInstance.Data = local_e38.Data.AllocatorInstance.Data;
        }
        goto LAB_14462b857;
      }
      pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
      plVar43 = (longlong *)(**(code **)pFVar53->_padding_)(pFVar53);
      local_11e8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)plVar43[1];
      pFVar44 = (FJsonObject *)*plVar43;
      if (local_11e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_11e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_11e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_11e8.Object = pFVar44;
      FScriptMapHelper::FScriptMapHelper(&local_308,(FMapProperty *)param_2,param_3);
      if ((pFVar44 == (FJsonObject *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ObjectValue",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\JsonUtilities\\Private\\JsonObjectConverter.cpp"
                              ,0x29e,L""), bVar21)) {
        pcVar13 = (code *)swi(3);
        uVar23 = (*pcVar13)();
        return (bool)uVar23;
      }
      pFVar44 = TSharedPtr<FJsonObject,1>::operator->(&local_11e8);
      iVar24 = *(int *)&(pFVar44->Values).field_0x8 - *(int *)&(pFVar44->Values).field_0x34;
      if ((local_308.MapFlags & UsesMemoryImageAllocator) == None) {
        iVar67 = *(int *)&((local_308.field2_0x10.FreezableMap)->Pairs).field_0x34;
      }
      else {
        iVar67 = ((local_308.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
      }
      iVar67 = ((local_308.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum - iVar67;
      if (iVar67 == 0) {
        if (iVar24 != 0) goto LAB_144628b58;
      }
      else {
        FScriptMapHelper::DestructItems(&local_308,0,iVar67);
LAB_144628b58:
        local_1058.__this = &local_308;
        local_1058.Slack = iVar24;
        FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
                  (&local_308,&local_1058);
      }
      pTVar31 = (TSharedPtr<FJsonValue,1> *)TSharedPtr<FJsonObject,1>::operator->(&local_11e8);
      local_1150._padding_._0_4_ = 0;
      local_1150._padding_._4_4_ = 1;
      local_11c0.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)&(((FJsonObject *)pTVar31)->Values).field_0x10;
      local_1150.UnvisitedBitMask = 0xffffffff;
      local_1150.CurrentBitIndex = 0;
      local_1150.BaseBitIndex = 0;
      local_1230 = pTVar31;
      local_1150.Array = local_11c0.Array;
      if (*(int *)&(((FJsonObject *)pTVar31)->Values).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1150);
      }
      iVar24 = *(int *)&(((FJsonObject *)pTVar31)->Values).field_0x28;
      TStack_10c8._padding_ = CONCAT44(local_1150._padding_._4_4_,(undefined4)local_1150._padding_);
      bVar59 = (byte)iVar24 & 0x1f;
      local_1198 = *(int *)&(((FJsonObject *)pTVar31)->Values).field_0x8 -
                   *(int *)&(((FJsonObject *)pTVar31)->Values).field_0x34;
      TStack_10c8.CurrentBitIndex = local_1150.CurrentBitIndex;
      TStack_10c8.UnvisitedBitMask = local_1150.UnvisitedBitMask;
      uStack_11a0._4_4_ = local_1150._28_4_;
      uStack_11a0._0_4_ = local_1150.BaseBitIndex;
      local_11c0._padding_ = CONCAT44(1 << bVar59,iVar24 >> 5);
      local_11c0.CurrentBitIndex = iVar24;
      local_11c0.UnvisitedBitMask = -1 << bVar59;
      local_11c0._24_8_ = CONCAT44(local_1150.CurrentBitIndex,iVar24) & 0xffffffffffffffe0;
      uStack_10a8 = CONCAT44(uStack_1194,local_1198);
      TStack_10c8.Array = local_1150.Array;
      local_10d0 = (FJsonObject *)pTVar31;
      TStack_10c8._24_8_ = uStack_11a0;
      if ((iVar24 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar21)) {
        pcVar13 = (code *)swi(3);
        uVar23 = (*pcVar13)();
        return (bool)uVar23;
      }
      if (iVar24 != *(int *)&(((FJsonObject *)pTVar31)->Values).field_0x28) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_11c0);
      }
      local_818 = local_11c0._padding_;
      pTStack_810 = local_11c0.Array;
      local_808 = local_11c0.UnvisitedBitMask;
      iStack_804 = local_11c0.CurrentBitIndex;
      uVar15 = _local_808;
      uStack_800 = local_11c0._24_8_;
      iStack_804 = local_11c0.CurrentBitIndex;
      local_1298 = local_11c0.Array;
      local_12a8 = CONCAT44(local_12a8._4_4_,iStack_804);
      iVar24 = iStack_804;
      _local_808 = uVar15;
      goto LAB_144628ce2;
    }
    if ((*(ulonglong *)(lVar65 + 0x18) & 0x800000000000) != 0) {
      pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
      if (pFVar53->Type == Array) {
        pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
        pTVar30 = FJsonValue::AsArray(pFVar53);
        local_12b8.Data = (FScriptContainerElement *)0x0;
        iVar24 = pTVar30->ArrayNum;
        pTVar31 = (TSharedPtr<FJsonValue,1> *)(pTVar30->AllocatorInstance).Data;
        local_12b0 = iVar24;
        if (iVar24 == 0) {
          local_12ac = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar24,0,&local_12b8,iVar24,&local_12ac);
          ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                    (local_12b8.Data,pTVar31,iVar24);
        }
        iVar24 = local_12b0;
        FScriptSetHelper::FScriptSetHelper(&local_330,(FSetProperty *)param_2,param_3);
        iVar67 = ((local_330.Set)->Elements).Data.ArrayNum -
                 ((local_330.Set)->Elements).NumFreeIndices;
        if (iVar67 == 0) {
          if (iVar24 == 0) goto LAB_14462880c;
        }
        else {
          FScriptSetHelper::DestructItems(&local_330,0,iVar67);
        }
        TScriptSparseSet<FDefaultSetAllocator>::Empty(local_330.Set,iVar24,&local_330.SetLayout);
        if (iVar24 < 1) goto LAB_14462880c;
        local_1278 = (TJsonValueString<wchar_t> *)(longlong)iVar24;
        local_1298 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
        local_12a8 = 0;
        goto LAB_144628551;
      }
      if (1 < (byte)LogJson._0_1_) {
        FField::GetAuthoredName((FField *)param_2,&local_f38);
        UE::Logging::Private::BasicLog<2>
                  (&`ConvertScalarJsonValueToFPropertyWithContainer'::`319'::LOG_Static,
                   (FLogCategoryBase *)&LogJson);
        if (local_f38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f38.Data.AllocatorInstance.Data);
        }
      }
      if (param_9 == (FText *)0x0) {
        return false;
      }
      pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_f08);
      pFVar56 = FText::FromString(&local_7e0,pFVar54);
      pFVar57 = FText::AsLocalizable_Advanced_LocText
                          (&local_f18,L"JsonObjectConverter",L"FailImportSet",
                           L"Unable to import non-array JSON value into Set property {0}");
      pFVar58 = FTextFormat::FTextFormat(&local_7d0,pFVar57,Default);
      pFVar56 = FText::Format<FText>(&local_f28,pFVar58,pFVar56);
      FText::operator=(param_9,pFVar56);
      if (local_f28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f28.TextData.Reference + 0x10))();
      }
      local_1228.Data.AllocatorInstance.Data = local_f08.Data.AllocatorInstance.Data;
      if (local_f18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f18.TextData.Reference + 0x10))();
        local_1228.Data.AllocatorInstance.Data = local_f08.Data.AllocatorInstance.Data;
      }
      goto LAB_14462b857;
    }
    if ((*(uint *)(lVar65 + 0x18) >> 0x1e & 1) != 0) {
      pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
      if (pFVar53->Type != String) {
        pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
        if (pFVar53->Type == Object) {
          pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
          plVar43 = (longlong *)(**(code **)pFVar53->_padding_)(pFVar53);
          pTVar8 = (TReferenceControllerBase<1> *)plVar43[1];
          local_1120.Object = (FJsonObject *)*plVar43;
          if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_1120.SharedReferenceCount.ReferenceController = pTVar8;
          if ((local_1120.Object == (FJsonObject *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Obj.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\JsonUtilities\\Private\\JsonObjectConverter.cpp"
                                  ,0x30e,L""), bVar21)) {
            pcVar13 = (code *)swi(3);
            uVar23 = (*pcVar13)();
            return (bool)uVar23;
          }
          FText::FText(&local_1180);
          pTVar29 = TSharedPtr<FJsonObject,1>::ToSharedRef(&local_1120,&local_1008);
          bVar21 = FJsonObjectConverter::GetTextFromObject(pTVar29,&local_1180);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1008.SharedReferenceCount.ReferenceController);
          if (bVar21) {
            FText::operator=(param_3,&local_1180);
            if (local_1180.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1180.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar8);
            return true;
          }
          if (1 < (byte)LogJson._0_1_) {
            FField::GetAuthoredName((FField *)param_2,&local_ff8);
            UE::Logging::Private::BasicLog<2>
                      (&`ConvertScalarJsonValueToFPropertyWithContainer'::`364'::LOG_Static,
                       (FLogCategoryBase *)&LogJson);
            if (local_ff8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_ff8.Data.AllocatorInstance.Data);
            }
          }
          if (param_9 != (FText *)0x0) {
            pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_fc8);
            pFVar56 = FText::FromString(&local_380,pFVar54);
            pFVar57 = FText::AsLocalizable_Advanced_LocText
                                (&local_fd8,L"JsonObjectConverter",L"FailImportTextFromObject",
                                 L"Unable to import JSON object with invalid keys into Text property {0}"
                                );
            pFVar58 = FTextFormat::FTextFormat(&local_370,pFVar57,Default);
            pFVar56 = FText::Format<FText>(&local_fe8,pFVar58,pFVar56);
            FText::operator=(param_9,pFVar56);
            if (local_fe8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_fe8.TextData.Reference + 0x10))();
            }
            if (local_fd8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_fd8.TextData.Reference + 0x10))();
            }
            if (local_fc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_fc8.Data.AllocatorInstance.Data);
            }
          }
          if (local_1180.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1180.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar8);
          return false;
        }
        if (1 < (byte)LogJson._0_1_) {
          FField::GetAuthoredName((FField *)param_2,&local_fb8);
          UE::Logging::Private::BasicLog<2>
                    (&`ConvertScalarJsonValueToFPropertyWithContainer'::`387'::LOG_Static,
                     (FLogCategoryBase *)&LogJson);
          if (local_fb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_fb8.Data.AllocatorInstance.Data);
          }
        }
        if (param_9 == (FText *)0x0) {
          return false;
        }
        pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_f88);
        pFVar56 = FText::FromString(&local_360,pFVar54);
        pFVar57 = FText::AsLocalizable_Advanced_LocText
                            (&local_f98,L"JsonObjectConverter",L"FailImportText",
                             L"Unable to import JSON value that is neither string nor object into Text property {0}"
                            );
        pFVar58 = FTextFormat::FTextFormat(&local_350,pFVar57,Default);
        pFVar56 = FText::Format<FText>(&local_fa8,pFVar58,pFVar56);
        FText::operator=(param_9,pFVar56);
        if (local_fa8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_fa8.TextData.Reference + 0x10))();
        }
        local_1228.Data.AllocatorInstance.Data = local_f88.Data.AllocatorInstance.Data;
        if (local_f98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f98.TextData.Reference + 0x10))();
          local_1228.Data.AllocatorInstance.Data = local_f88.Data.AllocatorInstance.Data;
        }
        goto LAB_14462b857;
      }
      pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
      FJsonValue::AsString(pFVar53,&local_1190);
      FText::FText(&local_11f8);
      FVar61.Data = (FScriptContainerElement *)L"";
      if (local_1190.Data.ArrayNum != 0) {
        FVar61.Data = local_1190.Data.AllocatorInstance.Data;
      }
      pwVar55 = FTextStringHelper::ReadFromBuffer
                          ((wchar_t *)FVar61.Data,&local_11f8,(wchar_t *)0x0,(wchar_t *)0x0,false);
      if (pwVar55 == (wchar_t *)0x0) {
        pFVar56 = FText::FromString(&local_860,&local_1190);
        FText::operator=(&local_11f8,pFVar56);
        if (local_860.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_860.TextData.Reference + 0x10))();
        }
      }
      pIVar7 = *(ITextData **)param_3;
      if (pIVar7 != local_11f8.TextData.Reference) {
        *(ITextData **)param_3 = local_11f8.TextData.Reference;
        if (local_11f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_11f8.TextData.Reference + 8))
                    (local_11f8.TextData.Reference,local_1130);
        }
        if (pIVar7 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
        }
      }
      *(uint *)((longlong)param_3 + 8) = local_11f8.Flags;
      local_1028.Data.AllocatorInstance.Data = local_1190.Data.AllocatorInstance.Data;
      if (local_11f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_11f8.TextData.Reference + 0x10))();
        local_1028.Data.AllocatorInstance.Data = local_1190.Data.AllocatorInstance.Data;
      }
      goto LAB_144628129;
    }
    if ((*(uint *)(lVar65 + 0x18) >> 0x14 & 1) != 0) {
      pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
      if (pFVar53->Type == Object) {
        pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
        plVar43 = (longlong *)(**(code **)pFVar53->_padding_)(pFVar53);
        local_1208.Object = (FJsonObject *)*plVar43;
        local_1208.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)plVar43[1];
        if (local_1208.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
        }
        if ((local_1208.Object == (FJsonObject *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Obj.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\JsonUtilities\\Private\\JsonObjectConverter.cpp"
                                ,0x32c,L""), bVar21)) {
          pcVar13 = (code *)swi(3);
          uVar23 = (*pcVar13)();
          return (bool)uVar23;
        }
        pIVar37 = UE::Json::Private::GetStructConverterInterface
                            ((UScriptStruct *)((FMapProperty *)param_2)->KeyProp);
        if ((pIVar37 == (IJsonObjectStructConverter *)0x0) ||
           (iVar24 = (**(code **)((longlong)*pIVar37 + 8))(pIVar37,param_3,&local_1208), iVar24 == 0
           )) {
LAB_14462a098:
          pUVar10 = (UStruct *)((FMapProperty *)param_2)->KeyProp;
          pTVar51 = &TSharedPtr<FJsonObject,1>::operator->(&local_1208)->Values;
          bVar21 = JsonAttributesToUStructWithContainer
                             (pTVar51,pUVar10,param_3,(UStruct *)local_12d0,local_12d8,
                              param_6 & 0xfffffffff7ff7a7d,param_7,param_8,param_9,local_12a0);
          if (bVar21) {
LAB_14462a40e:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1208.SharedReferenceCount.ReferenceController);
            return true;
          }
          if (1 < (byte)LogJson._0_1_) {
            FField::GetAuthoredName((FField *)param_2,&local_c58);
            UField::GetAuthoredName((UField *)((FMapProperty *)param_2)->KeyProp,&local_c68);
            UE::Logging::Private::BasicLog<2>
                      (&`ConvertScalarJsonValueToFPropertyWithContainer'::`465'::LOG_Static,
                       (FLogCategoryBase *)&LogJson);
            if (local_c68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c68.Data.AllocatorInstance.Data);
            }
            if (local_c58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c58.Data.AllocatorInstance.Data);
            }
          }
          if (param_9 == (FText *)0x0) goto LAB_14462a3fe;
          pFVar56 = FText::FText(&local_5d0,param_9);
          pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_c18);
          pFVar57 = FText::FromString(&local_5c0,pFVar54);
          pFVar54 = UField::GetAuthoredName((UField *)((FMapProperty *)param_2)->KeyProp,&local_c28)
          ;
          pFVar47 = FText::FromString(&local_5b0,pFVar54);
          pFVar48 = FText::AsLocalizable_Advanced_LocText
                              (&local_c38,L"JsonObjectConverter",L"FailImportStructFromObject",
                               L"Unable to import JSON object into {0} property {1}\n{2}");
          pFVar58 = FTextFormat::FTextFormat(&local_5a0,pFVar48,Default);
          pFVar56 = FText::Format<FText,FText,FText>(&local_c48,pFVar58,pFVar47,pFVar57,pFVar56);
          FText::operator=(param_9,pFVar56);
          if (local_c48.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_c48.TextData.Reference + 0x10))();
          }
          if (local_c38.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_c38.TextData.Reference + 0x10))();
          }
          if (local_c28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c28.Data.AllocatorInstance.Data);
          }
        }
        else {
          if (iVar24 != 1) {
            if ((iVar24 == 2) || (iVar24 == 3)) goto LAB_14462a40e;
            bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Unimplemented function called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\JsonUtilities\\Private\\JsonObjectConverter.cpp"
                                ,0x34b,L"");
            if (bVar21) {
              pcVar13 = (code *)swi(3);
              uVar23 = (*pcVar13)();
              return (bool)uVar23;
            }
            goto LAB_14462a098;
          }
          if (1 < (byte)LogJson._0_1_) {
            FField::GetAuthoredName((FField *)param_2,&local_cb8);
            UField::GetAuthoredName((UField *)((FMapProperty *)param_2)->KeyProp,&local_cc8);
            UE::Logging::Private::BasicLog<2>
                      (&`ConvertScalarJsonValueToFPropertyWithContainer'::`429'::LOG_Static,
                       (FLogCategoryBase *)&LogJson);
            if (local_cc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_cc8.Data.AllocatorInstance.Data);
            }
            if (local_cb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_cb8.Data.AllocatorInstance.Data);
            }
          }
          if (param_9 == (FText *)0x0) goto LAB_14462a3fe;
          pFVar56 = FText::FText(&local_610,param_9);
          pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_c78);
          pFVar57 = FText::FromString(&local_600,pFVar54);
          pFVar54 = UField::GetAuthoredName((UField *)((FMapProperty *)param_2)->KeyProp,&local_c88)
          ;
          pFVar47 = FText::FromString(&local_5f0,pFVar54);
          pFVar48 = FText::AsLocalizable_Advanced_LocText
                              (&local_c98,L"JsonObjectConverter",L"FailConvertStructFromObject",
                               L"Unable to convert JSON object into {0} property {1}\n{2} while using a IJsonObjectStructConverter"
                              );
          pFVar58 = FTextFormat::FTextFormat(&local_5e0,pFVar48,Default);
          pFVar56 = FText::Format<FText,FText,FText>(&local_ca8,pFVar58,pFVar47,pFVar57,pFVar56);
          FText::operator=(param_9,pFVar56);
          if (local_ca8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_ca8.TextData.Reference + 0x10))();
          }
          if (local_c98.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_c98.TextData.Reference + 0x10))();
          }
          local_c18.Data.AllocatorInstance.Data = local_c78.Data.AllocatorInstance.Data;
          if (local_c88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c88.Data.AllocatorInstance.Data);
            local_c18.Data.AllocatorInstance.Data = local_c78.Data.AllocatorInstance.Data;
          }
        }
        if (local_c18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c18.Data.AllocatorInstance.Data);
        }
LAB_14462a3fe:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1208.SharedReferenceCount.ReferenceController);
        return false;
      }
      pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
      if ((pFVar53->Type == String) &&
         (uVar60 = ((FMapProperty *)param_2)->KeyProp->_padding_,
         FVar27 = FNameEntryId::FromValidEName((EName)local_10d8),
         uVar60 == *(uint *)CONCAT44(extraout_var,FVar27.Value))) {
        pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
        FJsonValue::AsString(pFVar53,&local_1028);
        FVar28 = FColor::FromHex((FString *)local_112c);
        uVar70 = *(uint *)CONCAT44(extraout_var_00,FVar28.field0_0x0);
        fVar2 = FLinearColor::sRGBToLinearTable[uVar70 >> 8 & 0xff];
        fVar3 = FLinearColor::sRGBToLinearTable[uVar70 & 0xff];
        *(float *)param_3 = FLinearColor::sRGBToLinearTable[uVar70 >> 0x10 & 0xff];
        *(float *)((longlong)param_3 + 4) = fVar2;
        *(float *)((longlong)param_3 + 8) = fVar3;
        *(float *)((longlong)param_3 + 0xc) = (float)(uVar70 >> 0x18) * __real_3b808081;
        goto LAB_144628129;
      }
      pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
      if ((pFVar53->Type == String) &&
         (uVar60 = ((FMapProperty *)param_2)->KeyProp->_padding_,
         FVar27 = FNameEntryId::FromValidEName((int)local_112c + FloatProperty),
         uVar60 == *(uint *)CONCAT44(extraout_var_01,FVar27.Value))) {
        pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
        FJsonValue::AsString(pFVar53,&local_1078);
        FVar28 = FColor::FromHex((FString *)local_1240);
        *(undefined4 *)param_3 = *(undefined4 *)CONCAT44(extraout_var_02,FVar28.field0_0x0);
        local_1028.Data.AllocatorInstance.Data = local_1078.Data.AllocatorInstance.Data;
        goto LAB_144628129;
      }
      pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
      if ((pFVar53->Type == String) &&
         ((FName)((FMapProperty *)param_2)->KeyProp->_padding_ == NAME_DateTime)) {
        pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
        FJsonValue::AsString(pFVar53,&local_1288);
        FVar61.Data = (FScriptContainerElement *)L"";
        if (local_1288.Data.ArrayNum != 0) {
          FVar61.Data = local_1288.Data.AllocatorInstance.Data;
        }
        iVar24 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar61.Data,L"min");
        if (iVar24 == 0) {
          *(undefined8 *)param_3 = 0;
          local_1028.Data.AllocatorInstance.Data = local_1288.Data.AllocatorInstance.Data;
          goto LAB_144628129;
        }
        FVar61.Data = (FScriptContainerElement *)L"";
        if (local_1288.Data.ArrayNum != 0) {
          FVar61.Data = local_1288.Data.AllocatorInstance.Data;
        }
        iVar24 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar61.Data,L"max");
        if (iVar24 == 0) {
          *(undefined8 *)param_3 = 0x2bca2875f4373fff;
          local_1028.Data.AllocatorInstance.Data = local_1288.Data.AllocatorInstance.Data;
          goto LAB_144628129;
        }
        FVar61.Data = (FScriptContainerElement *)L"";
        if (local_1288.Data.ArrayNum != 0) {
          FVar61.Data = local_1288.Data.AllocatorInstance.Data;
        }
        iVar24 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar61.Data,L"now");
        if (iVar24 == 0) {
          FVar38 = FDateTime::UtcNow();
          *(undefined8 *)param_3 = *(undefined8 *)FVar38.Ticks;
          local_1028.Data.AllocatorInstance.Data = local_1288.Data.AllocatorInstance.Data;
          goto LAB_144628129;
        }
        FVar61.Data = (FScriptContainerElement *)L"";
        if (local_1288.Data.ArrayNum != 0) {
          FVar61.Data = local_1288.Data.AllocatorInstance.Data;
        }
        bVar21 = FDateTime::ParseIso8601((wchar_t *)FVar61.Data,param_3);
        local_1028.Data.AllocatorInstance.Data = local_1288.Data.AllocatorInstance.Data;
        if ((bVar21) ||
           (bVar21 = FDateTime::Parse(&local_1288,param_3),
           local_1028.Data.AllocatorInstance.Data = local_1288.Data.AllocatorInstance.Data, bVar21))
        goto LAB_144628129;
        if (1 < (byte)LogJson._0_1_) {
          FField::GetAuthoredName((FField *)param_2,&local_c08);
          UE::Logging::Private::BasicLog<2>
                    (&`ConvertScalarJsonValueToFPropertyWithContainer'::`519'::LOG_Static,
                     (FLogCategoryBase *)&LogJson);
          if (local_c08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c08.Data.AllocatorInstance.Data);
          }
        }
        local_1228.Data.AllocatorInstance.Data = local_1288.Data.AllocatorInstance.Data;
        if (param_9 != (FText *)0x0) {
          pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_bd8);
          pFVar56 = FText::FromString(&local_590,pFVar54);
          pFVar57 = FText::AsLocalizable_Advanced_LocText
                              (&local_be8,L"JsonObjectConverter",L"FailImportDateTimeFromString",
                               L"Unable to import JSON string into DateTime property {0}");
          pFVar58 = FTextFormat::FTextFormat(&local_580,pFVar57,Default);
          pFVar56 = FText::Format<FText>(&local_bf8,pFVar58,pFVar56);
          FText::operator=(param_9,pFVar56);
          if (local_bf8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_bf8.TextData.Reference + 0x10))();
          }
          if (local_be8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_be8.TextData.Reference + 0x10))();
          }
          local_1228.Data.AllocatorInstance.Data = local_1288.Data.AllocatorInstance.Data;
          if (local_bd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_bd8.Data.AllocatorInstance.Data);
            local_1228.Data.AllocatorInstance.Data = local_1288.Data.AllocatorInstance.Data;
          }
        }
      }
      else {
        pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
        if ((pFVar53->Type == String) &&
           ((pIVar39 = UScriptStruct::GetCppStructOps
                                 ((UScriptStruct *)((FMapProperty *)param_2)->KeyProp),
            pIVar39 != (ICppStructOps *)0x0 &&
            (pIVar39 = UScriptStruct::GetCppStructOps
                                 ((UScriptStruct *)((FMapProperty *)param_2)->KeyProp),
            (pIVar39->FakeVPtr->Capabilities).HasImportTextItem)))) {
          pIVar39 = UScriptStruct::GetCppStructOps
                              ((UScriptStruct *)((FMapProperty *)param_2)->KeyProp);
          pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
          FJsonValue::AsString(pFVar53,&local_1170);
          local_1290 = (TSharedPtr<FJsonValue,1> *)L"";
          if (local_1170.Data.ArrayNum != 0) {
            local_1290 = (TSharedPtr<FJsonValue,1> *)local_1170.Data.AllocatorInstance.Data;
          }
          p_Var40 = UE::CoreUObject::Private::FStructOpsFakeVTable::GetHandlingFuncImpl
                              (pIVar39->FakeVPtr,ImportTextItem);
          cVar20 = (*p_Var40)(&local_1290,param_3,0);
          local_1028.Data.AllocatorInstance.Data = local_1170.Data.AllocatorInstance.Data;
          if ((cVar20 != '\0') ||
             (pwVar55 = FProperty::ImportText_Direct
                                  (param_2,(wchar_t *)local_1290,param_3,(UObject *)0x0,0,
                                   (FOutputDevice *)GWarn),
             local_1028.Data.AllocatorInstance.Data = local_1170.Data.AllocatorInstance.Data,
             pwVar55 != (wchar_t *)0x0)) goto LAB_144628129;
          if (1 < (byte)LogJson._0_1_) {
            FField::GetAuthoredName((FField *)param_2,&local_bb8);
            UField::GetAuthoredName((UField *)((FMapProperty *)param_2)->KeyProp,&local_bc8);
            UE::Logging::Private::BasicLog<2>
                      (&`ConvertScalarJsonValueToFPropertyWithContainer'::`550'::LOG_Static,
                       (FLogCategoryBase *)&LogJson);
            if (local_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_bc8.Data.AllocatorInstance.Data);
            }
            if (local_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_bb8.Data.AllocatorInstance.Data);
            }
          }
          local_1228.Data.AllocatorInstance.Data = local_1170.Data.AllocatorInstance.Data;
          if (param_9 != (FText *)0x0) {
            pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_b78);
            pFVar56 = FText::FromString(&local_570,pFVar54);
            pFVar54 = UField::GetAuthoredName
                                ((UField *)((FMapProperty *)param_2)->KeyProp,&local_b88);
            pFVar57 = FText::FromString(&local_560,pFVar54);
            pFVar47 = FText::AsLocalizable_Advanced_LocText
                                (&local_b98,L"JsonObjectConverter",L"FailImportStructFromString",
                                 L"Unable to import JSON string into {0} property {1}");
            pFVar58 = FTextFormat::FTextFormat(&local_550,pFVar47,Default);
            pFVar56 = FText::Format<FText,FText>(&local_ba8,pFVar58,pFVar57,pFVar56);
            FText::operator=(param_9,pFVar56);
            if (local_ba8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_ba8.TextData.Reference + 0x10))();
            }
            if (local_b98.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_b98.TextData.Reference + 0x10))();
            }
            if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b88.Data.AllocatorInstance.Data);
            }
            local_1228.Data.AllocatorInstance.Data = local_1170.Data.AllocatorInstance.Data;
            if (local_b78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b78.Data.AllocatorInstance.Data);
              local_1228.Data.AllocatorInstance.Data = local_1170.Data.AllocatorInstance.Data;
            }
          }
        }
        else {
          pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
          if (pFVar53->Type == String) {
            pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
            FJsonValue::AsString(pFVar53,&local_1160);
            FVar61.Data = (FScriptContainerElement *)L"";
            if (local_1160.Data.ArrayNum != 0) {
              FVar61.Data = local_1160.Data.AllocatorInstance.Data;
            }
            pwVar55 = FProperty::ImportText_Direct
                                (param_2,(wchar_t *)FVar61.Data,param_3,(UObject *)0x0,0,
                                 (FOutputDevice *)GWarn);
            local_1028.Data.AllocatorInstance.Data = local_1160.Data.AllocatorInstance.Data;
            if (pwVar55 != (wchar_t *)0x0) goto LAB_144628129;
            if (1 < (byte)LogJson._0_1_) {
              FField::GetAuthoredName((FField *)param_2,&local_b58);
              UField::GetAuthoredName((UField *)((FMapProperty *)param_2)->KeyProp,&local_b68);
              UE::Logging::Private::BasicLog<2>
                        (&`ConvertScalarJsonValueToFPropertyWithContainer'::`578'::LOG_Static,
                         (FLogCategoryBase *)&LogJson);
              if (local_b68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b68.Data.AllocatorInstance.Data);
              }
              if (local_b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b58.Data.AllocatorInstance.Data);
              }
            }
            local_1228.Data.AllocatorInstance.Data = local_1160.Data.AllocatorInstance.Data;
            if (param_9 != (FText *)0x0) {
              pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_b18);
              pFVar56 = FText::FromString(&local_540,pFVar54);
              pFVar54 = UField::GetAuthoredName
                                  ((UField *)((FMapProperty *)param_2)->KeyProp,&local_b28);
              pFVar57 = FText::FromString(&local_530,pFVar54);
              pFVar47 = FText::AsLocalizable_Advanced_LocText
                                  (&local_b38,L"JsonObjectConverter",L"FailImportStructFromString",
                                   L"Unable to import JSON string into {0} property {1}");
              pFVar58 = FTextFormat::FTextFormat(&local_520,pFVar47,Default);
              pFVar56 = FText::Format<FText,FText>(&local_b48,pFVar58,pFVar57,pFVar56);
              FText::operator=(param_9,pFVar56);
              if (local_b48.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_b48.TextData.Reference + 0x10))();
              }
              if (local_b38.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_b38.TextData.Reference + 0x10))();
              }
              if (local_b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b28.Data.AllocatorInstance.Data);
              }
              local_1228.Data.AllocatorInstance.Data = local_1160.Data.AllocatorInstance.Data;
              if (local_b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b18.Data.AllocatorInstance.Data);
                local_1228.Data.AllocatorInstance.Data = local_1160.Data.AllocatorInstance.Data;
              }
            }
          }
          else {
            if (1 < (byte)LogJson._0_1_) {
              FField::GetAuthoredName((FField *)param_2,&local_af8);
              UField::GetAuthoredName((UField *)((FMapProperty *)param_2)->KeyProp,&local_b08);
              UE::Logging::Private::BasicLog<2>
                        (&`ConvertScalarJsonValueToFPropertyWithContainer'::`601'::LOG_Static,
                         (FLogCategoryBase *)&LogJson);
              if (local_b08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b08.Data.AllocatorInstance.Data);
              }
              if (local_af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_af8.Data.AllocatorInstance.Data);
              }
            }
            if (param_9 == (FText *)0x0) {
              return false;
            }
            pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_ab8);
            pFVar56 = FText::FromString(&local_510,pFVar54);
            pFVar54 = UField::GetAuthoredName
                                ((UField *)((FMapProperty *)param_2)->KeyProp,&local_ac8);
            pFVar57 = FText::FromString(&local_500,pFVar54);
            pFVar47 = FText::AsLocalizable_Advanced_LocText
                                (&local_ad8,L"JsonObjectConverter",L"FailImportStruct",
                                 L"Unable to import JSON value that is neither string nor object into {0} property {1}"
                                );
            pFVar58 = FTextFormat::FTextFormat(&local_4f0,pFVar47,Default);
            pFVar56 = FText::Format<FText,FText>(&local_ae8,pFVar58,pFVar57,pFVar56);
            FText::operator=(param_9,pFVar56);
            if (local_ae8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_ae8.TextData.Reference + 0x10))();
            }
            if (local_ad8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_ad8.TextData.Reference + 0x10))();
            }
            local_1228.Data.AllocatorInstance.Data = local_ab8.Data.AllocatorInstance.Data;
            if (local_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_ac8.Data.AllocatorInstance.Data);
              local_1228.Data.AllocatorInstance.Data = local_ab8.Data.AllocatorInstance.Data;
            }
          }
        }
      }
      goto LAB_14462b857;
    }
    if ((*(uint *)(lVar65 + 0x18) >> 0x10 & 1) != 0) {
      pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
      if (pFVar53->Type == Object) {
        auVar41 = (undefined1  [8])GetTransientPackage();
        pUVar11 = local_12d0;
        local_1240 = auVar41;
        if ((local_12d0 != (UClass *)0x0) &&
           (pUVar42 = Z_Construct_UClass_UObject_NoRegister(), pUVar42 != (UClass *)0x0)) {
          iVar24 = (int)pUVar42->_padding_;
          if (((int)pUVar11->_padding_ < iVar24) ||
             ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar24 * 8) !=
              &pUVar42->_padding_)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          local_1240 = auVar41;
          if (bVar21) {
            auVar41 = (undefined1  [8])local_12d8;
            local_1240 = (undefined1  [8])local_12d8;
          }
        }
        pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
        plVar43 = (longlong *)(**(code **)pFVar53->_padding_)(pFVar53);
        pUVar66 = (UPackage *)plVar43[1];
        local_1278 = (TJsonValueString<wchar_t> *)*plVar43;
        if (pUVar66 != (UPackage *)0x0) {
          LOCK();
          ((TReferenceControllerBase<1> *)pUVar66)->SharedReferenceCount =
               (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)pUVar66)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pUVar11 = (UClass *)((FMapProperty *)param_2)->KeyProp;
        local_12d8 = pUVar66;
        local_12d0 = pUVar11;
        local_11d0.Object = (FJsonObject *)local_1278;
        local_11d0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar66
        ;
        pFVar44 = TSharedPtr<FJsonObject,1>::operator->(&local_11d0);
        local_1098 = ObjectClassNameKey.Data.AllocatorInstance.Data;
        iStack_1090 = ObjectClassNameKey.Data.ArrayNum + -1;
        if (ObjectClassNameKey.Data.ArrayNum == 0) {
          iStack_1090 = 0;
        }
        local_aa8._12_4_ = uStack_108c;
        local_aa8.Size = iStack_1090;
        local_aa8.DataPtr = (wchar_t *)ObjectClassNameKey.Data.AllocatorInstance.Data;
        FJsonObject::GetStringField(pFVar44,&local_1270,&local_aa8);
        pFVar44 = TSharedPtr<FJsonObject,1>::operator->(&local_11d0);
        local_1088 = ObjectClassNameKey.Data.AllocatorInstance.Data;
        iStack_1080 = ObjectClassNameKey.Data.ArrayNum + -1;
        if (ObjectClassNameKey.Data.ArrayNum == 0) {
          iStack_1080 = 0;
        }
        local_a98._12_4_ = uStack_107c;
        local_a98.Size = iStack_1080;
        local_a98.DataPtr = (wchar_t *)ObjectClassNameKey.Data.AllocatorInstance.Data;
        FJsonObject::RemoveField(pFVar44,&local_a98);
        pUVar42 = pUVar11;
        if (1 < local_1270.Data.ArrayNum) {
          bVar21 = FPackageName::IsShortPackageName(&local_1270);
          if (bVar21) {
            FVar61.Data = (FScriptContainerElement *)L"";
            if (local_1270.Data.ArrayNum != 0) {
              FVar61.Data = local_1270.Data.AllocatorInstance.Data;
            }
            pTVar45 = TStringView<wchar_t>::TStringView<wchar_t>(&local_4e0,(wchar_t *)FVar61.Data);
            pwVar55 = pTVar45->DataPtr;
            uVar14._0_4_ = pTVar45->Size;
            uVar14._4_4_ = *(undefined4 *)&pTVar45->field_0xc;
            pUVar42 = Z_Construct_UClass_UClass_NoRegister();
            local_a88.DataPtr = pwVar55;
            local_a88._8_8_ = uVar14;
            pUVar42 = (UClass *)
                      StaticFindFirstObject(pUVar42,&local_a88,None,NoLogging,(wchar_t *)0x0);
          }
          else {
            uStack_10e0._0_4_ = 0;
            uStack_10e0._4_4_ = 0;
            FVar61.Data = (FScriptContainerElement *)L"";
            if (local_1270.Data.ArrayNum != 0) {
              FVar61.Data = local_1270.Data.AllocatorInstance.Data;
            }
            local_10e8 = (wchar_t *)0x0;
            pTVar45 = TStringView<wchar_t>::TStringView<wchar_t>(&local_4d0,(wchar_t *)FVar61.Data);
            pwVar55 = pTVar45->DataPtr;
            uVar15._0_4_ = pTVar45->Size;
            uVar15._4_4_ = *(undefined4 *)&pTVar45->field_0xc;
            pUVar42 = Z_Construct_UClass_UObject_NoRegister();
            local_a78.DataPtr = local_10e8;
            local_a78.Size = (int)uStack_10e0;
            local_a78._12_4_ = uStack_10e0._4_4_;
            local_a68.DataPtr = pwVar55;
            local_a68._8_8_ = uVar15;
            pUVar42 = StaticLoadClass(pUVar42,(UObject *)0x0,&local_a68,&local_a78,0,
                                      (UPackageMap *)0x0);
          }
          if (pUVar42 == (UClass *)0x0) {
            if (1 < (byte)LogJson._0_1_) {
              pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_a48);
              if ((pFVar54->Data).ArrayNum == 0) {
                local_1290 = (TSharedPtr<FJsonValue,1> *)0x15060d16c;
              }
              else {
                local_1290 = (TSharedPtr<FJsonValue,1> *)(pFVar54->Data).AllocatorInstance.Data;
              }
              UField::GetAuthoredName((UField *)pUVar11,&local_a58);
              UE::Logging::Private::BasicLog<2>
                        (&`ConvertScalarJsonValueToFPropertyWithContainer'::`640'::LOG_Static,
                         (FLogCategoryBase *)&LogJson);
              if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a58.Data.AllocatorInstance.Data);
              }
              if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a48.Data.AllocatorInstance.Data);
              }
            }
            pUVar42 = pUVar11;
            if (param_9 != (FText *)0x0) {
              pFVar56 = FText::FText(&local_4c0,param_9);
              pFVar57 = FText::FromString(&local_4b0,&local_1270);
              pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_a08);
              pFVar47 = FText::FromString(&local_4a0,pFVar54);
              pFVar54 = UField::GetAuthoredName((UField *)local_12d0,&local_a18);
              pFVar48 = FText::FromString(&local_490,pFVar54);
              pFVar46 = FText::AsLocalizable_Advanced_LocText
                                  (&local_a28,L"JsonObjectConverter",
                                   L"FailImportObjectClassNotFound",
                                   L"Unable to import JSON object into {0} property {1}. Class {2} was not found\n{3}"
                                  );
              pFVar58 = FTextFormat::FTextFormat(&local_480,pFVar46,Default);
              pFVar56 = FText::Format<FText,FText,FText,FText>
                                  (&local_a38,pFVar58,pFVar48,pFVar47,pFVar57,pFVar56);
              FText::operator=(param_9,pFVar56);
              if (local_a38.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_a38.TextData.Reference + 0x10))();
              }
              if (local_a28.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_a28.TextData.Reference + 0x10))();
              }
              if (local_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a18.Data.AllocatorInstance.Data);
              }
              auVar41 = local_1240;
              pUVar66 = local_12d8;
              pUVar42 = local_12d0;
              if (local_a08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a08.Data.AllocatorInstance.Data);
                auVar41 = local_1240;
                pUVar66 = local_12d8;
                pUVar42 = local_12d0;
              }
            }
          }
        }
        if ((pUVar42->ClassFlags & CLASS_Abstract) == CLASS_None) {
          local_11d8 = 0;
          pUVar49 = StaticAllocateObject
                              (pUVar42,(UObject *)auVar41,(FName)0x0,RF_NoFlags,Borrowed,false,
                               (bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                               (FGCReconstructionGuard *)0x0);
          p_Var12 = pUVar42->ClassConstructor;
          pFVar50 = FObjectInitializer::FObjectInitializer
                              (&local_2c8,pUVar49,(pUVar42->ClassDefaultObject).field0_0x0.DebugPtr,
                               None,(FObjectInstancingGraph *)0x0);
          (*p_Var12)(pFVar50);
          FObjectInitializer::~FObjectInitializer(&local_2c8);
          FObjectPropertyBase::SetObjectPropertyValue
                    ((FObjectPropertyBase *)param_2,param_3,pUVar49);
          if ((local_1278 == (TJsonValueString<wchar_t> *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Obj.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\JsonUtilities\\Private\\JsonObjectConverter.cpp"
                                  ,0x3f2,L""), bVar21)) {
            pcVar13 = (code *)swi(3);
            uVar23 = (*pcVar13)();
            return (bool)uVar23;
          }
          pTVar51 = &TSharedPtr<FJsonObject,1>::operator->(&local_11d0)->Values;
          bVar21 = JsonAttributesToUStructWithContainer
                             (pTVar51,(UStruct *)pUVar42,pUVar49,(UStruct *)pUVar42,pUVar49,
                              param_6 & 0xfffffffff7ff7a7d,param_7,param_8,param_9,local_12a0);
          if (bVar21) {
            if (local_1270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1270.Data.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pUVar66);
            return true;
          }
          if (1 < (byte)LogJson._0_1_) {
            FField::GetAuthoredName((FField *)param_2,&local_988);
            UField::GetAuthoredName((UField *)pUVar42,&local_998);
            UE::Logging::Private::BasicLog<2>
                      (&`ConvertScalarJsonValueToFPropertyWithContainer'::`695'::LOG_Static,
                       (FLogCategoryBase *)&LogJson);
            if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_998.Data.AllocatorInstance.Data);
            }
            if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_988.Data.AllocatorInstance.Data);
            }
          }
          if (param_9 == (FText *)0x0) goto LAB_14462b4e1;
          pFVar56 = FText::FText(&local_430,param_9);
          pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_948);
          pFVar57 = FText::FromString(&local_420,pFVar54);
          pFVar54 = UField::GetAuthoredName((UField *)pUVar42,&local_958);
          pFVar47 = FText::FromString(&local_410,pFVar54);
          pFVar48 = FText::AsLocalizable_Advanced_LocText
                              (&local_968,L"JsonObjectConverter",L"FailImportObjectFromObject",
                               L"Unable to import JSON object into {0} property {1}\n{2}");
          pFVar58 = FTextFormat::FTextFormat(&local_400,pFVar48,Default);
          pFVar56 = FText::Format<FText,FText,FText>(&local_978,pFVar58,pFVar47,pFVar57,pFVar56);
          FText::operator=(param_9,pFVar56);
          if (local_978.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_978.TextData.Reference + 0x10))();
          }
          if (local_968.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_968.TextData.Reference + 0x10))();
          }
          if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_958.Data.AllocatorInstance.Data);
          }
        }
        else {
          if (1 < (byte)LogJson._0_1_) {
            FField::GetAuthoredName((FField *)param_2,&local_9e8);
            UField::GetAuthoredName((UField *)pUVar42,&local_9f8);
            UE::Logging::Private::BasicLog<2>
                      (&`ConvertScalarJsonValueToFPropertyWithContainer'::`664'::LOG_Static,
                       (FLogCategoryBase *)&LogJson);
            if (local_9f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_9f8.Data.AllocatorInstance.Data);
            }
            if (local_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_9e8.Data.AllocatorInstance.Data);
            }
          }
          if (param_9 == (FText *)0x0) goto LAB_14462b4e1;
          pFVar56 = FText::FText(&local_470,param_9);
          pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_9a8);
          pFVar57 = FText::FromString(&local_460,pFVar54);
          pFVar54 = UField::GetAuthoredName((UField *)pUVar42,&local_9b8);
          pFVar47 = FText::FromString(&local_450,pFVar54);
          pFVar48 = FText::AsLocalizable_Advanced_LocText
                              (&local_9c8,L"JsonObjectConverter",L"FailImportObjectAbstractClass",
                               L"Unable to import JSON object into {0} property {1}. Class is abstract\n{2}"
                              );
          pFVar58 = FTextFormat::FTextFormat(&local_440,pFVar48,Default);
          pFVar56 = FText::Format<FText,FText,FText>(&local_9d8,pFVar58,pFVar47,pFVar57,pFVar56);
          FText::operator=(param_9,pFVar56);
          if (local_9d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_9d8.TextData.Reference + 0x10))();
          }
          if (local_9c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_9c8.TextData.Reference + 0x10))();
          }
          local_948.Data.AllocatorInstance.Data = local_9a8.Data.AllocatorInstance.Data;
          if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
            local_948.Data.AllocatorInstance.Data = local_9a8.Data.AllocatorInstance.Data;
          }
        }
        if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_948.Data.AllocatorInstance.Data);
        }
LAB_14462b4e1:
        if (local_1270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1270.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_12d8);
        return false;
      }
      pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
      pFVar17 = GWarn;
      if (pFVar53->Type != String) {
        return true;
      }
      pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
      pFVar54 = FJsonValue::AsString(pFVar53,&local_938);
      pwVar55 = L"";
      if ((pFVar54->Data).ArrayNum == 0) {
        pwVar52 = L"";
      }
      else {
        pwVar52 = (wchar_t *)(pFVar54->Data).AllocatorInstance.Data;
      }
      pwVar52 = FProperty::ImportText_Direct
                          (param_2,pwVar52,param_3,(UObject *)0x0,0,(FOutputDevice *)pFVar17);
      if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_938.Data.AllocatorInstance.Data);
      }
      if (pwVar52 != (wchar_t *)0x0) {
        return true;
      }
      if (1 < (byte)LogJson._0_1_) {
        FField::GetAuthoredName((FField *)param_2,&local_918);
        UField::GetAuthoredName((UField *)((FMapProperty *)param_2)->KeyProp,&local_928);
        UE::Logging::Private::BasicLog<2>
                  (&`ConvertScalarJsonValueToFPropertyWithContainer'::`723'::LOG_Static,
                   (FLogCategoryBase *)&LogJson);
        if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_928.Data.AllocatorInstance.Data);
        }
        if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_918.Data.AllocatorInstance.Data);
        }
      }
      if (param_9 == (FText *)0x0) {
        return false;
      }
      pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_8d8);
      pFVar56 = FText::FromString(&local_3f0,pFVar54);
      pFVar54 = UField::GetAuthoredName((UField *)((FMapProperty *)param_2)->KeyProp,&local_8e8);
      if ((pFVar54->Data).ArrayNum != 0) {
        pwVar55 = (wchar_t *)(pFVar54->Data).AllocatorInstance.Data;
      }
      pFVar57 = FText::FromString(&local_3e0,pwVar55);
      pFVar47 = FText::AsLocalizable_Advanced_LocText
                          (&local_8f8,L"JsonObjectConverter",L"FailImportObjectFromString",
                           L"Unable to import JSON string into {0} property {1}");
      pFVar58 = FTextFormat::FTextFormat(&local_3d0,pFVar47,Default);
      pFVar56 = FText::Format<FText,FText>(&local_908,pFVar58,pFVar57,pFVar56);
      FText::operator=(param_9,pFVar56);
      if (local_908.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_908.TextData.Reference + 0x10))();
      }
      if (local_8f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_8f8.TextData.Reference + 0x10))();
      }
      local_1228.Data.AllocatorInstance.Data = local_8d8.Data.AllocatorInstance.Data;
      if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
        local_1228.Data.AllocatorInstance.Data = local_8d8.Data.AllocatorInstance.Data;
      }
      goto LAB_14462b857;
    }
    if ((*(ulonglong *)(lVar65 + 0x18) & 0x100000000000000) == 0) goto LAB_14462b6fe;
    this_00 = &((FMapProperty *)param_2)->KeyProp;
    cVar20 = (**(code **)(((FMapProperty *)param_2)->KeyProp->_padding_ + 0x1a8))();
    if (cVar20 == '\0') {
      iVar24 = FOptionalPropertyLayout::CalcIsSetOffset((FOptionalPropertyLayout *)this_00);
      if (*(char *)((longlong)iVar24 + (longlong)param_3) == '\0') {
        FProperty::InitializeValue(*this_00,param_3);
        *(undefined1 *)((longlong)iVar24 + (longlong)param_3) = 1;
      }
    }
    else {
      bVar21 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)this_00,param_3);
      if (!bVar21) {
        pFVar6 = *this_00;
        if ((pFVar6->PropertyFlags & CPF_NoDestructor) == CPF_None) {
          (**(code **)(pFVar6->_padding_ + 0x138))(pFVar6,param_3);
        }
        FProperty::InitializeValue(*this_00,param_3);
        param_2 = FOptionalPropertyLayout::GetValueProperty((FOptionalPropertyLayout *)this_00);
        goto LAB_144627e1e;
      }
    }
    param_2 = FOptionalPropertyLayout::GetValueProperty((FOptionalPropertyLayout *)this_00);
  } while( true );
  do {
    uVar25 = 0;
    if ((int)uVar70 < local_12c0) {
      uVar25 = ~uVar70 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       FVar69 = local_1260.field1_0x8, bVar21)) {
      pcVar13 = (code *)swi(3);
      uVar23 = (*pcVar13)();
      return (bool)uVar23;
    }
    pvVar68 = (void *)0x0;
    pFVar53 = ((TSharedPtr<FJsonValue,1> *)(local_12c8.Data + lVar63))->Object;
    if (((pFVar53 != (FJsonValue *)0x0) && (EVar5 = pFVar53->Type, EVar5 != Null)) &&
       (EVar5 != None)) {
      if ((FVar69.FreezableArray)->ArrayNum != 0) {
        uVar60 = (FVar69.FreezableArray)->_padding_;
        if (((local_1260.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar60 & 1) != 0)) {
          uVar60 = (longlong)&(FVar69.HeapArray)->field_0x0 + ((longlong)uVar60 >> 0x18);
        }
        pvVar68 = (void *)((longlong)local_1260.ElementSize * (longlong)(int)uVar70 + uVar60);
      }
      bVar21 = JsonValueToFPropertyWithContainer
                         ((TSharedPtr<FJsonValue,1> *)(local_12c8.Data + lVar63),
                          ((FMapProperty *)param_2)->ValueProp,pvVar68,(UStruct *)local_12d0,
                          local_12d8,param_6 & 0xfffffffff7ff7a7d,param_7,param_8,param_9,local_12a0
                         );
      FVar69 = local_1260.field1_0x8;
      if (!bVar21) {
        if (1 < (byte)LogJson._0_1_) {
          FField::GetAuthoredName((FField *)param_2,&local_e28);
          UE::Logging::Private::BasicLog<2>
                    (&`ConvertScalarJsonValueToFPropertyWithContainer'::`145'::LOG_Static,
                     (FLogCategoryBase *)&LogJson);
          if (local_e28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e28.Data.AllocatorInstance.Data);
          }
        }
        if (param_9 != (FText *)0x0) {
          pFVar56 = FText::FText(&local_720,param_9);
          pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_df8);
          pFVar57 = FText::FromString(&local_710,pFVar54);
          local_1018.Object = (FCulture *)0x0;
          local_1018.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar47 = FText::AsNumber(&local_700,uVar70,(FNumberFormattingOptions *)0x0,&local_1018);
          pFVar48 = FText::AsLocalizable_Advanced_LocText
                              (&local_e08,L"JsonObjectConverter",L"FailImportArrayElement",
                               L"Unable to import Array element {0} for property {1}\n{2}");
          pFVar58 = FTextFormat::FTextFormat(&local_6f0,pFVar48,Default);
          pFVar56 = FText::Format<FText,FText,FText>(&local_e18,pFVar58,pFVar47,pFVar57,pFVar56);
          FText::operator=(param_9,pFVar56);
          if (local_e18.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_e18.TextData.Reference + 0x10))();
          }
          if (local_e08.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_e08.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1018.SharedReferenceCount.ReferenceController);
          if (local_df8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_df8.Data.AllocatorInstance.Data);
          }
        }
        DestructItems<TSharedPtr<FJsonValue,1>,int>
                  ((TSharedPtr<FJsonValue,1> *)local_12c8.Data,local_12c0);
        local_1228.Data.AllocatorInstance.Data = local_12c8.Data;
        goto LAB_14462b857;
      }
    }
    uVar70 = uVar70 + 1;
    lVar65 = lVar65 + 1;
    lVar63 = lVar63 + 0x10;
  } while (lVar65 < iVar24);
LAB_14462976c:
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_12c8.Data,local_12c0);
  local_1028.Data.AllocatorInstance.Data = local_12c8.Data;
  goto LAB_144628129;
LAB_144628ce2:
  pFVar44 = local_10d0;
  if (*(int *)&(local_10d0->Values).field_0x8 - *(int *)&(local_10d0->Values).field_0x34 !=
      (int)uStack_10a8) {
    local_12e0[0] = 0;
    `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_12e0);
  }
  if (((TStack_10c8.CurrentBitIndex == iVar24) && (TStack_10c8.Array == local_1298)) &&
     ((TSharedPtr<FJsonValue,1> *)pFVar44 == pTVar31)) {
    FScriptMapHelper::Rehash(&local_308);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11e8.SharedReferenceCount.ReferenceController);
    return true;
  }
  lVar65 = *(longlong *)&pFVar44->Values;
  pFVar54 = (FString *)(lVar65 + (longlong)TStack_10c8.CurrentBitIndex * 0x28);
  lVar65 = *(longlong *)(lVar65 + 0x10 + (longlong)TStack_10c8.CurrentBitIndex * 0x28);
  if (((lVar65 != 0) && (iVar67 = *(int *)(lVar65 + 8), iVar67 != 1)) && (iVar67 != 0)) {
    pFVar1 = &local_308.MapLayout.SetLayout.SparseArrayLayout;
    if ((local_308.MapFlags & UsesMemoryImageAllocator) == None) {
      iVar24 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
               ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                   *)local_308.field2_0x10.HeapMap,pFVar1);
    }
    else {
      iVar24 = TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
               ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                                   *)local_308.field2_0x10.HeapMap,pFVar1);
    }
    FScriptMapHelper::ConstructItem(&local_308,iVar24);
    pTVar32 = MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>(&local_ef8,pFVar54);
    pTVar8 = (pTVar32->SharedReferenceCount).ReferenceController;
    local_1278 = pTVar32->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ef8.SharedReferenceCount.ReferenceController);
    FVar19 = local_308.field2_0x10;
    iVar67 = ((local_308.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
    if ((local_308.MapFlags & UsesMemoryImageAllocator) == None) {
      if (iVar67 == *(int *)&((local_308.field2_0x10.FreezableMap)->Pairs).field_0x34)
      goto LAB_144628e3b;
      local_1234 = iVar24;
      bVar21 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                         (&local_308,(<lambda_1> *)&local_1234);
      if ((!bVar21) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(InternalIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x12dd,
                              L"Invalid internal index. Use IsValidIndex before calling this method."
                             ), bVar21)) {
        pcVar13 = (code *)swi(3);
        uVar23 = (*pcVar13)();
        return (bool)uVar23;
      }
      pvVar68 = (void *)((longlong)(local_308.MapLayout.SetLayout.SparseArrayLayout.Size * iVar24) +
                        ((FVar19.FreezableMap)->Pairs).Elements.Data._padding_);
    }
    else if (iVar67 == ((local_308.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices) {
LAB_144628e3b:
      if ((iVar24 != 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("InternalIndex == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x12d9,
                              L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                             ), bVar21)) {
        pcVar13 = (code *)swi(3);
        uVar23 = (*pcVar13)();
        return (bool)uVar23;
      }
      pvVar68 = (void *)0x0;
    }
    else {
      local_1238 = iVar24;
      bVar21 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                         (&local_308,(<lambda_1> *)&local_1238);
      if ((!bVar21) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(InternalIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x12dd,
                              L"Invalid internal index. Use IsValidIndex before calling this method."
                             ), bVar21)) {
        pcVar13 = (code *)swi(3);
        uVar23 = (*pcVar13)();
        return (bool)uVar23;
      }
      uVar60 = ((FVar19.FreezableMap)->Pairs).Elements.Data._padding_;
      if ((uVar60 & 1) != 0) {
        uVar60 = (longlong)
                 &((TScriptArray<TSizedDefaultAllocator<32>_> *)&(FVar19.HeapMap)->field_0x0)->
                  _padding_ + ((longlong)uVar60 >> 0x18);
      }
      pvVar68 = (void *)((longlong)(local_308.MapLayout.SetLayout.SparseArrayLayout.Size * iVar24) +
                        uVar60);
    }
    pFVar6 = ((FMapProperty *)param_2)->KeyProp;
    local_1110.Object = (FJsonValue *)local_1278;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1110.SharedReferenceCount.ReferenceController = pTVar8;
    bVar21 = JsonValueToFPropertyWithContainer
                       (&local_1110,pFVar6,pvVar68,(UStruct *)local_12d0,local_12d8,
                        param_6 & 0xfffffffff7ff7a7d,param_7,param_8,param_9,local_12a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1110.SharedReferenceCount.ReferenceController);
    if (bVar21) {
      local_1048._0_8_ = &local_308;
      local_1048._8_4_ = iVar24;
      puVar33 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::GetValuePtr_::__l2::<lambda_1>_>
                          (&local_308,(<lambda_1> *)local_1048);
      bVar21 = JsonValueToFPropertyWithContainer
                         ((TSharedPtr<FJsonValue,1> *)(pFVar54 + 1),
                          ((FMapProperty *)param_2)->ValueProp,puVar33,(UStruct *)local_12d0,
                          local_12d8,param_6 & 0xfffffffff7ff7a7d,param_7,param_8,param_9,local_12a0
                         );
      if (bVar21) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
        iVar24 = (int)local_12a8;
        goto LAB_144628fce;
      }
      if (1 < (byte)LogJson._0_1_) {
        FField::GetAuthoredName((FField *)param_2,&local_ee8);
        UE::Logging::Private::BasicLog<2>
                  (&`ConvertScalarJsonValueToFPropertyWithContainer'::`237'::LOG_Static,
                   (FLogCategoryBase *)&LogJson);
        if (local_ee8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_ee8.Data.AllocatorInstance.Data);
        }
      }
      if (param_9 == (FText *)0x0) goto LAB_144629277;
      pFVar56 = FText::FText(&local_7c0,param_9);
      pFVar34 = FField::GetAuthoredName((FField *)param_2,&local_eb8);
      pFVar57 = FText::FromString(&local_7b0,pFVar34);
      pFVar47 = FText::FromString(&local_7a0,pFVar54);
      pFVar48 = FText::AsLocalizable_Advanced_LocText
                          (&local_ec8,L"JsonObjectConverter",L"FailImportMapElementValue",
                           L"Unable to import Map element {0} value for property {1}\n{2}");
      pFVar58 = FTextFormat::FTextFormat(&local_790,pFVar48,Default);
      pFVar56 = FText::Format<FText,FText,FText>(&local_ed8,pFVar58,pFVar47,pFVar57,pFVar56);
      FText::operator=(param_9,pFVar56);
      if (local_ed8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_ed8.TextData.Reference + 0x10))();
      }
      local_e78.Data.AllocatorInstance.Data = local_eb8.Data.AllocatorInstance.Data;
      if (local_ec8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_ec8.TextData.Reference + 0x10))();
        local_e78.Data.AllocatorInstance.Data = local_eb8.Data.AllocatorInstance.Data;
      }
    }
    else {
      if (1 < (byte)LogJson._0_1_) {
        FField::GetAuthoredName((FField *)param_2,&local_ea8);
        UE::Logging::Private::BasicLog<2>
                  (&`ConvertScalarJsonValueToFPropertyWithContainer'::`213'::LOG_Static,
                   (FLogCategoryBase *)&LogJson);
        if (local_ea8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_ea8.Data.AllocatorInstance.Data);
        }
      }
      if (param_9 == (FText *)0x0) goto LAB_144629277;
      pFVar56 = FText::FText(&local_780,param_9);
      pFVar34 = FField::GetAuthoredName((FField *)param_2,&local_e78);
      pFVar57 = FText::FromString(&local_770,pFVar34);
      pFVar47 = FText::FromString(&local_760,pFVar54);
      pFVar48 = FText::AsLocalizable_Advanced_LocText
                          (&local_e88,L"JsonObjectConverter",L"FailImportMapElementKey",
                           L"Unable to import Map element {0} key for property {1}\n{2}");
      pFVar58 = FTextFormat::FTextFormat(&local_750,pFVar48,Default);
      pFVar56 = FText::Format<FText,FText,FText>(&local_e98,pFVar58,pFVar47,pFVar57,pFVar56);
      FText::operator=(param_9,pFVar56);
      if (local_e98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e98.TextData.Reference + 0x10))();
      }
      if (local_e88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e88.TextData.Reference + 0x10))();
      }
    }
    if (local_e78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e78.Data.AllocatorInstance.Data);
    }
LAB_144629277:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    FScriptMapHelper::Rehash(&local_308);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11e8.SharedReferenceCount.ReferenceController);
    return false;
  }
LAB_144628fce:
  TStack_10c8.UnvisitedBitMask = TStack_10c8.UnvisitedBitMask & ~TStack_10c8._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_10c8);
  pTVar31 = local_1230;
  goto LAB_144628ce2;
LAB_14462b6fe:
  pFVar53 = TSharedPtr<FJsonValue,1>::operator->(param_1);
  pFVar54 = FJsonValue::AsString(pFVar53,&local_8c8);
  if ((pFVar54->Data).ArrayNum == 0) {
    pwVar55 = L"";
  }
  else {
    pwVar55 = (wchar_t *)(pFVar54->Data).AllocatorInstance.Data;
  }
  pwVar55 = FProperty::ImportText_Direct
                      (param_2,pwVar55,param_3,(UObject *)0x0,0,(FOutputDevice *)pFVar17);
  if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
  }
  if (pwVar55 != (wchar_t *)0x0) {
    return true;
  }
  if (1 < (byte)LogJson._0_1_) {
    FField::GetAuthoredName((FField *)param_2,&local_8b8);
    UE::Logging::Private::BasicLog<2>
              (&`ConvertScalarJsonValueToFPropertyWithContainer'::`753'::LOG_Static,
               (FLogCategoryBase *)&LogJson);
    if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
    }
  }
  if (param_9 != (FText *)0x0) {
    pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_888);
    pFVar56 = FText::FromString(&local_3c0,pFVar54);
    pFVar57 = FText::AsLocalizable_Advanced_LocText
                        (&local_898,L"JsonObjectConverter",L"FailImportFromString",
                         L"Unable to import JSON string into property {0}");
    pFVar58 = FTextFormat::FTextFormat(&local_3b0,pFVar57,Default);
    pFVar56 = FText::Format<FText>(&local_8a8,pFVar58,pFVar56);
    FText::operator=(param_9,pFVar56);
    if (local_8a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_8a8.TextData.Reference + 0x10))();
    }
    local_1228.Data.AllocatorInstance.Data = local_888.Data.AllocatorInstance.Data;
    if (local_898.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_898.TextData.Reference + 0x10))();
      local_1228.Data.AllocatorInstance.Data = local_888.Data.AllocatorInstance.Data;
    }
LAB_14462b857:
    if ((TSharedPtr<FJsonValue,1> *)local_1228.Data.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_1228.Data.AllocatorInstance.Data);
    }
  }
  return false;
LAB_144628551:
  do {
    pTVar62 = local_1298;
    pvVar68 = (void *)0x0;
    uVar25 = 0;
    if ((int)uVar70 < local_12b0) {
      uVar25 = ~uVar70 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar13 = (code *)swi(3);
      uVar23 = (*pcVar13)();
      return (bool)uVar23;
    }
    local_1230 = (TSharedPtr<FJsonValue,1> *)(local_12b8.Data + (longlong)pTVar62);
    if (((local_1230->Object != (FJsonValue *)0x0) &&
        (EVar5 = local_1230->Object->Type, EVar5 != Null)) && (EVar5 != None)) {
      uVar25 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
               ::AddUninitialized(&(local_330.Set)->Elements,&local_330.SetLayout.SparseArrayLayout)
      ;
      pTVar18 = local_330.Set;
      if (((int)uVar25 < 0) || (((local_330.Set)->Elements).AllocationFlags.NumBits <= (int)uVar25))
      {
LAB_144628642:
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(InternalIndex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1841,L"");
        if (bVar21) {
          pcVar13 = (code *)swi(3);
          uVar23 = (*pcVar13)();
          return (bool)uVar23;
        }
      }
      else {
        pTVar16 = &(local_330.Set)->Elements;
        if ((((local_330.Set)->Elements).AllocationFlags.NumBits <= (int)uVar25) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x8c4,L""), bVar21)) {
          pcVar13 = (code *)swi(3);
          uVar23 = (*pcVar13)();
          return (bool)uVar23;
        }
        FVar9 = (pTVar18->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar64 = (ForElementType<unsigned_int>)&pTVar16->AllocationFlags;
        if (FVar9 != (ForElementType<unsigned_int>)0x0) {
          FVar64 = FVar9;
        }
        uVar26 = uVar25;
        if ((int)uVar25 < 0) {
          uVar26 = uVar25 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar64 + (longlong)((int)uVar26 >> 5) * 4) >> (uVar25 & 0x1f) & 1)
            == 0) goto LAB_144628642;
      }
      _Dst = (void *)((longlong)(int)(local_330.SetLayout.SparseArrayLayout.Size * uVar25) +
                     ((local_330.Set)->Elements).Data._padding_);
      if (((uint)(int)(local_330.ElementProp)->PropertyFlags >> 9 & 1) == 0) {
        FProperty::InitializeValue_InContainer(local_330.ElementProp,_Dst);
      }
      else {
        memset(_Dst,0,(longlong)local_330.SetLayout.Size);
      }
      pTVar18 = local_330.Set;
      if (((local_330.Set)->Elements).Data.ArrayNum == ((local_330.Set)->Elements).NumFreeIndices) {
        if ((uVar25 != 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("InternalIndex == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x169e,
                                L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          uVar23 = (*pcVar13)();
          return (bool)uVar23;
        }
      }
      else {
        if (((int)uVar25 < 0) ||
           (((local_330.Set)->Elements).AllocationFlags.NumBits <= (int)uVar25)) {
LAB_14462875a:
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(InternalIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x16a2,
                              L"Invalid internal index. Use IsValidIndex before calling this method."
                             );
          if (bVar21) {
            pcVar13 = (code *)swi(3);
            uVar23 = (*pcVar13)();
            return (bool)uVar23;
          }
        }
        else {
          pTVar16 = &(local_330.Set)->Elements;
          if ((((local_330.Set)->Elements).AllocationFlags.NumBits <= (int)uVar25) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x8c4,L""), bVar21)) {
            pcVar13 = (code *)swi(3);
            uVar23 = (*pcVar13)();
            return (bool)uVar23;
          }
          FVar9 = (pTVar18->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
          FVar64 = (ForElementType<unsigned_int>)&pTVar16->AllocationFlags;
          if (FVar9 != (ForElementType<unsigned_int>)0x0) {
            FVar64 = FVar9;
          }
          uVar26 = uVar25;
          if ((int)uVar25 < 0) {
            uVar26 = uVar25 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar64 + (longlong)((int)uVar26 >> 5) * 4) >> (uVar25 & 0x1f) & 1
              ) == 0) goto LAB_14462875a;
        }
        pvVar68 = (void *)((longlong)(int)(local_330.SetLayout.SparseArrayLayout.Size * uVar25) +
                          ((local_330.Set)->Elements).Data._padding_);
      }
      bVar21 = JsonValueToFPropertyWithContainer
                         (local_1230,((FMapProperty *)param_2)->KeyProp,pvVar68,
                          (UStruct *)local_12d0,local_12d8,param_6 & 0xfffffffff7ff7a7d,param_7,
                          param_8,param_9,local_12a0);
      pTVar62 = local_1298;
      if (!bVar21) {
        if (1 < (byte)LogJson._0_1_) {
          FField::GetAuthoredName((FField *)param_2,&local_f78);
          UE::Logging::Private::BasicLog<2>
                    (&`ConvertScalarJsonValueToFPropertyWithContainer'::`296'::LOG_Static,
                     (FLogCategoryBase *)&LogJson);
          if (local_f78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f78.Data.AllocatorInstance.Data);
          }
        }
        if (param_9 != (FText *)0x0) {
          pFVar56 = FText::FText(&local_3a0,param_9);
          pFVar54 = FField::GetAuthoredName((FField *)param_2,&local_f48);
          pFVar57 = FText::FromString(&local_390,pFVar54);
          local_1068.Object = (FCulture *)0x0;
          local_1068.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar47 = FText::AsNumber(&local_340,uVar70,(FNumberFormattingOptions *)0x0,&local_1068);
          pFVar48 = FText::AsLocalizable_Advanced_LocText
                              (&local_f58,L"JsonObjectConverter",L"FailImportSetElement",
                               L"Unable to import Set element {0} for property {1}\n{2}");
          pFVar58 = FTextFormat::FTextFormat(&local_7f0,pFVar48,Default);
          pFVar56 = FText::Format<FText,FText,FText>(&local_f68,pFVar58,pFVar47,pFVar57,pFVar56);
          FText::operator=(param_9,pFVar56);
          if (local_f68.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_f68.TextData.Reference + 0x10))();
          }
          if (local_f58.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_f58.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1068.SharedReferenceCount.ReferenceController);
          if (local_f48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f48.Data.AllocatorInstance.Data);
          }
        }
        FScriptSetHelper::Rehash(&local_330);
        DestructItems<TSharedPtr<FJsonValue,1>,int>
                  ((TSharedPtr<FJsonValue,1> *)local_12b8.Data,local_12b0);
        local_1228.Data.AllocatorInstance.Data = local_12b8.Data;
        goto LAB_14462b857;
      }
    }
    local_12a8 = local_12a8 + 1;
    local_1298 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pTVar62 + 0x10);
    uVar70 = uVar70 + 1;
  } while (local_12a8 < (longlong)local_1278);
LAB_14462880c:
  FScriptSetHelper::Rehash(&local_330);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_12b8.Data,local_12b0);
  local_1028.Data.AllocatorInstance.Data = local_12b8.Data;
LAB_144628129:
  if ((TSharedPtr<FJsonValue,1> *)local_1028.Data.AllocatorInstance.Data !=
      (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_1028.Data.AllocatorInstance.Data);
  }
  return true;
}

// EmptyLinkFunctionForGeneratedCodeJsonObjectWrapper @ 14462cf50

void __cdecl EmptyLinkFunctionForGeneratedCodeJsonObjectWrapper(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeJsonUtilities_init @ 14462cf60

void __cdecl EmptyLinkFunctionForGeneratedCodeJsonUtilities_init(void)

{
  return;
}

// FPropertyToJsonValueWithContainer @ 14462d080

TSharedPtr<FJsonValue,1> * __cdecl
`anonymous_namespace'::FPropertyToJsonValueWithContainer
          (TSharedPtr<FJsonValue,1> *__return_storage_ptr__,FProperty *param_1,void *param_2,
          UObject *param_3,
          TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *param_4,
          long64 param_5,long64 param_6,
          TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
          *param_7,FProperty *param_8,EJsonObjectConversionFlags param_9)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  uint uVar7;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_48;
  TSharedPtr<FJsonValue,1> local_38;
  
  if (param_1->ArrayDim == 1) {
    ConvertScalarFPropertyToJsonValueWithContainer
              (__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,param_9);
    return __return_storage_ptr__;
  }
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pTVar5 = pTVar6;
  if (param_1->ArrayDim != 0) {
    do {
      pTVar4 = ConvertScalarFPropertyToJsonValueWithContainer
                         (&local_38,param_1,
                          (void *)((longlong)((int)pTVar5 * param_1->ElementSize) +
                                  (longlong)param_2),param_3,param_4,param_5,param_6,param_7,param_8
                          ,param_9);
      if (((local_48.AllocatorInstance.Data <= pTVar4) &&
          (pTVar4 < (TSharedPtr<FJsonValue,1> *)
                    (local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0x10))) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FJsonValue,1> *)(*pcVar1)();
        return pTVar4;
      }
      iVar3 = local_48.ArrayNum;
      if (local_48.ArrayNum == local_48.ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar3 + 1;
      *(FJsonValue **)&local_48.AllocatorInstance.Data[(longlong)iVar3 * 0x10].field_0x0 =
           pTVar4->Object;
      *(TReferenceControllerBase<1> **)
       (local_48.AllocatorInstance.Data + (longlong)iVar3 * 0x10 + 8) =
           (pTVar4->SharedReferenceCount).ReferenceController;
      (pTVar4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar4->Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      uVar7 = (int)pTVar5 + 1;
      pTVar5 = (TReferenceControllerBase<1> *)(ulonglong)uVar7;
    } while (uVar7 != param_1->ArrayDim);
  }
  pTVar5 = ::operator_new(0x30);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValue *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueArray___00_SharedPointerInternals__6B_;
    FJsonValueArray::FJsonValueArray((FJsonValueArray *)(pTVar5 + 1),&local_48);
    if ((pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FJsonValue,1> *)(*pcVar1)();
      return pTVar4;
    }
    __return_storage_ptr__->Object = (FJsonValue *)(pTVar5 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_48.AllocatorInstance.Data != (TSharedPtr<FJsonValue,1> *)0x0
     ) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// JsonAttributesToUStructWithContainer @ 14462e010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
`anonymous_namespace'::JsonAttributesToUStructWithContainer
          (TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           *param_1,UStruct *param_2,void *param_3,UStruct *param_4,void *param_5,long64 param_6,
          long64 param_7,bool param_8,FText *param_9,
          TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
          *param_10)

{
  FJsonObject **ppFVar1;
  longlong lVar2;
  EJson EVar3;
  code *pcVar4;
  FProperty *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  UPackage *pUVar10;
  TSharedRef<FJsonObject,1> *pTVar11;
  FText *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  ForAnyElementType FVar16;
  TSharedPtr<FJsonValue,1> *pTVar17;
  int iVar18;
  FString local_128;
  TFieldIterator<FProperty> local_118;
  FJsonObject *local_100;
  FSharedReferencer<1> local_f8;
  TSharedRef<FJsonObject,1> local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FTextFormat local_80;
  FText local_70;
  FTextFormat local_60 [2];
  
  if (Z_Registration_Info_UScriptStruct_FJsonObjectWrapper.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar10 = Z_Construct_UPackage__Script_JsonUtilities();
    Z_Registration_Info_UScriptStruct_FJsonObjectWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FJsonObjectWrapper,(UObject *)pUVar10,
                         L"JsonObjectWrapper");
  }
  if ((UScriptStruct *)param_2 ==
      Z_Registration_Info_UScriptStruct_FJsonObjectWrapper.OuterSingleton) {
    pTVar11 = MakeShared<FJsonObject,1>(&local_f0);
    local_f8.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
    local_100 = pTVar11->Object;
    if (local_f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_f8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_f8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    ppFVar1 = (FJsonObject **)((longlong)param_3 + 0x10);
    if (ppFVar1 != &local_100) {
      *ppFVar1 = local_100;
      local_100 = (FJsonObject *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)((longlong)param_3 + 0x18),&local_f8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f0.SharedReferenceCount.ReferenceController);
    if ((*ppFVar1 == (FJsonObject *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
    ::operator=(&(*ppFVar1)->Values,param_1);
  }
  else {
    iVar18 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
    if (0 < iVar18) {
      if (param_2 == (UStruct *)0x0) {
        local_118.Field = (FField *)0x0;
      }
      else {
        local_118.Field = param_2->ChildProperties;
      }
      local_118.InterfaceIndex = -1;
      local_118.bIncludeSuper = true;
      local_118.bIncludeDeprecated = true;
      local_118.bIncludeInterface = false;
      local_118.Struct = param_2;
      TFieldIterator<FProperty>::IterateToNext(&local_118);
      pFVar5 = (FProperty *)local_118.Field;
      while (pFVar5 != (FProperty *)0x0) {
        if ((((param_6 == 0) || ((pFVar5->PropertyFlags & param_6) != CPF_None)) || (param_6 == -1))
           && (((pFVar5->PropertyFlags & param_7) == CPF_None && (param_7 != -1)))) {
          local_118.Field = (FField *)pFVar5;
          (**(code **)(param_2->_padding_ + 0x328))(param_2,&local_128,pFVar5);
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_128.Data.ArrayNum != 0) {
            FVar16.Data = local_128.Data.AllocatorInstance.Data;
          }
          iVar9 = local_128.Data.ArrayNum + -1;
          if (local_128.Data.ArrayNum == 0) {
            iVar9 = 0;
          }
          uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar16.Data);
          iVar9 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FString>
                            ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                              *)param_1,uVar8,&local_128);
          if (((iVar9 == -1) || (lVar2 = *(longlong *)param_1 + (longlong)iVar9 * 0x28, lVar2 == 0))
             || (pTVar17 = (TSharedPtr<FJsonValue,1> *)(lVar2 + 0x10),
                pTVar17 == (TSharedPtr<FJsonValue,1> *)0x0)) {
            if (param_8) {
              if (1 < (byte)LogJson._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&`JsonAttributesToUStructWithContainer'::`23'::LOG_Static,
                           (FLogCategoryBase *)&LogJson);
              }
              if (param_9 == (FText *)0x0) goto LAB_14462e518;
              pFVar12 = FText::FromString(&local_70,&local_128);
              pFVar13 = FText::AsLocalizable_Advanced_LocText
                                  (&local_b0,L"JsonObjectConverter",L"MissingJsonField",
                                   L"Missing JSON value named {0}");
              pFVar15 = FTextFormat::FTextFormat(local_60,pFVar13,Default);
              pFVar12 = FText::Format<FText>(&local_c0,pFVar15,pFVar12);
              FText::operator=(param_9,pFVar12);
              if (local_c0.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
              }
LAB_14462e50d:
              if (local_b0.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
              }
LAB_14462e518:
              if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data.AllocatorInstance.Data);
              }
              return false;
            }
          }
          else {
            if (((pTVar17->Object != (FJsonValue *)0x0) &&
                (EVar3 = pTVar17->Object->Type, EVar3 != Null)) && (EVar3 != None)) {
              if ((pFVar5->ArrayDim < 1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              if ((param_3 == (void *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              bVar6 = JsonValueToFPropertyWithContainer
                                (pTVar17,pFVar5,
                                 (void *)((longlong)pFVar5->Offset_Internal + (longlong)param_3),
                                 param_4,param_5,param_6,param_7,param_8,param_9,param_10);
              if (!bVar6) {
                if (1 < (byte)LogJson._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            (&`JsonAttributesToUStructWithContainer'::`50'::LOG_Static,
                             (FLogCategoryBase *)&LogJson);
                }
                if (param_9 == (FText *)0x0) goto LAB_14462e518;
                pFVar12 = FText::FText(&local_a0,param_9);
                pFVar13 = FText::FromString(&local_90,&local_128);
                pFVar14 = FText::AsLocalizable_Advanced_LocText
                                    (&local_d0,L"JsonObjectConverter",L"FailImportValueToProperty",
                                     L"Unable to import JSON value into property {0}\n{1}");
                pFVar15 = FTextFormat::FTextFormat(&local_80,pFVar14,Default);
                pFVar12 = FText::Format<FText,FText>(&local_e0,pFVar15,pFVar13,pFVar12);
                FText::operator=(param_9,pFVar12);
                local_b0.TextData.Reference = local_d0.TextData.Reference;
                if (local_e0.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
                  local_b0.TextData.Reference = local_d0.TextData.Reference;
                }
                goto LAB_14462e50d;
              }
            }
            iVar18 = iVar18 + -1;
            if (iVar18 < 1) {
              if (local_128.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return true;
              }
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
              return true;
            }
          }
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
        }
        local_118.Field = (FField *)pFVar5->_padding_;
        TFieldIterator<FProperty>::IterateToNext(&local_118);
        pFVar5 = (FProperty *)local_118.Field;
      }
    }
  }
  return true;
}

// JsonValueToFPropertyWithContainer @ 14462e7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
`anonymous_namespace'::JsonValueToFPropertyWithContainer
          (TSharedPtr<FJsonValue,1> *param_1,FProperty *param_2,void *param_3,UStruct *param_4,
          void *param_5,long64 param_6,long64 param_7,bool param_8,FText *param_9,
          TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
          *param_10)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FText *pFVar7;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  FJsonValue *this;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  uint uVar14;
  TSharedPtr<FCulture,1> local_158;
  TSharedPtr<FCulture,1> local_148;
  TSharedPtr<FCulture,1> local_138;
  FText local_128;
  FText local_118;
  FString local_108;
  FText local_f8;
  FText local_e8;
  FString local_d8;
  FString local_c8;
  FText local_b8;
  FText local_a8;
  FString local_98;
  FText local_88;
  FText local_78;
  FTextFormat local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  
  if (param_1->Object == (FJsonValue *)0x0) {
    if (1 < (byte)LogJson._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`JsonValueToFPropertyWithContainer'::`6'::LOG_Static,(FLogCategoryBase *)&LogJson)
      ;
    }
    if (param_9 != (FText *)0x0) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_128,L"JsonObjectConverter",L"InvalidJsonValue",
                          L"Invalid JSON value");
      FText::operator=(param_9,pFVar7);
      if (local_128.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
        return false;
      }
    }
  }
  else {
    uVar2 = *(ulonglong *)(param_2->_padding_ + 0x18);
    if (((uVar2 >> 0x15 & 1) == 0) && ((uVar2 >> 0x2f & 1) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (param_1->Object->Type == Array) {
      if ((bVar4) && (param_2->ArrayDim == 1)) {
        bVar4 = ConvertScalarJsonValueToFPropertyWithContainer
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_10);
        return bVar4;
      }
      this = TSharedPtr<FJsonValue,1>::operator->(param_1);
      pTVar12 = FJsonValue::AsArray(this);
      if ((!param_8) || (param_2->ArrayDim == pTVar12->ArrayNum)) {
        if ((param_2->ArrayDim < pTVar12->ArrayNum) && (2 < (byte)LogJson._0_1_)) {
          FField::GetAuthoredName((FField *)param_2,&local_98);
          UE::Logging::Private::BasicLog<3>
                    (&`JsonValueToFPropertyWithContainer'[::B]::LOG_Static,
                     (FLogCategoryBase *)&LogJson);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
        uVar13 = param_2->ArrayDim;
        if (pTVar12->ArrayNum < param_2->ArrayDim) {
          uVar13 = pTVar12->ArrayNum;
        }
        uVar14 = 0;
        if (0 < (int)uVar13) {
          uVar14 = uVar13;
        }
        uVar13 = 0;
        if (uVar14 != 0) {
          do {
            iVar1 = param_2->ElementSize;
            uVar6 = 0;
            if ((int)uVar13 < pTVar12->ArrayNum) {
              uVar6 = ~uVar13 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            bVar4 = ConvertScalarJsonValueToFPropertyWithContainer
                              ((TSharedPtr<FJsonValue,1> *)
                               ((pTVar12->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x10),
                               param_2,(void *)((longlong)(int)(uVar13 * iVar1) + (longlong)param_3)
                               ,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
            if (!bVar4) {
              return false;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar14);
        }
        return true;
      }
      if (1 < (byte)LogJson._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`JsonValueToFPropertyWithContainer'::`105'::LOG_Static,
                   (FLogCategoryBase *)&LogJson);
      }
      if (param_9 != (FText *)0x0) {
        local_138.Object = (FCulture *)0x0;
        local_138.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar7 = FText::AsNumber(&local_58,param_2->ArrayDim,(FNumberFormattingOptions *)0x0,
                                 &local_138);
        local_148.Object = (FCulture *)0x0;
        local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar9 = FText::AsNumber(&local_48,pTVar12->ArrayNum,(FNumberFormattingOptions *)0x0,
                                 &local_148);
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_a8,L"JsonObjectConverter",L"IncorrectArraySize",
                             L"JSON array size is incorrect (has {0} elements, but needs {1})");
        pFVar11 = FTextFormat::FTextFormat(&local_38,pFVar10,Default);
        pFVar7 = FText::Format<FText,FText>(&local_b8,pFVar11,pFVar9,pFVar7);
        FText::operator=(param_9,pFVar7);
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_148.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_138.SharedReferenceCount.ReferenceController);
        return false;
      }
    }
    else {
      if (!bVar4) {
        if (param_2->ArrayDim != 1) {
          if (param_8) {
            if (1 < (byte)LogJson._0_1_) {
              FField::GetAuthoredName((FField *)param_2,&local_108);
              UE::Logging::Private::BasicLog<2>
                        (&`JsonValueToFPropertyWithContainer'::`60'::LOG_Static,
                         (FLogCategoryBase *)&LogJson);
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
            }
            if (param_9 == (FText *)0x0) {
              return false;
            }
            local_158.Object = (FCulture *)0x0;
            local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pFVar7 = FText::AsNumber(&local_88,param_2->ArrayDim,(FNumberFormattingOptions *)0x0,
                                     &local_158);
            pFVar8 = FField::GetAuthoredName((FField *)param_2,&local_d8);
            pFVar9 = FText::FromString(&local_78,pFVar8);
            pFVar10 = FText::AsLocalizable_Advanced_LocText
                                (&local_e8,L"JsonObjectConverter",
                                 L"InvalidDimensionOfNonArrayProperty",
                                 L"Property {0} is not an array but has {1} elements");
            pFVar11 = FTextFormat::FTextFormat(&local_68,pFVar10,Default);
            pFVar7 = FText::Format<FText,FText>(&local_f8,pFVar11,pFVar9,pFVar7);
            FText::operator=(param_9,pFVar7);
            if (local_f8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
            }
            if (local_e8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
            }
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_158.SharedReferenceCount.ReferenceController);
            return false;
          }
          if (2 < (byte)LogJson._0_1_) {
            FField::GetAuthoredName((FField *)param_2,&local_c8);
            UE::Logging::Private::BasicLog<3>
                      (&`JsonValueToFPropertyWithContainer'::`81'::LOG_Static,
                       (FLogCategoryBase *)&LogJson);
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
          }
        }
        bVar4 = ConvertScalarJsonValueToFPropertyWithContainer
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_10);
        return bVar4;
      }
      if (1 < (byte)LogJson._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`JsonValueToFPropertyWithContainer'::`33'::LOG_Static,
                   (FLogCategoryBase *)&LogJson);
      }
      if (param_9 != (FText *)0x0) {
        pFVar7 = FText::AsLocalizable_Advanced_LocText
                           (&local_118,L"JsonObjectConverter",L"ExpectingJsonArray",
                            L"Expecting JSON array");
        FText::operator=(param_9,pFVar7);
        if (local_118.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
          return false;
        }
      }
    }
  }
  return false;
}

// UStructToJsonAttributesWithContainer @ 14462fba0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
`anonymous_namespace'::UStructToJsonAttributesWithContainer
          (UStruct *param_1,void *param_2,UObject *param_3,
          TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *param_4,
          TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
          *param_5,long64 param_6,long64 param_7,
          TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
          *param_8,EJsonObjectConversionFlags param_9)

{
  FName *this;
  code *pcVar1;
  FProperty *this_00;
  bool bVar2;
  undefined1 uVar3;
  UPackage *pUVar4;
  FString *pFVar5;
  EPropertyFlags EVar6;
  void *pvVar7;
  FString local_b8;
  TSharedPtr<FJsonValue,1> local_a8;
  FString local_98;
  FString *local_88;
  TSharedPtr<FJsonValue,1> *local_80;
  FString local_78;
  FString local_68;
  TFieldIterator<FProperty> local_58;
  
  EVar6 = CPF_Deprecated|CPF_Transient;
  if (param_7 != 0) {
    EVar6 = param_7;
  }
  if (Z_Registration_Info_UScriptStruct_FJsonObjectWrapper.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_JsonUtilities();
    Z_Registration_Info_UScriptStruct_FJsonObjectWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FJsonObjectWrapper,(UObject *)pUVar4,
                         L"JsonObjectWrapper");
  }
  if ((UScriptStruct *)param_1 ==
      Z_Registration_Info_UScriptStruct_FJsonObjectWrapper.OuterSingleton) {
    if (*(longlong *)((longlong)param_2 + 0x10) != 0) {
      TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
      ::operator=(param_5,*(TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                            **)((longlong)param_2 + 0x10));
    }
  }
  else {
    if (param_1 == (UStruct *)0x0) {
      local_58.Field = (FField *)0x0;
    }
    else {
      local_58.Field = param_1->ChildProperties;
    }
    local_58.InterfaceIndex = -1;
    local_58.bIncludeSuper = true;
    local_58.bIncludeDeprecated = true;
    local_58.bIncludeInterface = false;
    local_58.Struct = param_1;
    TFieldIterator<FProperty>::IterateToNext(&local_58);
    this_00 = (FProperty *)local_58.Field;
    while (this_00 != (FProperty *)0x0) {
      if ((((param_6 == 0) || ((this_00->PropertyFlags & param_6) != CPF_None)) || (param_6 == -1))
         && (((this_00->PropertyFlags & EVar6) == CPF_None && (EVar6 != ~CPF_None)))) {
        local_58.Field = (FField *)this_00;
        if ((this_00->ArrayDim < 1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if ((param_2 == (void *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        pvVar7 = (void *)((longlong)this_00->Offset_Internal + (longlong)param_2);
        if ((((*(byte *)(this_00->_padding_ + 0x1f) & 1) == 0) || (this_00 == (FProperty *)0x0)) ||
           (bVar2 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)(this_00 + 1),pvVar7),
           bVar2)) {
          FField::GetAuthoredName((FField *)this_00,&local_b8);
          if ((param_9 & SkipStandardizeCase) == None) {
            pFVar5 = FJsonObjectConverter::StandardizeCase(&local_78,&local_b8);
            if (&local_b8 != pFVar5) {
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
              local_b8.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
              (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_b8.Data.ArrayNum = (pFVar5->Data).ArrayNum;
              local_b8.Data.ArrayMax = (pFVar5->Data).ArrayMax;
              (pFVar5->Data).ArrayNum = 0;
              (pFVar5->Data).ArrayMax = 0;
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
          FPropertyToJsonValueWithContainer
                    (&local_a8,this_00,pvVar7,param_3,param_4,param_6,EVar6,param_8,(FProperty *)0x0
                     ,param_9);
          if (local_a8.Object == (FJsonValue *)0x0) {
            this = (FName *)this_00->_padding_;
            if (1 < (byte)LogJson._0_1_) {
              FField::GetPathName((FField *)this_00,&local_68,(UObject *)0x0);
              ::FName::ToString(this,&local_98);
              UE::Logging::Private::BasicLog<2>
                        (&`UStructToJsonAttributesWithContainer'::`32'::LOG_Static,
                         (FLogCategoryBase *)&LogJson);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a8.SharedReferenceCount.ReferenceController);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            return false;
          }
          local_88 = &local_b8;
          local_80 = &local_a8;
          TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<FJsonValue,1>_const_&>_>
                    ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                      *)param_5,
                     (TPairInitializer<FString_const_&,TSharedPtr<FJsonValue,1>_const_&> *)&param_7,
                     (bool *)&local_88);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a8.SharedReferenceCount.ReferenceController);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
      }
      local_58.Field = (FField *)this_00->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_58);
      this_00 = (FProperty *)local_58.Field;
    }
  }
  return true;
}

// Z_Construct_UClass_UJsonUtilitiesDummyObject_NoRegister @ 1446388f0

UClass * __cdecl Z_Construct_UClass_UJsonUtilitiesDummyObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/JsonUtilities",L"JsonUtilitiesDummyObject",
               &Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.InnerSingleton,
               UJsonUtilitiesDummyObject::StaticRegisterNativesUJsonUtilitiesDummyObject,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UJsonUtilitiesDummyObject>,
               InternalVTableHelperCtorCaller<UJsonUtilitiesDummyObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.InnerSingleton;
}

// Z_Construct_UScriptStruct_FJsonObjectWrapper @ 1446389a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FJsonObjectWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FJsonObjectWrapper.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FJsonObjectWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FJsonObjectWrapper.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FJsonObjectWrapper.InnerSingleton;
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

// IMPLEMENT_MODULE_JsonUtilities @ 144638a20

void __cdecl IMPLEMENT_MODULE_JsonUtilities(void)

{
  return;
}

// ExportCallback_WriteISO8601Dates'' @ 15036e490

void __cdecl
`dynamic_atexit_destructor_for_'FJsonObjectConverter::ExportCallback_WriteISO8601Dates__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FJsonObjectConverter::ExportCallback_WriteISO8601Dates,(FWriteAccessScope *)&local_28)
  ;
  if ((FJsonObjectConverter::ExportCallback_WriteISO8601Dates._16_4_ != 0) &&
     (FJsonObjectConverter::ExportCallback_WriteISO8601Dates._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FJsonObjectConverter::ExportCallback_WriteISO8601Dates._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)
               &FJsonObjectConverter::ExportCallback_WriteISO8601Dates.field_0x8,0,0,0x10);
    FJsonObjectConverter::ExportCallback_WriteISO8601Dates._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FJsonObjectConverter::ExportCallback_WriteISO8601Dates._8_8_ != 0) {
    FMemory::Free((void *)FJsonObjectConverter::ExportCallback_WriteISO8601Dates._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FJsonObjectConverter::ExportCallback_WriteISO8601Dates
            );
  return;
}

// `dynamic_atexit_destructor_for_'GDumpSplitUETypeInformation'' @ 15036e530

void __cdecl UE::JsonUtilities::_dynamic_atexit_destructor_for__GDumpSplitUETypeInformation__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GDumpSplitUETypeInformation);
  return;
}

// `dynamic_atexit_destructor_for_'GDumpUETypeInformation'' @ 15036e550

void __cdecl UE::JsonUtilities::_dynamic_atexit_destructor_for__GDumpUETypeInformation__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GDumpUETypeInformation);
  return;
}

// `dynamic_atexit_destructor_for_'GStructConvertersMap'' @ 15036e570

void __cdecl JsonObjectStructInterface::_dynamic_atexit_destructor_for__GStructConvertersMap__(void)

{
  GStructConvertersMap._72_4_ = 0;
  if (GStructConvertersMap._64_8_ != 0) {
    FMemory::Free((void *)GStructConvertersMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,IJsonObjectStructConverter_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,IJsonObjectStructConverter_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,IJsonObjectStructConverter_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GStructConvertersMap);
  return;
}

// `dynamic_atexit_destructor_for_'GStructConvertersMapCriticalSection'' @ 15036e5b0

void __cdecl
JsonObjectStructInterface::_dynamic_atexit_destructor_for__GStructConvertersMapCriticalSection__
          (void)

{
                    /* WARNING: Could not recover jumptable at 0x00015036e5b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GStructConvertersMapCriticalSection);
  return;
}

// `dynamic_atexit_destructor_for_'ObjectClassNameKey'' @ 15036e5d0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__ObjectClassNameKey__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ObjectClassNameKey.Data.AllocatorInstance.Data;
  if (ObjectClassNameKey.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ObjectClassNameKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

