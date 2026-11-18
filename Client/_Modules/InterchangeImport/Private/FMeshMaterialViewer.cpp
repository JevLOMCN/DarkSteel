// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// GetMaterialInterface @ 14e6f01c0

UMaterialInterface * __thiscall
UE::Interchange::Private::MeshHelper::FMeshMaterialViewer<TObjectPtr<UMaterialInterface>_>::
GetMaterialInterface(FMeshMaterialViewer<TObjectPtr<UMaterialInterface>_> *this)

{
  int iVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UMaterialInterface *pUVar5;
  
  iVar1 = this->MaterialIndex;
  if (-1 < iVar1) {
    pTVar2 = this->Materials;
    if (iVar1 < pTVar2->ArrayNum) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pUVar5 = (UMaterialInterface *)(*pcVar3)();
          return pUVar5;
        }
      }
      return *(UMaterialInterface **)((pTVar2->AllocatorInstance).Data + (longlong)iVar1 * 8);
    }
  }
  return (UMaterialInterface *)0x0;
}

// GetMaterialInterface @ 14e6f0240

UMaterialInterface * __thiscall
UE::Interchange::Private::MeshHelper::FMeshMaterialViewer<FSkeletalMaterial>::GetMaterialInterface
          (FMeshMaterialViewer<FSkeletalMaterial> *this)

{
  int iVar1;
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UMaterialInterface *pUVar5;
  
  iVar1 = this->MaterialIndex;
  if (-1 < iVar1) {
    pTVar2 = this->Materials;
    if (iVar1 < pTVar2->ArrayNum) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pUVar5 = (UMaterialInterface *)(*pcVar3)();
          return pUVar5;
        }
      }
      return *(UMaterialInterface **)((pTVar2->AllocatorInstance).Data + (longlong)iVar1 * 0x30);
    }
  }
  return (UMaterialInterface *)0x0;
}

// GetMaterialInterface @ 14e6f02d0

UMaterialInterface * __thiscall
UE::Interchange::Private::MeshHelper::FMeshMaterialViewer<FStaticMaterial>::GetMaterialInterface
          (FMeshMaterialViewer<FStaticMaterial> *this)

{
  int iVar1;
  TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UMaterialInterface *pUVar5;
  
  iVar1 = this->MaterialIndex;
  if (-1 < iVar1) {
    pTVar2 = this->Materials;
    if (iVar1 < pTVar2->ArrayNum) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pUVar5 = (UMaterialInterface *)(*pcVar3)();
          return pUVar5;
        }
      }
      return *(UMaterialInterface **)((pTVar2->AllocatorInstance).Data + (longlong)iVar1 * 0x38);
    }
  }
  return (UMaterialInterface *)0x0;
}

// SetMaterialInterface @ 14e6fb160

void __thiscall
UE::Interchange::Private::MeshHelper::FMeshMaterialViewer<TObjectPtr<UMaterialInterface>_>::
SetMaterialInterface
          (FMeshMaterialViewer<TObjectPtr<UMaterialInterface>_> *this,UMaterialInterface *param_1)

{
  int iVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  iVar1 = this->MaterialIndex;
  if ((-1 < iVar1) && (pTVar2 = this->Materials, iVar1 < pTVar2->ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMaterialInterface *)0x0))
    {
      GC::MarkAsReachable((UObject *)param_1);
    }
    *(UMaterialInterface **)(pFVar3 + (longlong)iVar1 * 8) = param_1;
  }
  return;
}

// SetMaterialInterface @ 14e6fb200

void __thiscall
UE::Interchange::Private::MeshHelper::FMeshMaterialViewer<FSkeletalMaterial>::SetMaterialInterface
          (FMeshMaterialViewer<FSkeletalMaterial> *this,UMaterialInterface *param_1)

{
  int iVar1;
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  iVar1 = this->MaterialIndex;
  if ((-1 < iVar1) && (pTVar2 = this->Materials, iVar1 < pTVar2->ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMaterialInterface *)0x0))
    {
      GC::MarkAsReachable((UObject *)param_1);
    }
    *(UMaterialInterface **)(pFVar3 + (longlong)iVar1 * 0x30) = param_1;
  }
  return;
}

// SetMaterialInterface @ 14e6fb2a0

void __thiscall
UE::Interchange::Private::MeshHelper::FMeshMaterialViewer<FStaticMaterial>::SetMaterialInterface
          (FMeshMaterialViewer<FStaticMaterial> *this,UMaterialInterface *param_1)

{
  int iVar1;
  TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  iVar1 = this->MaterialIndex;
  if ((-1 < iVar1) && (pTVar2 = this->Materials, iVar1 < pTVar2->ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMaterialInterface *)0x0))
    {
      GC::MarkAsReachable((UObject *)param_1);
    }
    *(UMaterialInterface **)(pFVar3 + (longlong)iVar1 * 0x38) = param_1;
  }
  return;
}

