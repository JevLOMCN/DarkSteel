// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 4

// Cast<FLiveLinkAnimationFrameData> @ 14cfb17b0

FLiveLinkAnimationFrameData * __thiscall
FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
          (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *this)

{
  int iVar1;
  bool bVar2;
  FLiveLinkAnimationFrameData *pFVar3;
  longlong lVar4;
  UClass *pUVar5;
  UPackage *pUVar6;
  
  pFVar3 = (FLiveLinkAnimationFrameData *)(**(code **)((this->WrappedStruct)._padding_ + 0x10))();
  lVar4 = (**(code **)((this->WrappedStruct)._padding_ + 0x20))(this);
  if (lVar4 != 0) {
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      if (Z_Registration_Info_UScriptStruct_FLiveLinkAnimationFrameData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_LiveLinkInterface();
        Z_Registration_Info_UScriptStruct_FLiveLinkAnimationFrameData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData,(UObject *)pUVar6
                             ,L"LiveLinkAnimationFrameData");
        if (Z_Registration_Info_UScriptStruct_FLiveLinkAnimationFrameData.OuterSingleton ==
            (UScriptStruct *)0x0) {
          return (FLiveLinkAnimationFrameData *)0x0;
        }
      }
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkAnimationFrameData.OuterSingleton)->
                   _padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FLiveLinkAnimationFrameData.OuterSingleton)->_padding_
         )) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return pFVar3;
      }
    }
  }
  return (FLiveLinkAnimationFrameData *)0x0;
}

// Cast<FLiveLinkLocatorFrameData> @ 14cfb1880

FLiveLinkLocatorFrameData * __thiscall
FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkLocatorFrameData>
          (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *this)

{
  int iVar1;
  bool bVar2;
  FLiveLinkLocatorFrameData *pFVar3;
  longlong lVar4;
  UClass *pUVar5;
  UPackage *pUVar6;
  
  pFVar3 = (FLiveLinkLocatorFrameData *)(**(code **)((this->WrappedStruct)._padding_ + 0x10))();
  lVar4 = (**(code **)((this->WrappedStruct)._padding_ + 0x20))(this);
  if (lVar4 != 0) {
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      if (Z_Registration_Info_UScriptStruct_FLiveLinkLocatorFrameData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_LiveLinkInterface();
        Z_Registration_Info_UScriptStruct_FLiveLinkLocatorFrameData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLocatorFrameData,(UObject *)pUVar6,
                             L"LiveLinkLocatorFrameData");
        if (Z_Registration_Info_UScriptStruct_FLiveLinkLocatorFrameData.OuterSingleton ==
            (UScriptStruct *)0x0) {
          return (FLiveLinkLocatorFrameData *)0x0;
        }
      }
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkLocatorFrameData.OuterSingleton)->
                   _padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FLiveLinkLocatorFrameData.OuterSingleton)->_padding_))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return pFVar3;
      }
    }
  }
  return (FLiveLinkLocatorFrameData *)0x0;
}

// Cast<FLiveLinkLocatorStaticData> @ 14cfb1950

FLiveLinkLocatorStaticData * __thiscall
FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkLocatorStaticData>
          (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *this)

{
  int iVar1;
  bool bVar2;
  FLiveLinkLocatorStaticData *pFVar3;
  longlong lVar4;
  UClass *pUVar5;
  UPackage *pUVar6;
  
  pFVar3 = (FLiveLinkLocatorStaticData *)(**(code **)((this->WrappedStruct)._padding_ + 0x10))();
  lVar4 = (**(code **)((this->WrappedStruct)._padding_ + 0x20))(this);
  if (lVar4 != 0) {
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      if (Z_Registration_Info_UScriptStruct_FLiveLinkLocatorStaticData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_LiveLinkInterface();
        Z_Registration_Info_UScriptStruct_FLiveLinkLocatorStaticData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLocatorStaticData,(UObject *)pUVar6,
                             L"LiveLinkLocatorStaticData");
        if (Z_Registration_Info_UScriptStruct_FLiveLinkLocatorStaticData.OuterSingleton ==
            (UScriptStruct *)0x0) {
          return (FLiveLinkLocatorStaticData *)0x0;
        }
      }
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkLocatorStaticData.OuterSingleton)->
                   _padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FLiveLinkLocatorStaticData.OuterSingleton)->_padding_)
         ) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return pFVar3;
      }
    }
  }
  return (FLiveLinkLocatorStaticData *)0x0;
}

// Cast<FLiveLinkSkeletonStaticData> @ 14cfb1a20

FLiveLinkSkeletonStaticData * __thiscall
FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkSkeletonStaticData>
          (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *this)

{
  int iVar1;
  bool bVar2;
  FLiveLinkSkeletonStaticData *pFVar3;
  longlong lVar4;
  UClass *pUVar5;
  UPackage *pUVar6;
  
  pFVar3 = (FLiveLinkSkeletonStaticData *)(**(code **)((this->WrappedStruct)._padding_ + 0x10))();
  lVar4 = (**(code **)((this->WrappedStruct)._padding_ + 0x20))(this);
  if (lVar4 != 0) {
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      if (Z_Registration_Info_UScriptStruct_FLiveLinkSkeletonStaticData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_LiveLinkInterface();
        Z_Registration_Info_UScriptStruct_FLiveLinkSkeletonStaticData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData,(UObject *)pUVar6
                             ,L"LiveLinkSkeletonStaticData");
        if (Z_Registration_Info_UScriptStruct_FLiveLinkSkeletonStaticData.OuterSingleton ==
            (UScriptStruct *)0x0) {
          return (FLiveLinkSkeletonStaticData *)0x0;
        }
      }
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FLiveLinkSkeletonStaticData.OuterSingleton)->
                   _padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FLiveLinkSkeletonStaticData.OuterSingleton)->_padding_
         )) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return pFVar3;
      }
    }
  }
  return (FLiveLinkSkeletonStaticData *)0x0;
}

