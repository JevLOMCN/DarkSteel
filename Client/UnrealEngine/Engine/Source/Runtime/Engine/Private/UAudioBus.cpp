// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147607ac0

UClass * __cdecl UAudioBus::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAudioBus.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioBus",&Z_Registration_Info_UClass_UAudioBus.InnerSingleton,
               StaticRegisterNativesUAudioBus,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioBus>,InternalVTableHelperCtorCaller<UAudioBus>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioBus.InnerSingleton;
}

// UAudioBus @ 14761e670

UAudioBus * __thiscall UAudioBus::UAudioBus(UAudioBus *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->AudioBusChannels = Mono;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  return this;
}

// UAudioBus @ 14761e6b0

UAudioBus * __thiscall UAudioBus::UAudioBus(UAudioBus *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->AudioBusChannels = Mono;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  return this;
}

// ~UAudioBus @ 1476216d0

void __thiscall UAudioBus::~UAudioBus(UAudioBus *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 14762b0b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAudioBus::BeginDestroy(UAudioBus *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  FAudioBusKey FVar6;
  int iVar7;
  bool bVar8;
  FAudioDeviceManager *pFVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  UAudioBusSubsystem *this_00;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  <lambda_1> local_res10 [8];
  uint local_res18;
  undefined4 uStackX_1c;
  TArray<FAudioDevice_*,TSizedDefaultAllocator<32>_> local_38;
  
  UObject::BeginDestroy((UObject *)this);
  if (GEngine != (UEngine *)0x0) {
    uVar2 = *(uint *)((longlong)&this->_padding_ + 4);
    pFVar9 = UEngine::GetAudioDeviceManager(GEngine);
    if (pFVar9 != (FAudioDeviceManager *)0x0) {
      lpCriticalSection = &pFVar9->DeviceMapCriticalSection;
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      Algo::
      Transform<TMap<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioDeviceManager::FAudioDeviceContainer,0>_>,TArray<FAudioDevice_*,TSizedDefaultAllocator<32>_>_&,_FAudioDeviceManager::GetAudioDevices_::__l3::<lambda_1>_>
                (&pFVar9->Devices,&local_38,local_res10[0]);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar7 = local_38.ArrayNum;
      uVar12 = (ulonglong)local_38.ArrayNum;
      pFVar1 = local_38.AllocatorInstance.Data + uVar12 * 8;
      FVar13.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar12 != iVar7) {
          local_res10[0] = (<lambda_1>)0x0;
          `TCheckedPointerIterator<FAudioDevice_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar13.Data == pFVar1) break;
        lVar4 = *(longlong *)FVar13.Data;
        pUVar10 = Z_Construct_UClass_UAudioBusSubsystem_NoRegister();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar10 != (UClass *)0x0) goto LAB_14762b19c;
LAB_14762b1ca:
          pUVar10 = (UClass *)0x0;
        }
        else {
          if (pUVar10 == (UClass *)0x0) goto LAB_14762b1ca;
          UE::GC::MarkAsReachable((UObject *)pUVar10);
LAB_14762b19c:
          pUVar11 = Z_Construct_UClass_UAudioBusSubsystem_NoRegister();
          if (pUVar11 == (UClass *)0x0) goto LAB_14762b1ca;
          iVar3 = (int)pUVar11->_padding_;
          if (((int)pUVar10->_padding_ < iVar3) ||
             ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar3 * 8) !=
              &pUVar11->_padding_)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (!bVar8) goto LAB_14762b1ca;
        }
        this_00 = (UAudioBusSubsystem *)
                  FSubsystemCollectionBase::GetSubsystemInternal
                            ((FSubsystemCollectionBase *)(lVar4 + 0x228),pUVar10);
        if ((this_00 == (UAudioBusSubsystem *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("AudioBusSubsystem",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioBus.cpp"
                               ,0x2e,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uStackX_1c = 0xffffffff;
        FVar6.InstanceId = 0xffffffff;
        FVar6.ObjectId = uVar2;
        local_res18 = uVar2;
        UAudioBusSubsystem::StopAudioBus(this_00,FVar6);
        uVar12 = local_38._8_8_ & 0xffffffff;
        FVar13.Data = FVar13.Data + 8;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// CreateProxyData @ 147631a60

TSharedPtr<Audio::IProxyData,1> * __thiscall
UAudioBus::CreateProxyData
          (UAudioBus *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,
          FProxyDataInitParams *param_1)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<Audio::IProxyData,1> *pTVar5;
  uint uVar6;
  longlong *plVar7;
  
  pTVar4 = ::operator_new(0x30);
  pvVar2 = ThreadLocalStoragePointer;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IProxyData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    plVar7 = &this[-1]._padding_;
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFAudioBusProxy___00_SharedPointerInternals__6B_;
    if (*(int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x9d4c) <
        `public:_static_class_FName___cdecl_FAudioBusProxy::GetAudioProxyTypeName(void)'::__l2::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_FAudioBusProxy::GetAudioProxyTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_FAudioBusProxy::GetAudioProxyTypeName(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_FAudioBusProxy::GetAudioProxyTypeName(void)'
                        ::__l2::MyClassName,"FAudioBusProxy");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_FAudioBusProxy::GetAudioProxyTypeName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    uVar6 = `public:_static_class_FName___cdecl_FAudioBusProxy::GetAudioProxyTypeName(void)'::__l2::
            MyClassName.Number;
    pTVar4[1].SharedReferenceCount =
         (atomic<int>)
         `public:_static_class_FName___cdecl_FAudioBusProxy::GetAudioProxyTypeName(void)'::__l2::
         MyClassName.ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar6;
    pTVar4[1]._padding_ = (longlong)&___7FAudioBusProxy__6B_;
    pTVar4[2]._padding_ = -1;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0xffffffff;
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)&pTVar4[2]._padding_ = *(undefined4 *)((longlong)&this[-1]._padding_ + 4);
      *(uint *)((longlong)&pTVar4[2]._padding_ + 4) = (byte)this->_padding_ + 1;
      uVar6 = ((uint)((ulonglong)plVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar7 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      pTVar4[2].SharedReferenceCount = (atomic<int>)(uVar6 >> 0x10 ^ uVar6);
    }
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedPtr<Audio::IProxyData,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->Object = (IProxyData *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14763f0c0

UClass * __cdecl UAudioBus::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioBus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioBus",&Z_Registration_Info_UClass_UAudioBus.InnerSingleton,
               StaticRegisterNativesUAudioBus,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioBus>,InternalVTableHelperCtorCaller<UAudioBus>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioBus.InnerSingleton;
}

// StaticRegisterNativesUAudioBus @ 147664600

void __cdecl UAudioBus::StaticRegisterNativesUAudioBus(void)

{
  return;
}

