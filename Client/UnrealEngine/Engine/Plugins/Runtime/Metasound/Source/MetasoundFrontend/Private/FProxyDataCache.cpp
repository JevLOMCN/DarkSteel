// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// CacheProxy @ 14ae65730

void __thiscall
Metasound::Frontend::FProxyDataCache::CacheProxy
          (FProxyDataCache *this,UObject *param_1,TSharedPtr<Audio::IProxyData,1> *param_2)

{
  TPairInitializer<void_const_*_&&,TSharedPtr<Audio::IProxyData,1>_&&> local_res8 [2];
  TSharedPtr<Audio::IProxyData,1> **local_18;
  TSharedPtr<Audio::IProxyData,1> *local_10;
  
  local_18 = &local_res8[0].Value;
  local_res8[0].Value = (TSharedPtr<Audio::IProxyData,1> *)param_1;
  local_10 = param_2;
  TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<void_const_*_&&,TSharedPtr<Audio::IProxyData,1>_&&>_>
            ((TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
              *)this,local_res8,(bool *)&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Contains @ 14ae66790

bool __thiscall
Metasound::Frontend::FProxyDataCache::Contains(FProxyDataCache *this,UObject *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if (*(int *)&(this->ProxyCache).field_0x8 != *(int *)&(this->ProxyCache).field_0x34) {
    puVar2 = *(undefined1 **)&(this->ProxyCache).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->ProxyCache).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->ProxyCache).field_0x48 - 1U & (uVar3 >> 0x10 ^ uVar3)
                              ) * 4);
    if (iVar1 != -1) {
      do {
        if (*(UObject **)((longlong)iVar1 * 0x20 + *(longlong *)&this->ProxyCache) == param_1)
        goto LAB_14ae6680e;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this->ProxyCache);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14ae6680e:
  return iVar1 != -1;
}

// CreateAndCacheProxies @ 14ae66820

void __thiscall
Metasound::Frontend::FProxyDataCache::CreateAndCacheProxies
          (FProxyDataCache *this,FMetasoundFrontendClass *param_1,
          TArrayView<FGuid_const_,int> *param_2)

{
  bool bVar1;
  code *pcVar2;
  FGuid *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  void *local_68;
  undefined8 local_60;
  code *local_58;
  FProxyDataCache **local_50;
  TArrayView<FGuid_const_,int> local_48;
  FProxyDataCache *local_38;
  IDataTypeRegistry *local_30;
  void **local_28;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FProxyDataCache::CreateAndCacheProxies_Class");
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId82,"Metasound::FProxyDataCache::CreateAndCacheProxies_Class"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendProxyDataCache.cpp"
               ,0x52);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId82);
  }
  pFVar3 = param_2->DataPtr;
  uVar4._0_4_ = param_2->ArrayNum;
  uVar4._4_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar5 = IsInGameThread();
  if (((!bVar5) && (bVar5 = IsInAudioThread(), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendProxyDataCache.cpp"
                         ,0x1c,L"Proxies should only be created in the game thread or audio thread")
     , bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_30 = IDataTypeRegistry::Get();
  local_28 = &local_68;
  local_68 = (void *)0x0;
  local_50 = &local_38;
  local_60 = 0;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::MetasoundFrontendProxyDataCachePrivate::CreateAndCacheProxies<FMetasoundFrontendClass>'::__l2::<lambda_1>,void,FName_const_&,FMetasoundFrontendLiteral_const_&>
             ::Call;
  local_48.DataPtr = pFVar3;
  local_48._8_8_ = uVar4;
  local_38 = this;
  ForEachLiteral(param_1,(TFunctionRef<void___cdecl(FName_const_&,FMetasoundFrontendLiteral_const_&)>
                          *)&local_58,&local_48);
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// CreateAndCacheProxies @ 14ae66990

void __thiscall
Metasound::Frontend::FProxyDataCache::CreateAndCacheProxies
          (FProxyDataCache *this,FMetasoundFrontendDocument *param_1,
          TArrayView<FGuid_const_,int> *param_2)

{
  bool bVar1;
  code *pcVar2;
  FGuid *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  void *local_68;
  undefined8 local_60;
  code *local_58;
  FProxyDataCache **local_50;
  TArrayView<FGuid_const_,int> local_48;
  FProxyDataCache *local_38;
  IDataTypeRegistry *local_30;
  void **local_28;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FProxyDataCache::CreateAndCacheProxies_Document");
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId70,
               "Metasound::FProxyDataCache::CreateAndCacheProxies_Document",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendProxyDataCache.cpp"
               ,0x46);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId70);
  }
  pFVar3 = param_2->DataPtr;
  uVar4._0_4_ = param_2->ArrayNum;
  uVar4._4_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar5 = IsInGameThread();
  if (((!bVar5) && (bVar5 = IsInAudioThread(), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendProxyDataCache.cpp"
                         ,0x1c,L"Proxies should only be created in the game thread or audio thread")
     , bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_30 = IDataTypeRegistry::Get();
  local_28 = &local_68;
  local_68 = (void *)0x0;
  local_50 = &local_38;
  local_60 = 0;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::MetasoundFrontendProxyDataCachePrivate::CreateAndCacheProxies<FMetasoundFrontendDocument>'::__l2::<lambda_1>,void,FName_const_&,FMetasoundFrontendLiteral_const_&>
             ::Call;
  local_48.DataPtr = pFVar3;
  local_48._8_8_ = uVar4;
  local_38 = this;
  ForEachLiteral(param_1,(TFunctionRef<void___cdecl(FName_const_&,FMetasoundFrontendLiteral_const_&)>
                          *)&local_58,&local_48);
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// CreateAndCacheProxies @ 14ae66b00

void __thiscall
Metasound::Frontend::FProxyDataCache::CreateAndCacheProxies
          (FProxyDataCache *this,FMetasoundFrontendGraphClass *param_1,
          TArrayView<FGuid_const_,int> *param_2)

{
  bool bVar1;
  code *pcVar2;
  FGuid *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  void *local_68;
  undefined8 local_60;
  code *local_58;
  FProxyDataCache **local_50;
  TArrayView<FGuid_const_,int> local_48;
  FProxyDataCache *local_38;
  IDataTypeRegistry *local_30;
  void **local_28;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FProxyDataCache::CreateAndCacheProxies_GraphClass");
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId76,
               "Metasound::FProxyDataCache::CreateAndCacheProxies_GraphClass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendProxyDataCache.cpp"
               ,0x4c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId76);
  }
  pFVar3 = param_2->DataPtr;
  uVar4._0_4_ = param_2->ArrayNum;
  uVar4._4_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar5 = IsInGameThread();
  if (((!bVar5) && (bVar5 = IsInAudioThread(), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendProxyDataCache.cpp"
                         ,0x1c,L"Proxies should only be created in the game thread or audio thread")
     , bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_30 = IDataTypeRegistry::Get();
  local_28 = &local_68;
  local_68 = (void *)0x0;
  local_50 = &local_38;
  local_60 = 0;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::MetasoundFrontendProxyDataCachePrivate::CreateAndCacheProxies<FMetasoundFrontendGraphClass>'::__l2::<lambda_1>,void,FName_const_&,FMetasoundFrontendLiteral_const_&>
             ::Call;
  local_48.DataPtr = pFVar3;
  local_48._8_8_ = uVar4;
  local_38 = this;
  ForEachLiteral(param_1,(TFunctionRef<void___cdecl(FName_const_&,FMetasoundFrontendLiteral_const_&)>
                          *)&local_58,&local_48);
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// FindProxy @ 14ae73420

TSharedPtr<Audio::IProxyData,1> * __thiscall
Metasound::Frontend::FProxyDataCache::FindProxy(FProxyDataCache *this,UObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  TSharedPtr<Audio::IProxyData,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->ProxyCache).field_0x8 != *(int *)&(this->ProxyCache).field_0x34) {
    puVar3 = *(undefined1 **)&(this->ProxyCache).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ProxyCache).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->ProxyCache).field_0x48 - 1U & (uVar5 >> 0x10 ^ uVar5)
                              ) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&this->ProxyCache);
        if ((UObject *)*plVar2 == param_1) {
          pTVar4 = (TSharedPtr<Audio::IProxyData,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<Audio::IProxyData,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<Audio::IProxyData,1> *)0x0;
}

