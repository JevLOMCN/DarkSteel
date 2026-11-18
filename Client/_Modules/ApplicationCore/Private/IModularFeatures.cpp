// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 1

// GetModularFeatureImplementations<IInputDeviceModule> @ 1423be180

TArray<IInputDeviceModule_*,TSizedDefaultAllocator<32>_> * __thiscall
IModularFeatures::GetModularFeatureImplementations<IInputDeviceModule>
          (IModularFeatures *this,
          TArray<IInputDeviceModule_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  TArray<IInputDeviceModule_*,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong local_28 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar4 = (**(code **)((longlong)*this + 0x18))(this,param_1);
  uVar9 = 0;
  if (0 < iVar4) {
    do {
      lVar6 = (**(code **)((longlong)*this + 0x20))(this,param_1,uVar9);
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_28[0] = lVar6 - 8;
      if (lVar6 == 0) {
        local_28[0] = 0;
      }
      if (((pFVar1 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 <
           pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<IInputDeviceModule_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      uVar8 = (int)uVar9 + 1;
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(ulonglong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           local_28[0];
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < iVar4);
  }
  return __return_storage_ptr__;
}

