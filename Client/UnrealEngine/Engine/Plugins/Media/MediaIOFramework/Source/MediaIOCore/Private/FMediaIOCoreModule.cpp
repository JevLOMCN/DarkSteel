// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 5

// StartupModule @ 14d77bda0

void __thiscall FMediaIOCoreModule::StartupModule(FMediaIOCoreModule *this)

{
  code *pcVar1;
  bool bVar2;
  IPluginManager *pIVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  FString local_78;
  FString local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  void *local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  pIVar3 = IPluginManager::Get();
  local_58 = 0x507b6818;
  uStack_54 = 1;
  uStack_50 = 0x10;
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x70))(pIVar3,local_38,&local_58);
  if (*plVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*plVar4 + 0x20))();
  local_10 = 7;
  local_28.DataPtr = (wchar_t *)*puVar5;
  local_28.Size = *(int *)(puVar5 + 1) + -1;
  if (*(int *)(puVar5 + 1) == 0) {
    local_28.Size = 0;
  }
  local_18 = L"Shaders";
  FPaths::CombineInternal(&local_68,&local_28,2);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  ::FString::FString(&local_78,L"/MediaIOShaders");
  AddShaderSourceDirectoryMapping(&local_78,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// RegisterDeviceProvider @ 14d77bee0

void __thiscall
FMediaIOCoreModule::RegisterDeviceProvider
          (FMediaIOCoreModule *this,IMediaIOCoreDeviceProvider *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IMediaIOCoreDeviceProvider *local_res10 [3];
  
  if (param_1 != (IMediaIOCoreDeviceProvider *)0x0) {
    pFVar2 = (this->DeviceProviders).AllocatorInstance.Data;
    local_res10[0] = param_1;
    if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 <
        pFVar2 + (longlong)(this->DeviceProviders).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->DeviceProviders).ArrayNum;
    piVar1 = &(this->DeviceProviders).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->DeviceProviders).AllocatorInstance,piVar1);
    }
    (this->DeviceProviders).ArrayNum = iVar5 + 1;
    *(IMediaIOCoreDeviceProvider **)
     ((this->DeviceProviders).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res10[0];
  }
  return;
}

// UnregisterDeviceProvider @ 14d77bfa0

void __thiscall
FMediaIOCoreModule::UnregisterDeviceProvider
          (FMediaIOCoreModule *this,IMediaIOCoreDeviceProvider *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  iVar6 = (this->DeviceProviders).ArrayNum;
  pFVar3 = (this->DeviceProviders).AllocatorInstance.Data;
  pFVar9 = pFVar3;
  if (pFVar3 != pFVar3 + (longlong)iVar6 * 8) {
    while (*(IMediaIOCoreDeviceProvider **)pFVar9 != param_1) {
      pFVar9 = pFVar9 + 8;
      if (pFVar9 == pFVar3 + (longlong)iVar6 * 8) {
        return;
      }
    }
    uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
    if (uVar8 != 0xffffffff) {
      uVar7 = 0;
      if ((int)(uVar8 + 1) <= iVar6) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar2 = (this->DeviceProviders).ArrayNum;
      pFVar3 = (this->DeviceProviders).AllocatorInstance.Data;
      iVar6 = iVar2 + ~uVar8;
      if (1 < iVar6) {
        iVar6 = 1;
      }
      if (iVar6 != 0) {
        memmove(pFVar3 + (longlong)(int)uVar8 * 8,pFVar3 + (longlong)(iVar2 - iVar6) * 8,
                (longlong)iVar6 << 3);
      }
      piVar1 = &(this->DeviceProviders).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(this->DeviceProviders).AllocatorInstance,(this->DeviceProviders).ArrayNum,
                 &(this->DeviceProviders).ArrayMax);
    }
  }
  return;
}

// GetDeviceProvider @ 14d77c0c0

IMediaIOCoreDeviceProvider * __thiscall
FMediaIOCoreModule::GetDeviceProvider(FMediaIOCoreModule *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IMediaIOCoreDeviceProvider *pIVar3;
  FName *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  pFVar5 = (this->DeviceProviders).AllocatorInstance.Data;
  iVar2 = (this->DeviceProviders).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->DeviceProviders).ArrayNum != iVar2) {
      `TCheckedPointerIterator<IMediaIOCoreDeviceProvider_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    pIVar3 = *(IMediaIOCoreDeviceProvider **)pFVar5;
    pFVar4 = (FName *)(**(code **)*pIVar3)(pIVar3,local_res18);
    if (*pFVar4 == param_1) {
      return pIVar3;
    }
    pFVar5 = pFVar5 + 8;
  }
  return (IMediaIOCoreDeviceProvider *)0x0;
}

// GetDeviceProviders @ 14d77c140

TArrayView<IMediaIOCoreDeviceProvider_*_const,int> * __thiscall
FMediaIOCoreModule::GetDeviceProviders
          (FMediaIOCoreModule *this,
          TArrayView<IMediaIOCoreDeviceProvider_*_const,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<IMediaIOCoreDeviceProvider_*_const,int> *pTVar4;
  
  iVar1 = (this->DeviceProviders).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (IMediaIOCoreDeviceProvider **)(this->DeviceProviders).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<IMediaIOCoreDeviceProvider_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

