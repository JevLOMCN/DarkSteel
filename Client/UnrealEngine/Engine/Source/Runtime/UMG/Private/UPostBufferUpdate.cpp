// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 9

// StaticClass @ 14696dc30

UClass * __cdecl UPostBufferUpdate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPostBufferUpdate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"PostBufferUpdate",
               &Z_Registration_Info_UClass_UPostBufferUpdate.InnerSingleton,
               StaticRegisterNativesUPostBufferUpdate,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPostBufferUpdate>,
               InternalVTableHelperCtorCaller<UPostBufferUpdate>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPostBufferUpdate.InnerSingleton;
}

// UPostBufferUpdate @ 14698c6b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPostBufferUpdate * __thiscall
UPostBufferUpdate::UPostBufferUpdate(UPostBufferUpdate *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->BuffersToUpdate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuffersToUpdate).ArrayNum = 0;
  (this->BuffersToUpdate).ArrayMax = 0;
  (this->UpdateBufferInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UpdateBufferInfos).ArrayNum = 0;
  (this->UpdateBufferInfos).ArrayMax = 0;
  (this->MyPostBufferUpdate).Object = (SPostBufferUpdate *)0x0;
  (this->MyPostBufferUpdate).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UPostBufferUpdate @ 14698c710

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPostBufferUpdate * __thiscall UPostBufferUpdate::UPostBufferUpdate(UPostBufferUpdate *this)

{
  int *piVar1;
  TArray<FSlatePostBufferUpdateInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FObjectInitializer *pFVar3;
  
  pFVar3 = FObjectInitializer::Get();
  UWidget::UWidget((UWidget *)this,pFVar3);
  this->bUpdateOnlyPaintArea = true;
  this->bPerformDefaultPostBufferUpdate = false;
  pTVar2 = &this->UpdateBufferInfos;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  piVar1 = &(this->UpdateBufferInfos).ArrayMax;
  *piVar1 = 0;
  (this->BuffersToUpdate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MyPostBufferUpdate).Object = (SPostBufferUpdate *)0x0;
  (this->MyPostBufferUpdate).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BuffersToUpdate).ArrayNum = 0;
  (this->BuffersToUpdate).ArrayMax = 0;
  (this->UpdateBufferInfos).ArrayNum = 0;
  if (*piVar1 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,0,*piVar1,&pTVar2->AllocatorInstance,0,piVar1);
  ConstructItems<FSlatePostBufferUpdateInfo,FSlatePostBufferUpdateInfo,int>
            ((pTVar2->AllocatorInstance).Data,(FSlatePostBufferUpdateInfo *)0x0,0);
  return this;
}

// ~UPostBufferUpdate @ 146993c20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPostBufferUpdate::~UPostBufferUpdate(UPostBufferUpdate *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyPostBufferUpdate).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->UpdateBufferInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BuffersToUpdate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetPrivateStaticClass @ 1469d50b0

UClass * __cdecl UPostBufferUpdate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPostBufferUpdate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"PostBufferUpdate",
               &Z_Registration_Info_UClass_UPostBufferUpdate.InnerSingleton,
               StaticRegisterNativesUPostBufferUpdate,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPostBufferUpdate>,
               InternalVTableHelperCtorCaller<UPostBufferUpdate>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPostBufferUpdate.InnerSingleton;
}

// RebuildWidget @ 146a02cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<SWidget,1> * __thiscall
UPostBufferUpdate::RebuildWidget
          (UPostBufferUpdate *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TSharedPtr<SPostBufferUpdate,1> *pTVar2;
  int iVar3;
  UObject *pUVar4;
  SPostBufferUpdate *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  FArguments *pFVar13;
  TSharedRef<SWidget,1> *pTVar14;
  TArrayView<ESlatePostRT,int> *pTVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auStackY_3f8 [32];
  undefined1 local_3a8 [8];
  ForAnyElementType local_3a0;
  undefined8 local_398;
  T0RequiredArgs local_390 [4];
  FLLMScope local_38c;
  TSlateDecl<SPostBufferUpdate,RequiredArgs::T0RequiredArgs> local_388;
  SPostBufferUpdate *local_370;
  FSharedReferencer<1> local_368;
  TPairInitializer<ESlatePostRT_const_&,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_const_&>
  local_360;
  FMemScope local_350;
  FScriptContainerElement *local_348;
  undefined1 *local_340;
  undefined1 local_338 [8];
  TReferenceControllerBase<1> *local_330;
  FScriptContainerElement *local_328;
  int iStack_320;
  undefined4 uStack_31c;
  undefined1 local_318 [64];
  undefined8 local_2d8;
  int local_2d0 [2];
  TArrayView<ESlatePostRT,int> local_2c8;
  TArrayView<ESlatePostRT,int> local_2b8;
  undefined1 local_2a8 [16];
  FArguments local_298;
  TSparseArray<TSparseSetElement<TTuple<ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  ForElementType<FSetElementId> local_60;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  pFVar13 = SPostBufferUpdate::FArguments::FArguments(&local_298);
  pFVar13->_bUsePaintGeometry = true;
  FLLMScope::FLLMScope(&local_38c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_360._4_8_ = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_350,(FName *)((longlong)&local_360.Key + 4),true);
  TSlateDecl<SPostBufferUpdate,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SPostBufferUpdate,RequiredArgs::T0RequiredArgs>
            (&local_388,"SPostBufferUpdate",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\PostBufferUpdate.cpp"
             ,0x1a,local_390);
  FMemScope::~FMemScope(&local_350);
  FLLMScope::~FLLMScope(&local_38c);
  pSVar5 = local_388._Widget.Object;
  if (local_388._Widget.Object == (SPostBufferUpdate *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar14;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_388._Widget.Object,(FSlateBaseNamedArgs *)pFVar13);
  SPostBufferUpdate::Construct(local_388._Widget.Object,pFVar13);
  if (local_388._Widget.Object == (SPostBufferUpdate *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar14;
    }
  }
  if (((local_388._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_388._Widget.Object)->_padding_ + 0x228))(local_388._Widget.Object);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_146a02e13;
  }
  bVar11 = 0x20;
LAB_146a02e13:
  *(byte *)&(local_388._Widget.Object)->_padding_ =
       (byte)(local_388._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_388._Widget.Object)->_padding_ =
       (byte)(local_388._Widget.Object)->_padding_ | bVar11;
  if (local_388._Widget.Object == (SPostBufferUpdate *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar14;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_388._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_388._Widget.Object == (SPostBufferUpdate *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar14;
    }
  }
  FVar8.ReferenceController = local_388._Widget.SharedReferenceCount.ReferenceController;
  local_388._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_388._Widget.Object = (SPostBufferUpdate *)0x0;
  if (pSVar5 == (SPostBufferUpdate *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar14;
    }
  }
  local_370 = pSVar5;
  local_368.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->MyPostBufferUpdate;
  if (pTVar2 != (TSharedPtr<SPostBufferUpdate,1> *)&local_370) {
    pTVar2->Object = pSVar5;
    local_370 = (SPostBufferUpdate *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyPostBufferUpdate).SharedReferenceCount,&local_368);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_368.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_298);
  iVar3 = (this->UpdateBufferInfos).ArrayNum;
  if (iVar3 == 0) {
    if (pTVar2->Object == (SPostBufferUpdate *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar7)();
        return pTVar14;
      }
    }
    pSVar5 = pTVar2->Object;
    pTVar15 = TArrayView<enum_ESlatePostRT,int>::
              TArrayView<enum_ESlatePostRT,int><TArray<enum_ESlatePostRT,TSizedDefaultAllocator<32>_>_&,TArray<enum_ESlatePostRT,TSizedDefaultAllocator<32>_>_>
                        (local_2a8,&this->BuffersToUpdate);
    local_2b8.DataPtr = pTVar15->DataPtr;
    local_2b8.ArrayNum = pTVar15->ArrayNum;
    local_2b8._12_4_ = *(undefined4 *)&pTVar15->field_0xc;
    SPostBufferUpdate::SetBuffersToUpdate(pSVar5,&local_2b8);
  }
  else {
    pFVar18 = (this->UpdateBufferInfos).AllocatorInstance.Data;
    pFVar17 = pFVar18 + (longlong)iVar3 * 0x10;
    local_3a0.Data = (FScriptContainerElement *)0x0;
    local_398 = 0;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_98._32_8_ = 0;
    local_98._40_4_ = 0;
    local_98._44_4_ = 0x80;
    local_98._48_4_ = 0xffffffff;
    local_98._52_4_ = 0;
    local_60.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    while( true ) {
      if ((this->UpdateBufferInfos).ArrayNum != iVar3) {
        local_3a8[0] = 0;
        `TCheckedPointerIterator<FSlatePostBufferUpdateInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_3a8);
      }
      if (pFVar18 == pFVar17) break;
      if ((local_3a0.Data <= pFVar18) && (pFVar18 < local_3a0.Data + local_398._4_4_)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar7)();
          return pTVar14;
        }
      }
      if ((int)local_398 == local_398._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_3a0,(int *)((longlong)&local_398 + 4));
        local_398 = CONCAT44(local_398._4_4_,iVar12);
      }
      lVar16 = (longlong)(int)local_398;
      local_398 = CONCAT44(local_398._4_4_,(int)local_398 + 1);
      local_3a0.Data[lVar16] = *pFVar18;
      pUVar4 = *(UObject **)(pFVar18 + 8);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar4 != (UObject *)0x0) goto LAB_146a0306e;
      }
      else if (pUVar4 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar4);
LAB_146a0306e:
        (**(code **)(*(longlong *)pUVar4 + 0x2b0))(pUVar4,local_338);
        local_340 = local_338;
        local_348 = pFVar18;
        TSet<TTuple<enum_ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<enum_ESlatePostRT_const_&,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_const_&>_>
                  (&local_98,&local_360,(bool *)&local_348);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_330);
      }
      pFVar18 = pFVar18 + 0x10;
    }
    if ((this->MyPostBufferUpdate).Object == (SPostBufferUpdate *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar7)();
        return pTVar14;
      }
    }
    iVar3 = (int)local_398;
    pSVar5 = (this->MyPostBufferUpdate).Object;
    local_328 = local_3a0.Data;
    if ((int)local_398 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar7)();
        return pTVar14;
      }
    }
    iStack_320 = iVar3;
    local_2c8._12_4_ = uStack_31c;
    local_2c8.ArrayNum = iVar3;
    local_2c8.DataPtr = (ESlatePostRT *)local_328;
    SPostBufferUpdate::SetBuffersToUpdate(pSVar5,&local_2c8);
    if ((this->MyPostBufferUpdate).Object == (SPostBufferUpdate *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar7)();
        return pTVar14;
      }
    }
    pSVar5 = (this->MyPostBufferUpdate).Object;
    local_318._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_318._48_8_ = _UNK_150631d98;
    local_318._0_8_ = 0;
    local_318._8_8_ = 0;
    local_318._32_8_ = 0;
    local_2d8 = 0;
    local_2d0[0] = 0;
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)(local_318 + 0x38),local_2d0,&local_60,local_50);
    TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=(local_318,&local_98);
    SPostBufferUpdate::SetProcessorUpdaters
              (pSVar5,(TMap<ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>,0>_>
                       *)local_318);
    local_50 = 0;
    if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_60.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98);
    if (local_3a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.Data);
    }
  }
  if ((this->MyPostBufferUpdate).Object == (SPostBufferUpdate *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar14;
    }
  }
  pTVar6 = (this->MyPostBufferUpdate).SharedReferenceCount.ReferenceController;
  pSVar5 = (this->MyPostBufferUpdate).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar5 == (SPostBufferUpdate *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar14;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar5;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0ae10

void __thiscall UPostBufferUpdate::ReleaseSlateResources(UPostBufferUpdate *this,bool param_1)

{
  TSharedPtr<SPostBufferUpdate,1> *pTVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->MyPostBufferUpdate;
  if (pTVar1->Object != (SPostBufferUpdate *)0x0) {
    SPostBufferUpdate::ReleasePostBufferUpdater(pTVar1->Object);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<SPostBufferUpdate,1> *)&local_18) {
    pTVar1->Object = (SPostBufferUpdate *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyPostBufferUpdate).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// StaticRegisterNativesUPostBufferUpdate @ 146a1ecb0

void __cdecl UPostBufferUpdate::StaticRegisterNativesUPostBufferUpdate(void)

{
  return;
}

// SynchronizeProperties @ 146a238c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPostBufferUpdate::SynchronizeProperties(UPostBufferUpdate *this)

{
  TSharedPtr<SPostBufferUpdate,1> *this_00;
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  SPostBufferUpdate *pSVar5;
  TArrayView<ESlatePostRT,int> *pTVar6;
  longlong lVar7;
  TSharedPtr<FSlatePostProcessorUpdaterProxy,1> *pTVar8;
  TSharedPtr<FSlatePostProcessorUpdaterProxy,1> *pTVar9;
  undefined1 auStack_1a8 [32];
  TSharedPtr<FSlatePostProcessorUpdaterProxy,1> *local_188;
  FScriptContainerElement *local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined1 local_158 [8];
  ForAnyElementType local_150;
  int local_148;
  int iStack_144;
  TPairInitializer<ESlatePostRT_const_&,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_const_&>
  local_140;
  undefined1 *local_130;
  undefined1 local_128 [8];
  TReferenceControllerBase<1> *local_120;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [64];
  undefined8 local_c8;
  int local_c0 [2];
  TArrayView<ESlatePostRT,int> local_b8;
  TArrayView<ESlatePostRT,int> local_a8;
  undefined1 local_98 [16];
  TSparseArray<TSparseSetElement<TTuple<ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  ForElementType<FSetElementId> local_50;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = &this->MyPostBufferUpdate;
  if (this_00->Object != (SPostBufferUpdate *)0x0) {
    SPostBufferUpdate::SetUsePaintGeometry(this_00->Object,true);
    iVar1 = (this->UpdateBufferInfos).ArrayNum;
    if (iVar1 == 0) {
      pSVar5 = TSharedPtr<SPostBufferUpdate,1>::operator->(this_00);
      pTVar6 = TArrayView<enum_ESlatePostRT,int>::
               TArrayView<enum_ESlatePostRT,int><TArray<enum_ESlatePostRT,TSizedDefaultAllocator<32>_>_&,TArray<enum_ESlatePostRT,TSizedDefaultAllocator<32>_>_>
                         (local_98,&this->BuffersToUpdate);
      local_a8.DataPtr = pTVar6->DataPtr;
      local_a8.ArrayNum = pTVar6->ArrayNum;
      local_a8._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
      SPostBufferUpdate::SetBuffersToUpdate(pSVar5,&local_a8);
    }
    else {
      pTVar8 = (TSharedPtr<FSlatePostProcessorUpdaterProxy,1> *)
               (this->UpdateBufferInfos).AllocatorInstance.Data;
      pTVar9 = pTVar8 + iVar1;
      local_150.Data = (FScriptContainerElement *)0x0;
      local_148 = 0;
      iStack_144 = 0;
      local_88._0_8_ = 0;
      local_88._8_8_ = 0;
      local_88._32_8_ = 0;
      local_88._40_4_ = 0;
      local_88._44_4_ = 0x80;
      local_88._48_4_ = 0xffffffff;
      local_88._52_4_ = 0;
      local_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_40 = 0;
      while( true ) {
        if ((this->UpdateBufferInfos).ArrayNum != iVar1) {
          local_158[0] = 0;
          `TCheckedPointerIterator<FSlatePostBufferUpdateInfo,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_158);
        }
        if (pTVar8 == pTVar9) break;
        if ((local_150.Data <= pTVar8) &&
           (pTVar8 < (TSharedPtr<FSlatePostProcessorUpdaterProxy,1> *)(local_150.Data + iStack_144))
           ) {
          local_170 = (longlong)local_148;
          local_168 = 1;
          local_180 = local_150.Data;
          local_188 = pTVar8;
          local_178 = (longlong)iStack_144;
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
        if (local_148 == iStack_144) {
          local_148 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x101,&local_150,&iStack_144);
        }
        lVar7 = (longlong)local_148;
        local_148 = local_148 + 1;
        local_150.Data[lVar7] = *(FScriptContainerElement *)&pTVar8->Object;
        pUVar2 = (UObject *)(pTVar8->SharedReferenceCount).ReferenceController;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar2 != (UObject *)0x0) goto LAB_146a23a63;
        }
        else if (pUVar2 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar2);
LAB_146a23a63:
          (**(code **)(*(longlong *)&pUVar2->field_0x0 + 0x2b0))(pUVar2,local_128);
          local_130 = local_128;
          local_140.Value = pTVar8;
          TSet<TTuple<enum_ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<enum_ESlatePostRT_const_&,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_const_&>_>
                    (&local_88,&local_140,(bool *)&local_140.Value);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_120);
        }
        pTVar8 = pTVar8 + 1;
      }
      if ((this_00->Object == (SPostBufferUpdate *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = local_148;
      pSVar5 = this_00->Object;
      local_118 = local_150.Data;
      if ((local_148 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_110 = iVar1;
      local_b8._12_4_ = uStack_10c;
      local_b8.ArrayNum = iVar1;
      local_b8.DataPtr = (ESlatePostRT *)local_118;
      SPostBufferUpdate::SetBuffersToUpdate(pSVar5,&local_b8);
      if ((this_00->Object == (SPostBufferUpdate *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pSVar5 = this_00->Object;
      local_108._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_108._48_8_ = _UNK_150631d98;
      local_108._0_8_ = 0;
      local_108._8_8_ = 0;
      local_108._32_8_ = 0;
      local_c8 = 0;
      local_c0[0] = 0;
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)(local_108 + 0x38),local_c0,&local_50,local_40);
      TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=(local_108,&local_88);
      SPostBufferUpdate::SetProcessorUpdaters
                (pSVar5,(TMap<ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>,0>_>
                         *)local_108);
      local_40 = 0;
      if (local_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_50.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88);
      if (local_150.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data);
      }
    }
  }
  return;
}

