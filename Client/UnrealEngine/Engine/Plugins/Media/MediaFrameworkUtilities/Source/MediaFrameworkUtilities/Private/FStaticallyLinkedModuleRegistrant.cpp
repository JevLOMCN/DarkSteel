// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 1

// InitializeModule @ 14d7db920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FMediaFrameworkUtilitiesModule>::InitializeModule(void)

{
  bool bVar1;
  char cVar2;
  IModuleInterface *pIVar3;
  UMediaProfileSettings *pUVar4;
  TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_> *pTVar6;
  wchar_t *pwVar7;
  TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_> local_18;
  
  pIVar3 = ::operator_new(0x70);
  if (pIVar3 != (IModuleInterface *)0x0) {
    *(undefined8 *)&pIVar3[3].field_0x2 = 0;
    *(undefined8 *)&pIVar3[4].field_0x2 = 0;
    *(undefined8 *)&pIVar3[5].field_0x2 = 0;
    *(undefined8 *)&pIVar3[6].field_0x2 = 0;
    *(undefined8 *)&pIVar3[7].field_0x2 = 0;
    *(undefined8 *)&pIVar3[8].field_0x2 = 0;
    *(undefined8 *)&pIVar3[9].field_0x2 = 0;
    *(undefined8 *)&pIVar3[10].field_0x2 = 0;
    *(undefined8 *)&pIVar3[0xb].field_0x2 = 0;
    *(undefined8 *)&pIVar3[0xc].field_0x2 = 0;
    *(undefined4 *)&pIVar3[0xd].field_0x2 = 0;
    *(undefined2 *)&pIVar3[0xd].field_0x6 = 0;
    *pIVar3 = (IModuleInterface)&___7FMediaFrameworkUtilitiesModule__6B_;
    pIVar3[1] = (IModuleInterface)&___7IMediaProfileManager__6B_;
    pIVar3[2] = (IModuleInterface)&___7FGCObject__6B_;
    *(undefined2 *)(pIVar3 + 3) = 0;
    FGCObject::RegisterGCObject((FGCObject *)(pIVar3 + 2));
    pIVar3[1] = (IModuleInterface)&FMediaProfileManager::_vftable__for__IMediaProfileManager__;
    pIVar3[2] = (IModuleInterface)&FMediaProfileManager::_vftable__for__FGCObject__;
    pIVar3[4] = (IModuleInterface)0x0;
    pIVar3[5] = (IModuleInterface)0x0;
    pIVar3[6] = (IModuleInterface)0x0;
    pIVar3[7] = (IModuleInterface)0x0;
    pIVar3[8] = (IModuleInterface)0x0;
    pIVar3[9] = (IModuleInterface)0x0;
    pIVar3[10] = (IModuleInterface)0x0;
    pIVar3[0xb] = (IModuleInterface)0x0;
    pIVar3[0xc] = (IModuleInterface)0x2;
    bVar1 = UObjectInitialized();
    if (bVar1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) <
          `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
        if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
            _thread_safe_static_guard_0__ == -1) {
          pwVar7 = FCommandLine::Get();
          `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
               FParse::Param(pwVar7,L"nullrhi");
          _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__);
        }
      }
      if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
          && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
              bHasNullRHIOnCommandline == false)) && (GEngine != (UEngine *)0x0)) {
        cVar2 = (**(code **)(GEngine->_padding_ + 0x2c0))();
        if (cVar2 != '\0') {
          pUVar4 = GetDefault<UMediaProfileSettings>();
          pTVar5 = UMediaProfileSettings::LoadMediaSourceProxies(pUVar4,&local_18);
          TArray<TObjectPtr<UProxyMediaSource>,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<TObjectPtr<UProxyMediaSource>,TSizedDefaultAllocator<32>_> *)
                     (pIVar3 + 4),
                     (TArray<TObjectPtr<UProxyMediaSource>,TSizedDefaultAllocator<32>_> *)pTVar5);
          if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.AllocatorInstance.Data);
          }
          pUVar4 = GetDefault<UMediaProfileSettings>();
          pTVar6 = UMediaProfileSettings::LoadMediaOutputProxies
                             (pUVar4,(TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_> *)
                                     &local_18);
          TArray<TObjectPtr<UProxyMediaOutput>,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<TObjectPtr<UProxyMediaOutput>,TSizedDefaultAllocator<32>_> *)
                     (pIVar3 + 6),
                     (TArray<TObjectPtr<UProxyMediaOutput>,TSizedDefaultAllocator<32>_> *)pTVar6);
          if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.AllocatorInstance.Data);
          }
        }
      }
    }
    pIVar3[0xd] = (IModuleInterface)0x0;
    return pIVar3;
  }
  return (IModuleInterface *)0x0;
}

