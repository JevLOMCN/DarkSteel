// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeExport
// Functions: 16

// `dynamic_initializer_for_'ModuleRegistrantInterchangeExport'' @ 141433e00

void __cdecl _dynamic_initializer_for__ModuleRegistrantInterchangeExport__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "InterchangeExport";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"InterchangeExport",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FInterchangeExportModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Export_Public_InterchangeTextureWriter_h__Script_InterchangeExport_248437236'' @ 141433e50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Export_Public_InterchangeTextureWriter_h__Script_InterchangeExport_248437236__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeExport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Export_Public_InterchangeTextureWriter_h__Script_InterchangeExport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_InterchangeExport'' @ 141433e90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_InterchangeExport__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x2cd60925;
  local_res8[0].DeclarationsHash = 0x86ca0604;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_InterchangeExport,L"/Script/InterchangeExport",
             &Z_Registration_Info_UPackage__Script_InterchangeExport,local_res8);
  return;
}

// Z_Construct_UPackage__Script_InterchangeExport @ 14e72c090

UPackage * __cdecl Z_Construct_UPackage__Script_InterchangeExport(void)

{
  if (Z_Registration_Info_UPackage__Script_InterchangeExport.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_InterchangeExport.OuterSingleton,&PackageParams
              );
  }
  return Z_Registration_Info_UPackage__Script_InterchangeExport.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14e72c0d0

void * __thiscall
IInterchangeExportModule::_scalar_deleting_destructor_(IInterchangeExportModule *this,uint param_1)

{
  *this = (IInterchangeExportModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e72c240

void * __thiscall
FInterchangeExportModule::_scalar_deleting_destructor_(FInterchangeExportModule *this,uint param_1)

{
  *this = (FInterchangeExportModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UInterchangeTextureWriter @ 14e72c280

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeTextureWriter(void)

{
  if (Z_Registration_Info_UClass_UInterchangeTextureWriter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeTextureWriter.OuterSingleton,
               &Z_Construct_UClass_UInterchangeTextureWriter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureWriter.OuterSingleton;
}

// AddLambda<`FInterchangeExportModule::StartupModule'::__l2::<lambda_1>_&> @ 14e72c2c0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FInterchangeExportModule::StartupModule_::__l2::<lambda_1>_&>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FInterchangeExportModule::StartupModule'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// InternalConstructor<UInterchangeTextureWriter> @ 14e72c4f0

void __cdecl InternalConstructor<UInterchangeTextureWriter>(FObjectInitializer *param_1)

{
  UInterchangeWriterBase *this;
  
  this = (UInterchangeWriterBase *)param_1->Obj;
  if (this != (UInterchangeWriterBase *)0x0) {
    UInterchangeWriterBase::UInterchangeWriterBase(this,param_1);
    *(undefined ***)this = &___7UInterchangeTextureWriter__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UInterchangeTextureWriter> @ 14e72c520

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInterchangeTextureWriter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeTextureWriter::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterchangeWriterBase::UInterchangeWriterBase((UInterchangeWriterBase *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeTextureWriter__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14e72c650

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FInterchangeExportModule::StartupModule'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e72c680

void * __thiscall
UInterchangeTextureWriter::_scalar_deleting_destructor_
          (UInterchangeTextureWriter *this,uint param_1)

{
  *(undefined ***)this = &___7UInterchangeTextureWriter__6B_;
  UInterchangeWriterBase::~UInterchangeWriterBase((UInterchangeWriterBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeExport_init @ 14e72c840

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeExport_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeTextureWriter @ 14e72c850

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeTextureWriter(void)

{
  return;
}

// Z_Construct_UClass_UInterchangeTextureWriter_NoRegister @ 14e72ca30

UClass * __cdecl Z_Construct_UClass_UInterchangeTextureWriter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureWriter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeExport",L"InterchangeTextureWriter",
               &Z_Registration_Info_UClass_UInterchangeTextureWriter.InnerSingleton,
               UInterchangeTextureWriter::StaticRegisterNativesUInterchangeTextureWriter,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeTextureWriter>,
               InternalVTableHelperCtorCaller<UInterchangeTextureWriter>,local_res8,
               UInterchangeWriterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureWriter.InnerSingleton;
}

// IMPLEMENT_MODULE_InterchangeExport @ 14e72caf0

void __cdecl IMPLEMENT_MODULE_InterchangeExport(void)

{
  return;
}

