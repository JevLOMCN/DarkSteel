// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 32

// StaticClass @ 14c9ff200

UClass * __cdecl UGeometryCache::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCache",
               &Z_Registration_Info_UClass_UGeometryCache.InnerSingleton,
               StaticRegisterNativesUGeometryCache,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryCache>,InternalVTableHelperCtorCaller<UGeometryCache>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCache.InnerSingleton;
}

// UGeometryCache @ 14ca07950

UGeometryCache * __thiscall
UGeometryCache::UGeometryCache(UGeometryCache *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->MaterialSlotNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialSlotNames).ArrayNum = 0;
  (this->MaterialSlotNames).ArrayMax = 0;
  (this->Tracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tracks).ArrayNum = 0;
  (this->Tracks).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  *(undefined8 *)&this->OnPreSave = 0;
  *(undefined8 *)&(this->OnPreSave).field_0x8 = 0;
  *(undefined4 *)&(this->OnPreSave).field_0x10 = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  return this;
}

// UGeometryCache @ 14ca079c0

UGeometryCache * __thiscall
UGeometryCache::UGeometryCache(UGeometryCache *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->MaterialSlotNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialSlotNames).ArrayNum = 0;
  (this->MaterialSlotNames).ArrayMax = 0;
  (this->Tracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tracks).ArrayNum = 0;
  (this->Tracks).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  *(undefined8 *)&this->OnPreSave = 0;
  *(undefined8 *)&(this->OnPreSave).field_0x8 = 0;
  *(undefined4 *)&(this->OnPreSave).field_0x10 = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  this->StartFrame = 0;
  this->EndFrame = 0;
  this->Hash = 0;
  return this;
}

// ~UGeometryCache @ 14ca09540

void __thiscall UGeometryCache::~UGeometryCache(UGeometryCache *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseResourcesFence);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPreSave);
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialSlotNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14ca0c0b0

void __thiscall `UGeometryCache::GetHash'::__l2::<lambda_1>::operator()(void *this,float param_1)

{
  ulong64 *puVar1;
  int iVar2;
  ulong64 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  ulong64 local_res18;
  TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  UGeometryCache::GetMeshDataAtTime(*(UGeometryCache **)this,param_1,&local_28);
  iVar2 = local_28.ArrayNum;
  pFVar5 = local_28.AllocatorInstance.Data + 0x18;
  pFVar4 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0xd8;
  do {
    if (local_28.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FGeometryCacheMeshData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 + -0x18 == pFVar4) {
      DestructItems<FGeometryCacheMeshData,int>
                ((FGeometryCacheMeshData *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      if ((FGeometryCacheMeshData *)local_28.AllocatorInstance.Data != (FGeometryCacheMeshData *)0x0
         ) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return;
    }
    uVar3 = *(ulong64 *)(pFVar5 + 0xb8);
    if (*(ulong64 *)(pFVar5 + 0xb8) == 0) {
      uVar3 = 0;
      if (0 < *(int *)(pFVar5 + -0x10)) {
        uVar3 = CityHash64(*(char **)&pFVar5[-0x18].field_0x0,*(int *)(pFVar5 + -0x10) * 0xc);
        *(ulong64 *)(pFVar5 + 0xb8) = uVar3;
      }
      if (0 < *(int *)pFVar5) {
        uVar3 = CityHash64WithSeed((char *)(((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>
                                              *)(pFVar5 + -8))->AllocatorInstance).Data,
                                   *(int *)pFVar5 * 8,uVar3);
        *(ulong64 *)(pFVar5 + 0xb8) = uVar3;
      }
      if (0 < *(int *)(pFVar5 + 0x20)) {
        uVar3 = CityHash64WithSeed(*(char **)(pFVar5 + 0x18),*(int *)(pFVar5 + 0x20) * 4,uVar3);
        *(ulong64 *)(pFVar5 + 0xb8) = uVar3;
      }
      if (0 < *(int *)(pFVar5 + 0x60)) {
        uVar3 = CityHash64WithSeed(*(char **)(pFVar5 + 0x58),*(int *)(pFVar5 + 0x60) * 0xc,uVar3);
        *(ulong64 *)(pFVar5 + 0xb8) = uVar3;
      }
      local_res18 = uVar3;
      if (uVar3 != 0) goto LAB_14ca0c1bf;
    }
    else {
LAB_14ca0c1bf:
      local_res18 = uVar3;
      puVar1 = *(ulong64 **)((longlong)this + 8);
      uVar3 = CityHash64WithSeed((char *)&local_res18,8,*puVar1);
      *puVar1 = uVar3;
    }
    pFVar5 = pFVar5 + 0xd8;
  } while( true );
}

// operator() @ 14ca0c230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `UGeometryCache::Serialize'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  FSlateNotificationManager *this_00;
  FName local_res8;
  TSharedPtr<SNotificationItem,1> local_198;
  FText local_188;
  FNotificationInfo local_178;
  
  lVar1 = *(longlong *)this;
  *(undefined4 *)(lVar1 + 0x58) = 0;
  if (*(int *)(lVar1 + 0x5c) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(lVar1 + 0x50),0,(int *)(lVar1 + 0x5c));
  }
  lVar1 = *(longlong *)this;
  *(undefined4 *)(lVar1 + 0x38) = 0;
  if (*(int *)(lVar1 + 0x3c) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(lVar1 + 0x30),0,(int *)(lVar1 + 0x3c));
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_188,L"GeometryCache",L"GeometryCacheEmptied",
             L"Geometry Cache asset has been emptied as it does not support backwards compatibility"
            );
  FNotificationInfo::FNotificationInfo(&local_178,&local_188);
  local_178.ExpireDuration = 5.0;
  this_00 = FSlateNotificationManager::Get();
  FSlateNotificationManager::AddNotification(this_00,&local_198,&local_178);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_198.SharedReferenceCount.ReferenceController._4_4_,
                      local_198.SharedReferenceCount.ReferenceController._0_4_));
  if (2 < (byte)LogGeometryCache._0_1_) {
    local_res8 = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(&local_res8,(FString *)&local_198);
    FText::ToString(&local_188);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometryCache);
    if (local_198.Object != (SNotificationItem *)0x0) {
      FMemory::Free(local_198.Object);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.ForWindow.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_178.HyperlinkText.Getter);
  if (local_178.HyperlinkText.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_178.HyperlinkText.Value.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_178.Hyperlink);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_178.CheckBoxText.Getter);
  if (local_178.CheckBoxText.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_178.CheckBoxText.Value.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_178.CheckBoxStateChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_178.CheckBoxState.Getter);
  DestructItems<FNotificationButtonInfo,int>
            ((FNotificationButtonInfo *)local_178.ButtonDetails.AllocatorInstance.Data,
             local_178.ButtonDetails.ArrayNum);
  if ((FNotificationButtonInfo *)local_178.ButtonDetails.AllocatorInstance.Data !=
      (FNotificationButtonInfo *)0x0) {
    FMemory::Free(local_178.ButtonDetails.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_178.SubText.Getter);
  if (local_178.SubText.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_178.SubText.Value.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_178.Text.Getter);
  if (local_178.Text.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_178.Text.Value.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.ContentWidget.SharedReferenceCount.ReferenceController);
  if (local_188.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
  }
  return;
}

// AddAssetUserData @ 14ca0da00

void __thiscall UGeometryCache::AddAssetUserData(UGeometryCache *this,UAssetUserData *param_1)

{
  int *piVar1;
  code *pcVar2;
  UObject **ppUVar3;
  longlong *plVar4;
  UAssetUserData **ppUVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UObject *local_res18 [2];
  UObject *local_48;
  UAssetUserData *local_40;
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res18[0] = *(UObject **)&param_1->field_0x10;
    pcVar2 = *(code **)(this->_padding_ + 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    pUVar8 = (UObject *)(*pcVar2)(this,local_res18);
    if (pUVar8 != (UObject *)0x0) {
      local_48 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      ppUVar3 = *(UObject ***)&(this->Materials).ArrayNum;
      if (((ppUVar3 <= &local_48) &&
          (&local_48 <
           ppUVar3 + *(int *)((longlong)&(this->MaterialSlotNames).AllocatorInstance.Data + 4))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = *(int *)&(this->MaterialSlotNames).AllocatorInstance.Data;
      if (iVar7 != 0) {
        iVar12 = 0;
        plVar4 = *(longlong **)&(this->Materials).ArrayNum;
        bVar6 = (UObject *)*plVar4 != local_48;
        lVar9 = 0;
        pUVar8 = local_48;
        iVar10 = 0;
        do {
          iVar11 = iVar10;
          do {
            lVar9 = lVar9 + 1;
            iVar11 = iVar11 + 1;
            if (iVar7 <= lVar9) break;
          } while (bVar6 == ((UObject *)plVar4[lVar9] != pUVar8));
          if (bVar6 != false) {
            if (iVar12 != iVar10) {
              memmove(plVar4 + iVar12,plVar4 + iVar10,(longlong)(iVar11 - iVar10) << 3);
              pUVar8 = local_48;
            }
            iVar12 = iVar12 + (iVar11 - iVar10);
          }
          bVar6 = (bool)(bVar6 ^ 1);
          iVar10 = iVar11;
        } while (lVar9 < iVar7);
        *(int *)&(this->MaterialSlotNames).AllocatorInstance.Data = iVar12;
      }
    }
    local_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    ppUVar5 = *(UAssetUserData ***)&(this->Materials).ArrayNum;
    if (((ppUVar5 <= &local_40) &&
        (&local_40 <
         ppUVar5 + *(int *)((longlong)&(this->MaterialSlotNames).AllocatorInstance.Data + 4))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = *(int *)&(this->MaterialSlotNames).AllocatorInstance.Data;
    piVar1 = (int *)((longlong)&(this->MaterialSlotNames).AllocatorInstance.Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&(this->Materials).ArrayNum,piVar1);
    }
    *(int *)&(this->MaterialSlotNames).AllocatorInstance.Data = iVar7 + 1;
    *(UAssetUserData **)(*(longlong *)&(this->Materials).ArrayNum + (longlong)iVar7 * 8) = local_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UAssetUserData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_40);
    }
  }
  return;
}

// AddTrack @ 14ca0e200

void __thiscall UGeometryCache::AddTrack(UGeometryCache *this,UGeometryCacheTrack *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  longlong local_res8;
  UGeometryCacheTrack *local_18 [2];
  
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UGeometryCacheTrack *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->Tracks).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Tracks).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Tracks).ArrayNum;
  piVar1 = &(this->Tracks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Tracks).AllocatorInstance,piVar1);
  }
  (this->Tracks).ArrayNum = iVar5 + 1;
  *(UGeometryCacheTrack **)((this->Tracks).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UGeometryCacheTrack *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  local_res8 = (**(code **)(param_1->_padding_ + 0x308))(param_1);
  if (local_res8 != 0) {
    uVar6 = CityHash64WithSeed((char *)&local_res8,8,this->Hash);
    this->Hash = uVar6;
  }
  return;
}

// BeginDestroy @ 14ca0e3c0

void __thiscall UGeometryCache::BeginDestroy(UGeometryCache *this)

{
  UObject::BeginDestroy((UObject *)this);
  FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
  return;
}

// CalculateDuration @ 14ca0f9f0

float __thiscall UGeometryCache::CalculateDuration(UGeometryCache *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = (longlong)(this->Tracks).ArrayNum;
  uVar4 = 0;
  if (lVar5 < 1) {
    fVar7 = 0.0;
  }
  else {
    lVar6 = 0;
    fVar8 = 0.0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Tracks).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        fVar7 = (float)(*pcVar1)();
        return fVar7;
      }
      fVar7 = (float)(**(code **)(**(longlong **)((this->Tracks).AllocatorInstance.Data + lVar6 * 8)
                                 + 0x2e0))();
      if (fVar7 <= fVar8) {
        fVar7 = fVar8;
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 1;
      fVar8 = fVar7;
    } while (lVar6 < lVar5);
  }
  return fVar7;
}

// ClearForReimporting @ 14ca0fca0

void __thiscall UGeometryCache::ClearForReimporting(UGeometryCache *this)

{
  int *piVar1;
  
  (this->Materials).ArrayNum = 0;
  if ((this->Materials).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Materials).AllocatorInstance,0,&(this->Materials).ArrayMax);
  }
  (this->MaterialSlotNames).ArrayNum = 0;
  if ((this->MaterialSlotNames).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->MaterialSlotNames).AllocatorInstance,0,
               &(this->MaterialSlotNames).ArrayMax);
  }
  piVar1 = &(this->Tracks).ArrayMax;
  (this->Tracks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Tracks).AllocatorInstance,0,piVar1);
  }
  FRenderCommandFence::Wait(&this->ReleaseResourcesFence,false);
  return;
}

// GetAssetRegistryTags @ 14ca1a770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UGeometryCache::GetAssetRegistryTags
          (UGeometryCache *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UGeometryCache *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UGeometryCache **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UGeometryCache **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UGeometryCache **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 14ca1a780

void __thiscall
UGeometryCache::GetAssetRegistryTags(UGeometryCache *this,FAssetRegistryTagsContext param_1)

{
  FName *pFVar1;
  FAssetRegistryTagsContext FVar2;
  FName local_res8;
  FString local_38;
  FAssetRegistryTag local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_38,(this->Tracks).ArrayNum);
  pFVar1 = ::FName::FName(&local_res8,"Total Tracks");
  local_28.Name = *pFVar1;
  local_28.Value.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  local_28.Value.Data.ArrayNum = local_38.Data.ArrayNum;
  local_28.Value.Data.ArrayMax = local_38.Data.ArrayMax;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Type = TT_Numerical;
  local_28.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FVar2.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext
                         ((FAssetRegistryTagsContext *)&local_res8,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar2);
  return;
}

// GetAssetUserDataArray @ 14ca1a840

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
UGeometryCache::GetAssetUserDataArray(UGeometryCache *this)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)&(this->Materials).ArrayNum;
}

// GetAssetUserDataOfClass @ 14ca1a850

UAssetUserData * __thiscall
UGeometryCache::GetAssetUserDataOfClass(UGeometryCache *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UAssetUserData *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < *(int *)&(this->MaterialSlotNames).AllocatorInstance.Data) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < *(int *)&(this->MaterialSlotNames).AllocatorInstance.Data) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UAssetUserData *)(*pcVar2)();
        return pUVar5;
      }
      pUVar5 = *(UAssetUserData **)(lVar9 + *(longlong *)&(this->Materials).ArrayNum);
      if (pUVar5 != (UAssetUserData *)0x0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_14ca1a8f6;
LAB_14ca1a924:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_14ca1a924;
          UE::GC::MarkAsReachable(pUVar7);
LAB_14ca1a8f6:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_14ca1a924;
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_14ca1a924;
        }
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
          return pUVar5;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < *(int *)&(this->MaterialSlotNames).AllocatorInstance.Data);
  }
  return (UAssetUserData *)0x0;
}

// GetDesc @ 14ca1aea0

FString * __thiscall UGeometryCache::GetDesc(UGeometryCache *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d Tracks");
  return __return_storage_ptr__;
}

// GetEndFrame @ 14ca1c250

int __thiscall UGeometryCache::GetEndFrame(UGeometryCache *this)

{
  return this->EndFrame;
}

// GetFrameAtTime @ 14ca1c260

int __thiscall UGeometryCache::GetFrameAtTime(UGeometryCache *this,float param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = CalculateDuration(this);
  iVar2 = this->EndFrame - this->StartFrame;
  if (iVar2 + 1 < 2) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = fVar3 / (float)iVar2;
  }
  iVar1 = (int)ROUND((param_1 + param_1) / fVar3 + __real_3f000000) >> 1;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1 + this->StartFrame;
}

// GetHash @ 14ca1dc70

FString * __thiscall UGeometryCache::GetHash(UGeometryCache *this,FString *__return_storage_ptr__)

{
  float fVar1;
  ulong64 local_res8;
  UGeometryCache *local_18;
  ulong64 *local_10;
  
  if (this->Hash == 0) {
    local_10 = &local_res8;
    local_res8 = this->Hash;
    local_18 = this;
    `UGeometryCache::GetHash'::__l2::<lambda_1>::operator()(&local_18,0.0);
    fVar1 = CalculateDuration(this);
    `UGeometryCache::GetHash'::__l2::<lambda_1>::operator()(&local_18,fVar1);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%llu");
  return __return_storage_ptr__;
}

// GetMeshDataAtTime @ 14ca1e380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGeometryCache::GetMeshDataAtTime
          (UGeometryCache *this,float param_1,
          TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FGeometryCacheMeshData *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStack_188 [32];
  FGeometryCacheMeshData *local_168;
  FGeometryCacheMeshData *local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  undefined1 local_138 [16];
  FGeometryCacheMeshData local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  pFVar8 = (this->Tracks).AllocatorInstance.Data;
  iVar2 = (this->Tracks).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar2) {
      local_138[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UGeometryCacheTrack>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_138);
    }
    if (pFVar8 == pFVar1) break;
    local_128.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.BoundingBox.Pad[0] = '\0';
    local_128.BoundingBox.Pad[1] = '\0';
    local_128.BoundingBox.Pad[2] = '\0';
    local_128.VertexInfo.bHasTangentX = false;
    local_128.VertexInfo.bHasTangentZ = false;
    local_128.VertexInfo.bHasUV0 = false;
    local_128.VertexInfo.bHasColor0 = false;
    local_128.VertexInfo.bHasMotionVectors = false;
    local_128.VertexInfo.bHasImportedVertexNumbers = false;
    local_128.VertexInfo.bConstantUV0 = false;
    local_128.VertexInfo.bConstantColor0 = false;
    local_128.VertexInfo.bConstantIndices = false;
    local_128.Positions.ArrayNum = 0;
    local_128.Positions.ArrayMax = 0;
    local_128.TextureCoordinates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.TextureCoordinates.ArrayNum = 0;
    local_128.TextureCoordinates.ArrayMax = 0;
    local_128.TangentsX.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.TangentsX.ArrayNum = 0;
    local_128.TangentsX.ArrayMax = 0;
    local_128.TangentsZ.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.TangentsZ.ArrayNum = 0;
    local_128.TangentsZ.ArrayMax = 0;
    local_128.Colors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Colors.ArrayNum = 0;
    local_128.Colors.ArrayMax = 0;
    local_128.ImportedVertexNumbers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ImportedVertexNumbers.ArrayNum = 0;
    local_128.ImportedVertexNumbers.ArrayMax = 0;
    local_128.MotionVectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.MotionVectors.ArrayNum = 0;
    local_128.MotionVectors.ArrayMax = 0;
    local_128.BatchesInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.BatchesInfo.ArrayNum = 0;
    local_128.BatchesInfo.ArrayMax = 0;
    local_128.BoundingBox.Min.field0_0x0._0_8_ = 0;
    local_128.BoundingBox._8_8_ = 0;
    local_128.BoundingBox.Max.field0_0x0._4_8_ = 0;
    local_128.BoundingBox.IsValid = '\0';
    local_128.Indices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Indices.ArrayNum = 0;
    local_128.Indices.ArrayMax = 0;
    local_128.TempBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.TempBytes.ArrayNum = 0;
    local_128.TempBytes.ArrayMax = 0;
    local_128.Hash = 0;
    cVar5 = (**(code **)(**(longlong **)pFVar8 + 0x2f8))(*(longlong **)pFVar8,param_1,&local_128);
    if (cVar5 != '\0') {
      pFVar3 = (FGeometryCacheMeshData *)(param_2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_128) && (&local_128 < pFVar3 + param_2->ArrayMax)) {
        local_150 = (longlong)param_2->ArrayNum;
        local_148 = 0xd8;
        local_168 = &local_128;
        local_160 = pFVar3;
        local_158 = (longlong)param_2->ArrayMax;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == param_2->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8d8,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar7 + 1;
      FGeometryCacheMeshData::FGeometryCacheMeshData
                ((FGeometryCacheMeshData *)
                 ((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0xd8),&local_128);
    }
    if (local_128.TempBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.TempBytes.AllocatorInstance.Data);
    }
    if (local_128.Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Indices.AllocatorInstance.Data);
    }
    if (local_128.BatchesInfo.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.BatchesInfo.AllocatorInstance.Data);
    }
    if (local_128.MotionVectors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.MotionVectors.AllocatorInstance.Data);
    }
    if (local_128.ImportedVertexNumbers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.ImportedVertexNumbers.AllocatorInstance.Data);
    }
    if (local_128.Colors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Colors.AllocatorInstance.Data);
    }
    if (local_128.TangentsZ.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.TangentsZ.AllocatorInstance.Data);
    }
    if (local_128.TangentsX.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.TangentsX.AllocatorInstance.Data);
    }
    if (local_128.TextureCoordinates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.TextureCoordinates.AllocatorInstance.Data);
    }
    if (local_128.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Positions.AllocatorInstance.Data);
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// GetPrivateStaticClass @ 14ca1ea40

UClass * __cdecl UGeometryCache::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCache",
               &Z_Registration_Info_UClass_UGeometryCache.InnerSingleton,
               StaticRegisterNativesUGeometryCache,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryCache>,InternalVTableHelperCtorCaller<UGeometryCache>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCache.InnerSingleton;
}

// GetResourceSizeEx @ 14ca1f450

void __thiscall UGeometryCache::GetResourceSizeEx(UGeometryCache *this,FResourceSizeEx *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  pFVar4 = (this->Tracks).AllocatorInstance.Data;
  iVar2 = (this->Tracks).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  do {
    if ((this->Tracks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UGeometryCacheTrack>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) {
      return;
    }
    pUVar3 = *(UObject **)pFVar4;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 != (UObject *)0x0) goto LAB_14ca1f4b4;
    }
    else if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
LAB_14ca1f4b4:
      (**(code **)(*(longlong *)pUVar3 + 400))(pUVar3,param_1);
    }
    pFVar4 = pFVar4 + 8;
  } while( true );
}

// GetStartFrame @ 14ca1f720

int __thiscall UGeometryCache::GetStartFrame(UGeometryCache *this)

{
  return this->StartFrame;
}

// IsReadyForFinishDestroy @ 14ca23800

bool __thiscall UGeometryCache::IsReadyForFinishDestroy(UGeometryCache *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->ReleaseResourcesFence);
  return bVar1;
}

// PostInitProperties @ 14ca249b0

void __thiscall UGeometryCache::PostInitProperties(UGeometryCache *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UGeometryCache *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (UGeometryCache **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UGeometryCache **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PreSave @ 14ca26fc0

void __thiscall UGeometryCache::PreSave(UGeometryCache *this,FObjectPreSaveContext param_1)

{
  longlong *plVar1;
  FScriptContainerElement *local_res8;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPreSave,&local_28);
  if ((*(int *)&(this->OnPreSave).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnPreSave).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  local_res8 = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res8 + 0x9c) = *(int *)(local_res8 + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)&local_res8);
  return;
}

// RemoveUserDataOfClass @ 14ca298b0

void __thiscall
UGeometryCache::RemoveUserDataOfClass(UGeometryCache *this,TSubclassOf<UAssetUserData> param_1)

{
  void *_Dst;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  
  pUVar10 = (UObject *)0x0;
  pUVar7 = pUVar10;
  pUVar9 = pUVar10;
  if (0 < *(int *)&(this->MaterialSlotNames).AllocatorInstance.Data) {
    do {
      uVar8 = (uint)pUVar7;
      uVar4 = 0;
      if ((int)uVar8 < *(int *)&(this->MaterialSlotNames).AllocatorInstance.Data) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(&pUVar9->field_0x0 + *(longlong *)&(this->Materials).ArrayNum);
      if (lVar1 != 0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_14ca29968;
LAB_14ca29996:
          pUVar7 = pUVar10;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_14ca29996;
          UE::GC::MarkAsReachable(pUVar7);
LAB_14ca29968:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_14ca29996;
          iVar5 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar5) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar5 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_14ca29996;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar1 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
            &pUVar7[1].field_0x8)) {
          uVar4 = 0;
          if ((int)uVar8 < *(int *)&(this->MaterialSlotNames).AllocatorInstance.Data) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          _Dst = (void *)(*(longlong *)&(this->Materials).ArrayNum + (longlong)(int)uVar8 * 8);
          iVar5 = (*(int *)&(this->MaterialSlotNames).AllocatorInstance.Data - uVar8) + -1;
          if (iVar5 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar5 << 3);
          }
          iVar5 = *(int *)&(this->MaterialSlotNames).AllocatorInstance.Data + -1;
          *(int *)&(this->MaterialSlotNames).AllocatorInstance.Data = iVar5;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)&(this->Materials).ArrayNum,iVar5,
                     (int *)((longlong)&(this->MaterialSlotNames).AllocatorInstance.Data + 4));
          return;
        }
      }
      pUVar7 = (UObject *)(ulonglong)(uVar8 + 1);
      pUVar9 = (UObject *)&pUVar9->field_0x8;
    } while ((int)(uVar8 + 1) < *(int *)&(this->MaterialSlotNames).AllocatorInstance.Data);
  }
  return;
}

// Serialize @ 14ca2a650

void __thiscall UGeometryCache::Serialize(UGeometryCache *this,FArchive *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint local_res8 [2];
  uint local_res10 [2];
  UGeometryCache *local_res18;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimPhysObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  local_res18 = this;
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimPhysObjectVersion::GUID);
  if (iVar2 < 0x11) {
    TArrayPrivateFriend::Serialize<TObjectPtr<UGeometryCacheTrack>,TSizedDefaultAllocator<32>_>
              (param_1,&this->Tracks);
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFrameworkObjectVersion::GUID);
    if (0x10 < iVar2) {
      TArrayPrivateFriend::Serialize<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
                (param_1,&this->Materials);
    }
  }
  else {
    UObject::Serialize((UObject *)this,param_1);
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
    if (0x1b < iVar2) {
      return;
    }
  }
  `UGeometryCache::Serialize'::__l2::<lambda_1>::operator()(&local_res18);
  return;
}

// Serialize @ 14ca2a7a0

void __thiscall UGeometryCache::Serialize(UGeometryCache *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetFrameStartEnd @ 14ca2ab60

void __thiscall UGeometryCache::SetFrameStartEnd(UGeometryCache *this,int param_1,int param_2)

{
  this->StartFrame = param_1;
  this->EndFrame = param_2;
  return;
}

// StaticRegisterNativesUGeometryCache @ 14ca2b9e0

void __cdecl UGeometryCache::StaticRegisterNativesUGeometryCache(void)

{
  return;
}

// _getUObject @ 14ca31500

UObject * __thiscall UGeometryCache::_getUObject(UGeometryCache *this)

{
  return (UObject *)&this[-1].OnPreSave.field_0x8;
}

