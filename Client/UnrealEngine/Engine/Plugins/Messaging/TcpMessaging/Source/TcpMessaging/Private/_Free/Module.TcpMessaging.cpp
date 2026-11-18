// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 42

// `dynamic_initializer_for_'LogTcpMessaging'' @ 1414488f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTcpMessaging__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogTcpMessaging,L"LogTcpMessaging",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTcpMessaging__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantTcpMessaging'' @ 141448930

void __cdecl _dynamic_initializer_for__ModuleRegistrantTcpMessaging__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "TcpMessaging";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"TcpMessaging",0xc);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FTcpMessagingModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_TcpMessaging_Source_TcpMessaging_Private_Settings_TcpMessagingSettings_h__Script_TcpMessaging_3634620719'' @ 141448980

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_TcpMessaging_Source_TcpMessaging_Private_Settings_TcpMessagingSettings_h__Script_TcpMessaging_3634620719__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TcpMessaging",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_TcpMessaging_Source_TcpMessaging_Private_Settings_TcpMessagingSettings_h__Script_TcpMessaging_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_TcpMessaging'' @ 1414489c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_TcpMessaging__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x3051a178;
  local_res8[0].DeclarationsHash = 0x3d4f818d;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_TcpMessaging,L"/Script/TcpMessaging",
             &Z_Registration_Info_UPackage__Script_TcpMessaging,local_res8);
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14eac5b8c

/* [thunk]:public: virtual void * __ptr64 __cdecl FTcpMessagingModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FTcpMessagingModule::_vector_deleting_destructor__adjustor_8__
          (FTcpMessagingModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FTcpMessagingModule *)&this[-1].MessageTransportPtr.WeakReferenceCount,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14eac5e10

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eac5e60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTcpMessageTransport,SharedPointerInternals::DefaultDeleter<FTcpMessageTransport>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTcpMessageTransport,SharedPointerInternals::DefaultDeleter<FTcpMessageTransport>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UPackage__Script_TcpMessaging @ 14eac5ea0

UPackage * __cdecl Z_Construct_UPackage__Script_TcpMessaging(void)

{
  if (Z_Registration_Info_UPackage__Script_TcpMessaging.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_TcpMessaging.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_TcpMessaging.OuterSingleton;
}

// Z_Construct_UClass_UTcpMessagingSettings @ 14eac5f90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTcpMessagingSettings(void)

{
  if (Z_Registration_Info_UClass_UTcpMessagingSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTcpMessagingSettings.OuterSingleton,
               &Z_Construct_UClass_UTcpMessagingSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTcpMessagingSettings.OuterSingleton;
}

// NewProp_EnableTransport_SetBit @ 14eac5fd0

void __cdecl
Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_EnableTransport_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bStopServiceWhenAppDeactivates_SetBit @ 14eac5fe0

void __cdecl
Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14eac5ff0

void * __thiscall
ITcpMessagingModule::_scalar_deleting_destructor_(ITcpMessagingModule *this,uint param_1)

{
  *this = (ITcpMessagingModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eac64f0

void * __thiscall
FTcpMessagingModule::_scalar_deleting_destructor_(FTcpMessagingModule *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->MessageTransportPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageBridge).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// operator<<<FMessageAddress,TSizedDefaultAllocator<32>_> @ 14eac6800

FArchive * __cdecl
operator<<<FMessageAddress,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FGuid *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              operator<<(param_1,(FGuid *)((param_2->AllocatorInstance).Data +
                                          (longlong)(int)uVar9 * 0x10));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FMessageAddress,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x410,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FGuid *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
              DefaultConstructItems<FMessageAddress,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// ConstructItems<TSharedPtr<FTcpMessageTransportConnection,1>,TSharedPtr<FTcpMessageTransportConnection,1>,int> @ 14eac6e00

void __cdecl
ConstructItems<TSharedPtr<FTcpMessageTransportConnection,1>,TSharedPtr<FTcpMessageTransportConnection,1>,int>
          (void *param_1,TSharedPtr<FTcpMessageTransportConnection,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FTcpMessageTransportConnection **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FMessageAddress,int> @ 14eac6e40

void __cdecl DefaultConstructItems<FMessageAddress,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FTcpMessageTransportConnection,1>,int> @ 14eac6eb0

void __cdecl
DestructItems<TSharedPtr<FTcpMessageTransportConnection,1>,int>
          (TSharedPtr<FTcpMessageTransportConnection,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// InternalConstructor<UTcpMessagingSettings> @ 14eac7210

void __cdecl InternalConstructor<UTcpMessagingSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[2].field_0x8 = 1;
    *(undefined ***)this = &___7UTcpMessagingSettings__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UTcpMessagingSettings> @ 14eac7260

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTcpMessagingSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTcpMessagingSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[2].field_0x8 = 1;
    *(undefined ***)pUVar1 = &___7UTcpMessagingSettings__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// operator<< @ 14eac80d0

FArchive * __cdecl operator<<(FArchive *param_1,FTcpMessageHeader *param_2)

{
  uint *puVar1;
  uint *puVar2;
  FArchive *pFVar3;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->MagicNumber);
    }
  }
  else {
    param_2->MagicNumber = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->Version;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pFVar3 = operator<<(param_1,&param_2->NodeId);
  return pFVar3;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14eac818c

/* [thunk]:public: virtual void * __ptr64 __cdecl FTcpMessageTransport::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FTcpMessageTransport::_vector_deleting_destructor__adjustor_8__
          (FTcpMessageTransport *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FTcpMessageTransport *)&this[-1].TransportHandler,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14eac81a0

void * __thiscall
IBaseDelegateInstance<bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eac81d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eac8210

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eac8240

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eac8280

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eac82b0

void * __thiscall
TGraphTask<FTcpSerializeMessageTask>::_scalar_deleting_destructor_
          (TGraphTask<FTcpSerializeMessageTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eac8310

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTcpDeserializedMessage,SharedPointerInternals::DefaultDeleter<FTcpDeserializedMessage>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTcpDeserializedMessage,SharedPointerInternals::DefaultDeleter<FTcpDeserializedMessage>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eac8350

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTcpMessageTransportConnection,SharedPointerInternals::DefaultDeleter<FTcpMessageTransportConnection>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTcpMessageTransportConnection,SharedPointerInternals::DefaultDeleter<FTcpMessageTransportConnection>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eac8390

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTcpSerializedMessage,SharedPointerInternals::DefaultDeleter<FTcpSerializedMessage>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTcpSerializedMessage,SharedPointerInternals::DefaultDeleter<FTcpSerializedMessage>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eac83d0

void * __thiscall
FTcpDeserializedMessage::_scalar_deleting_destructor_(FTcpDeserializedMessage *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  UObject *pUVar3;
  
  this->_padding_ = (longlong)&___7FTcpDeserializedMessage__6B_;
  if (this->MessageData != (void *)0x0) {
    pUVar3 = FWeakObjectPtr::Get(&(this->TypeInfo).WeakPtr);
    if (pUVar3 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar3 + 0x300))(pUVar3,this->MessageData,1);
    }
    FMemory::Free(this->MessageData);
    this->MessageData = (void *)0x0;
  }
  pFVar1 = (this->Recipients).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Attachment).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->Annotations).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Annotations).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Annotations);
  this->_padding_ = (longlong)&___7IMessageContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eac84a0

void * __thiscall FTcpListener::_scalar_deleting_destructor_(FTcpListener *this,uint param_1)

{
  FRunnableThread *pFVar1;
  void *pvVar2;
  FName *pFVar3;
  ISocketSubsystem *pIVar4;
  undefined4 in_register_00000014;
  FName local_res8;
  
  this->_padding_ = (longlong)&___7FTcpListener__6B_;
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x18))
              (pFVar1,CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),1));
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
  }
  if ((this->bDeleteSocket != false) && (this->Socket != (FSocket *)0x0)) {
    pFVar3 = ::FName::FName(&local_res8,L"WINDOWS");
    pIVar4 = ISocketSubsystem::Get(pFVar3);
    (**(code **)(pIVar4->_padding_ + 0x38))(pIVar4,this->Socket);
    this->Socket = (FSocket *)0x0;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ConnectionAcceptedDelegate);
  pvVar2 = *(void **)&(this->ConnectionAcceptedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ConnectionAcceptedDelegate);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eac8580

void * __thiscall
FTcpMessageTransport::_scalar_deleting_destructor_(FTcpMessageTransport *this,uint param_1)

{
  FRunnableThread *pFVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  undefined4 in_register_00000014;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__IMessageTransport__;
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x18))
              (pFVar1,CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),1));
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
  }
  StopTransport((FTcpMessageTransport *)&this->_padding_);
  pTVar2 = (this->ConnectionEndpointsToRemove).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->ConnectionEndpointsToRemove).Tail = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x10);
    pTVar2 = (this->ConnectionEndpointsToRemove).Tail;
  }
  pTVar3 = (this->PendingConnections).Tail;
  while (pTVar3 != (TNode *)0x0) {
    (this->PendingConnections).Tail = pTVar3->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar3->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar3,0x18);
    pTVar3 = (this->PendingConnections).Tail;
  }
  TQueue<FNodeConnectionMapUpdate,0>::~TQueue<FNodeConnectionMapUpdate,0>
            (&this->NodeConnectionMapUpdates);
  *(undefined4 *)&(this->NodeConnectionMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->NodeConnectionMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NodeConnectionMap);
  DestructItems<TSharedPtr<FTcpMessageTransportConnection,1>,int>
            ((TSharedPtr<FTcpMessageTransportConnection,1> *)
             (this->Connections).AllocatorInstance.Data,(this->Connections).ArrayNum);
  pFVar5 = (this->Connections).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->ConnectToEndpoints).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  this->_padding_ = (longlong)&___7IMessageTransport__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eac86f0

void * __thiscall
FTcpMessageTransportConnection::_scalar_deleting_destructor_
          (FTcpMessageTransportConnection *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FRunnableThread *pFVar3;
  TNode *pTVar4;
  void *pvVar5;
  longlong *plVar6;
  FName *pFVar7;
  ISocketSubsystem *pIVar8;
  FName local_res8;
  
  *(undefined ***)this = &___7FTcpMessageTransportConnection__6B_;
  if (this->Thread != (FRunnableThread *)0x0) {
    if (this->bRun != false) {
      this->bRun = false;
      (**(code **)(this->Thread->_padding_ + 0x20))();
    }
    pFVar3 = this->Thread;
    if (pFVar3 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
    }
  }
  if (this->Socket != (FSocket *)0x0) {
    pFVar7 = ::FName::FName(&local_res8,L"WINDOWS");
    pIVar8 = ISocketSubsystem::Get(pFVar7);
    (**(code **)(pIVar8->_padding_ + 0x38))(pIVar8,this->Socket);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SendCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RecvMessageData).SharedReferenceCount.ReferenceController);
  pTVar4 = (this->Inbox).Tail;
  while (pTVar4 != (TNode *)0x0) {
    (this->Inbox).Tail = pTVar4->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar4->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar4,0x18);
    pTVar4 = (this->Inbox).Tail;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ConnectionStateChangedDelegate);
  pvVar5 = *(void **)&(this->ConnectionStateChangedDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ConnectionStateChangedDelegate);
  plVar6 = *(longlong **)&this->field_0x10;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  *(undefined ***)this = &___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eac8840

void * __thiscall
FTcpSerializedMessage::_scalar_deleting_destructor_(FTcpSerializedMessage *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DataArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eac8890

void * __thiscall
IMessageTransport::_scalar_deleting_destructor_(IMessageTransport *this,uint param_1)

{
  *this = (IMessageTransport)&___7IMessageTransport__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eac88d0

void * __thiscall
UTcpMessagingSettings::_scalar_deleting_destructor_(UTcpMessagingSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UTcpMessagingSettings__6B_;
  DestructItems<FString,int>
            ((FString *)(this->ConnectToEndpoints).AllocatorInstance.Data,
             (this->ConnectToEndpoints).ArrayNum);
  pFVar1 = (this->ConnectToEndpoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ListenEndpoint).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeTcpMessagingSettings @ 14eaca130

void __cdecl EmptyLinkFunctionForGeneratedCodeTcpMessagingSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTcpMessaging_init @ 14eaca140

void __cdecl EmptyLinkFunctionForGeneratedCodeTcpMessaging_init(void)

{
  return;
}

// Z_Construct_UClass_UTcpMessagingSettings_NoRegister @ 14eacf650

UClass * __cdecl Z_Construct_UClass_UTcpMessagingSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTcpMessagingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TcpMessaging",L"TcpMessagingSettings",
               &Z_Registration_Info_UClass_UTcpMessagingSettings.InnerSingleton,
               UTcpMessagingSettings::StaticRegisterNativesUTcpMessagingSettings,0x60,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UTcpMessagingSettings>,
               InternalVTableHelperCtorCaller<UTcpMessagingSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTcpMessagingSettings.InnerSingleton;
}

// IMPLEMENT_MODULE_TcpMessaging @ 14eacf700

void __cdecl IMPLEMENT_MODULE_TcpMessaging(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogTcpMessaging'' @ 15046ee00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTcpMessaging__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTcpMessaging);
  return;
}

