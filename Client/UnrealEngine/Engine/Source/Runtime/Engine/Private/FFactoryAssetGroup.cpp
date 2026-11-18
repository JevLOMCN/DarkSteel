// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FFactoryAssetGroup @ 1486200b0

FFactoryAssetGroup * __thiscall
FClothingSimulationInstance::FFactoryAssetGroup::FFactoryAssetGroup
          (FFactoryAssetGroup *this,UClothingSimulationFactory *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FFactoryAssetGroup *pFVar7;
  uint uVar8;
  
  this->ClothingSimulationFactory = param_1;
  piVar1 = &(this->ClothingAssets).ArrayNum;
  (this->ClothingAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ClothingAssets).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  if ((param_1 == (UClothingSimulationFactory *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClothingSimulationFactory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInstance.h"
                         ,0x2a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FFactoryAssetGroup *)(*pcVar3)();
    return pFVar7;
  }
  iVar6 = *piVar1;
  if (iVar6 < param_2) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_2 - iVar6,&(this->ClothingAssets).AllocatorInstance,piVar1,piVar2);
    memset((this->ClothingAssets).AllocatorInstance.Data + (longlong)iVar5 * 8,0,
           (longlong)(param_2 - iVar6) << 3);
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
    if (param_2 < iVar6) {
      uVar8 = iVar6 - param_2;
      if (((int)(uVar8 | param_2) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FFactoryAssetGroup *)(*pcVar3)();
        return pFVar7;
      }
      if (uVar8 != 0) {
        _Dst = (this->ClothingAssets).AllocatorInstance.Data + (longlong)param_2 * 8;
        iVar6 = (*piVar1 - uVar8) - param_2;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 8,(longlong)iVar6 << 3);
        }
        *piVar1 = *piVar1 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->ClothingAssets).AllocatorInstance,*piVar1,piVar2);
      }
    }
  }
  return this;
}

