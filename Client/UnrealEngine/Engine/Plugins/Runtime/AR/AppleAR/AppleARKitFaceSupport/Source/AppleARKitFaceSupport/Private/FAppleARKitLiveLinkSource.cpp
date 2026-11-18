// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 14

// FAppleARKitLiveLinkSource @ 14d2834e0

FAppleARKitLiveLinkSource * __thiscall
FAppleARKitLiveLinkSource::FAppleARKitLiveLinkSource
          (FAppleARKitLiveLinkSource *this,FAppleARKitLiveLinkConnectionSettings param_1)

{
  this->_padding_ = (longlong)&_vftable__for__IARKitBlendShapePublisher__;
  this->_padding_ = (longlong)&_vftable__for__ILiveLinkSource__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SourceGuid).A = 0;
  (this->SourceGuid).B = 0;
  (this->SourceGuid).C = 0;
  (this->SourceGuid).D = 0;
  *(undefined8 *)&this->BlendShapePerDeviceMap = 0;
  *(undefined8 *)&(this->BlendShapePerDeviceMap).field_0x8 = 0;
  *(undefined8 *)&(this->BlendShapePerDeviceMap).field_0x20 = 0;
  this->Client = (ILiveLinkClient *)0x0;
  this->LastFramePublished = 0;
  *(undefined4 *)&(this->BlendShapePerDeviceMap).field_0x28 = 0;
  *(undefined4 *)&(this->BlendShapePerDeviceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BlendShapePerDeviceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BlendShapePerDeviceMap).field_0x34 = 0;
  *(undefined8 *)&(this->BlendShapePerDeviceMap).field_0x40 = 0;
  *(undefined4 *)&(this->BlendShapePerDeviceMap).field_0x48 = 0;
  (this->RemoteListener).Ptr = (FAppleARKitLiveLinkRemoteListener *)0x0;
  (this->ConnectionSettings).Port = param_1.Port;
  return this;
}

// FAppleARKitLiveLinkSource @ 14d283560

FAppleARKitLiveLinkSource * __thiscall
FAppleARKitLiveLinkSource::FAppleARKitLiveLinkSource(FAppleARKitLiveLinkSource *this)

{
  this->_padding_ = (longlong)&_vftable__for__IARKitBlendShapePublisher__;
  this->_padding_ = (longlong)&_vftable__for__ILiveLinkSource__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Client = (ILiveLinkClient *)0x0;
  (this->SourceGuid).A = 0;
  (this->SourceGuid).B = 0;
  (this->SourceGuid).C = 0;
  (this->SourceGuid).D = 0;
  this->LastFramePublished = 0;
  *(undefined8 *)&this->BlendShapePerDeviceMap = 0;
  *(undefined8 *)&(this->BlendShapePerDeviceMap).field_0x8 = 0;
  *(undefined8 *)&(this->BlendShapePerDeviceMap).field_0x20 = 0;
  *(undefined4 *)&(this->BlendShapePerDeviceMap).field_0x28 = 0;
  *(undefined4 *)&(this->BlendShapePerDeviceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BlendShapePerDeviceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BlendShapePerDeviceMap).field_0x34 = 0;
  *(undefined8 *)&(this->BlendShapePerDeviceMap).field_0x40 = 0;
  *(undefined4 *)&(this->BlendShapePerDeviceMap).field_0x48 = 0;
  (this->RemoteListener).Ptr = (FAppleARKitLiveLinkRemoteListener *)0x0;
  (this->ConnectionSettings).Port = 0x2b67;
  return this;
}

// ~FAppleARKitLiveLinkSource @ 14d284220

void __thiscall
FAppleARKitLiveLinkSource::~FAppleARKitLiveLinkSource(FAppleARKitLiveLinkSource *this)

{
  int *piVar1;
  int iVar2;
  FAppleARKitLiveLinkRemoteListener *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&_vftable__for__IARKitBlendShapePublisher__;
  this->_padding_ = (longlong)&_vftable__for__ILiveLinkSource__;
  pFVar3 = (this->RemoteListener).Ptr;
  if (pFVar3 != (FAppleARKitLiveLinkRemoteListener *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3,1);
  }
  *(undefined4 *)&(this->BlendShapePerDeviceMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->BlendShapePerDeviceMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BlendShapePerDeviceMap);
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  this->_padding_ = (longlong)&___7ILiveLinkSource__6B_;
  return;
}

// GetSourceMachineName @ 14d287cd0

FText * __thiscall
FAppleARKitLiveLinkSource::GetSourceMachineName
          (FAppleARKitLiveLinkSource *this,FText *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FText local_18;
  
  FText::FText(&local_18);
  pwVar1 = FWindowsPlatformProcess::ComputerName();
  FText::FromString(__return_storage_ptr__,pwVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetSourceStatus @ 14d287d20

FText * __thiscall
FAppleARKitLiveLinkSource::GetSourceStatus
          (FAppleARKitLiveLinkSource *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"AppleARKitLiveLink",L"AppleARKitLiveLinkStatus",L"Active");
  return __return_storage_ptr__;
}

// GetSourceType @ 14d287da0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FAppleARKitLiveLinkSource::GetSourceType
          (FAppleARKitLiveLinkSource *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_a8;
  FTextFormat local_98;
  TSharedPtr<FCulture,1> local_88;
  FFormatArgumentValue local_78;
  FText local_58;
  FNumberFormattingOptions local_48;
  FText local_30;
  FTextFormat local_20;
  
  FNumberFormattingOptions::FNumberFormattingOptions(&local_48);
  local_48.UseGrouping = false;
  local_88.Object = (FCulture *)0x0;
  local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar4 = FText::AsNumber(&local_30,*(int *)&(this->RemoteListener).Ptr,&local_48,&local_88);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"AppleARKitLiveLink",L"AppleARKitLiveLinkSourceType",
                      L"ARKit Port: {0}");
  pFVar6 = FTextFormat::FTextFormat(&local_20,pFVar5,Default);
  local_78.Type = Text;
  FText::FText((FText *)&local_78.TextValue,pFVar4);
  if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_a8.AllocatorInstance,1,&local_a8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_a8.AllocatorInstance.Data,&local_78,1);
  local_98.TextFormatData.Object = (pFVar6->TextFormatData).Object;
  local_98.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar6->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_98.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(__return_storage_ptr__,&local_98,&local_a8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_78.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar6->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (pFVar4->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// InitializeRemoteListener @ 14d288620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAppleARKitLiveLinkSource::InitializeRemoteListener(FAppleARKitLiveLinkSource *this)

{
  TUniquePtr<FAppleARKitLiveLinkRemoteListener,TDefaultDelete<FAppleARKitLiveLinkRemoteListener>_>
  *pTVar1;
  FAppleARKitLiveLinkRemoteListener *pFVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  FTickableGameObject FVar6;
  longlong lVar7;
  FTickableGameObject FVar8;
  FTickableGameObject FVar9;
  FTickableGameObject FVar10;
  bool bVar11;
  uint uStackX_c;
  FTickableGameObject local_38 [2];
  
  FVar8 = (FTickableGameObject)0x0;
  FVar6 = (FTickableGameObject)this->_padding_;
  FVar9 = FVar6;
  FVar10 = FVar8;
  if (FVar6 != (FTickableGameObject)0x0) {
    iVar4 = *(int *)((longlong)FVar6 + 8);
    do {
      FVar9 = FVar8;
      FVar10 = (FTickableGameObject)0x0;
      if (iVar4 == 0) goto LAB_14d288675;
      LOCK();
      iVar5 = *(int *)((longlong)FVar6 + 8);
      bVar11 = iVar4 == iVar5;
      if (bVar11) {
        *(int *)((longlong)FVar6 + 8) = iVar4 + 1;
        iVar5 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar5;
    } while (!bVar11);
    FVar9 = FVar6;
    FVar10 = (FTickableGameObject)this->_padding_;
  }
LAB_14d288675:
  FVar6 = (FTickableGameObject)((longlong)FVar10 + 0x10);
  if (FVar10 == (FTickableGameObject)0x0) {
    FVar6 = FVar8;
  }
  if ((FVar6 != (FTickableGameObject)&this->_padding_) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (FVar10 == (FTickableGameObject)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FVar6 = (FTickableGameObject)::operator_new(0x80);
  if (FVar6 == (FTickableGameObject)0x0) {
    FVar10 = (FTickableGameObject)((ulonglong)uStackX_c << 0x20);
    FVar6 = FVar8;
  }
  else {
    if (FVar9 != (FTickableGameObject)0x0) {
      LOCK();
      *(int *)((longlong)FVar9 + 8) = *(int *)((longlong)FVar9 + 8) + 1;
      UNLOCK();
    }
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)FVar6,NewObject);
    *(FTickableGameObject *)((longlong)FVar6 + 8) = (FTickableGameObject)0x0;
    *(undefined ***)FVar6 = &___7FAppleARKitLiveLinkRemoteListener__6B_;
    *(int *)((longlong)FVar6 + 0x18) = 0;
    *(FTickableGameObject *)((longlong)FVar6 + 0x10) = (FTickableGameObject)0x0;
    *(int *)((longlong)FVar6 + 0x1c) = 0;
    *(FTickableGameObject *)((longlong)FVar6 + 0x20) = (FTickableGameObject)0x0;
    *(FTickableGameObject *)((longlong)FVar6 + 0x28) = (FTickableGameObject)0x0;
    *(FTickableGameObject *)((longlong)FVar6 + 0x40) = (FTickableGameObject)0x0;
    *(undefined4 *)((longlong)FVar6 + 0x48) = 0;
    *(undefined4 *)((longlong)FVar6 + 0x4c) = 0x80;
    *(undefined4 *)((longlong)FVar6 + 0x50) = 0xffffffff;
    *(undefined4 *)((longlong)FVar6 + 0x54) = 0;
    *(FTickableGameObject *)((longlong)FVar6 + 0x60) = (FTickableGameObject)0x0;
    *(undefined4 *)((longlong)FVar6 + 0x68) = 0;
    *(FTickableGameObject *)((longlong)FVar6 + 0x70) = FVar10;
    *(FTickableGameObject *)((longlong)FVar6 + 0x78) = FVar9;
    if (FVar9 != (FTickableGameObject)0x0) {
      LOCK();
      *(int *)((longlong)FVar9 + 0xc) = *(int *)((longlong)FVar9 + 0xc) + 1;
      UNLOCK();
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0x506,(ForAnyElementType *)((longlong)FVar6 + 0x10),
               (int *)((longlong)FVar6 + 0x18),(int *)((longlong)FVar6 + 0x1c));
    FVar10 = FVar9;
    FVar8 = FVar6;
    FVar6 = (FTickableGameObject)0x1;
  }
  if (FVar6 != (FTickableGameObject)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar10);
  }
  pTVar1 = &this->RemoteListener;
  if ((FTickableGameObject *)pTVar1 == local_38) {
    if (FVar8 == (FTickableGameObject)0x0) goto LAB_14d288818;
    lVar7 = *(longlong *)FVar8;
  }
  else {
    FVar6 = (FTickableGameObject)pTVar1->Ptr;
    pTVar1->Ptr = (FAppleARKitLiveLinkRemoteListener *)FVar8;
    if (FVar6 == (FTickableGameObject)0x0) goto LAB_14d288818;
    lVar7 = *(longlong *)FVar6;
    FVar8 = FVar6;
  }
  (**(code **)(lVar7 + 0x28))(FVar8,1);
LAB_14d288818:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar9);
  bVar11 = FAppleARKitLiveLinkRemoteListener::InitReceiveSocket
                     (pTVar1->Ptr,(this->ConnectionSettings).Port);
  if (!bVar11) {
    pFVar2 = pTVar1->Ptr;
    if (pFVar2 != (FAppleARKitLiveLinkRemoteListener *)0x0) {
      pTVar1->Ptr = (FAppleARKitLiveLinkRemoteListener *)0x0;
      (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
    }
    if (2 < (byte)LogAppleARKitFace._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAppleARKitFace);
    }
  }
  return;
}

// InitializeSettings @ 14d288890

void __thiscall
FAppleARKitLiveLinkSource::InitializeSettings
          (FAppleARKitLiveLinkSource *this,ULiveLinkSourceSettings *param_1)

{
  UPackage *pUVar1;
  UClass *pUVar2;
  
  if (Z_Registration_Info_UScriptStruct_FAppleARKitLiveLinkConnectionSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleARKitFaceSupport();
    Z_Registration_Info_UScriptStruct_FAppleARKitLiveLinkConnectionSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAppleARKitLiveLinkConnectionSettings,
                         (UObject *)pUVar1,L"AppleARKitLiveLinkConnectionSettings");
  }
  UScriptStruct::ExportText
            (Z_Registration_Info_UScriptStruct_FAppleARKitLiveLinkConnectionSettings.OuterSingleton,
             &param_1->ConnectionString,&this->RemoteListener,(void *)0x0,(UObject *)0x0,0,
             (UObject *)0x0,true);
  pUVar2 = UAppleARKitLiveLinkSourceFactory::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (param_1->Factory).Class.field0_0x0.DebugPtr = pUVar2;
  return;
}

// IsSourceStillValid @ 14d288990

bool __thiscall FAppleARKitLiveLinkSource::IsSourceStillValid(FAppleARKitLiveLinkSource *this)

{
  return this->_padding_ != 0;
}

// PublishBlendShapes @ 14d28a190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAppleARKitLiveLinkSource::PublishBlendShapes
          (FAppleARKitLiveLinkSource *this,FName param_1,FQualifiedFrameTime *param_2,
          TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
          *param_3,FName param_4)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  FName FVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FFrameRate FVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_FaceAR_Local_PublishLiveLink> FVar11;
  UEnum *pUVar12;
  TTuple<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData> *pTVar13;
  UScriptStruct *pUVar14;
  double *pdVar15;
  longlong lVar16;
  undefined1 *puVar17;
  FNameEntryId FVar18;
  uint uVar19;
  ulonglong uVar20;
  FColor_u_0 local_res8 [2];
  undefined4 local_c8 [2];
  FName local_c0;
  byte local_b8;
  LARGE_INTEGER local_b0;
  FName local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  FName local_90;
  LARGE_INTEGER local_88;
  double *local_80;
  FStructOnScope local_78;
  FName local_50 [5];
  
  FVar11 = StatPtr_STAT_FaceAR_Local_PublishLiveLink;
  if (StatPtr_STAT_FaceAR_Local_PublishLiveLink ==
      (FThreadSafeStaticStat<FStat_STAT_FaceAR_Local_PublishLiveLink>)0x0) {
    pFVar10 = ::FName::FName(local_50,"STAT_FaceAR_Local_PublishLiveLink");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_FaceAR_Local_PublishLiveLink>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_Local_PublishLiveLink,
                        *pFVar10,L"Publish Local LiveLink","STATGROUP_FaceAR","STATCAT_Advanced",
                        L"Face AR",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  local_b8 = 0;
  FVar3 = *(FName *)FVar11;
  FVar18 = FVar3.ComparisonIndex.Value;
  uVar19 = FVar3.Number;
  if ((FVar18.Value != 0) || (uVar19 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      local_b8 = local_b8 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar18.Value;
        local_a8.Number = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKitFaceSupport\\Source\\AppleARKitFaceSupport\\Private\\AppleARKitLiveLinkSource.cpp"
                   ,0xc1);
        local_b8 = local_b8 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c0 = FVar3;
      local_b0.s.LowPart = FVar18.Value;
      local_b0.s.HighPart = uVar19;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      local_b8 = local_b8 | 4;
    }
  }
  if ((this->Client == (ILiveLinkClient *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Client != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKitFaceSupport\\Source\\AppleARKitFaceSupport\\Private\\AppleARKitLiveLinkSource.cpp"
                         ,0xc3,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKitFaceSupport\\Source\\AppleARKitFaceSupport\\Private\\AppleARKitLiveLinkSource.cpp"
                         ,0xc6,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar12 = StaticEnum<enum_EARFaceBlendShape>();
  if (pUVar12 == (UEnum *)0x0) goto LAB_14d28a6ae;
  local_a0._0_4_ = (this->SourceGuid).A;
  local_a0._4_4_ = (this->SourceGuid).B;
  uStack_98._0_4_ = (this->SourceGuid).C;
  uStack_98._4_4_ = (this->SourceGuid).D;
  local_90 = param_1;
  pTVar13 = TSet<TTuple<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData>,TDefaultMapHashableKeyFuncs<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData>,TDefaultMapHashableKeyFuncs<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData,0>,FDefaultSetAllocator>
                    *)&this->BlendShapePerDeviceMap,param_4);
  if ((pTVar13 != (TTuple<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData> *)0x0) &&
     (&pTVar13->field_0x8 != (undefined1 *)0x0)) {
    FVar3.ComparisonIndex.Value = *(uint *)&pTVar13->field_0x18;
    FVar3.Number = *(uint *)&pTVar13->field_0x1c;
    if (local_90 == FVar3) {
      if (((local_a0._4_4_ == *(int *)&pTVar13->field_0xc &&
           (int)uStack_98 == *(int *)&pTVar13->field_0x10) &&
          uStack_98._4_4_ == *(int *)&pTVar13->field_0x14) &&
          (int)local_a0 == *(int *)&pTVar13->field_0x8) goto LAB_14d28a3c3;
    }
    (**(code **)((longlong)*this->Client + 0xa0))();
  }
  UpdateStaticData(this,param_1,param_3,param_4);
LAB_14d28a3c3:
  pUVar14 = FLiveLinkBaseFrameData::StaticStruct();
  FStructOnScope::FStructOnScope(&local_78,(UStruct *)pUVar14);
  pdVar15 = (double *)(**(code **)(local_78._padding_ + 0x18))(&local_78);
  local_80 = pdVar15;
  lVar16 = (**(code **)(local_78._padding_ + 0x20))(&local_78);
  if (lVar16 != 0) {
    Z_Construct_UClass_UScriptStruct_NoRegister();
  }
  QueryPerformanceCounter(&local_b0);
  dVar6 = (double)CONCAT44(local_b0.s.HighPart,local_b0.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  QueryPerformanceCounter(&local_88);
  pFVar1 = (ForAnyElementType *)(pdVar15 + 0xe);
  dVar5 = (double)local_88.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  *pdVar15 = dVar6;
  pdVar15[1] = (dVar5 + __real_4170000000000000) - dVar6;
  FVar7 = param_2->Rate;
  piVar2 = (int *)((longlong)pdVar15 + 0x7c);
  *(FFrameTime *)(pdVar15 + 0xc) = param_2->Time;
  *(FFrameRate *)(pdVar15 + 0xd) = FVar7;
  if (*piVar2 < 0x3d) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x3d,pFVar1,*(int *)(pdVar15 + 0xf),piVar2);
  }
  uVar20 = 0;
LAB_14d28a4a0:
  if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
    puVar17 = &param_3->field_0x38;
    if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
      puVar17 = *(undefined1 **)&param_3->field_0x40;
    }
    iVar9 = *(int *)(puVar17 + ((ulonglong)(*(int *)&param_3->field_0x48 - 1) & uVar20 & 0xff) * 4);
    if (iVar9 != -1) {
      do {
        if (*(char *)(*(longlong *)param_3 + (longlong)iVar9 * 0x10) == (char)uVar20) {
          puVar17 = &param_3->field_0x38;
          if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
            puVar17 = *(undefined1 **)&param_3->field_0x40;
          }
          iVar9 = *(int *)(puVar17 +
                          ((ulonglong)(*(int *)&param_3->field_0x48 - 1) & uVar20 & 0xff) * 4);
          if (iVar9 == -1) goto LAB_14d28a54b;
          lVar16 = *(longlong *)param_3;
          goto LAB_14d28a530;
        }
        iVar9 = *(int *)(*(longlong *)param_3 + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  goto LAB_14d28a617;
  while (iVar9 = *(int *)(lVar16 + 8 + (longlong)iVar9 * 0x10), iVar9 != -1) {
LAB_14d28a530:
    if (*(char *)(lVar16 + (longlong)iVar9 * 0x10) == (char)uVar20) {
      if (iVar9 != -1) {
        lVar16 = (longlong)iVar9 * 0x10 + lVar16;
        if (lVar16 == 0) goto LAB_14d28a54d;
        goto LAB_14d28a573;
      }
      break;
    }
  }
LAB_14d28a54b:
  lVar16 = 0;
LAB_14d28a54d:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar8) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14d28a573:
  local_c8[0] = *(undefined4 *)(lVar16 + 4);
  if (((pFVar1->Data <= (FScriptContainerElement *)local_c8) &&
      ((FScriptContainerElement *)local_c8 < pFVar1->Data + (longlong)*piVar2 * 4)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = *(int *)(pdVar15 + 0xf);
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar1,piVar2);
  }
  *(int *)(pdVar15 + 0xf) = iVar9 + 1;
  *(undefined4 *)(pFVar1->Data + (longlong)iVar9 * 4) = local_c8[0];
LAB_14d28a617:
  uVar19 = (int)uVar20 + 1;
  uVar20 = (ulonglong)uVar19;
  if (0x3c < (int)uVar19) goto code_r0x00014d28a624;
  goto LAB_14d28a4a0;
code_r0x00014d28a624:
  pTVar13 = TSet<TTuple<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData>,TDefaultMapHashableKeyFuncs<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData>,TDefaultMapHashableKeyFuncs<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData,0>,FDefaultSetAllocator>
                    *)&this->BlendShapePerDeviceMap,param_4);
  if ((pTVar13 == (TTuple<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)(local_80 + 0xf) != *(int *)&pTVar13->field_0x28) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameData->PropertyValues.Num() == BlendShapePerDeviceMap.FindChecked(DeviceId).StaticData.PropertyNames.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKitFaceSupport\\Source\\AppleARKitFaceSupport\\Private\\AppleARKitLiveLinkSource.cpp"
                         ,0xf3,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)((longlong)*this->Client + 0x80))(this->Client,&local_a0,&local_78);
  FStructOnScope::~FStructOnScope(&local_78);
LAB_14d28a6ae:
  if ((local_b8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_b8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_b8 & 4) != 0) {
    FThreadStats::AddMessage(local_c0,CycleScopeEnd);
  }
  return;
}

// ReceiveClient @ 14d28a7b0

void __thiscall
FAppleARKitLiveLinkSource::ReceiveClient
          (FAppleARKitLiveLinkSource *this,ILiveLinkClient *param_1,FGuid *param_2)

{
  ILiveLinkClient *pIVar1;
  uint uVar2;
  uint uVar3;
  
  pIVar1 = *(ILiveLinkClient **)param_2;
  uVar2 = param_2->C;
  uVar3 = param_2->D;
  this->_padding_ = (longlong)param_1;
  this->Client = pIVar1;
  (this->SourceGuid).A = uVar2;
  (this->SourceGuid).B = uVar3;
  return;
}

// RequestSourceShutdown @ 14d28ab90

bool __thiscall FAppleARKitLiveLinkSource::RequestSourceShutdown(FAppleARKitLiveLinkSource *this)

{
  longlong *plVar1;
  
  this->_padding_ = 0;
  plVar1 = *(longlong **)&(this->BlendShapePerDeviceMap).field_0x48;
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)&(this->BlendShapePerDeviceMap).field_0x48 = 0;
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  return true;
}

// Shutdown @ 14d28b4a0

void __thiscall FAppleARKitLiveLinkSource::Shutdown(FAppleARKitLiveLinkSource *this)

{
  return;
}

// UpdateStaticData @ 14d28cb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAppleARKitLiveLinkSource::UpdateStaticData
          (FAppleARKitLiveLinkSource *this,FName param_1,
          TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
          *param_2,FName param_3)

{
  FLiveLinkSkeletonStaticData *pFVar1;
  int *piVar2;
  void *_Src;
  ILiveLinkClient *pIVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FBlendShapeStaticData *pFVar8;
  UEnum *this_00;
  UScriptStruct *pUVar9;
  ForAnyElementType *pFVar10;
  longlong lVar11;
  int iVar12;
  undefined1 *puVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  int iVar16;
  FName local_res10;
  FName local_res20;
  FName local_d8;
  FName local_d0;
  UClass *local_c8;
  FBlendShapeStaticData *local_c0;
  FString local_b8;
  FString local_a8;
  FStructOnScope local_98;
  undefined1 local_70 [8];
  FString local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  FName local_48;
  
  local_res10 = param_1;
  local_res20 = param_3;
  uVar6 = ::GetTypeHash(param_3.ComparisonIndex.Value);
  pFVar8 = TMapBase<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAppleARKitLiveLinkSource::FBlendShapeStaticData,0>_>
                       *)&this->BlendShapePerDeviceMap,param_3.Number + uVar6,&local_res20);
  local_58._0_4_ = (this->SourceGuid).A;
  local_58._4_4_ = (this->SourceGuid).B;
  uStack_50._0_4_ = (this->SourceGuid).C;
  uStack_50._4_4_ = (this->SourceGuid).D;
  uVar15 = 0;
  local_48 = local_res10;
  (pFVar8->SubjectKey).Source.A = (undefined4)local_58;
  (pFVar8->SubjectKey).Source.B = local_58._4_4_;
  (pFVar8->SubjectKey).Source.C = (undefined4)uStack_50;
  (pFVar8->SubjectKey).Source.D = uStack_50._4_4_;
  pFVar1 = &pFVar8->StaticData;
  piVar2 = (int *)((longlong)&(pFVar8->StaticData)._padding_ + 4);
  (pFVar8->SubjectKey).SubjectName.Name = local_res10;
  iVar7 = *piVar2;
  *(undefined4 *)&(pFVar8->StaticData)._padding_ = 0;
  local_c0 = pFVar8;
  if (iVar7 < 0x3d) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0x3d,(ForAnyElementType *)pFVar1,0,piVar2);
  }
  this_00 = StaticEnum<enum_EARFaceBlendShape>();
  do {
    if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
      puVar13 = &param_2->field_0x38;
      if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
        puVar13 = *(undefined1 **)&param_2->field_0x40;
      }
      iVar7 = *(int *)(puVar13 + ((ulonglong)(*(int *)&param_2->field_0x48 - 1) & uVar15 & 0xff) * 4
                      );
      if (iVar7 != -1) {
        do {
          if (*(char *)(*(longlong *)param_2 + (longlong)iVar7 * 0x10) == (char)uVar15) {
            local_d0 = UEnum::GetNameByValue(this_00,(long64)local_70);
            local_d0 = *(FName *)local_d0;
            ::FName::ToString(&local_d0,&local_a8);
            if (local_a8.Data.ArrayNum == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = local_a8.Data.ArrayNum + -1;
            }
            if (local_a8.Data.ArrayNum == 0) {
              iVar16 = 0;
            }
            else {
              iVar16 = local_a8.Data.ArrayNum + -1;
            }
            FVar14.Data = (FScriptContainerElement *)L"";
            if (local_a8.Data.ArrayNum != 0) {
              FVar14.Data = local_a8.Data.AllocatorInstance.Data;
            }
            iVar12 = iVar16;
            if (iVar7 + -0x13 < iVar16) {
              iVar12 = iVar7 + -0x13;
            }
            iVar7 = 0;
            if (0 < iVar12) {
              iVar7 = iVar12;
            }
            ::FString::FString(&local_b8,
                               (wchar_t *)(FVar14.Data + ((longlong)iVar16 - (longlong)iVar7) * 2));
            FVar14.Data = (FScriptContainerElement *)L"";
            if (local_b8.Data.ArrayNum != 0) {
              FVar14.Data = local_b8.Data.AllocatorInstance.Data;
            }
            ::FName::FName(&local_d8,(wchar_t *)FVar14.Data);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if ((((FName *)pFVar1->_padding_ <= &local_d8) &&
                (&local_d8 < (FName *)pFVar1->_padding_ + *piVar2)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar7 = (int)(pFVar8->StaticData)._padding_;
            if (iVar7 == *piVar2) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,(ForAnyElementType *)pFVar1,piVar2);
            }
            *(int *)&(pFVar8->StaticData)._padding_ = iVar7 + 1;
            *(FName *)(pFVar1->_padding_ + (longlong)iVar7 * 8) = local_d8;
            break;
          }
          iVar7 = *(int *)(*(longlong *)param_2 + 8 + (longlong)iVar7 * 0x10);
        } while (iVar7 != -1);
      }
    }
    uVar6 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar6;
    if (0x3c < (int)uVar6) {
      pUVar9 = FLiveLinkBaseStaticData::StaticStruct();
      FStructOnScope::FStructOnScope(&local_98,(UStruct *)pUVar9);
      pFVar10 = (ForAnyElementType *)(**(code **)(local_98._padding_ + 0x18))(&local_98);
      lVar11 = (**(code **)(local_98._padding_ + 0x20))(&local_98);
      if (lVar11 != 0) {
        Z_Construct_UClass_UScriptStruct_NoRegister();
      }
      if ((FLiveLinkSkeletonStaticData *)pFVar10 != pFVar1) {
        iVar7 = (int)(pFVar8->StaticData)._padding_;
        piVar2 = (int *)((longlong)&pFVar10[1].Data + 4);
        _Src = (void *)pFVar1->_padding_;
        iVar16 = *piVar2;
        *(int *)&pFVar10[1].Data = iVar7;
        if ((iVar7 == 0) && (iVar16 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar7,iVar16,pFVar10,iVar7,piVar2);
          if (iVar7 != 0) {
            memcpy(pFVar10->Data,_Src,(longlong)iVar7 << 3);
          }
        }
      }
      if (5 < (byte)LogAppleARKitFace._0_1_) {
        ::FName::ToString(&local_res10,&local_68);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAppleARKitFace);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      pIVar3 = this->Client;
      pcVar4 = *(code **)((longlong)*pIVar3 + 0x78);
      local_c8 = Z_Construct_UClass_ULiveLinkBasicRole_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_c8);
      }
      (*pcVar4)(pIVar3,local_c0,&local_c8,&local_98);
      FStructOnScope::~FStructOnScope(&local_98);
      return;
    }
  } while( true );
}

