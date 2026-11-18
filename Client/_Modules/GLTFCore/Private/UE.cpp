// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 2

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<GLTF::FMaterialExpression_*>_> @ 14e628570

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<GLTF::FMaterialExpression_*>_>
          (ushort param_1,ForElementType<GLTF::FMaterialExpression_*> *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (4 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 4;
  return iVar4;
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<GLTF::FPBRMapFactory::FMapChannel>_> @ 14e6285e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<GLTF::FPBRMapFactory::FMapChannel>_>
          (ushort param_1,ForElementType<GLTF::FPBRMapFactory::FMapChannel> *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (4 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 4;
  return iVar4;
}

