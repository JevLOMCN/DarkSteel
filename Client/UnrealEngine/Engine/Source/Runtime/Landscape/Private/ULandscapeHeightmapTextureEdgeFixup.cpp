// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 24

// StaticClass @ 145f22e20

UClass * __cdecl ULandscapeHeightmapTextureEdgeFixup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeHeightmapTextureEdgeFixup.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeHeightmapTextureEdgeFixup",
               &Z_Registration_Info_UClass_ULandscapeHeightmapTextureEdgeFixup.InnerSingleton,
               StaticRegisterNativesULandscapeHeightmapTextureEdgeFixup,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeHeightmapTextureEdgeFixup>,
               InternalVTableHelperCtorCaller<ULandscapeHeightmapTextureEdgeFixup>,local_res8,
               UAssetUserData::StaticClass,UTexture2D::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeHeightmapTextureEdgeFixup.InnerSingleton;
}

// ULandscapeHeightmapTextureEdgeFixup @ 145f27740

ULandscapeHeightmapTextureEdgeFixup * __thiscall
ULandscapeHeightmapTextureEdgeFixup::ULandscapeHeightmapTextureEdgeFixup
          (ULandscapeHeightmapTextureEdgeFixup *this,FVTableHelper *param_1)

{
  code *pcVar1;
  bool bVar2;
  FHeightmapTextureEdgeSnapshot *pFVar3;
  FHeightmapTextureEdgeSnapshot *pFVar4;
  ULandscapeHeightmapTextureEdgeFixup *pUVar5;
  FHeightmapTextureEdgeSnapshot *pFVar6;
  
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeHeightmapTextureEdgeFixup__6B_;
  pFVar3 = ::operator_new(0x58);
  pFVar4 = (FHeightmapTextureEdgeSnapshot *)0x0;
  pFVar6 = pFVar4;
  if (pFVar3 != (FHeightmapTextureEdgeSnapshot *)0x0) {
    *(undefined8 *)&pFVar3->EdgeLength = 0;
    (pFVar3->EdgeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->EdgeData).ArrayNum = 0;
    (pFVar3->EdgeData).ArrayMax = 0;
    (pFVar3->SnapshotEdgeHashes).Elements[0] = 0;
    (pFVar3->SnapshotEdgeHashes).Elements[1] = 0;
    (pFVar3->SnapshotEdgeHashes).Elements[2] = 0;
    (pFVar3->SnapshotEdgeHashes).Elements[3] = 0;
    (pFVar3->SnapshotEdgeHashes).Elements[4] = 0;
    (pFVar3->SnapshotEdgeHashes).Elements[5] = 0;
    (pFVar3->SnapshotEdgeHashes).Elements[6] = 0;
    (pFVar3->SnapshotEdgeHashes).Elements[7] = 0;
    (pFVar3->InitialEdgeHashes).Elements[0] = 0;
    (pFVar3->InitialEdgeHashes).Elements[1] = 0;
    (pFVar3->InitialEdgeHashes).Elements[2] = 0;
    (pFVar3->InitialEdgeHashes).Elements[3] = 0;
    (pFVar3->InitialEdgeHashes).Elements[4] = 0;
    (pFVar3->InitialEdgeHashes).Elements[5] = 0;
    (pFVar3->InitialEdgeHashes).Elements[6] = 0;
    (pFVar3->InitialEdgeHashes).Elements[7] = 0;
    pFVar6 = pFVar3;
  }
  (this->EdgeSnapshot).Object = pFVar6;
  pFVar3 = ::operator_new(0x18);
  if (pFVar3 != (FHeightmapTextureEdgeSnapshot *)0x0) {
    *(undefined4 *)&(pFVar3->EdgeData).AllocatorInstance.Data = 1;
    *(undefined ***)&pFVar3->EdgeLength =
         &
         ___7__TReferenceControllerWithDeleter_UFHeightmapTextureEdgeSnapshot__U__DefaultDeleter_UFHeightmapTextureEdgeSnapshot___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&(pFVar3->EdgeData).AllocatorInstance.Data + 4) = 1;
    *(FHeightmapTextureEdgeSnapshot **)&(pFVar3->EdgeData).ArrayNum = pFVar6;
    pFVar4 = pFVar3;
  }
  (this->EdgeSnapshot).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  EnsureRetrievingVTablePtrDuringCtor(L"TSharedRef()");
  if (((this->EdgeSnapshot).Object == (FHeightmapTextureEdgeSnapshot *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar5 = (ULandscapeHeightmapTextureEdgeFixup *)(*pcVar1)();
    return pUVar5;
  }
  (this->HeightmapTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->ActiveComponent).field0_0x0.DebugPtr = (ULandscapeComponent *)0x0;
  this->ActiveGroup = (FLandscapeGroup *)0x0;
  this->GPUEdgeModifiedFlags = None;
  this->bMapped = false;
  this->bForceUpdateSnapshot = true;
  (this->GroupCoord).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->DisabledComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisabledComponents).ArrayNum = 0;
  (this->DisabledComponents).ArrayMax = 0;
  return this;
}

// ULandscapeHeightmapTextureEdgeFixup @ 145f27850

ULandscapeHeightmapTextureEdgeFixup * __thiscall
ULandscapeHeightmapTextureEdgeFixup::ULandscapeHeightmapTextureEdgeFixup
          (ULandscapeHeightmapTextureEdgeFixup *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeHeightmapTextureEdgeFixup__6B_;
  MakeShared<FHeightmapTextureEdgeSnapshot,1>(&this->EdgeSnapshot);
  this->bForceUpdateSnapshot = true;
  (this->HeightmapTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->ActiveComponent).field0_0x0.DebugPtr = (ULandscapeComponent *)0x0;
  this->ActiveGroup = (FLandscapeGroup *)0x0;
  this->GPUEdgeModifiedFlags = None;
  this->bMapped = false;
  (this->GroupCoord).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->DisabledComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisabledComponents).ArrayNum = 0;
  (this->DisabledComponents).ArrayMax = 0;
  return this;
}

// ~ULandscapeHeightmapTextureEdgeFixup @ 145f27ca0

void __thiscall
ULandscapeHeightmapTextureEdgeFixup::~ULandscapeHeightmapTextureEdgeFixup
          (ULandscapeHeightmapTextureEdgeFixup *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULandscapeHeightmapTextureEdgeFixup__6B_;
  pFVar1 = (this->DisabledComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EdgeSnapshot).SharedReferenceCount.ReferenceController);
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// operator() @ 145f28080

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

void __thiscall
`ULandscapeHeightmapTextureEdgeFixup::BlendCornerData'::__l2::<lambda_1>::operator()
          (void *this,FHeightmapTextureEdgeSnapshot *param_1,EDirectionIndex param_2)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (param_1 != (FHeightmapTextureEdgeSnapshot *)0x0) {
    if (BottomLeft < param_2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InCornerIndex >= EEdgeIndex::First) && (InCornerIndex <= EEdgeIndex::Last)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x121,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((param_2 & BottomRight) == Bottom) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDiagonalCorner(InCornerIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x122,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar1 = (param_1->SnapshotEdgeHashes).Elements[param_2];
    piVar2 = *(int **)this;
    iVar5 = (uVar1 >> 8 & 0xff) + (uVar1 >> 0x10 & 0xff) * 0x100;
    if ((param_2 & Right) == Bottom) {
      *piVar2 = *piVar2 + (uVar1 & 0xff);
      **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + (uVar1 >> 0x18);
      **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + iVar5;
      **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
      return;
    }
    *piVar2 = *piVar2 + (uVar1 & 0xff) * 2;
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + (uVar1 >> 0x18) * 2;
    **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + iVar5 * 2;
    **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 2;
  }
  return;
}

// operator() @ 145f28410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  byte bVar1;
  byte bVar2;
  FRHITexture *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  FUpdateTextureRegion2D local_38;
  
  this_00 = *(FRHITexture **)(*(longlong *)this + 0x20);
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  lVar6 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
  iVar5 = *(int *)((longlong)this + 0x10);
  bVar1 = *(byte *)(lVar6 + 0x30);
  if ((iVar5 != *(int *)(lVar6 + 0x24)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstResidentMipSize == Desc.GetSize().X",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x4cb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = 0;
  if (bVar1 != 0) {
    do {
      if (iVar5 < 2) break;
      bVar2 = *(byte *)((longlong)this + 0xc);
      if ((7 < bVar2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(EdgeIndex >= EEdgeIndex::First) && (EdgeIndex <= EEdgeIndex::Last)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                             ,0x9f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_38.SrcX = 0;
      local_38.SrcY = 0;
      local_38.Width = 1;
      local_38.Height = 1;
      local_38.DestX = iVar5 - 1;
      if (2 < (bVar2 - 1 & 7)) {
        local_38.DestX = 0;
      }
      local_38.DestY = iVar5 - 1;
      if (2 < (bVar2 - 3 & 7)) {
        local_38.DestY = 0;
      }
      FRHICommandListBase::UpdateTexture2D
                ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,this_00,uVar7,
                 &local_38,4,(uchar *)((longlong)this + 8));
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 / 2;
    } while ((int)uVar7 < (int)(uint)bVar1);
  }
  FRHIResource::Release((FRHIResource *)this_00);
  return;
}

// operator() @ 145f28570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal'::__l14::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  byte bVar1;
  FRHITexture *this_00;
  code *pcVar2;
  bool bVar3;
  FHeightmapTexel *pFVar4;
  longlong lVar5;
  uint uVar6;
  FUpdateTextureRegion2D local_28;
  
  pFVar4 = TStridedView<UE::Landscape::FHeightmapTexel,int>::GetElementPtr
                     ((TStridedView<UE::Landscape::FHeightmapTexel,int> *)((longlong)this + 8),0);
  this_00 = *(FRHITexture **)(*(longlong *)this + 0x20);
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  lVar5 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
  if (*(uint *)((longlong)this + 0x28) != (uint)*(byte *)(lVar5 + 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResidentMips == Desc.NumMips",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                       ,0x477,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = *(int *)((longlong)this + 0x20) - *(int *)((longlong)this + 0x24);
  lVar5 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
  if ((int)uVar6 < (int)(uint)*(byte *)(lVar5 + 0x30)) {
    bVar1 = *(byte *)((longlong)this + 0x18);
    if ((bVar1 & 3) == 0) {
      local_28.DestX = 1;
      if (bVar1 == 0) {
        local_28.DestY = 0;
        local_28.Width = *(int *)((longlong)this + 0x1c) - 2;
        local_28.Height = 1;
      }
      else {
        local_28.Height = 1;
        local_28.DestY = *(int *)((longlong)this + 0x1c) - 1;
        local_28.Width = *(int *)((longlong)this + 0x1c) - 2;
      }
    }
    else {
      if (bVar1 == 6) {
        local_28.DestX = 0;
      }
      else {
        local_28.DestX = *(int *)((longlong)this + 0x1c) - 1;
      }
      local_28.DestY = 1;
      local_28.Width = 1;
      local_28.Height = *(int *)((longlong)this + 0x1c) - 2;
    }
    local_28.SrcX = 0;
    local_28.SrcY = 0;
    FRHICommandListBase::UpdateTexture2D
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,this_00,uVar6,&local_28,
               local_28.Width * 4,(uchar *)pFVar4);
  }
  else if (1 < (byte)LogLandscape._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
  }
  ::operator_delete(pFVar4,1);
  FRHIResource::Release((FRHIResource *)this_00);
  return;
}

// AddReferencedObjects @ 145f28b00

void __cdecl
ULandscapeHeightmapTextureEdgeFixup::AddReferencedObjects
          (UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 != (UObject *)0x0) {
    pUVar2 = GetPrivateStaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_145f28b3f;
  }
  param_1 = (UObject *)0x0;
LAB_145f28b3f:
  (**(code **)(param_2->_padding_ + 0x88))(param_2,&param_1[1].field_0x10,0,0);
                    /* WARNING: Could not recover jumptable at 0x000145f28b6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2->_padding_ + 0x88))(param_2,&param_1[1].field_0x18,0,0);
  return;
}

// BlendCornerData @ 145f28bc0

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

void __cdecl
ULandscapeHeightmapTextureEdgeFixup::BlendCornerData
          (FHeightmapTexel *param_1,EDirectionIndex param_2,FNeighborSnapshots *param_3)

{
  FHeightmapTextureEdgeSnapshot *pFVar1;
  FHeightmapTextureEdgeSnapshot *pFVar2;
  FHeightmapTextureEdgeSnapshot *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint *local_58;
  uint *local_50;
  uint *local_48;
  uint *local_40;
  
  if (((param_2 & BottomRight) == Bottom) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDiagonalCorner(CornerIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x32e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = param_3->NeighborSnapshots[param_2];
  local_res8[0] = 0;
  local_res18[0] = 0;
  local_res20[0] = 0;
  local_res10[0] = 0;
  local_58 = local_res8;
  local_50 = local_res18;
  local_48 = local_res20;
  local_40 = local_res10;
  pFVar2 = param_3->NeighborSnapshots[param_2 - 1 & 7];
  pFVar3 = param_3->NeighborSnapshots[param_2 + 1 & 7];
  `ULandscapeHeightmapTextureEdgeFixup::BlendCornerData'::__l2::<lambda_1>::operator()
            (&local_58,param_3->LocalSnapshot,param_2);
  `ULandscapeHeightmapTextureEdgeFixup::BlendCornerData'::__l2::<lambda_1>::operator()
            (&local_58,pFVar1,param_2 - CornerCount & BottomLeft);
  `ULandscapeHeightmapTextureEdgeFixup::BlendCornerData'::__l2::<lambda_1>::operator()
            (&local_58,pFVar2,param_2 + Right & BottomLeft);
  `ULandscapeHeightmapTextureEdgeFixup::BlendCornerData'::__l2::<lambda_1>::operator()
            (&local_58,pFVar3,param_2 - Right & BottomLeft);
  if ((local_res10[0] < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SampleCount >= 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x356,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (param_1->field0_0x0).Data[0] = (uchar)(local_res8[0] / local_res10[0]);
  (param_1->field0_0x0).Data[3] = (uchar)(local_res18[0] / local_res10[0]);
  (param_1->field0_0x0).Data[1] = (uchar)((ulonglong)local_res20[0] / (ulonglong)local_res10[0]);
  (param_1->field0_0x0).Data[2] =
       (uchar)((ulonglong)local_res20[0] / (ulonglong)local_res10[0] >> 8);
  return;
}

// BlendEdgeData @ 145f28d50

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

void __cdecl
ULandscapeHeightmapTextureEdgeFixup::BlendEdgeData
          (FHeightmapTextureEdgeSnapshot *param_1,EDirectionIndex param_2,int param_3,
          FHeightmapTextureEdgeSnapshot *param_4,
          TStridedView<UE::Landscape::FHeightmapTexel,int> *param_5)

{
  uint uVar1;
  int iVar2;
  FHeightmapTexel *pFVar3;
  FHeightmapTexel *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  TArrayView<UE::Landscape::FHeightmapTexel,int> *pTVar8;
  ulong64 uVar9;
  FHeightmapTexel *pFVar10;
  uint uVar11;
  byte *pbVar12;
  longlong lVar13;
  uchar *puVar14;
  ulonglong uVar15;
  TArrayView<UE::Landscape::FHeightmapTexel,int> local_28;
  TArrayView<UE::Landscape::FHeightmapTexel,int> local_18;
  
  if ((param_2 & BottomRight) != Bottom) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsDiagonalCorner(EdgeIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                       ,0x360,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar8 = FHeightmapTextureEdgeSnapshot::GetEdgeData(param_1,&local_28,param_2,param_3);
  pFVar3 = pTVar8->DataPtr;
  uVar11 = pTVar8->ArrayNum;
  uVar15 = (ulonglong)uVar11;
  pTVar8 = FHeightmapTextureEdgeSnapshot::GetEdgeData
                     (param_4,&local_18,param_2 - CornerCount & BottomLeft,param_3);
  uVar1 = pTVar8->ArrayNum;
  pFVar4 = pTVar8->DataPtr;
  if (uVar11 != uVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count == NeighborData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                       ,0x365,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_5->NumElements == 0) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (longlong)(int)uVar11;
    uVar9 = SUB168(ZEXT816(4) * auVar6,0);
    if (SUB168(ZEXT816(4) * auVar6,8) != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    pFVar10 = operator_new__(uVar9);
    if ((int)uVar11 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    param_5->FirstElementPtr = pFVar10;
    param_5->BytesBetweenElements = 4;
    param_5->NumElements = uVar11;
  }
  if (uVar11 != param_5->NumElements) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count == OutDestView.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                       ,0x36d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((int)uVar11 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((int)uVar1 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar10 = TStridedView<UE::Landscape::FHeightmapTexel,int>::GetElementPtr(param_5,0);
  iVar2 = param_5->BytesBetweenElements;
  if (0 < (int)uVar11) {
    puVar14 = (pFVar10->field0_0x0).Data + 1;
    lVar13 = (longlong)pFVar3 - (longlong)pFVar4;
    pbVar12 = (pFVar4->field0_0x0).Data + 2;
    do {
      puVar14[-1] = (uchar)((uint)pbVar12[-2] + (uint)pbVar12[lVar13 + -2] >> 1);
      puVar14[2] = (uchar)((uint)pbVar12[1] + (uint)pbVar12[lVar13 + 1] >> 1);
      uVar11 = ((uint)*pbVar12 + (uint)pbVar12[lVar13]) * 0x100 + (uint)pbVar12[-1] +
               (uint)pbVar12[lVar13 + -1] >> 1;
      *puVar14 = (uchar)uVar11;
      puVar14[1] = (uchar)(uVar11 >> 8);
      puVar14 = puVar14 + (longlong)(int)((ulonglong)(longlong)iVar2 >> 2) * 4;
      uVar15 = uVar15 - 1;
      pbVar12 = pbVar12 + 4;
    } while (uVar15 != 0);
  }
  return;
}

// CheckAndPatchTextureEdgesFromEdgeSnapshots @ 145f2a700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

int __thiscall
ULandscapeHeightmapTextureEdgeFixup::CheckAndPatchTextureEdgesFromEdgeSnapshots
          (ULandscapeHeightmapTextureEdgeFixup *this)

{
  EDirectionIndex EVar1;
  FHeightmapTextureEdgeSnapshot *pFVar2;
  code *pcVar3;
  FHeightmapTexel_u_0 FVar4;
  FHeightmapTextureEdgeSnapshot *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  EDirectionFlags EVar11;
  byte bVar12;
  EDirectionFlags EVar13;
  EDirectionIndex *pEVar14;
  bool bVar15;
  undefined1 auStack_168 [32];
  char local_148;
  int local_144;
  uint local_140;
  FHeightmapTexel_u_0 local_13c;
  FHeightmapTexel_u_0 *local_138;
  uint local_128;
  EDirectionIndex local_124;
  FHeightmapTextureEdgeSnapshot *apFStack_118 [4];
  FHeightmapTextureEdgeSnapshot *pFStack_f8;
  FHeightmapTextureEdgeSnapshot *local_f0;
  FHeightmapTextureEdgeSnapshot *pFStack_e8;
  FHeightmapTextureEdgeSnapshot *local_e0;
  FHeightmapTextureEdgeSnapshot *pFStack_d8;
  uint local_d0 [2];
  uint auStack_c8 [2];
  uint local_c0 [2];
  uint auStack_b8 [4];
  FNeighborSnapshots local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar15 = CpuChannel->Enabled < 0;
  if (bVar15) {
    local_148 = '\0';
  }
  else {
    local_148 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId957,"CheckAndPatchTextureEdgesFromEdgeSnapshots",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
               ,0x3bd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId957);
  }
  GetNeighborSnapshots(this,&local_a8);
  pFVar5 = local_a8.LocalSnapshot;
  iVar6 = 0;
  local_144 = 0;
  cVar10 = !bVar15;
  if ((local_a8.ExistingNeighbors & AllEdges) != None) {
    pEVar14 = EdgeNeighbors;
    do {
      EVar1 = *pEVar14;
      pFVar2 = local_a8.NeighborSnapshots[EVar1];
      if (pFVar2 != (FHeightmapTextureEdgeSnapshot *)0x0) {
        EVar11 = '\x01' << (EVar1 & 0x1f);
        if ((local_a8.EdgesWithAnyModifiedNeighbor & EVar11) == None) {
          local_140 = (pFVar5->InitialEdgeHashes).Elements[EVar1];
          local_138 = (FHeightmapTexel_u_0 *)
                      CONCAT44(local_138._4_4_,(pFVar2->InitialEdgeHashes).Elements[EVar1 - 4 & 7]);
          if ((local_140 != local_a8.GPUEdgeHashes.Elements[EVar1]) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("LocalInitialHash == NeighborSnapshots.GPUEdgeHashes[(int32)EdgeIndex]"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                                  ,0x3da,L""), iVar6 = local_144, bVar15)) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          if (local_140 == (uint)local_138) goto LAB_145f2a8aa;
        }
        uVar9 = (pFVar5->SnapshotEdgeHashes).Elements[EVar1];
        uVar9 = (uVar9 >> 2) + 0x9e3779b9 +
                (pFVar2->SnapshotEdgeHashes).Elements[EVar1 - 4 & 7] + uVar9 * 0x40 ^ uVar9;
        iVar6 = local_144;
        if (uVar9 != local_a8.GPUEdgeHashes.Elements[EVar1]) {
          PatchTextureEdge_Internal(this,EVar1);
          local_144 = local_144 + 1;
          (this->GPUEdgeHashes).Elements[EVar1] = uVar9;
          this->GPUEdgeModifiedFlags = this->GPUEdgeModifiedFlags | EVar11;
          iVar6 = local_144;
        }
      }
LAB_145f2a8aa:
      pEVar14 = pEVar14 + 1;
      cVar10 = local_148;
    } while (pEVar14 != CornerNeighbors);
  }
  pFVar5 = local_a8.LocalSnapshot;
  bVar12 = (byte)(local_a8.ExistingNeighbors & 0x55);
  EVar11 = (bVar12 << 6 | bVar12) * '\x02' |
           (EDirectionFlags)((local_a8.ExistingNeighbors & 0x55) >> 1) | local_a8.ExistingNeighbors;
  if ((EVar11 & AllCorners) != None) {
    pEVar14 = CornerNeighbors;
    do {
      EVar1 = *pEVar14;
      EVar13 = '\x01' << (EVar1 & 0x1f);
      if ((EVar13 & EVar11) != None) {
        if ((local_a8.EdgesWithAnyModifiedNeighbor & EVar13) == None) {
          local_128 = (pFVar5->InitialEdgeHashes).Elements[EVar1];
          apFStack_118[0] = local_a8.NeighborSnapshots[0];
          apFStack_118[1] = local_a8.NeighborSnapshots[1];
          apFStack_118[2] = local_a8.NeighborSnapshots[2];
          apFStack_118[3] = local_a8.NeighborSnapshots[3];
          pFStack_f8 = local_a8.NeighborSnapshots[4];
          local_f0 = local_a8.NeighborSnapshots[5];
          pFStack_e8 = local_a8.NeighborSnapshots[6];
          local_e0 = local_a8.NeighborSnapshots[7];
          pFStack_d8 = local_a8.LocalSnapshot;
          local_d0[0] = local_a8.GPUEdgeHashes.Elements[0];
          local_d0[1] = local_a8.GPUEdgeHashes.Elements[1];
          auStack_c8[0] = local_a8.GPUEdgeHashes.Elements[2];
          auStack_c8[1] = local_a8.GPUEdgeHashes.Elements[3];
          local_c0[0] = local_a8.GPUEdgeHashes.Elements[4];
          local_c0[1] = local_a8.GPUEdgeHashes.Elements[5];
          auStack_b8[0] = local_a8.GPUEdgeHashes.Elements[6];
          auStack_b8[1] = local_a8.GPUEdgeHashes.Elements[7];
          local_124 = EVar1;
          if ((((apFStack_118[EVar1 - 1 & 7] == (FHeightmapTextureEdgeSnapshot *)0x0) ||
               ((apFStack_118[EVar1 - 1 & 7]->InitialEdgeHashes).Elements[EVar1 + 2 & 7] ==
                local_128)) &&
              ((apFStack_118[EVar1 + 1 & 7] == (FHeightmapTextureEdgeSnapshot *)0x0 ||
               ((apFStack_118[EVar1 + 1 & 7]->InitialEdgeHashes).Elements[EVar1 - 2 & 7] ==
                local_128)))) &&
             ((iVar6 = local_144, apFStack_118[EVar1 & 7] == (FHeightmapTextureEdgeSnapshot *)0x0 ||
              ((apFStack_118[EVar1 & 7]->InitialEdgeHashes).Elements[EVar1 - 4 & 7] == local_128))))
          goto LAB_145f2aa5c;
        }
        BlendCornerData((FHeightmapTexel *)&local_13c._s_2,EVar1,&local_a8);
        FVar4 = local_13c;
        uVar9 = (this->GPUEdgeHashes).Elements[EVar1];
        local_138 = (FHeightmapTexel_u_0 *)((this->GPUEdgeHashes).Elements + EVar1);
        iVar6 = local_144;
        if (local_13c.Data32 != uVar9) {
          if (((uVar9 ^ local_13c.Data32) & 0xffff00) == 0) {
            iVar8 = (local_13c.Data32 & 0xff) - (uVar9 & 0xff);
            iVar7 = -iVar8;
            if (iVar7 < 0) {
              iVar7 = iVar8;
            }
            if (iVar7 < 2) {
              iVar8 = (local_13c.Data32 >> 0x18) - (uVar9 >> 0x18);
              iVar7 = -iVar8;
              if (iVar7 < 0) {
                iVar7 = iVar8;
              }
              if (iVar7 < 2) goto LAB_145f2aa5c;
            }
          }
          PatchTextureCorner_Internal(this,EVar1,(FHeightmapTexel)local_13c._s_2);
          local_144 = local_144 + 1;
          local_138->Data32 = (uint)FVar4;
          this->GPUEdgeModifiedFlags = this->GPUEdgeModifiedFlags | EVar13;
          iVar6 = local_144;
        }
      }
LAB_145f2aa5c:
      pEVar14 = pEVar14 + 1;
      cVar10 = local_148;
    } while (pEVar14 != &DAT_15119d7fc);
  }
  if (cVar10 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
    iVar6 = local_144;
  }
  return iVar6;
}

// FindOrCreateFor @ 145f2d8e0

ULandscapeHeightmapTextureEdgeFixup * __cdecl
ULandscapeHeightmapTextureEdgeFixup::FindOrCreateFor(UTexture2D *param_1)

{
  int iVar1;
  UTexture2D *pUVar2;
  FHeightmapTextureEdgeSnapshot *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  ULandscapeHeightmapTextureEdgeFixup *pUVar8;
  UClass *pUVar9;
  UClass *local_res8;
  
  if (param_1 == (UTexture2D *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHeightmapTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                       ,0x5d9,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (ULandscapeHeightmapTextureEdgeFixup *)(*pcVar4)();
      return pUVar8;
    }
  }
  pcVar4 = *(code **)(param_1->_padding_ + 0x18);
  local_res8 = StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar8 = (ULandscapeHeightmapTextureEdgeFixup *)(*pcVar4)(&param_1->_padding_,&local_res8);
  if (pUVar8 != (ULandscapeHeightmapTextureEdgeFixup *)0x0) {
    pUVar9 = StaticClass();
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar9->_padding_)) {
      pUVar2 = (pUVar8->HeightmapTexture).field0_0x0.DebugPtr;
      if (pUVar2 == (UTexture2D *)0x0) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture2D *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        (pUVar8->HeightmapTexture).field0_0x0.DebugPtr = param_1;
        pFVar3 = (pUVar8->EdgeSnapshot).Object;
        uVar5 = *(undefined8 *)((pFVar3->InitialEdgeHashes).Elements + 2);
        *(undefined8 *)(pUVar8->GPUEdgeHashes).Elements =
             *(undefined8 *)(pFVar3->InitialEdgeHashes).Elements;
        *(undefined8 *)((pUVar8->GPUEdgeHashes).Elements + 2) = uVar5;
        uVar5 = *(undefined8 *)((pFVar3->InitialEdgeHashes).Elements + 4);
        uVar6 = *(undefined8 *)((pFVar3->InitialEdgeHashes).Elements + 6);
        pUVar8->GPUEdgeModifiedFlags = None;
        *(undefined8 *)((pUVar8->GPUEdgeHashes).Elements + 4) = uVar5;
        *(undefined8 *)((pUVar8->GPUEdgeHashes).Elements + 6) = uVar6;
        return pUVar8;
      }
      if (pUVar2 != param_1) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("this->HeightmapTexture == InHeightmapTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                           ,0x2dc,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pUVar8 = (ULandscapeHeightmapTextureEdgeFixup *)(*pcVar4)();
          return pUVar8;
        }
      }
      return pUVar8;
    }
  }
  return (ULandscapeHeightmapTextureEdgeFixup *)0x0;
}

// GetNeighborSnapshots @ 145f2e7c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

void __thiscall
ULandscapeHeightmapTextureEdgeFixup::GetNeighborSnapshots
          (ULandscapeHeightmapTextureEdgeFixup *this,FNeighborSnapshots *param_1)

{
  longlong lVar1;
  byte bVar2;
  TIntPoint<int>_u_0_s_0 TVar3;
  FLandscapeGroup *pFVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  byte bVar9;
  longlong *plVar10;
  uint uVar11;
  EDirectionFlags EVar12;
  FNeighborSnapshots *pFVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  EDirectionFlags EVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  
  if ((this->ActiveGroup == (FLandscapeGroup *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveGroup != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x38a,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->bMapped == false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bMapped",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x38b,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar21 = (uint)this->GPUEdgeModifiedFlags;
  EVar12 = None;
  bVar9 = 0;
  pFVar13 = param_1;
  do {
    pFVar13 = (FNeighborSnapshots *)pFVar13->NeighborSnapshots;
    TVar3 = (this->GroupCoord).field0_0x0._s_0;
    pFVar4 = this->ActiveGroup;
    plVar10 = (longlong *)0x0;
    iVar20 = 0;
    if (bVar9 < 8) {
      plVar10 = *(longlong **)((0x154bed1f8 - (longlong)param_1) + (longlong)pFVar13);
      iVar20 = (int)((ulonglong)plVar10 >> 0x20);
    }
    iVar14 = (int)plVar10 + TVar3.X;
    uVar18 = TVar3.Y + iVar20;
    uVar15 = iVar14 - uVar18 ^ uVar18 >> 0xd;
    uVar11 = (-0x61c88647 - uVar18) - uVar15 ^ uVar15 << 8;
    uVar19 = (uVar18 - uVar11) - uVar15 ^ uVar11 >> 0xd;
    uVar15 = (uVar15 - uVar19) - uVar11 ^ uVar19 >> 0xc;
    uVar11 = (uVar11 - uVar15) - uVar19 ^ uVar15 << 0x10;
    uVar19 = (uVar19 - uVar11) - uVar15 ^ uVar11 >> 5;
    uVar15 = (uVar15 - uVar19) - uVar11 ^ uVar19 >> 3;
    uVar11 = (uVar11 - uVar15) - uVar19 ^ uVar15 << 10;
    if (*(int *)&(pFVar4->XYToEdgeFixupMap).field_0x8 !=
        *(int *)&(pFVar4->XYToEdgeFixupMap).field_0x34) {
      puVar5 = *(undefined1 **)&(pFVar4->XYToEdgeFixupMap).field_0x40;
      puVar16 = &(pFVar4->XYToEdgeFixupMap).field_0x38;
      if (puVar5 != (undefined1 *)0x0) {
        puVar16 = puVar5;
      }
      iVar20 = *(int *)(puVar16 +
                       (ulonglong)
                       (*(int *)&(pFVar4->XYToEdgeFixupMap).field_0x48 - 1U &
                       ((uVar19 - uVar11) - uVar15 ^ uVar11 >> 0xf)) * 4);
      if (iVar20 != -1) {
        do {
          uVar6 = *(undefined8 *)(*(longlong *)&pFVar4->XYToEdgeFixupMap + (longlong)iVar20 * 0x18);
          lVar1 = *(longlong *)&pFVar4->XYToEdgeFixupMap + (longlong)iVar20 * 0x18;
          if (((int)uVar6 == iVar14) && ((uint)((ulonglong)uVar6 >> 0x20) == uVar18)) {
            if (iVar20 != -1) {
              plVar10 = (longlong *)(lVar1 + 8);
              if (lVar1 == 0) {
                plVar10 = (longlong *)0x0;
              }
              if ((plVar10 != (longlong *)0x0) && (lVar1 = *plVar10, lVar1 != 0)) {
                EVar17 = '\x01' << (bVar9 & 0x1f);
                EVar12 = EVar12 | EVar17;
                *(FHeightmapTextureEdgeSnapshot **)pFVar13 =
                     *(FHeightmapTextureEdgeSnapshot **)(lVar1 + 0x28);
                bVar2 = *(byte *)(lVar1 + 0x70);
                EVar17 = EVar17 | (EDirectionFlags)uVar21;
                if (('\x01' << (bVar9 - 4 & 7) & bVar2) == 0) {
                  EVar17 = (EDirectionFlags)uVar21;
                }
                uVar21 = (uint)EVar17;
                if ((bVar9 & 1) == 0) {
                  uVar15 = bVar9 - 1 & 7;
                  uVar11 = bVar9 + 1 & 7;
                  if ((bVar2 & '\x01' << ((char)uVar15 - 4U & 7)) != 0) {
                    uVar21 = uVar21 | 1 << uVar11;
                  }
                  if ((bVar2 & '\x01' << ((char)uVar11 - 4U & 7)) != 0) {
                    uVar21 = uVar21 & 0xff | 1 << uVar15;
                  }
                }
                goto LAB_145f2e990;
              }
            }
            break;
          }
          iVar20 = *(int *)(lVar1 + 0x10);
        } while (iVar20 != -1);
      }
    }
    *(FHeightmapTextureEdgeSnapshot **)pFVar13 = (FHeightmapTextureEdgeSnapshot *)0x0;
LAB_145f2e990:
    bVar9 = bVar9 + 1;
    if (bVar9 == 8) {
      param_1->ExistingNeighbors = EVar12;
      param_1->EdgesWithAnyModifiedNeighbor = (EDirectionFlags)uVar21;
      param_1->LocalSnapshot = (this->EdgeSnapshot).Object;
      uVar6 = *(undefined8 *)((this->GPUEdgeHashes).Elements + 2);
      *(undefined8 *)(param_1->GPUEdgeHashes).Elements =
           *(undefined8 *)(this->GPUEdgeHashes).Elements;
      *(undefined8 *)((param_1->GPUEdgeHashes).Elements + 2) = uVar6;
      uVar6 = *(undefined8 *)((this->GPUEdgeHashes).Elements + 6);
      *(undefined8 *)((param_1->GPUEdgeHashes).Elements + 4) =
           *(undefined8 *)((this->GPUEdgeHashes).Elements + 4);
      *(undefined8 *)((param_1->GPUEdgeHashes).Elements + 6) = uVar6;
      return;
    }
  } while( true );
}

// GetPrivateStaticClass @ 145f2ed10

UClass * __cdecl ULandscapeHeightmapTextureEdgeFixup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeHeightmapTextureEdgeFixup.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeHeightmapTextureEdgeFixup",
               &Z_Registration_Info_UClass_ULandscapeHeightmapTextureEdgeFixup.InnerSingleton,
               StaticRegisterNativesULandscapeHeightmapTextureEdgeFixup,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeHeightmapTextureEdgeFixup>,
               InternalVTableHelperCtorCaller<ULandscapeHeightmapTextureEdgeFixup>,local_res8,
               UAssetUserData::StaticClass,UTexture2D::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeHeightmapTextureEdgeFixup.InnerSingleton;
}

// PatchTextureCorner_Internal @ 145f31610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

void __thiscall
ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal
          (ULandscapeHeightmapTextureEdgeFixup *this,EDirectionIndex param_1,FHeightmapTexel param_2
          )

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FTextureResource *pFVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  code **ppcVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  FTextureResource *local_c8;
  FHeightmapTexel_u_0 FStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1191,"PatchTextureCorner_Internal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
               ,0x4a7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1191);
  }
  pFVar5 = UTexture::GetResource((UTexture *)(this->HeightmapTexture).field0_0x0.DebugPtr);
  if (pFVar5 != (FTextureResource *)0x0) {
    if (((param_1 & BottomRight) == Bottom) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsDiagonalCorner(CornerIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                           ,0x4b5,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = UTexture2D::GetNumMips((this->HeightmapTexture).field0_0x0.DebugPtr);
    iVar4 = UTexture2D::GetNumResidentMips((this->HeightmapTexture).field0_0x0.DebugPtr);
    uStack_bc = CONCAT31(uStack_bc._1_3_,param_1);
    local_b8 = ((this->EdgeSnapshot).Object)->EdgeLength >> ((char)iVar3 - (char)iVar4 & 0x1fU);
    local_a8[0] = (code *)0x0;
    local_c8 = pFVar5;
    FStack_c0 = param_2.field0_0x0;
    local_80 = FMemory::Malloc(0x20,8);
    *local_80 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    local_80[1] = (code *)local_c8;
    local_80[2] = (code *)CONCAT44(uStack_bc,FStack_c0.Data32);
    local_80[3] = (code *)CONCAT44(uStack_b4,local_b8);
    if (local_80 + 1 != (code **)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal_::__l2::TSTR_UpdateLandscapeHeightmapCorner1215>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_78._16_8_ = local_98[0];
      local_78._24_8_ = local_98[1];
      local_78._32_8_ = local_98[2];
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal'::__l2::TSTR_UpdateLandscapeHeightmapCorner1215>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar6);
      uVar8 = (ulonglong)local_48;
      if ((2 < uVar8) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar7 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar7 = local_50;
          }
          (**(code **)(*ppcVar7 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar7 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar7 = local_80;
      }
      (**(code **)(*ppcVar7 + 0x10))();
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PatchTextureEdge_Internal @ 145f318a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

void __thiscall
ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal
          (ULandscapeHeightmapTextureEdgeFixup *this,EDirectionIndex param_1)

{
  code *pcVar1;
  FTextureResource *pFVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  code **ppcVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStackY_148 [32];
  undefined1 local_110 [8];
  code *pcStack_108;
  FTextureResource *local_100;
  ULandscapeHeightmapTextureEdgeFixup *local_f8;
  FTextureResource *local_f0;
  FHeightmapTexel *pFStack_e8;
  code *pcStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1097,"PatchTextureEdge_Internal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
               ,0x449);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1097);
  }
  local_100 = UTexture::GetResource((UTexture *)(this->HeightmapTexture).field0_0x0.DebugPtr);
  if (local_100 != (FTextureResource *)0x0) {
    if (((param_1 & BottomRight) != Bottom) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsDiagonalCorner(EdgeIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                           ,0x457,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = UTexture2D::GetNumMips((this->HeightmapTexture).field0_0x0.DebugPtr);
    iVar5 = UTexture2D::GetNumResidentMips((this->HeightmapTexture).field0_0x0.DebugPtr);
    local_f8 = FLandscapeGroup::GetNeighborEdgeFixup
                         (this->ActiveGroup,(TIntPoint<int>)(this->GroupCoord).field0_0x0._s_0,
                          param_1);
    pFVar2 = local_100;
    iVar10 = iVar4 - iVar5;
    iVar11 = iVar10;
    for (iVar8 = ((this->EdgeSnapshot).Object)->EdgeLength >> ((byte)iVar10 & 0x1f);
        (iVar11 < iVar4 && (3 < iVar8)); iVar8 = iVar8 / 2) {
      local_110 = (undefined1  [8])0x0;
      pcStack_108 = (code *)0x0;
      BlendEdgeData((this->EdgeSnapshot).Object,param_1,iVar11,(local_f8->EdgeSnapshot).Object,
                    (TStridedView<UE::Landscape::FHeightmapTexel,int> *)local_110);
      local_f0 = pFVar2;
      pFStack_e8 = (FHeightmapTexel *)local_110;
      pcStack_e0 = pcStack_108;
      local_b8[0] = (code *)0x0;
      local_90 = (code **)0x0;
      uStack_d8 = CONCAT31(uStack_d8._1_3_,param_1);
      iStack_d4 = iVar8;
      local_d0 = iVar11;
      iStack_cc = iVar10;
      iStack_c8 = iVar5;
      local_90 = FMemory::Malloc(0x38,8);
      *local_90 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal'::`14'::<lambda_1>,1,1>
                           ::_vftable_;
      local_90[1] = (code *)local_f0;
      local_90[2] = (code *)pFStack_e8;
      local_90[3] = pcStack_e0;
      local_90[4] = (code *)CONCAT44(iStack_d4,uStack_d8);
      local_90[5] = (code *)CONCAT44(iStack_cc,local_d0);
      local_90[6] = (code *)CONCAT44(uStack_c4,iStack_c8);
      if (local_90 + 1 != (code **)0x0) {
        local_b8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal'::__l14::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal_::__l14::TSTR_UpdateLandscapeHeightmapEdge1133>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_88._0_8_ = local_b8[0];
        local_60 = local_90;
        local_90 = (code **)0x0;
        local_88._16_8_ = local_a8[0];
        local_88._24_8_ = local_a8[1];
        local_88._32_8_ = local_a8[2];
        local_b8[0] = (code *)0x0;
        local_58 = 2;
        pFVar6 = (FRenderCommandTag *)
                 TRenderCommandTag<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal'::__l14::TSTR_UpdateLandscapeHeightmapEdge1133>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_88,pFVar6);
        uVar9 = (ulonglong)local_58;
        if ((2 < uVar9) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_88._0_8_ != (code *)0x0) {
            ppcVar7 = (code **)(local_88 + 0x10);
            if (local_60 != (code **)0x0) {
              ppcVar7 = local_60;
            }
            (**(code **)(*ppcVar7 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9])(local_88);
        }
      }
      if (local_b8[0] != (code *)0x0) {
        ppcVar7 = local_b8 + 2;
        if (local_90 != (code **)0x0) {
          ppcVar7 = local_90;
        }
        (**(code **)(*ppcVar7 + 0x10))();
      }
      iVar11 = iVar11 + 1;
    }
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PatchTextureEdgesForSingleMip @ 145f31c20

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

int __cdecl
ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdgesForSingleMip
          (int param_1,FTextureMipInfo *param_2,FNeighborSnapshots *param_3)

{
  EDirectionIndex EVar1;
  void *pvVar2;
  FHeightmapTextureEdgeSnapshot *pFVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  EDirectionFlags EVar7;
  EDirectionFlags EVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  EDirectionIndex *pEVar13;
  uint uVar14;
  uint uVar15;
  int iStack_60;
  TStridedView<UE::Landscape::FHeightmapTexel,int> local_48;
  
  if ((param_2->Format != PF_B8G8R8A8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestMipInfo.Format == PF_B8G8R8A8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x4f6,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  pvVar2 = param_2->DestData;
  if (param_2->RowPitch == 0) {
    uVar15 = param_2->SizeX;
  }
  else {
    uVar15 = param_2->RowPitch >> 2;
  }
  uVar14 = param_3->LocalSnapshot->EdgeLength >> ((byte)param_1 & 0x1f);
  if ((param_2->SizeX < uVar14) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestMipInfo.SizeX >= (uint32) MipEdgeLength",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x506,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  if ((param_2->SizeY < uVar14) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestMipInfo.SizeY >= (uint32) MipEdgeLength",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x507,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  iVar9 = 0;
  if ((param_3->EdgesWithAnyModifiedNeighbor & AllEdges) != None) {
    pEVar13 = EdgeNeighbors;
    do {
      EVar1 = *pEVar13;
      if (((param_3->EdgesWithAnyModifiedNeighbor & '\x01' << (EVar1 & 0x1f)) != None) &&
         (pFVar3 = param_3->NeighborSnapshots[EVar1], pFVar3 != (FHeightmapTextureEdgeSnapshot *)0x0
         )) {
        iVar12 = uVar14 - 2;
        if ((EVar1 & TopRight) == Bottom) {
          iStack_60 = 4;
          iVar10 = 0;
          if (EVar1 != Bottom) {
            iVar10 = uVar14 - 1;
          }
          uVar11 = iVar10 * uVar15 + 1;
          if (iVar12 < 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumElements >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                               ,0x3f,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              iVar9 = (*pcVar4)();
              return iVar9;
            }
          }
        }
        else {
          uVar11 = uVar15;
          if (EVar1 != LastEdge) {
            uVar11 = (uVar15 - 1) + uVar14;
          }
          iStack_60 = uVar15 * 4;
          if (iVar12 < 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumElements >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                               ,0x3f,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              iVar9 = (*pcVar4)();
              return iVar9;
            }
          }
          if (iStack_60 < 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("BytesBetweenElements >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                               ,0x40,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              iVar9 = (*pcVar4)();
              return iVar9;
            }
          }
        }
        local_48.FirstElementPtr = (FHeightmapTexel *)((longlong)pvVar2 + (longlong)(int)uVar11 * 4)
        ;
        local_48.BytesBetweenElements = iStack_60;
        local_48.NumElements = iVar12;
        BlendEdgeData(param_3->LocalSnapshot,EVar1,param_1,pFVar3,&local_48);
        iVar9 = iVar9 + 1;
      }
      pEVar13 = pEVar13 + 1;
    } while (pEVar13 != CornerNeighbors);
  }
  uVar15 = param_3->ExistingNeighbors & 0x55;
  bVar6 = (byte)uVar15;
  EVar7 = (bVar6 << 6 | bVar6) * '\x02' | (EDirectionFlags)(uVar15 >> 1) |
          param_3->ExistingNeighbors;
  if ((EVar7 & AllCorners) != None) {
    pEVar13 = CornerNeighbors;
    do {
      EVar1 = *pEVar13;
      EVar8 = '\x01' << (EVar1 & 0x1f);
      if (((param_3->EdgesWithAnyModifiedNeighbor & EVar8) != None) && ((EVar8 & EVar7) != None)) {
        if (BottomLeft < EVar1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(EdgeIndex >= EEdgeIndex::First) && (EdgeIndex <= EEdgeIndex::Last)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                             ,0x9f,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            iVar9 = (*pcVar4)();
            return iVar9;
          }
        }
        iVar12 = uVar14 - 1;
        iVar10 = iVar12;
        if (2 < (EVar1 - TopRight & 7)) {
          iVar10 = 0;
        }
        if (2 < (EVar1 - BottomRight & 7)) {
          iVar12 = 0;
        }
        iVar12 = iVar10 * uVar14 + iVar12;
        if ((EVar1 & BottomRight) == Bottom) {
          uVar15 = uVar14;
          if ((EVar1 & TopRight) == Bottom) {
            uVar15 = 1;
          }
          iVar12 = iVar12 + uVar15;
        }
        BlendCornerData((FHeightmapTexel *)((longlong)pvVar2 + (longlong)iVar12 * 4),EVar1,param_3);
        iVar9 = iVar9 + 1;
      }
      pEVar13 = pEVar13 + 1;
    } while (pEVar13 != &DAT_15119d7fc);
  }
  return iVar9;
}

// PatchTextureEdgesForStreamingMips @ 145f31f90

int __cdecl
ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdgesForStreamingMips
          (int param_1,int param_2,
          TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *param_3
          ,FNeighborSnapshots *param_4)

{
  ForElementType<FTextureMipInfo> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ForElementType<FTextureMipInfo> FVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar9 = (ulonglong)param_1;
  iVar5 = 0;
  if (param_1 < param_2) {
    lVar10 = uVar9 * 0x30;
    do {
      uVar8 = (uint)uVar9;
      uVar4 = 0;
      if ((int)uVar8 < param_3->ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      FVar1 = (param_3->AllocatorInstance).SecondaryData;
      FVar7 = (ForElementType<FTextureMipInfo>)param_3;
      if (FVar1 != (ForElementType<FTextureMipInfo>)0x0) {
        FVar7 = FVar1;
      }
      iVar6 = PatchTextureEdgesForSingleMip
                        (uVar8,(FTextureMipInfo *)((longlong)FVar7 + lVar10),param_4);
      iVar5 = iVar5 + iVar6;
      uVar9 = (ulonglong)(uVar8 + 1);
      lVar10 = lVar10 + 0x30;
    } while ((int)(uVar8 + 1) < param_2);
  }
  return iVar5;
}

// RequestEdgeTexturePatchingForNeighbors @ 145f32690

void __thiscall
ULandscapeHeightmapTextureEdgeFixup::RequestEdgeTexturePatchingForNeighbors
          (ULandscapeHeightmapTextureEdgeFixup *this,EDirectionFlags param_1)

{
  longlong lVar1;
  FLandscapeGroup *pFVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_u_0 TVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar14;
  byte bVar15;
  uint uVar16;
  TIntPoint<int> *pTVar17;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> local_res8 [2];
  TIntPoint<int>_u_0_s_0 local_res18;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_u_0 local_res20;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_u_0 local_48 [2];
  TIntPoint<int>_u_0 TVar13;
  
  if ((this->bMapped == false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bMapped",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x318,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar15 = 0;
  pTVar17 = RelativePositions;
  do {
    if ((param_1 & '\x01' << (bVar15 & 0x1f)) != None) {
      pFVar2 = this->ActiveGroup;
      local_res18 = (this->GroupCoord).field0_0x0._s_0;
      if (bVar15 < 8) {
        iVar9 = (*(TIntPoint<int>_u_0_s_0 *)pTVar17).Y;
        TVar13._s_0 = *(TIntPoint<int>_u_0_s_0 *)pTVar17;
      }
      else {
        iVar9 = 0;
        TVar13 = (TIntPoint<int>_u_0)0x0;
      }
      iVar11 = TVar13._s_0.X + local_res18.X;
      uVar8 = local_res18.Y + iVar9;
      uVar12 = iVar11 - uVar8 ^ uVar8 >> 0xd;
      uVar10 = (-0x61c88647 - uVar12) - uVar8 ^ uVar12 << 8;
      uVar16 = (uVar8 - uVar12) - uVar10 ^ uVar10 >> 0xd;
      uVar12 = (uVar12 - uVar16) - uVar10 ^ uVar16 >> 0xc;
      uVar10 = (uVar10 - uVar12) - uVar16 ^ uVar12 << 0x10;
      uVar16 = (uVar16 - uVar10) - uVar12 ^ uVar10 >> 5;
      uVar12 = (uVar12 - uVar16) - uVar10 ^ uVar16 >> 3;
      uVar10 = (uVar10 - uVar12) - uVar16 ^ uVar12 << 10;
      if (*(int *)&(pFVar2->XYToEdgeFixupMap).field_0x8 !=
          *(int *)&(pFVar2->XYToEdgeFixupMap).field_0x34) {
        puVar3 = *(undefined1 **)&(pFVar2->XYToEdgeFixupMap).field_0x40;
        puVar14 = &(pFVar2->XYToEdgeFixupMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar14 = puVar3;
        }
        iVar9 = *(int *)(puVar14 +
                        (ulonglong)
                        (*(int *)&(pFVar2->XYToEdgeFixupMap).field_0x48 - 1U &
                        ((uVar16 - uVar10) - uVar12 ^ uVar10 >> 0xf)) * 4);
        if (iVar9 != -1) {
          do {
            uVar4 = *(undefined8 *)(*(longlong *)&pFVar2->XYToEdgeFixupMap + (longlong)iVar9 * 0x18)
            ;
            lVar1 = *(longlong *)&pFVar2->XYToEdgeFixupMap + (longlong)iVar9 * 0x18;
            if (((int)uVar4 == iVar11) && ((uint)((ulonglong)uVar4 >> 0x20) == uVar8)) {
              if (iVar9 != -1) {
                TVar13 = (TIntPoint<int>_u_0)(lVar1 + 8);
                if (lVar1 == 0) {
                  TVar13 = (TIntPoint<int>_u_0)0x0;
                }
                if ((TVar13 != (TIntPoint<int>_u_0)0x0) &&
                   (TVar5 = (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_u_0)
                            *(TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_u_0 *)TVar13,
                   TVar5.DebugPtr != (ULandscapeHeightmapTextureEdgeFixup *)0x0)) {
                  local_res20 = TVar5;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr),
                     UE::GC::GIsIncrementalReachabilityPending != false)) {
                    UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
                  }
                  uVar8 = ((uint)((ulonglong)TVar5.DebugPtr >> 0x14) & 0xffff ^
                          (uint)((ulonglong)TVar5.DebugPtr >> 4)) * -0x7a143595;
                  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
                  iVar9 = TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
                          ::FindIndexByHash<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_>
                                    (&pFVar2->AllRegisteredFixups,uVar8 >> 0x10 ^ uVar8,
                                     (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_> *)
                                     &local_res20.ObjectPtr);
                  if ((iVar9 == -1) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("ActiveGroup->AllRegisteredFixups.Contains(Neighbor)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                                         ,0x322,L""), bVar7)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if (((TVar5.DebugPtr)->bMapped == false) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Neighbor->bMapped",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                                         ,0x323,L""), bVar7)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pFVar2 = this->ActiveGroup;
                  local_48[0] = TVar5;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
                  }
                  TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
                  ::Emplace<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>
                            (&pFVar2->HeightmapsNeedingEdgeTexturePatching,local_res8,
                             (bool *)local_48);
                }
              }
              break;
            }
            iVar9 = *(int *)(lVar1 + 0x10);
          } while (iVar9 != -1);
        }
      }
    }
    bVar15 = bVar15 + 1;
    pTVar17 = pTVar17 + 1;
    if (bVar15 == 8) {
      return;
    }
  } while( true );
}

// Serialize @ 145f331a0

void __thiscall
ULandscapeHeightmapTextureEdgeFixup::Serialize
          (ULandscapeHeightmapTextureEdgeFixup *this,FArchive *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FHeightmapTextureEdgeSnapshot,1> local_18;
  
  if ((param_1->field_0x28 & 1) != 0) {
    MakeShared<FHeightmapTextureEdgeSnapshot,1>(&local_18);
    ::operator<<(param_1,local_18.Object);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = (this->EdgeSnapshot).SharedReferenceCount.ReferenceController;
    (this->EdgeSnapshot).Object = local_18.Object;
    (this->EdgeSnapshot).SharedReferenceCount.ReferenceController =
         local_18.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return;
  }
  ::operator<<(param_1,(this->EdgeSnapshot).Object);
  return;
}

// Serialize @ 145f33240

void __thiscall
ULandscapeHeightmapTextureEdgeFixup::Serialize
          (ULandscapeHeightmapTextureEdgeFixup *this,FStructuredArchiveRecord param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FArchive *pFVar2;
  FSlotBase local_res10;
  TSharedRef<FHeightmapTextureEdgeSnapshot,1> local_18;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if ((pFVar2->field_0x28 & 1) != 0) {
    MakeShared<FHeightmapTextureEdgeSnapshot,1>(&local_18);
    ::operator<<(pFVar2,local_18.Object);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = (this->EdgeSnapshot).SharedReferenceCount.ReferenceController;
    (this->EdgeSnapshot).Object = local_18.Object;
    (this->EdgeSnapshot).SharedReferenceCount.ReferenceController =
         local_18.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return;
  }
  ::operator<<(pFVar2,(this->EdgeSnapshot).Object);
  return;
}

// SetActiveComponent @ 145f332f0

void __thiscall
ULandscapeHeightmapTextureEdgeFixup::SetActiveComponent
          (ULandscapeHeightmapTextureEdgeFixup *this,ULandscapeComponent *param_1,
          FLandscapeGroup *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (((this->HeightmapTexture).field0_0x0.DebugPtr == (UTexture2D *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("HeightmapTexture != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x2ea,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->ActiveComponent).field0_0x0.DebugPtr == (ULandscapeComponent *)0x0) {
    if ((this->ActiveGroup != (FLandscapeGroup *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActiveGroup == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                           ,0x305,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if ((this->ActiveGroup == (FLandscapeGroup *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActiveGroup != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                           ,0x2ee,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_3) {
      FLandscapeGroup::DisableAndUnmap(this->ActiveGroup,this);
    }
    else {
      FLandscapeGroup::Unmap(this->ActiveGroup,this,true);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (param_1 == (ULandscapeComponent *)0x0)) {
    (this->ActiveComponent).field0_0x0.DebugPtr = param_1;
    this->ActiveGroup = param_2;
    if (param_1 == (ULandscapeComponent *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->ActiveComponent).field0_0x0.DebugPtr = param_1;
    this->ActiveGroup = param_2;
  }
  FLandscapeGroup::Map
            (param_2,(ULandscapeHeightmapTextureEdgeFixup *)&stack0x00000008,
             (ULandscapeComponent *)this);
  return;
}

// SetHeightmapTexture @ 145f33420

void __thiscall
ULandscapeHeightmapTextureEdgeFixup::SetHeightmapTexture
          (ULandscapeHeightmapTextureEdgeFixup *this,UTexture2D *param_1)

{
  UTexture2D *pUVar1;
  FHeightmapTextureEdgeSnapshot *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  
  pUVar1 = (this->HeightmapTexture).field0_0x0.DebugPtr;
  if (pUVar1 == (UTexture2D *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTexture2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->HeightmapTexture).field0_0x0.DebugPtr = param_1;
    pFVar2 = (this->EdgeSnapshot).Object;
    uVar4 = *(undefined8 *)((pFVar2->InitialEdgeHashes).Elements + 2);
    *(undefined8 *)(this->GPUEdgeHashes).Elements =
         *(undefined8 *)(pFVar2->InitialEdgeHashes).Elements;
    *(undefined8 *)((this->GPUEdgeHashes).Elements + 2) = uVar4;
    uVar4 = *(undefined8 *)((pFVar2->InitialEdgeHashes).Elements + 4);
    uVar5 = *(undefined8 *)((pFVar2->InitialEdgeHashes).Elements + 6);
    this->GPUEdgeModifiedFlags = None;
    *(undefined8 *)((this->GPUEdgeHashes).Elements + 4) = uVar4;
    *(undefined8 *)((this->GPUEdgeHashes).Elements + 6) = uVar5;
    return;
  }
  if (pUVar1 != param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->HeightmapTexture == InHeightmapTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                       ,0x2dc,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// StaticRegisterNativesULandscapeHeightmapTextureEdgeFixup @ 145f338e0

void __cdecl
ULandscapeHeightmapTextureEdgeFixup::StaticRegisterNativesULandscapeHeightmapTextureEdgeFixup(void)

{
  return;
}

