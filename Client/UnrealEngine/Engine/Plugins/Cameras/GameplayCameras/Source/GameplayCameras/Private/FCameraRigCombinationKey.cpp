// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// FCameraRigCombinationKey @ 14d58d590

FCameraRigCombinationKey * __thiscall
UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey::FCameraRigCombinationKey
          (FCameraRigCombinationKey *this,TArrayView<UCameraRigAsset_const_*,int> *param_1)

{
  UCameraRigAsset **ppUVar1;
  UCameraRigAsset *pUVar2;
  ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FCameraRigCombinationKey *pFVar7;
  ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_> FVar8;
  uint uVar9;
  uint uVar10;
  UCameraRigAsset **ppUVar11;
  uint uVar12;
  UCameraRigAsset *local_res8;
  FWeakObjectPtr local_38 [2];
  
  ppUVar11 = param_1->DataPtr;
  iVar6 = param_1->ArrayNum;
  (this->Combination).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>)0x0;
  (this->Combination).ArrayNum = 0;
  *(undefined8 *)&(this->Combination).ArrayMax = 4;
  ppUVar1 = ppUVar11 + iVar6;
  while( true ) {
    if (ppUVar11 == ppUVar1) {
      return this;
    }
    pUVar2 = *ppUVar11;
    if ((pUVar2 == (UCameraRigAsset *)0x0) &&
       (bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1954686805215281173>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraRigCombinationRegistry.cpp"
                           ,0x15,"CameraRig"), bVar5)) break;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCameraRigAsset *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
    local_38[0].ObjectIndex = 0;
    local_38[0].ObjectSerialNumber = 0;
    local_res8 = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCameraRigAsset *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=(local_38,(FObjectPtr)&local_res8);
    uVar12 = local_38[0].ObjectSerialNumber ^ local_38[0].ObjectIndex;
    uVar10 = this->CachedHash - uVar12 ^ uVar12 >> 0xd;
    uVar9 = (-0x61c88647 - uVar10) - uVar12 ^ uVar10 << 8;
    uVar12 = (uVar12 - uVar9) - uVar10 ^ uVar9 >> 0xd;
    uVar10 = (uVar10 - uVar12) - uVar9 ^ uVar12 >> 0xc;
    uVar9 = (uVar9 - uVar10) - uVar12 ^ uVar10 << 0x10;
    uVar12 = (uVar12 - uVar9) - uVar10 ^ uVar9 >> 5;
    uVar10 = (uVar10 - uVar12) - uVar9 ^ uVar12 >> 3;
    uVar9 = (uVar9 - uVar10) - uVar12 ^ uVar10 << 10;
    this->CachedHash = (uVar12 - uVar9) - uVar10 ^ uVar9 >> 0xf;
    FVar3 = (this->Combination).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>)this;
    if (FVar3 != (ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>)0x0) {
      FVar8 = FVar3;
    }
    if ((ulonglong)FVar8 <= local_38) {
      FVar8 = (ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>)this;
      if (FVar3 != (ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>)0x0) {
        FVar8 = FVar3;
      }
      if ((local_38 <
           (FWeakObjectPtr *)((longlong)FVar8 + (longlong)(this->Combination).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FCameraRigCombinationKey *)(*pcVar4)();
        return pFVar7;
      }
    }
    iVar6 = (this->Combination).ArrayNum;
    if (iVar6 == (this->Combination).ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>_>
                        (0x408,(ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>
                                *)this,&(this->Combination).ArrayMax);
    }
    (this->Combination).ArrayNum = iVar6 + 1;
    FVar3 = (this->Combination).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>)this;
    if (FVar3 != (ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>)0x0) {
      FVar8 = FVar3;
    }
    ppUVar11 = ppUVar11 + 1;
    *(FWeakObjectPtr *)((longlong)FVar8 + (longlong)iVar6 * 8) = local_38[0];
  }
  pcVar4 = (code *)swi(3);
  pFVar7 = (FCameraRigCombinationKey *)(*pcVar4)();
  return pFVar7;
}

