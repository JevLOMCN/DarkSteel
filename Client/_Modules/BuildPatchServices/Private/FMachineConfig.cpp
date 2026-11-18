// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// FMachineConfig @ 1432813b0

FMachineConfig * __thiscall
BuildPatchServices::FMachineConfig::FMachineConfig
          (FMachineConfig *this,FString *param_1,bool param_2)

{
  this->_padding_ = (longlong)&___7FMachineConfig_BuildPatchServices__6B_;
  ::FString::FString(&this->LocalMachineConfigFile,param_1);
  this->bAlwaysFlushChanges = param_2;
  return this;
}

// operator() @ 14329a1e0

void __thiscall
`BuildPatchServices::FMachineConfig::SaveInstalledPrereqIds'::__l2::<lambda_1>::operator()
          (void *this)

{
  FString *pFVar1;
  char cVar2;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  code *pcVar3;
  bool bVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)((longlong)this + 8);
  cVar2 = *(char *)(*(longlong *)this + 0x18);
  pFVar1 = (FString *)(*(longlong *)this + 8);
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\MachineConfig.cpp"
                       ,0x13,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar5 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array(this_00,&local_18);
  FConfigCacheIni::SetArray(GConfig,L"Portal.BuildPatch",L"InstalledPrereqs",pTVar5,pFVar1);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (cVar2 != '\0') {
    FConfigCacheIni::Flush(GConfig,false,pFVar1);
  }
  return;
}

// LoadInstalledPrereqIds @ 1432dd260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
BuildPatchServices::FMachineConfig::LoadInstalledPrereqIds
          (FMachineConfig *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TFuture<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *pTVar4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar5;
  undefined ***pppuVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  code *local_48 [2];
  undefined **local_38;
  FMachineConfig *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`BuildPatchServices::FMachineConfig::LoadInstalledPrereqIds'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`BuildPatchServices::FMachineConfig::LoadInstalledPrereqIds'::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                ::Call;
  local_20 = (undefined ***)0x0;
  local_30 = this;
  pTVar4 = AsyncHelpers::
           ExecuteOnGameThread<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                     ((TFuture<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *)
                      local_58,(TFunction<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>___cdecl(void)>
                                *)local_48);
  if (*(longlong *)pTVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(*pcVar2)();
      return pTVar5;
    }
    if (*(longlong *)pTVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  lVar1 = *(longlong *)pTVar4;
  while (*(char *)(lVar1 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x20))(*(longlong **)(lVar1 + 0x60),0xffffffff,0);
  }
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (__return_storage_ptr__,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar1 + 0x70));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_58._8_8_);
  if (local_48[0] != (code *)0x0) {
    pppuVar6 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar6 = local_20;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  return __return_storage_ptr__;
}

// SaveInstalledPrereqIds @ 1432ec2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
BuildPatchServices::FMachineConfig::SaveInstalledPrereqIds
          (FMachineConfig *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  longlong *plVar1;
  char cVar2;
  TFuture<void> *pTVar3;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  code *local_48 [2];
  undefined **local_38;
  FMachineConfig *local_30;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`BuildPatchServices::FMachineConfig::SaveInstalledPrereqIds'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`BuildPatchServices::FMachineConfig::SaveInstalledPrereqIds'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = (undefined ***)0x0;
  local_30 = this;
  local_28 = param_1;
  pTVar3 = AsyncHelpers::ExecuteOnGameThread<void>
                     ((TFuture<void> *)local_58,(TFunction<void___cdecl(void)> *)local_48);
  if (*(longlong *)pTVar3 != 0) {
    do {
      do {
      } while (*(longlong *)pTVar3 == 0);
      plVar1 = *(longlong **)(*(longlong *)pTVar3 + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_58._8_8_);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

