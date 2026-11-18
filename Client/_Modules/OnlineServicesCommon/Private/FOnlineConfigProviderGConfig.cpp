// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 5

// ~FOnlineConfigProviderGConfig @ 14ee24fa0

void __thiscall
UE::Online::FOnlineConfigProviderGConfig::~FOnlineConfigProviderGConfig
          (FOnlineConfigProviderGConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ConfigFile).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = 0x15309c710;
  return;
}

// GetValue @ 14eee7770

int __thiscall
UE::Online::FOnlineConfigProviderGConfig::GetValue
          (FOnlineConfigProviderGConfig *this,wchar_t *param_1,wchar_t *param_2,
          TArray<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,TSizedDefaultAllocator<32>_> *param_3
          )

{
  int *piVar1;
  IOnlineConfigStruct *pIVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> local_38;
  
  DestructItems<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int>
            ((TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)(param_3->AllocatorInstance).Data,
             param_3->ArrayNum);
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_3->AllocatorInstance,0,piVar1);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  iVar3 = FConfigCacheIni::GetArray(GConfig,param_1,param_2,&local_48,&this->ConfigFile);
  iVar4 = local_48.ArrayNum;
  if (iVar3 != 0) {
    uVar5 = local_48._8_8_ & 0xffffffff;
    if (local_48.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar5);
    }
    if (*piVar1 < local_48.ArrayNum) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_48.ArrayNum,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
      uVar5 = local_48._8_8_ & 0xffffffff;
    }
    iVar3 = (int)uVar5;
    pFVar8 = local_48.AllocatorInstance.Data + (longlong)iVar3 * 0x10;
    FVar7.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      iVar4 = (int)uVar5;
      if ((int)uVar5 != iVar3) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        iVar4 = local_48.ArrayNum;
      }
      if (FVar7.Data == pFVar8) break;
      local_38.Object = (IOnlineConfigStruct *)0x0;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FOnlineConfigStructGConfig::ParseStruct(*(wchar_t **)FVar7.Data,&local_38);
      pIVar2 = local_38.Object;
      if (local_38.Object == (IOnlineConfigStruct *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        uVar5 = local_48._8_8_ & 0xffffffff;
        FVar7.Data = FVar7.Data + 0x10;
      }
      else {
        iVar4 = param_3->ArrayNum;
        if (iVar4 == *piVar1) {
          iVar4 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_3->AllocatorInstance,piVar1);
        }
        param_3->ArrayNum = iVar4 + 1;
        pFVar6 = (param_3->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
        local_38.Object = (IOnlineConfigStruct *)0x0;
        *(IOnlineConfigStruct **)pFVar6 = pIVar2;
        *(TReferenceControllerBase<1> **)(pFVar6 + 8) =
             local_38.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        uVar5 = local_48._8_8_ & 0xffffffff;
        FVar7.Data = FVar7.Data + 0x10;
      }
    }
  }
  iVar3 = param_3->ArrayNum;
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,iVar4);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return iVar3;
}

// GetValue @ 14eee7950

int __thiscall
UE::Online::FOnlineConfigProviderGConfig::GetValue
          (FOnlineConfigProviderGConfig *this,wchar_t *param_1,wchar_t *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  
  iVar1 = FConfigCacheIni::GetArray(GConfig,param_1,param_2,param_3,&this->ConfigFile);
  return iVar1;
}

// GetValue @ 14eee7980

bool __thiscall
UE::Online::FOnlineConfigProviderGConfig::GetValue
          (FOnlineConfigProviderGConfig *this,wchar_t *param_1,wchar_t *param_2,
          TSharedPtr<UE::Online::IOnlineConfigStruct,1> *param_3)

{
  bool bVar1;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> local_38;
  FString local_28;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  bVar1 = FConfigCacheIni::GetString(GConfig,param_1,param_2,&local_28,&this->ConfigFile);
  if (bVar1) {
    local_38.Object = (IOnlineConfigStruct *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FOnlineConfigStructGConfig::ParseStruct
              ((wchar_t *)local_28.Data.AllocatorInstance.Data,&local_38);
    if (local_38.Object != (IOnlineConfigStruct *)0x0) {
      if (param_3 != &local_38) {
        param_3->Object = local_38.Object;
        local_38.Object = (IOnlineConfigStruct *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&param_3->SharedReferenceCount,&local_38.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      bVar1 = true;
      goto LAB_14eee7a41;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  local_18.Object = (IOnlineConfigStruct *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_3 != &local_18) {
    param_3->Object = (IOnlineConfigStruct *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_3->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  bVar1 = false;
LAB_14eee7a41:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetValue @ 14eee7a70

bool __thiscall
UE::Online::FOnlineConfigProviderGConfig::GetValue
          (FOnlineConfigProviderGConfig *this,wchar_t *param_1,wchar_t *param_2,FString *param_3)

{
  bool bVar1;
  
  bVar1 = FConfigCacheIni::GetString(GConfig,param_1,param_2,param_3,&this->ConfigFile);
  return bVar1;
}

