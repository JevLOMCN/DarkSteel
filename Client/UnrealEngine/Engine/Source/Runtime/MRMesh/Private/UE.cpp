// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 7

// Construct<FMRMeshConfiguration> @ 146c624b0

void __cdecl UE::CoreUObject::Private::Construct<FMRMeshConfiguration>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// ConstructForTests<FMRMeshConfiguration> @ 146c624c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMRMeshConfiguration>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// Destruct<FMRMeshConfiguration> @ 146c624d0

void __cdecl UE::CoreUObject::Private::Destruct<FMRMeshConfiguration>(void *param_1)

{
  return;
}

// Copy<FMRMeshConfiguration> @ 146c624e0

bool __cdecl
UE::CoreUObject::Private::Copy<FMRMeshConfiguration>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<UMRMeshBodyHolder,UMRMeshBodyHolder_*_&> @ 146c62db0

UMRMeshBodyHolder * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMRMeshBodyHolder,UMRMeshBodyHolder_*_&>
          (UMRMeshBodyHolder **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMRMeshComponent,UMRMeshComponent_*_&> @ 146c62dd0

UMRMeshComponent * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMRMeshComponent,UMRMeshComponent_*_&>
          (UMRMeshComponent **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_> @ 146c64d70

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
          (ushort param_1,ForElementType<FVertexStreamComponent> *param_2,int *param_3)

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

