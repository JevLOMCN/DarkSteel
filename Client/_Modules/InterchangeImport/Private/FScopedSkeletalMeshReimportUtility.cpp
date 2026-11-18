// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 2

// FScopedSkeletalMeshReimportUtility @ 14e6e07e0

FScopedSkeletalMeshReimportUtility * __thiscall
FScopedSkeletalMeshReimportUtility::FScopedSkeletalMeshReimportUtility
          (FScopedSkeletalMeshReimportUtility *this,USkeletalMesh *param_1)

{
  FSkinnedMeshComponentRecreateRenderStateContext::FSkinnedMeshComponentRecreateRenderStateContext
            ((FSkinnedMeshComponentRecreateRenderStateContext *)this,(USkinnedAsset *)param_1,false)
  ;
  this->LockPropertiesEvent = (FEvent *)0x0;
  USkeletalMesh::ReleaseResources(param_1);
  return this;
}

// ~FScopedSkeletalMeshReimportUtility @ 14e6e1550

void __thiscall
FScopedSkeletalMeshReimportUtility::~FScopedSkeletalMeshReimportUtility
          (FScopedSkeletalMeshReimportUtility *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  UObject *pUVar6;
  longlong lVar7;
  uint uVar8;
  
  iVar1 = (int)this->_padding_;
  uVar8 = 0;
  if (0 < iVar1) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(this->_padding_ + lVar7 * 8));
      if (pUVar6 != (UObject *)0x0) {
        if ((char)this->_padding_ != '\0') {
          (**(code **)(*(longlong *)pUVar6 + 0x5b0))(pUVar6);
        }
        if (((pUVar6[3].field_0x20 & 3) == 1) &&
           (cVar4 = (**(code **)(*(longlong *)pUVar6 + 0x380))(pUVar6), cVar4 != '\0')) {
          (**(code **)(*(longlong *)pUVar6 + 0x388))(pUVar6,0);
        }
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar8 < iVar1);
  }
  if ((void *)this->_padding_ == (void *)0x0) {
    return;
  }
  FMemory::Free((void *)this->_padding_);
  return;
}

