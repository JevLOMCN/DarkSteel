// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 29

// StaticClass @ 14ace03f0

UClass * __cdecl UPaperTileMap::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTileMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTileMap",
               &Z_Registration_Info_UClass_UPaperTileMap.InnerSingleton,
               StaticRegisterNativesUPaperTileMap,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperTileMap>,InternalVTableHelperCtorCaller<UPaperTileMap>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTileMap.InnerSingleton;
}

// UPaperTileMap @ 14aceb0b0

UPaperTileMap * __thiscall UPaperTileMap::UPaperTileMap(UPaperTileMap *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->SelectedTileSet).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPaperTileMap__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SelectedTileSet).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SelectedTileSet).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SelectedTileSet).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SelectedTileSet).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->TileLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileLayers).ArrayNum = 0;
  (this->TileLayers).ArrayMax = 0;
  (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  return this;
}

// UPaperTileMap @ 14aceb120

UPaperTileMap * __thiscall
UPaperTileMap::UPaperTileMap(UPaperTileMap *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->SelectedTileSet).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPaperTileMap__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SelectedTileSet).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SelectedTileSet).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SelectedTileSet).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SelectedTileSet).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  pvVar2 = ThreadLocalStoragePointer;
  uVar3 = (ulonglong)_tls_index;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->TileLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileLayers).ArrayNum = 0;
  (this->TileLayers).ArrayMax = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  this->MapWidth = 4;
  this->MapHeight = 4;
  this->TileWidth = 0x20;
  this->TileHeight = 0x20;
  this->PixelsPerUnrealUnit = 1.0;
  this->SeparationPerTileX = 0.0;
  this->SeparationPerTileY = 0.0;
  this->SeparationPerLayer = 4.0;
  this->CollisionThickness = 50.0;
  (this->SpriteCollisionDomain).Value = '\x02';
  this->LayerNameIndex = 0;
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&DefaultMaterial,L"/Paper2D/MaskedUnlitSpriteMaterial",0);
      atexit(`UPaperTileMap::UPaperTileMap'::__l2::_dynamic_atexit_destructor_for__DefaultMaterial__
            );
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (DefaultMaterial.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)DefaultMaterial.Object.field0_0x0);
  }
  (this->Material).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)DefaultMaterial.Object.field0_0x0;
  return this;
}

// ~UPaperTileMap @ 14acebeb0

void __thiscall UPaperTileMap::~UPaperTileMap(UPaperTileMap *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPaperTileMap__6B_;
  pFVar1 = (this->TileLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->SelectedTileSet).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddExistingLayer @ 14acedd70

void __thiscall
UPaperTileMap::AddExistingLayer(UPaperTileMap *this,UPaperTileLayer *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FText *pFVar6;
  FScriptContainerElement *pFVar7;
  TObjectPtr<UPaperTileLayer>_u_0 local_res8;
  undefined1 local_res18 [8];
  UPaperTileLayer *local_48;
  FText local_40;
  
  UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_Transactional);
  if ((UPaperTileMap *)param_1->_padding_ != this) {
    (**(code **)(param_1->_padding_ + 0x170))(param_1,0,this,0);
  }
  iVar5 = this->MapHeight;
  if ((param_1->LayerWidth != this->MapWidth) || (param_1->LayerHeight != iVar5)) {
    param_1->LayerWidth = this->MapWidth;
    param_1->LayerHeight = iVar5;
    UPaperTileLayer::ReallocateAndCopyMap(param_1);
  }
  pFVar7 = (this->TileLayers).AllocatorInstance.Data;
  iVar5 = (this->TileLayers).ArrayNum;
  pFVar2 = pFVar7 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->TileLayers).ArrayNum != iVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPaperTileLayer>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar2) goto LAB_14acede48;
    bVar4 = FText::EqualToCaseIgnored((FText *)(*(longlong *)pFVar7 + 0x28),&param_1->LayerName);
    if (bVar4) break;
    pFVar7 = pFVar7 + 8;
  }
  pFVar6 = GenerateNewLayerName(&local_40,this);
  FText::operator=(&param_1->LayerName,pFVar6);
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
LAB_14acede48:
  if ((param_2 < 0) || ((this->TileLayers).ArrayNum <= param_2)) {
    local_48 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar2 = (this->TileLayers).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 < pFVar2 + (longlong)(this->TileLayers).ArrayMax * 8))
    {
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
    iVar5 = (this->TileLayers).ArrayNum;
    piVar1 = &(this->TileLayers).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->TileLayers).AllocatorInstance,piVar1);
    }
    (this->TileLayers).ArrayNum = iVar5 + 1;
    *(UPaperTileLayer **)((this->TileLayers).AllocatorInstance.Data + (longlong)iVar5 * 8) =
         local_48;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UPaperTileLayer *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_48);
    }
  }
  else {
    local_res8.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<UPaperTileLayer>,TSizedDefaultAllocator<32>_>::Insert
              (&this->TileLayers,(TObjectPtr<UPaperTileLayer> *)&local_res8.ObjectPtr,param_2);
  }
  return;
}

// AddNewLayer @ 14acee2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPaperTileLayer * __thiscall UPaperTileMap::AddNewLayer(UPaperTileMap *this,int param_1)

{
  int *piVar1;
  TObjectPtr<UPaperTileLayer>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  TObjectPtr<UPaperTileLayer>_u_0 this_00;
  FText *pFVar7;
  UPaperTileLayer *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_108 [32];
  TObjectPtr<UPaperTileLayer>_u_0 *local_e8;
  TObjectPtr<UPaperTileLayer>_u_0 *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  TObjectPtr<UPaperTileLayer>_u_0 local_b8;
  TObjectPtr<UPaperTileLayer>_u_0 local_b0;
  FText local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = UPaperTileLayer::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._8_8_ = this;
  this_00.DebugPtr =
       (UPaperTileLayer *)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar9 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00.DebugPtr,RF_Transactional);
  UPaperTileLayer::DestructiveAllocateMap(this_00.DebugPtr,this->MapWidth,this->MapHeight);
  pFVar7 = GenerateNewLayerName(&local_a8,this);
  FText::operator=(&(this_00.DebugPtr)->LayerName,pFVar7);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  if ((param_1 < 0) || ((this->TileLayers).ArrayNum <= param_1)) {
    local_b8.DebugPtr = this_00.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00.DebugPtr != (UPaperTileLayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
    }
    pTVar2 = (TObjectPtr<UPaperTileLayer>_u_0 *)(this->TileLayers).AllocatorInstance.Data;
    if ((pTVar2 <= &local_b8) &&
       (lVar10 = (longlong)(this->TileLayers).ArrayMax, &local_b8 < pTVar2 + lVar10)) {
      local_d0 = (longlong)(this->TileLayers).ArrayNum;
      local_c8 = 8;
      local_e8 = &local_b8;
      local_e0 = pTVar2;
      local_d8 = lVar10;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UPaperTileLayer *)(*pcVar3)();
        return pUVar8;
      }
    }
    iVar5 = (this->TileLayers).ArrayNum;
    piVar1 = &(this->TileLayers).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->TileLayers).AllocatorInstance,piVar1);
    }
    (this->TileLayers).ArrayNum = iVar5 + 1;
    ((TObjectPtr<UPaperTileLayer>_u_0 *)
    ((this->TileLayers).AllocatorInstance.Data + (longlong)iVar5 * 8))->DebugPtr =
         (UPaperTileLayer *)local_b8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_b8.DebugPtr != (UPaperTileLayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_b8.DebugPtr);
    }
  }
  else {
    local_b0.DebugPtr = this_00.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00.DebugPtr != (UPaperTileLayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
    }
    TArray<TObjectPtr<UPaperTileLayer>,TSizedDefaultAllocator<32>_>::Insert
              (&this->TileLayers,(TObjectPtr<UPaperTileLayer> *)&local_b0.ObjectPtr,param_1);
  }
  return (UPaperTileLayer *)this_00;
}

// CloneTileMap @ 14acf1630

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPaperTileMap * __thiscall UPaperTileMap::CloneTileMap(UPaperTileMap *this,UObject *param_1)

{
  UObject *pUVar1;
  UPaperTileMap *pUVar2;
  
  pUVar1 = StaticDuplicateObject
                     ((UObject *)this,param_1,(FName)0x0,
                      RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                      RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                      RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                      RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                      RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                      RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                      RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                      RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                      RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public
                      ,(UClass *)0x0,Normal,
                      PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                      ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                      AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                      ReachabilityFlag0);
  pUVar2 = CastChecked<UPaperTileMap,UObject>(pUVar1);
  return pUVar2;
}

// GenerateNewLayerName @ 14acf8980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UPaperTileMap::GenerateNewLayerName(FText *__return_storage_ptr__,UPaperTileMap *param_1)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  FNumberFormattingOptions *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_168 [32];
  undefined1 local_128 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_120;
  undefined1 local_110 [8];
  FTextFormat local_108;
  FText local_f8;
  TSharedPtr<FCulture,1> local_e8;
  FFormatArgumentValue local_d8;
  FText local_b8;
  FText local_a8;
  FTextFormat local_98;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar13 = (param_1->TileLayers).AllocatorInstance.Data;
  iVar6 = (param_1->TileLayers).ArrayNum;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  pFVar1 = pFVar13 + (longlong)iVar6 * 8;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  while( true ) {
    if ((param_1->TileLayers).ArrayNum != iVar6) {
      local_128[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPaperTileLayer>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_128);
    }
    if (pFVar13 == pFVar1) break;
    pFVar7 = FText::ToString((FText *)(*(longlong *)pFVar13 + 0x28));
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&local_88,(FString *)local_110,(bool *)pFVar7);
    pFVar13 = pFVar13 + 8;
  }
  FText::FText(__return_storage_ptr__);
  do {
    param_1->LayerNameIndex = param_1->LayerNameIndex + 1;
    local_e8.Object = (FCulture *)0x0;
    local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar8 = FNumberFormattingOptions::DefaultNoGrouping();
    pFVar9 = FText::AsNumber(&local_a8,param_1->LayerNameIndex,pFVar8,&local_e8);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_b8,L"Paper2D",L"NewLayerNameFormatString",L"Layer {0}");
    pFVar11 = FTextFormat::FTextFormat(&local_98,pFVar10,Default);
    local_d8.Type = Text;
    FText::FText((FText *)&local_d8.TextValue,pFVar9);
    if ((local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar3)();
      return pFVar9;
    }
    local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_120.AllocatorInstance,1,&local_120.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_120.AllocatorInstance.Data,&local_d8,1);
    local_108.TextFormatData.Object = (pFVar11->TextFormatData).Object;
    local_108.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar11->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_108.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_108.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_108.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_f8,&local_108,&local_120);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_120.AllocatorInstance.Data,local_120.ArrayNum);
    if ((FFormatArgumentValue *)local_120.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_120.AllocatorInstance.Data);
    }
    if (local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar11->TextFormatData).SharedReferenceCount.ReferenceController);
    pIVar2 = (pFVar9->TextData).Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    FText::operator=(__return_storage_ptr__,&local_f8);
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
    pFVar7 = FText::ToString(__return_storage_ptr__);
    iVar6 = (pFVar7->Data).ArrayNum;
    if (iVar6 == 0) {
      pwVar12 = L"";
      iVar6 = 0;
    }
    else {
      pwVar12 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      iVar6 = iVar6 + -1;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar12);
    iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (&local_88,uVar5,pFVar7);
  } while (iVar6 != -1);
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return __return_storage_ptr__;
}

// GetLocalToTileParameters @ 14acfaed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UPaperTileMap::GetLocalToTileParameters
          (UPaperTileMap *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  uchar uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  
  fVar4 = __real_3f800000 / this->PixelsPerUnrealUnit;
  uVar1 = (this->ProjectionMode).Value;
  fVar13 = (float)this->TileWidth * fVar4;
  fVar4 = (float)this->TileHeight * fVar4;
  if (uVar1 == '\0') {
LAB_14acfb10c:
    dVar9 = (double)fVar4;
    dVar12 = (double)fVar13;
    dVar10 = dVar12 * PaperAxisX.field0_0x0._s_0.Y * __real_3fe0000000000000;
    dVar11 = dVar9 * PaperAxisY.field0_0x0._s_0.Y * __real_3fe0000000000000;
    dVar8 = dVar9 * PaperAxisY.field0_0x0._s_0.Z * __real_3fe0000000000000;
    dVar7 = dVar12 * PaperAxisX.field0_0x0._s_0.Z * __real_3fe0000000000000;
    (param_1->field0_0x0)._s_0.X =
         dVar9 * PaperAxisY.field0_0x0._s_0.X * __real_3fe0000000000000 -
         dVar12 * PaperAxisX.field0_0x0._s_0.X * __real_3fe0000000000000;
    (param_1->field0_0x0)._s_0.Y = dVar11 - dVar10;
    (param_1->field0_0x0)._s_0.Z = dVar8 - dVar7;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_4->field0_0x0)._s_0.Y = (double)uVar3;
    (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    if (uVar1 == '\x01') {
      dVar8 = (double)fVar4;
      dVar10 = PaperAxisY.field0_0x0._s_0.Y * dVar8 * _UNK_150689678;
      dVar7 = dVar8 * PaperAxisY.field0_0x0._s_0.Z * ___xmm_3fe00000000000003fe0000000000000;
      auVar2._8_4_ = SUB84(dVar10,0);
      auVar2._0_8_ = PaperAxisY.field0_0x0._s_0.X * dVar8 * ___xmm_3fe00000000000003fe0000000000000;
      auVar2._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])&param_1->field0_0x0 = auVar2;
      (param_1->field0_0x0)._s_0.Z = dVar7;
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      dVar9 = __real_3ff0000000000000;
      (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (param_4->field0_0x0)._s_0.Y = (double)uVar3;
      (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar12 = dVar9 / (double)fVar13;
      dVar9 = dVar9 / dVar8;
      dVar11 = dVar12 * PaperAxisX.field0_0x0._s_0.Y;
      dVar8 = dVar12 * PaperAxisX.field0_0x0._s_0.Z;
      dVar10 = dVar9 * PaperAxisY.field0_0x0._s_0.Y;
      dVar7 = dVar9 * PaperAxisY.field0_0x0._s_0.Z;
      (param_2->field0_0x0)._s_0.X =
           dVar12 * PaperAxisX.field0_0x0._s_0.X - dVar9 * PaperAxisY.field0_0x0._s_0.X;
      (param_2->field0_0x0)._s_0.Y = dVar11 - dVar10;
      (param_2->field0_0x0)._s_0.Z = dVar8 - dVar7;
      uVar5 = (uint)__xmm_80000000000000008000000000000000;
      uVar6 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      dVar10 = (double)CONCAT44((uint)((ulonglong)(dVar12 * PaperAxisX.field0_0x0._s_0.Z) >> 0x20) ^
                                uVar6,SUB84(dVar12 * PaperAxisX.field0_0x0._s_0.Z,0) ^ uVar5) -
               dVar9 * PaperAxisY.field0_0x0._s_0.Z;
      dVar8 = (double)CONCAT44((uint)((ulonglong)(dVar12 * PaperAxisX.field0_0x0._s_0.X) >> 0x20) ^
                               uVar6,SUB84(dVar12 * PaperAxisX.field0_0x0._s_0.X,0) ^ uVar5) -
              dVar9 * PaperAxisY.field0_0x0._s_0.X;
      dVar7 = (double)CONCAT44((uint)((ulonglong)(dVar12 * PaperAxisX.field0_0x0._s_0.Y) >> 0x20) ^
                               uVar6,SUB84(dVar12 * PaperAxisX.field0_0x0._s_0.Y,0) ^ uVar5) -
              dVar9 * PaperAxisY.field0_0x0._s_0.Y;
      goto LAB_14acfb210;
    }
    if ((uVar1 != '\x02') && (uVar1 != '\x03')) goto LAB_14acfb10c;
    dVar9 = (double)fVar4;
    dVar12 = (double)fVar13;
    dVar10 = dVar12 * PaperAxisX.field0_0x0._s_0.Y * __real_3fe0000000000000;
    dVar8 = dVar9 * PaperAxisY.field0_0x0._s_0.Z * __real_3fe0000000000000;
    dVar11 = dVar9 * PaperAxisY.field0_0x0._s_0.Y * __real_3fe0000000000000;
    dVar7 = dVar12 * PaperAxisX.field0_0x0._s_0.Z * __real_3fe0000000000000;
    (param_1->field0_0x0)._s_0.X =
         dVar9 * PaperAxisY.field0_0x0._s_0.X * __real_3fe0000000000000 -
         dVar12 * PaperAxisX.field0_0x0._s_0.X * __real_3fe0000000000000;
    (param_1->field0_0x0)._s_0.Y = dVar11 - dVar10;
    (param_1->field0_0x0)._s_0.Z = dVar8 - dVar7;
    dVar9 = (double)(fVar13 * __real_3f000000);
    dVar7 = PaperAxisX.field0_0x0._s_0.Y * dVar9;
    dVar10 = dVar9 * PaperAxisX.field0_0x0._s_0.Z;
    (param_4->field0_0x0)._s_0.X = PaperAxisX.field0_0x0._s_0.X * dVar9;
    (param_4->field0_0x0)._s_0.Y = dVar7;
    (param_4->field0_0x0)._s_0.Z = dVar10;
  }
  dVar9 = __real_3ff0000000000000 / (double)fVar13;
  dVar11 = __real_3ff0000000000000 / (double)fVar4;
  dVar10 = dVar9 * PaperAxisX.field0_0x0._s_0.Z;
  dVar7 = PaperAxisX.field0_0x0._s_0.Y * dVar9;
  (param_2->field0_0x0)._s_0.X = PaperAxisX.field0_0x0._s_0.X * dVar9;
  (param_2->field0_0x0)._s_0.Y = dVar7;
  (param_2->field0_0x0)._s_0.Z = dVar10;
  uVar5 = (uint)__xmm_80000000000000008000000000000000;
  uVar6 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar8 = (double)CONCAT44((uint)((ulonglong)(dVar11 * PaperAxisY.field0_0x0._s_0.X) >> 0x20) ^
                           uVar6,SUB84(dVar11 * PaperAxisY.field0_0x0._s_0.X,0) ^ uVar5);
  dVar7 = (double)CONCAT44((uint)((ulonglong)(dVar11 * PaperAxisY.field0_0x0._s_0.Y) >> 0x20) ^
                           uVar6,SUB84(dVar11 * PaperAxisY.field0_0x0._s_0.Y,0) ^ uVar5);
  dVar10 = (double)CONCAT44((uint)((ulonglong)(dVar11 * PaperAxisY.field0_0x0._s_0.Z) >> 0x20) ^
                            uVar6,SUB84(dVar11 * PaperAxisY.field0_0x0._s_0.Z,0) ^ uVar5);
LAB_14acfb210:
  (param_3->field0_0x0)._s_0.X = dVar8;
  (param_3->field0_0x0)._s_0.Y = dVar7;
  (param_3->field0_0x0)._s_0.Z = dVar10;
  return;
}

// GetPrivateStaticClass @ 14acfd800

UClass * __cdecl UPaperTileMap::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTileMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTileMap",
               &Z_Registration_Info_UClass_UPaperTileMap.InnerSingleton,
               StaticRegisterNativesUPaperTileMap,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperTileMap>,InternalVTableHelperCtorCaller<UPaperTileMap>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTileMap.InnerSingleton;
}

// GetRenderBounds @ 14acfe090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBoxSphereBounds<double,double> * __thiscall
UPaperTileMap::GetRenderBounds
          (UPaperTileMap *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  uchar uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  int iVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_c8 [32];
  TVector<double>_u_0 local_a8;
  double local_90;
  double local_88;
  double local_80;
  undefined1 local_78;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStack_c8;
  fVar6 = __real_3f800000 / this->PixelsPerUnrealUnit;
  fVar14 = (float)((this->TileLayers).ArrayNum + -1) * this->SeparationPerLayer;
  uVar1 = (this->ProjectionMode).Value;
  fVar15 = (float)this->TileWidth * fVar6;
  fVar6 = (float)this->TileHeight * fVar6;
  if (uVar1 != '\0') {
    if (uVar1 == '\x01') {
      local_78 = 1;
      local_a8._s_0.Y = (double)(__real_c0000000 - fVar14);
      fVar15 = (float)this->MapWidth * fVar15;
      local_a8._s_0.X = (double)(fVar15 * __real_bf000000);
      local_a8._s_0.Z = (double)((float)-this->MapHeight * fVar6);
      local_90 = (double)fVar15 + local_a8._s_0.X;
      local_88 = (double)(fVar14 + __real_40800000) + local_a8._s_0.Y;
      local_80 = (double)((float)(this->MapHeight + 1) * fVar6) + local_a8._s_0.Z;
      UE::Math::TBoxSphereBounds<double,double>::TBoxSphereBounds<double,double>
                (__return_storage_ptr__,(TBox<double> *)&local_a8._s_0);
      return __return_storage_ptr__;
    }
    if ((uVar1 == '\x02') || (uVar1 == '\x03')) {
      iVar5 = (this->MapHeight + 1) / 2;
      dVar2 = (double)(fVar14 + __real_40800000);
      dVar3 = (double)(((float)iVar5 + __real_3f800000) * fVar6);
      dVar12 = (double)(((float)this->MapWidth + __real_3f000000) * fVar15) *
               __real_3fe0000000000000;
      dVar11 = dVar2 * __real_3fe0000000000000;
      dVar10 = dVar3 * __real_3fe0000000000000;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
           dVar12 - (double)(fVar15 * __real_3f000000);
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y =
           dVar11 - (double)(fVar14 + __real_40000000);
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar10 - (double)((float)iVar5 * fVar6);
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar12;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar11;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar10;
      dVar10 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
      auVar7._0_8_ = dVar10 * dVar10;
      auVar7._8_8_ = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (dVar3 * dVar3 + dVar2 * dVar2) * __real_3fd0000000000000 + auVar7._0_8_;
      auVar8 = sqrtpd(auVar7,auVar8);
      __return_storage_ptr__->SphereRadius = auVar8._0_8_;
      return __return_storage_ptr__;
    }
  }
  dVar3 = (double)(fVar14 + __real_40800000);
  fVar13 = (float)this->MapHeight - __real_3f000000;
  dVar2 = (double)((float)this->MapHeight * fVar6);
  dVar12 = (double)((float)this->MapWidth * fVar15) * __real_3fe0000000000000;
  dVar10 = dVar2 * __real_3fe0000000000000;
  dVar11 = dVar3 * __real_3fe0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar12 - (double)(fVar15 * __real_3f000000);
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar11 - (double)(fVar14 + __real_40000000);
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar10 - (double)(fVar13 * fVar6);
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar12;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar11;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar10;
  dVar10 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  auVar9._0_8_ = dVar10 * dVar10;
  auVar9._8_8_ = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (dVar3 * dVar3 + dVar2 * dVar2) * __real_3fd0000000000000 + auVar9._0_8_;
  auVar8 = sqrtpd(auVar9,auVar4);
  __return_storage_ptr__->SphereRadius = auVar8._0_8_;
  return __return_storage_ptr__;
}

// GetTileCenterInLocalSpace @ 14acfee50

TVector<double> * __thiscall
UPaperTileMap::GetTileCenterInLocalSpace
          (UPaperTileMap *this,TVector<double> *__return_storage_ptr__,float param_1,float param_2,
          int param_3)

{
  double dVar1;
  double dVar2;
  uchar uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TVector<double> *pTVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  TVector<double> local_48 [2];
  
  uVar3 = (this->ProjectionMode).Value;
  if (((uVar3 != '\0') && (uVar3 != '\x01')) && ((uVar3 == '\x02' || (uVar3 == '\x03')))) {
    fVar11 = __real_3f800000 / this->PixelsPerUnrealUnit;
    dVar6 = (double)((float)this->TileWidth * fVar11);
    dVar4 = (double)((float)this->TileHeight * fVar11);
    pTVar8 = GetTilePositionInLocalSpace(this,local_48,param_1,param_2,param_3);
    dVar10 = dVar6 * PaperAxisX.field0_0x0._s_0.Y * __real_3fe0000000000000;
    dVar7 = dVar6 * PaperAxisX.field0_0x0._s_0.X * __real_3fe0000000000000;
    dVar9 = dVar4 * PaperAxisY.field0_0x0._s_0.Y * __real_3fe0000000000000;
    dVar5 = dVar4 * PaperAxisY.field0_0x0._s_0.X * __real_3fe0000000000000;
    dVar1 = (pTVar8->field0_0x0)._s_0.Y;
    dVar2 = (pTVar8->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (dVar6 * PaperAxisX.field0_0x0._s_0.Z * __real_3fe0000000000000 -
         dVar4 * PaperAxisY.field0_0x0._s_0.Z * __real_3fe0000000000000) +
         (pTVar8->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar10 - dVar9) + dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar7 - dVar5) + dVar2;
    return __return_storage_ptr__;
  }
  GetTilePositionInLocalSpace
            (this,__return_storage_ptr__,param_1 + __real_3f000000,param_2 + __real_3f000000,param_3
            );
  return __return_storage_ptr__;
}

// GetTileCoordinatesFromLocalSpacePosition @ 14acff290

void __thiscall
UPaperTileMap::GetTileCoordinatesFromLocalSpacePosition
          (UPaperTileMap *this,TVector<double> *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78;
  TVector<double> local_60 [3];
  
  GetLocalToTileParameters
            (this,(TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_90._s_0,
             (TVector<double> *)&local_78._s_0,local_60);
  dVar12 = (param_1->field0_0x0)._s_0.Y - local_a8._s_0.Y;
  dVar11 = (param_1->field0_0x0)._s_0.X - local_a8._s_0.X;
  dVar10 = (param_1->field0_0x0)._s_0.Z - local_a8._s_0.Z;
  bVar1 = (this->ProjectionMode).Value;
  uVar2 = (uint)bVar1;
  dVar13 = dVar12 * local_78._s_0.Y + dVar11 * local_78._s_0.X + dVar10 * local_78._s_0.Z;
  dVar10 = dVar12 * local_90._s_0.Y + dVar11 * local_90._s_0.X + dVar10 * local_90._s_0.Z;
  fVar4 = (float)dVar13;
  fVar14 = (float)dVar10;
  if ((bVar1 == 2) || (bVar1 == 3)) {
    iVar3 = (int)dVar10;
    fVar6 = fVar14;
    if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar14)) {
      auVar5._4_4_ = fVar14;
      auVar5._0_4_ = fVar14;
      auVar5._8_8_ = 0;
      uVar2 = movmskps((uint)bVar1,auVar5);
      uVar2 = uVar2 & 1;
      fVar6 = (float)(int)(iVar3 - uVar2);
    }
    fVar6 = fVar14 - fVar6;
    iVar3 = (int)dVar13;
    fVar7 = fVar4;
    if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar4)) {
      auVar9._4_4_ = fVar4;
      auVar9._0_4_ = fVar4;
      auVar9._8_8_ = 0;
      uVar2 = movmskps(uVar2,auVar9);
      fVar7 = (float)(int)(iVar3 - (uVar2 & 1));
    }
    fVar7 = fVar4 - fVar7;
    fVar8 = (fVar6 - __real_3f000000) * __real_3f000000;
    auVar5 = ZEXT416((uint)fVar8);
    if ((((fVar7 * __real_3f000000 - fVar8 < 0.0) ||
         (fVar15 = (fVar7 - __real_3f000000) * __real_3f000000,
         (fVar6 - __real_3f800000) * __real_bf000000 - fVar15 < 0.0)) ||
        (fVar8 = fVar8 - (fVar7 - __real_3f800000) * __real_3f000000, auVar5 = ZEXT416((uint)fVar8),
        fVar8 < 0.0)) || (fVar6 * __real_3f000000 + fVar15 < 0.0)) {
      fVar8 = 0.0;
      if (fVar6 < __real_3f000000) {
        fVar8 = __real_3f800000;
      }
      fVar14 = fVar14 - fVar8;
      fVar6 = __real_3f800000;
      if (fVar7 < __real_3f000000) {
        fVar6 = __real_bf800000;
      }
      auVar5 = roundps(auVar5,ZEXT416((uint)fVar4),1);
      fVar4 = fVar7 + fVar6 + auVar5._0_4_ + auVar5._0_4_;
    }
    else {
      auVar5 = roundps(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4),1);
      fVar4 = auVar5._0_4_ + auVar5._0_4_ + fVar7;
    }
  }
  fVar4 = (fVar4 + fVar4) - __real_3f000000;
  *param_2 = (int)ROUND((fVar14 + fVar14) - __real_3f000000) >> 1;
  *param_3 = (int)ROUND(fVar4) >> 1;
  return;
}

// GetTilePolygon @ 14acff860

void __thiscall
UPaperTileMap::GetTilePolygon
          (UPaperTileMap *this,int param_1,int param_2,int param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  uchar uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TVector<double> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double local_278;
  double dStack_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double dStack_248;
  double local_240;
  double local_238;
  double dStack_230;
  double local_228;
  double local_220;
  double dStack_218;
  double local_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_190;
  double dStack_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  TVector<double> local_160;
  TVector<double> local_148;
  TVector<double> local_130;
  TVector<double> local_118;
  TVector<double> local_100;
  TVector<double> local_e8 [8];
  
  uVar1 = (this->ProjectionMode).Value;
  if ((uVar1 != '\0') && (uVar1 != '\x01')) {
    if (uVar1 == '\x02') {
      fVar11 = __real_3f800000 / this->PixelsPerUnrealUnit;
      iVar5 = this->TileHeight;
      dVar17 = (double)((float)this->TileWidth * fVar11);
      pTVar7 = GetTilePositionInLocalSpace(this,&local_148,(float)param_1,(float)param_2,param_3);
      dVar14 = __real_3fe0000000000000;
      pFVar9 = (param_4->AllocatorInstance).Data;
      local_268 = dVar17 * PaperAxisX.field0_0x0._s_0.Z * __real_3fe0000000000000 +
                  (pTVar7->field0_0x0)._s_0.Z;
      dStack_270 = dVar17 * PaperAxisX.field0_0x0._s_0.Y * __real_3fe0000000000000 +
                   (pTVar7->field0_0x0)._s_0.Y;
      local_278 = dVar17 * PaperAxisX.field0_0x0._s_0.X * __real_3fe0000000000000 +
                  (pTVar7->field0_0x0)._s_0.X;
      if ((pFVar9 <= (FScriptContainerElement *)&local_278) &&
         ((FScriptContainerElement *)&local_278 < pFVar9 + (longlong)param_4->ArrayMax * 0x18)) {
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
      iVar6 = param_4->ArrayNum;
      if (iVar6 == param_4->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar6 + 1;
      dVar12 = (double)((float)iVar5 * fVar11);
      pFVar8 = (param_4->AllocatorInstance).Data;
      pFVar9 = pFVar8 + (longlong)iVar6 * 0x18;
      *(double *)pFVar9 = local_278;
      *(double *)(pFVar9 + 8) = dStack_270;
      *(double *)(pFVar8 + (longlong)iVar6 * 0x18 + 0x10) = local_268;
      pFVar9 = (param_4->AllocatorInstance).Data;
      local_1c0 = (dVar17 * PaperAxisX.field0_0x0._s_0.X * dVar14 + local_278) -
                  dVar12 * PaperAxisY.field0_0x0._s_0.X * dVar14;
      dStack_1b8 = (dVar17 * PaperAxisX.field0_0x0._s_0.Y * dVar14 + dStack_270) -
                   dVar12 * PaperAxisY.field0_0x0._s_0.Y * dVar14;
      local_1b0 = (dVar17 * PaperAxisX.field0_0x0._s_0.Z * dVar14 + local_268) -
                  dVar12 * PaperAxisY.field0_0x0._s_0.Z * dVar14;
      if ((pFVar9 <= (FScriptContainerElement *)&local_1c0) &&
         ((FScriptContainerElement *)&local_1c0 < pFVar9 + (longlong)param_4->ArrayMax * 0x18)) {
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
      iVar5 = param_4->ArrayNum;
      if (iVar5 == param_4->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar5 + 1;
      pFVar8 = (param_4->AllocatorInstance).Data;
      pFVar9 = pFVar8 + (longlong)iVar5 * 0x18;
      *(double *)pFVar9 = local_1c0;
      *(double *)(pFVar9 + 8) = dStack_1b8;
      *(double *)(pFVar8 + (longlong)iVar5 * 0x18 + 0x10) = local_1b0;
      pFVar9 = (param_4->AllocatorInstance).Data;
      local_1a8 = local_278 - dVar12 * PaperAxisY.field0_0x0._s_0.X;
      dStack_1a0 = dStack_270 - dVar12 * PaperAxisY.field0_0x0._s_0.Y;
      local_198 = local_268 - dVar12 * PaperAxisY.field0_0x0._s_0.Z;
      if ((pFVar9 <= (FScriptContainerElement *)&local_1a8) &&
         ((FScriptContainerElement *)&local_1a8 < pFVar9 + (longlong)param_4->ArrayMax * 0x18)) {
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
      iVar5 = param_4->ArrayNum;
      if (iVar5 == param_4->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar5 + 1;
      pFVar8 = (param_4->AllocatorInstance).Data;
      pFVar9 = pFVar8 + (longlong)iVar5 * 0x18;
      *(double *)pFVar9 = local_1a8;
      *(double *)(pFVar9 + 8) = dStack_1a0;
      *(double *)(pFVar8 + (longlong)iVar5 * 0x18 + 0x10) = local_198;
      pFVar9 = (param_4->AllocatorInstance).Data;
      local_190 = (local_278 - dVar17 * PaperAxisX.field0_0x0._s_0.X * dVar14) -
                  dVar12 * PaperAxisY.field0_0x0._s_0.X * dVar14;
      dStack_188 = (dStack_270 - dVar17 * PaperAxisX.field0_0x0._s_0.Y * dVar14) -
                   dVar12 * PaperAxisY.field0_0x0._s_0.Y * dVar14;
      local_180 = (local_268 - dVar17 * PaperAxisX.field0_0x0._s_0.Z * dVar14) -
                  dVar12 * PaperAxisY.field0_0x0._s_0.Z * dVar14;
      if ((pFVar9 <= (FScriptContainerElement *)&local_190) &&
         ((FScriptContainerElement *)&local_190 < pFVar9 + (longlong)param_4->ArrayMax * 0x18)) {
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
      iVar5 = param_4->ArrayNum;
      if (iVar5 == param_4->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar5 + 1;
      lVar10 = (longlong)iVar5 * 3;
      pFVar9 = (param_4->AllocatorInstance).Data;
      *(double *)(pFVar9 + (longlong)iVar5 * 0x18) = local_190;
      *(double *)(pFVar9 + (longlong)iVar5 * 0x18 + 8) = dStack_188;
      local_1c8 = local_180;
      goto LAB_14ad00791;
    }
    if (uVar1 == '\x03') {
      fVar15 = __real_3f800000 / this->PixelsPerUnrealUnit;
      fVar11 = (float)this->TileHeight * fVar15;
      dVar17 = (double)((float)this->TileWidth * fVar15);
      dVar14 = dVar17 * PaperAxisX.field0_0x0._s_0.X * __real_3fe0000000000000;
      dVar16 = dVar17 * PaperAxisX.field0_0x0._s_0.Y * __real_3fe0000000000000;
      dVar17 = dVar17 * PaperAxisX.field0_0x0._s_0.Z * __real_3fe0000000000000;
      pTVar7 = GetTilePositionInLocalSpace(this,&local_160,(float)param_1,(float)param_2,param_3);
      local_178 = (pTVar7->field0_0x0)._s_0.X;
      local_1e0 = (pTVar7->field0_0x0)._s_0.Z;
      local_168 = dVar14 + local_178;
      local_170 = (pTVar7->field0_0x0)._s_0.Y;
      local_260 = dVar16 + local_170;
      local_258 = dVar17 + local_1e0;
      fVar18 = (float)this->HexSideLength * fVar15 * __real_3f000000;
      dVar14 = local_168 + dVar14;
      dVar12 = (double)fVar18;
      local_250 = local_168 - dVar12 * PaperAxisY.field0_0x0._s_0.X;
      dStack_248 = local_260 - dVar12 * PaperAxisY.field0_0x0._s_0.Y;
      fVar15 = fVar11 * __real_3f000000;
      local_240 = local_258 - dVar12 * PaperAxisY.field0_0x0._s_0.Z;
      dVar13 = (double)(fVar15 - fVar18);
      dVar16 = local_260 + dVar16;
      dVar17 = local_258 + dVar17;
      local_238 = dVar14 - dVar13 * PaperAxisY.field0_0x0._s_0.X;
      pFVar9 = (param_4->AllocatorInstance).Data;
      dStack_230 = dVar16 - dVar13 * PaperAxisY.field0_0x0._s_0.Y;
      local_228 = dVar17 - dVar13 * PaperAxisY.field0_0x0._s_0.Z;
      local_1d8 = local_178 - dVar13 * PaperAxisY.field0_0x0._s_0.X;
      dVar12 = (double)(fVar15 + fVar18);
      dStack_1d0 = local_170 - dVar13 * PaperAxisY.field0_0x0._s_0.Y;
      local_1c8 = local_1e0 - dVar13 * PaperAxisY.field0_0x0._s_0.Z;
      local_1f0 = local_178 - dVar12 * PaperAxisY.field0_0x0._s_0.X;
      local_220 = dVar14 - dVar12 * PaperAxisY.field0_0x0._s_0.X;
      dStack_1e8 = local_170 - dVar12 * PaperAxisY.field0_0x0._s_0.Y;
      dStack_218 = dVar16 - dVar12 * PaperAxisY.field0_0x0._s_0.Y;
      local_1e0 = local_1e0 - dVar12 * PaperAxisY.field0_0x0._s_0.Z;
      local_210 = dVar17 - dVar12 * PaperAxisY.field0_0x0._s_0.Z;
      dVar14 = (double)(fVar11 - fVar18);
      local_208 = local_168 - dVar14 * PaperAxisY.field0_0x0._s_0.X;
      dStack_200 = local_260 - dVar14 * PaperAxisY.field0_0x0._s_0.Y;
      local_1f8 = local_258 - dVar14 * PaperAxisY.field0_0x0._s_0.Z;
      if ((pFVar9 <= (FScriptContainerElement *)&local_250) &&
         ((FScriptContainerElement *)&local_250 < pFVar9 + (longlong)param_4->ArrayMax * 0x18)) {
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
      iVar5 = param_4->ArrayNum;
      if (iVar5 == param_4->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar5 + 1;
      pFVar8 = (param_4->AllocatorInstance).Data;
      pFVar9 = pFVar8 + (longlong)iVar5 * 0x18;
      *(double *)pFVar9 = local_250;
      *(double *)(pFVar9 + 8) = dStack_248;
      *(double *)(pFVar8 + (longlong)iVar5 * 0x18 + 0x10) = local_240;
      pFVar9 = (param_4->AllocatorInstance).Data;
      if ((pFVar9 <= (FScriptContainerElement *)&local_238) &&
         ((FScriptContainerElement *)&local_238 < pFVar9 + (longlong)param_4->ArrayMax * 0x18)) {
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
      iVar5 = param_4->ArrayNum;
      if (iVar5 == param_4->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar5 + 1;
      pFVar8 = (param_4->AllocatorInstance).Data;
      pFVar9 = pFVar8 + (longlong)iVar5 * 0x18;
      *(double *)pFVar9 = local_238;
      *(double *)(pFVar9 + 8) = dStack_230;
      *(double *)(pFVar8 + (longlong)iVar5 * 0x18 + 0x10) = local_228;
      pFVar9 = (param_4->AllocatorInstance).Data;
      if ((pFVar9 <= (FScriptContainerElement *)&local_220) &&
         ((FScriptContainerElement *)&local_220 < pFVar9 + (longlong)param_4->ArrayMax * 0x18)) {
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
      iVar5 = param_4->ArrayNum;
      if (iVar5 == param_4->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar5 + 1;
      pFVar8 = (param_4->AllocatorInstance).Data;
      pFVar9 = pFVar8 + (longlong)iVar5 * 0x18;
      *(double *)pFVar9 = local_220;
      *(double *)(pFVar9 + 8) = dStack_218;
      *(double *)(pFVar8 + (longlong)iVar5 * 0x18 + 0x10) = local_210;
      pFVar9 = (param_4->AllocatorInstance).Data;
      if ((pFVar9 <= (FScriptContainerElement *)&local_208) &&
         ((FScriptContainerElement *)&local_208 < pFVar9 + (longlong)param_4->ArrayMax * 0x18)) {
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
      iVar5 = param_4->ArrayNum;
      if (iVar5 == param_4->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar5 + 1;
      pFVar8 = (param_4->AllocatorInstance).Data;
      pFVar9 = pFVar8 + (longlong)iVar5 * 0x18;
      *(double *)pFVar9 = local_208;
      *(double *)(pFVar9 + 8) = dStack_200;
      *(double *)(pFVar8 + (longlong)iVar5 * 0x18 + 0x10) = local_1f8;
      pFVar9 = (param_4->AllocatorInstance).Data;
      if ((pFVar9 <= (FScriptContainerElement *)&local_1f0) &&
         ((FScriptContainerElement *)&local_1f0 < pFVar9 + (longlong)param_4->ArrayMax * 0x18)) {
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
      iVar5 = param_4->ArrayNum;
      if (iVar5 == param_4->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar5 + 1;
      pFVar8 = (param_4->AllocatorInstance).Data;
      pFVar9 = pFVar8 + (longlong)iVar5 * 0x18;
      *(double *)pFVar9 = local_1f0;
      *(double *)(pFVar9 + 8) = dStack_1e8;
      *(double *)(pFVar8 + (longlong)iVar5 * 0x18 + 0x10) = local_1e0;
      pFVar9 = (param_4->AllocatorInstance).Data;
      if ((pFVar9 <= (FScriptContainerElement *)&local_1d8) &&
         ((FScriptContainerElement *)&local_1d8 < pFVar9 + (longlong)param_4->ArrayMax * 0x18)) {
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
      iVar5 = param_4->ArrayNum;
      if (iVar5 == param_4->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar5 + 1;
      lVar10 = (longlong)iVar5 * 3;
      pFVar9 = (param_4->AllocatorInstance).Data;
      *(double *)(pFVar9 + (longlong)iVar5 * 0x18) = local_1d8;
      *(double *)(pFVar9 + (longlong)iVar5 * 0x18 + 8) = dStack_1d0;
      goto LAB_14ad00791;
    }
  }
  pFVar8 = (FScriptContainerElement *)
           GetTilePositionInLocalSpace(this,&local_130,(float)param_1,(float)param_2,param_3);
  pFVar9 = (param_4->AllocatorInstance).Data;
  if ((pFVar9 <= pFVar8) && (pFVar8 < pFVar9 + (longlong)param_4->ArrayMax * 0x18)) {
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
  iVar5 = param_4->ArrayNum;
  if (iVar5 == param_4->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar5 + 1;
  dVar14 = *(double *)(pFVar8 + 8);
  pFVar2 = (param_4->AllocatorInstance).Data;
  pFVar9 = pFVar2 + (longlong)iVar5 * 0x18;
  *(double *)pFVar9 = (((TVector<double>_u_0 *)&pFVar8->field_0x0)->_s_0).X;
  *(double *)(pFVar9 + 8) = dVar14;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0x18 + 0x10) = *(undefined8 *)(pFVar8 + 0x10);
  pFVar8 = (FScriptContainerElement *)
           GetTilePositionInLocalSpace(this,&local_118,(float)(param_1 + 1),(float)param_2,param_3);
  pFVar9 = (param_4->AllocatorInstance).Data;
  if ((pFVar9 <= pFVar8) && (pFVar8 < pFVar9 + (longlong)param_4->ArrayMax * 0x18)) {
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
  iVar5 = param_4->ArrayNum;
  if (iVar5 == param_4->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar5 + 1;
  dVar14 = *(double *)(pFVar8 + 8);
  pFVar2 = (param_4->AllocatorInstance).Data;
  pFVar9 = pFVar2 + (longlong)iVar5 * 0x18;
  *(double *)pFVar9 = (((TVector<double>_u_0 *)&pFVar8->field_0x0)->_s_0).X;
  *(double *)(pFVar9 + 8) = dVar14;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0x18 + 0x10) = *(undefined8 *)(pFVar8 + 0x10);
  pFVar8 = (FScriptContainerElement *)
           GetTilePositionInLocalSpace
                     (this,&local_100,(float)(param_1 + 1),(float)(param_2 + 1),param_3);
  pFVar9 = (param_4->AllocatorInstance).Data;
  if ((pFVar9 <= pFVar8) && (pFVar8 < pFVar9 + (longlong)param_4->ArrayMax * 0x18)) {
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
  iVar5 = param_4->ArrayNum;
  if (iVar5 == param_4->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar5 + 1;
  dVar14 = *(double *)(pFVar8 + 8);
  pFVar2 = (param_4->AllocatorInstance).Data;
  pFVar9 = pFVar2 + (longlong)iVar5 * 0x18;
  *(double *)pFVar9 = (((TVector<double>_u_0 *)&pFVar8->field_0x0)->_s_0).X;
  *(double *)(pFVar9 + 8) = dVar14;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0x18 + 0x10) = *(undefined8 *)(pFVar8 + 0x10);
  pFVar8 = (FScriptContainerElement *)
           GetTilePositionInLocalSpace(this,local_e8,(float)param_1,(float)(param_2 + 1),param_3);
  pFVar9 = (param_4->AllocatorInstance).Data;
  if ((pFVar9 <= pFVar8) && (pFVar8 < pFVar9 + (longlong)param_4->ArrayMax * 0x18)) {
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
  iVar5 = param_4->ArrayNum;
  if (iVar5 == param_4->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar5 + 1;
  dVar14 = *(double *)(pFVar8 + 8);
  lVar10 = (longlong)iVar5 * 3;
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(double *)(pFVar9 + (longlong)iVar5 * 0x18) =
       (((TVector<double>_u_0 *)&pFVar8->field_0x0)->_s_0).X;
  *(double *)(pFVar9 + (longlong)iVar5 * 0x18 + 8) = dVar14;
  local_1c8 = *(double *)(pFVar8 + 0x10);
LAB_14ad00791:
  *(double *)(pFVar9 + lVar10 * 8 + 0x10) = local_1c8;
  return;
}

// GetTilePositionInLocalSpace @ 14ad00a00

TVector<double> * __thiscall
UPaperTileMap::GetTilePositionInLocalSpace
          (UPaperTileMap *this,TVector<double> *__return_storage_ptr__,float param_1,float param_2,
          int param_3)

{
  uchar uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70 [4];
  
  GetTileToLocalParameters
            (this,(TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_70[0]._s_0,
             (TVector<double> *)&local_88._s_0,(TVector<double> *)&local_a0._s_0);
  uVar1 = (this->ProjectionMode).Value;
  if (((uVar1 != '\0') && (uVar1 != '\x01')) && ((uVar1 == '\x02' || (uVar1 == '\x03')))) {
    dVar6 = (double)((int)param_2 & 1);
    local_b8._s_0.X = dVar6 * local_a0._s_0.X + local_b8._s_0.X;
    local_b8._s_0.Y = dVar6 * local_a0._s_0.Y + local_b8._s_0.Y;
    local_b8._s_0.Z = dVar6 * local_a0._s_0.Z + local_b8._s_0.Z;
  }
  dVar6 = (double)param_2;
  dVar5 = (double)param_1;
  dVar3 = (double)((float)param_3 * this->SeparationPerLayer + param_1 * this->SeparationPerTileX +
                  param_2 * this->SeparationPerTileY);
  dVar4 = dVar3 * PaperAxisZ.field0_0x0._s_0.Z;
  dVar2 = dVar3 * PaperAxisZ.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar6 * local_88._s_0.X + dVar5 * (double)local_70[0]._0_8_ +
       dVar3 * PaperAxisZ.field0_0x0._s_0.X + local_b8._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar6 * local_88._s_0.Z + dVar5 * (double)local_70[0]._16_8_ + dVar4 + local_b8._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar6 * local_88._s_0.Y + dVar5 * (double)local_70[0]._8_8_ + dVar2 + local_b8._s_0.Y;
  return __return_storage_ptr__;
}

// GetTileToLocalParameters @ 14ad00bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UPaperTileMap::GetTileToLocalParameters
          (UPaperTileMap *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  uchar uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  
  dVar3 = ___xmm_3fe00000000000003fe0000000000000;
  fVar6 = __real_3f800000 / this->PixelsPerUnrealUnit;
  uVar1 = (this->ProjectionMode).Value;
  fVar14 = (float)this->TileWidth * fVar6;
  fVar6 = (float)this->TileHeight * fVar6;
  if (uVar1 != '\0') {
    if (uVar1 == '\x01') {
      dVar13 = (double)fVar6;
      dVar4 = (double)fVar14;
      dVar9 = PaperAxisY.field0_0x0._s_0.Y * dVar13 * _UNK_150689678;
      dVar10 = dVar13 * PaperAxisY.field0_0x0._s_0.Z * ___xmm_3fe00000000000003fe0000000000000;
      auVar2._8_4_ = SUB84(dVar9,0);
      auVar2._0_8_ = PaperAxisY.field0_0x0._s_0.X * dVar13 * ___xmm_3fe00000000000003fe0000000000000
      ;
      auVar2._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])&param_1->field0_0x0 = auVar2;
      (param_1->field0_0x0)._s_0.Z = dVar10;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (param_4->field0_0x0)._s_0.Y = (double)uVar5;
      (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar9 = dVar13 * PaperAxisY.field0_0x0._s_0.Y;
      dVar12 = dVar4 * PaperAxisX.field0_0x0._s_0.Y;
      dVar11 = dVar4 * PaperAxisX.field0_0x0._s_0.Z;
      dVar10 = dVar13 * PaperAxisY.field0_0x0._s_0.Z;
      (param_2->field0_0x0)._s_0.X =
           dVar4 * PaperAxisX.field0_0x0._s_0.X * dVar3 -
           dVar13 * PaperAxisY.field0_0x0._s_0.X * dVar3;
      (param_2->field0_0x0)._s_0.Y = dVar12 * dVar3 - dVar9 * dVar3;
      (param_2->field0_0x0)._s_0.Z = dVar11 * dVar3 - dVar10 * dVar3;
      dVar9 = dVar4 * PaperAxisX.field0_0x0._s_0.Z * __real_bfe0000000000000 -
              dVar13 * PaperAxisY.field0_0x0._s_0.Z * dVar3;
      dVar10 = dVar4 * PaperAxisX.field0_0x0._s_0.Y * __real_bfe0000000000000 -
               dVar13 * PaperAxisY.field0_0x0._s_0.Y * dVar3;
      dVar3 = dVar4 * PaperAxisX.field0_0x0._s_0.X * __real_bfe0000000000000 -
              dVar13 * PaperAxisY.field0_0x0._s_0.X * dVar3;
      goto LAB_14ad00f67;
    }
    if ((uVar1 == '\x02') || (uVar1 == '\x03')) {
      dVar4 = (double)fVar6;
      dVar12 = (double)fVar14;
      dVar10 = dVar4 * PaperAxisY.field0_0x0._s_0.Z * __real_3fe0000000000000;
      dVar11 = dVar4 * PaperAxisY.field0_0x0._s_0.Y * __real_3fe0000000000000;
      dVar3 = dVar12 * PaperAxisX.field0_0x0._s_0.Y * __real_3fe0000000000000;
      dVar9 = dVar12 * PaperAxisX.field0_0x0._s_0.Z * __real_3fe0000000000000;
      (param_1->field0_0x0)._s_0.X =
           dVar4 * PaperAxisY.field0_0x0._s_0.X * __real_3fe0000000000000 -
           dVar12 * PaperAxisX.field0_0x0._s_0.X * __real_3fe0000000000000;
      (param_1->field0_0x0)._s_0.Y = dVar11 - dVar3;
      (param_1->field0_0x0)._s_0.Z = dVar10 - dVar9;
      dVar10 = (double)(fVar14 * __real_3f000000);
      dVar9 = PaperAxisX.field0_0x0._s_0.Y * dVar10;
      dVar3 = dVar10 * PaperAxisX.field0_0x0._s_0.Z;
      (param_4->field0_0x0)._s_0.X = PaperAxisX.field0_0x0._s_0.X * dVar10;
      (param_4->field0_0x0)._s_0.Y = dVar9;
      (param_4->field0_0x0)._s_0.Z = dVar3;
      dVar3 = dVar12 * PaperAxisX.field0_0x0._s_0.Z;
      dVar9 = PaperAxisX.field0_0x0._s_0.Y * dVar12;
      (param_2->field0_0x0)._s_0.X = PaperAxisX.field0_0x0._s_0.X * dVar12;
      (param_2->field0_0x0)._s_0.Y = dVar9;
      (param_2->field0_0x0)._s_0.Z = dVar3;
      dVar9 = dVar4 * PaperAxisY.field0_0x0._s_0.Z * __real_bfe0000000000000;
      dVar10 = dVar4 * PaperAxisY.field0_0x0._s_0.Y * __real_bfe0000000000000;
      dVar3 = dVar4 * PaperAxisY.field0_0x0._s_0.X * __real_bfe0000000000000;
      goto LAB_14ad00f67;
    }
  }
  dVar4 = (double)fVar6;
  dVar12 = (double)fVar14;
  dVar10 = dVar4 * PaperAxisY.field0_0x0._s_0.Z * __real_3fe0000000000000;
  dVar11 = dVar4 * PaperAxisY.field0_0x0._s_0.Y * __real_3fe0000000000000;
  dVar3 = dVar12 * PaperAxisX.field0_0x0._s_0.Y * __real_3fe0000000000000;
  dVar9 = dVar12 * PaperAxisX.field0_0x0._s_0.Z * __real_3fe0000000000000;
  (param_1->field0_0x0)._s_0.X =
       dVar4 * PaperAxisY.field0_0x0._s_0.X * __real_3fe0000000000000 -
       dVar12 * PaperAxisX.field0_0x0._s_0.X * __real_3fe0000000000000;
  (param_1->field0_0x0)._s_0.Y = dVar11 - dVar3;
  (param_1->field0_0x0)._s_0.Z = dVar10 - dVar9;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (double)uVar5;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar3 = dVar12 * PaperAxisX.field0_0x0._s_0.Z;
  dVar9 = PaperAxisX.field0_0x0._s_0.Y * dVar12;
  (param_2->field0_0x0)._s_0.X = PaperAxisX.field0_0x0._s_0.X * dVar12;
  (param_2->field0_0x0)._s_0.Y = dVar9;
  (param_2->field0_0x0)._s_0.Z = dVar3;
  uVar7 = (uint)__xmm_80000000000000008000000000000000;
  uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar9 = (double)CONCAT44((uint)((ulonglong)(dVar4 * PaperAxisY.field0_0x0._s_0.Z) >> 0x20) ^ uVar8
                           ,SUB84(dVar4 * PaperAxisY.field0_0x0._s_0.Z,0) ^ uVar7);
  dVar10 = (double)CONCAT44((uint)((ulonglong)(dVar4 * PaperAxisY.field0_0x0._s_0.Y) >> 0x20) ^
                            uVar8,SUB84(dVar4 * PaperAxisY.field0_0x0._s_0.Y,0) ^ uVar7);
  dVar3 = (double)CONCAT44((uint)((ulonglong)(dVar4 * PaperAxisY.field0_0x0._s_0.X) >> 0x20) ^ uVar8
                           ,SUB84(dVar4 * PaperAxisY.field0_0x0._s_0.X,0) ^ uVar7);
LAB_14ad00f67:
  (param_3->field0_0x0)._s_0.X = dVar3;
  (param_3->field0_0x0)._s_0.Y = dVar10;
  (param_3->field0_0x0)._s_0.Z = dVar9;
  return;
}

// InitializeNewEmptyTileMap @ 14ad02bb0

void __thiscall UPaperTileMap::InitializeNewEmptyTileMap(UPaperTileMap *this,UPaperTileSet *param_1)

{
  TIntPoint<int>_u_0_s_0 TVar1;
  UPaperTileSet *local_res10 [3];
  
  if (param_1 != (UPaperTileSet *)0x0) {
    TVar1 = (param_1->TileSize).field0_0x0._s_0;
    this->TileWidth = TVar1.X;
    this->TileHeight = TVar1.Y;
    local_res10[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FSoftObjectPtr::operator=(&(this->SelectedTileSet).SoftObjectPtr,(FObjectPtr)local_res10);
  }
  AddNewLayer(this,-1);
  return;
}

// IsLayerNameInUse @ 14ad03440

bool __thiscall UPaperTileMap::IsLayerNameInUse(UPaperTileMap *this,FText *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->TileLayers).AllocatorInstance.Data;
  iVar2 = (this->TileLayers).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->TileLayers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPaperTileLayer>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    bVar3 = FText::EqualToCaseIgnored((FText *)(*(longlong *)pFVar4 + 0x28),param_1);
    if (bVar3) {
      return true;
    }
    pFVar4 = pFVar4 + 8;
  }
  return false;
}

// PostInitProperties @ 14ad05410

void __thiscall UPaperTileMap::PostInitProperties(UPaperTileMap *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UPaperTileMap *pUStack_28;
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
      (UPaperTileMap **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
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
  *(UPaperTileMap **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PostLoad @ 14ad05ab0

void __thiscall UPaperTileMap::PostLoad(UPaperTileMap *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UPaperTileLayer *this_00;
  float fVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  byte local_res10;
  byte local_res11;
  byte local_res12;
  byte local_res13;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  
  UObject::PostLoad((UObject *)this);
  _local_48 = (FLinearColor_u_0)FPaperCustomVersion::GUID;
  iVar5 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,(FGuid *)local_48);
  fVar4 = __real_3b808081;
  pFVar6 = (this->TileLayers).AllocatorInstance.Data;
  iVar2 = (this->TileLayers).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->TileLayers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPaperTileLayer>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    this_00 = *(UPaperTileLayer **)pFVar6;
    UObject::ConditionalPostLoad((UObject *)this_00);
    iVar3 = this->MapWidth;
    if ((this_00->LayerWidth != iVar3) || (this_00->LayerHeight != this->MapHeight)) {
      this_00->LayerHeight = this->MapHeight;
      this_00->LayerWidth = iVar3;
      UPaperTileLayer::ReallocateAndCopyMap(this_00);
    }
    if (iVar5 < 0x11) {
      _local_48 = (this_00->LayerColor).field0_0x0;
      FLinearColor::ToFColorSRGB((FLinearColor *)local_48);
      local_48._4_4_ = (float)local_res11 * fVar4;
      local_48._0_4_ = (float)local_res12 * fVar4;
      fStack_40 = (float)local_res10 * fVar4;
      fStack_3c = (float)local_res13 * fVar4;
      (this_00->LayerColor).field0_0x0._s_0.R = (float)local_res12 * fVar4;
      (this_00->LayerColor).field0_0x0._s_0.G = (float)local_res11 * fVar4;
      (this_00->LayerColor).field0_0x0._s_0.B = (float)local_res10 * fVar4;
      (this_00->LayerColor).field0_0x0._s_0.A = (float)local_res13 * fVar4;
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// RebuildCollision @ 14ad06a20

void __thiscall UPaperTileMap::RebuildCollision(UPaperTileMap *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ad06a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))();
  return;
}

// ResizeMap @ 14ad08cb0

void __thiscall UPaperTileMap::ResizeMap(UPaperTileMap *this,int param_1,int param_2,bool param_3)

{
  UPaperTileLayer *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  if (((param_3) || (param_1 != this->MapWidth)) || (param_2 != this->MapHeight)) {
    iVar4 = 1;
    if (1 < param_1) {
      iVar4 = param_1;
    }
    this->MapWidth = iVar4;
    iVar4 = 1;
    if (1 < param_2) {
      iVar4 = param_2;
    }
    uVar5 = 0;
    this->MapHeight = iVar4;
    if (0 < (this->TileLayers).ArrayNum) {
      lVar6 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->TileLayers).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = this->MapHeight;
        this_00 = *(UPaperTileLayer **)((this->TileLayers).AllocatorInstance.Data + lVar6);
        if ((this_00->LayerWidth != this->MapWidth) || (this_00->LayerHeight != iVar4)) {
          this_00->LayerWidth = this->MapWidth;
          this_00->LayerHeight = iVar4;
          UPaperTileLayer::ReallocateAndCopyMap(this_00);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < (this->TileLayers).ArrayNum);
    }
  }
  return;
}

// Serialize @ 14ad09d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPaperTileMap::Serialize(UPaperTileMap *this,FArchive *param_1)

{
  FString local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPaperCustomVersion::GUID);
  if ((this->SpriteCollisionDomain).Value == '\x01') {
    if (2 < (byte)LogPaper2D._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPaper2D);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (this->SpriteCollisionDomain).Value = '\x02';
  }
  return;
}

// Serialize @ 14ad09dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPaperTileMap::Serialize(UPaperTileMap *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res8;
  FString local_18;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FPaperCustomVersion::GUID);
  if ((this->SpriteCollisionDomain).Value == '\x01') {
    if (2 < (byte)LogPaper2D._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPaper2D);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (this->SpriteCollisionDomain).Value = '\x02';
  }
  return;
}

// SetCollisionDomain @ 14ad0a080

void __thiscall UPaperTileMap::SetCollisionDomain(UPaperTileMap *this,Type param_1)

{
  (this->SpriteCollisionDomain).Value = (uchar)param_1;
                    /* WARNING: Could not recover jumptable at 0x00014ad0a089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))();
  return;
}

// SetCollisionThickness @ 14ad0a0a0

void __thiscall UPaperTileMap::SetCollisionThickness(UPaperTileMap *this,float param_1)

{
  this->CollisionThickness = param_1;
  return;
}

// StaticRegisterNativesUPaperTileMap @ 14ad0e130

void __cdecl UPaperTileMap::StaticRegisterNativesUPaperTileMap(void)

{
  return;
}

// UpdateBodySetup @ 14ad0eee0

void __thiscall UPaperTileMap::UpdateBodySetup(UPaperTileMap *this)

{
  TObjectPtr<UBodySetup> *pTVar1;
  float fVar2;
  uchar uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UBodySetup *pUVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar3 = (this->SpriteCollisionDomain).Value;
  pTVar1 = &this->BodySetup;
  if (uVar3 == '\0') {
    (pTVar1->field0_0x0).DebugPtr = (UBodySetup *)0x0;
    return;
  }
  if (uVar3 == '\x02') {
    pUVar7 = NewObject<UBodySetup>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UBodySetup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (pTVar1->field0_0x0).DebugPtr = pUVar7;
  }
  uVar9 = 0;
  *(undefined1 *)((longlong)&((pTVar1->field0_0x0).DebugPtr)->_padding_ + 1) = 2;
  if (0 < (this->TileLayers).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->TileLayers).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      fVar2 = this->SeparationPerLayer;
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UPaperTileLayer::AugmentBodySetup
                (*(UPaperTileLayer **)((this->TileLayers).AllocatorInstance.Data + lVar8),
                 (pTVar1->field0_0x0).DebugPtr,(float)(int)uVar9 * fVar2);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar9 < (this->TileLayers).ArrayNum);
  }
  (**(code **)(((this->BodySetup).field0_0x0.DebugPtr)->_padding_ + 0x2d0))();
                    /* WARNING: Could not recover jumptable at 0x00014ad0effb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->BodySetup).field0_0x0.DebugPtr)->_padding_ + 0x2b0))();
  return;
}

// UsesTileSet @ 14ad0f620

bool __thiscall UPaperTileMap::UsesTileSet(UPaperTileMap *this,UPaperTileSet *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  UPaperTileSet *pUVar5;
  longlong *plVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->TileLayers).AllocatorInstance.Data;
  iVar2 = (this->TileLayers).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  do {
    if ((this->TileLayers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPaperTileLayer>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return false;
    }
    lVar4 = *(longlong *)pFVar8;
    iVar3 = *(int *)(lVar4 + 0x70);
    plVar6 = *(longlong **)(lVar4 + 0x68);
    plVar7 = plVar6 + (longlong)iVar3 * 2;
    while( true ) {
      if (*(int *)(lVar4 + 0x70) != iVar3) {
        `TCheckedPointerIterator<FPaperTileInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (plVar6 == plVar7) break;
      pUVar5 = (UPaperTileSet *)*plVar6;
      if (pUVar5 == (UPaperTileSet *)0x0) {
        bVar9 = param_1 == (UPaperTileSet *)0x0;
      }
      else {
        bVar9 = pUVar5 == param_1;
      }
      if (((bVar9) && (pUVar5 != (UPaperTileSet *)0x0)) && ((int)plVar6[1] != -1)) {
        return true;
      }
      plVar6 = plVar6 + 2;
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

