// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 1

// GetBestAdapterForClass @ 14daf7820

FComponentCacheAdapter * __cdecl
Chaos::FAdapterUtil::GetBestAdapterForClass(TSubclassOf<UPrimitiveComponent> param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FComponentCacheAdapter *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  IModularFeatures *this;
  UClass *pUVar8;
  FComponentCacheAdapter *pFVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  FComponentCacheAdapter *pFVar12;
  FIdentityFunctor local_res8;
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  TArray<Chaos::FComponentCacheAdapter_*,TSizedDefaultAllocator<32>_> local_28;
  
  this = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<Chaos::FComponentCacheAdapter>
            (this,&local_28,FComponentCacheAdapter::FeatureName);
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pFVar9 = (FComponentCacheAdapter *)0x0;
  pFVar12 = pFVar9;
  if ((lVar2 != 0) &&
     (pUVar8 = Z_Construct_UClass_UPrimitiveComponent_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar8->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pFVar12 = *(FComponentCacheAdapter **)param_1.Class.field0_0x0;
    }
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  for (FVar10.Data = local_28.AllocatorInstance.Data; FVar10.Data != pFVar1;
      FVar10.Data = FVar10.Data + 8) {
    pFVar3 = *(FComponentCacheAdapter **)FVar10.Data;
    if ((pFVar3 != (FComponentCacheAdapter *)0x0) &&
       (cVar5 = (**(code **)(pFVar3->_padding_ + 8))(pFVar3,pFVar12), cVar5 == '\x01')) {
      if ((local_48.Data <= FVar10.Data) &&
         ((FVar10.Data < local_48.Data + (longlong)local_40._4_4_ * 8 &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)))) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FComponentCacheAdapter *)(*pcVar4)();
        return pFVar9;
      }
      iVar7 = (int)local_40;
      if ((int)local_40 == local_40._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_48,(int *)((longlong)&local_40 + 4));
      }
      local_40 = CONCAT44(local_40._4_4_,iVar7 + 1);
      *(FComponentCacheAdapter **)(local_48.Data + (longlong)iVar7 * 8) =
           *(FComponentCacheAdapter **)FVar10.Data;
    }
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  pFVar11 = local_28.AllocatorInstance.Data;
  do {
    if (pFVar11 == pFVar1) {
      AlgoImpl::
      IntroSortInternal<Chaos::FComponentCacheAdapter_*,int,FIdentityFunctor,_Chaos::FAdapterUtil::GetBestAdapterForClass_::__l2::<lambda_1>_>
                ((FComponentCacheAdapter **)local_48.Data,(int)local_40,local_res8,
                 (<lambda_1>)local_res8);
      AlgoImpl::
      IntroSortInternal<Chaos::FComponentCacheAdapter_*,int,FIdentityFunctor,_Chaos::FAdapterUtil::GetBestAdapterForClass_::__l2::<lambda_1>_>
                ((FComponentCacheAdapter **)local_38.Data,(int)local_30,local_res8,
                 (<lambda_1>)local_res8);
      FVar10.Data = local_48.Data;
      if ((0 < (int)local_40) || ((param_2 && (FVar10.Data = local_38.Data, 0 < (int)local_30)))) {
        pFVar9 = *(FComponentCacheAdapter **)FVar10.Data;
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return pFVar9;
    }
    pFVar3 = *(FComponentCacheAdapter **)pFVar11;
    if ((pFVar3 != (FComponentCacheAdapter *)0x0) &&
       (cVar5 = (**(code **)(pFVar3->_padding_ + 8))(pFVar3,pFVar12), cVar5 == '\x02')) {
      if ((local_38.Data <= pFVar11) &&
         ((pFVar11 < local_38.Data + (longlong)local_30._4_4_ * 8 &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)))) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FComponentCacheAdapter *)(*pcVar4)();
        return pFVar9;
      }
      iVar7 = (int)local_30;
      if ((int)local_30 == local_30._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_38,(int *)((longlong)&local_30 + 4));
      }
      local_30 = CONCAT44(local_30._4_4_,iVar7 + 1);
      *(FComponentCacheAdapter **)(local_38.Data + (longlong)iVar7 * 8) =
           *(FComponentCacheAdapter **)pFVar11;
    }
    pFVar11 = pFVar11 + 8;
  } while( true );
}

