// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 3

// FindExtension<FVulkanDeviceExtension> @ 145af9360

int __cdecl
FVulkanExtensionBase::FindExtension<FVulkanDeviceExtension>
          (TArray<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,TSizedDefaultAllocator<32>_>
           *param_1,char *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = param_1->ArrayNum;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      iVar4 = strcmp(*(char **)(*(longlong *)((param_1->AllocatorInstance).Data + lVar6) + 8),
                     param_2);
      if (iVar4 == 0) {
        return uVar5;
      }
      iVar4 = param_1->ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < iVar4);
  }
  return -1;
}

// FindExtension<FVulkanInstanceExtension> @ 145af9430

int __cdecl
FVulkanExtensionBase::FindExtension<FVulkanInstanceExtension>
          (TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
           *param_1,char *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = param_1->ArrayNum;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      iVar4 = strcmp(*(char **)(*(longlong *)((param_1->AllocatorInstance).Data + lVar6) + 8),
                     param_2);
      if (iVar4 == 0) {
        return uVar5;
      }
      iVar4 = param_1->ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < iVar4);
  }
  return -1;
}

// ~FVulkanExtensionBase @ 145b057d0

void __thiscall FVulkanExtensionBase::~FVulkanExtensionBase(FVulkanExtensionBase *this)

{
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  return;
}

