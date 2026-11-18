// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// CanExecuteOnlyOnMainThread @ 1499da410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGSaveDataAssetElement::CanExecuteOnlyOnMainThread
          (FPCGSaveDataAssetElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 1499e9af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FPCGSaveDataAssetElement::ExecuteInternal(FPCGSaveDataAssetElement *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGNode *this_00;
  longlong lVar2;
  FPCGTaggedData *pFVar3;
  code *pcVar4;
  char cVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  UClass *pUVar11;
  UPCGSettings *pUVar12;
  TObjectPtr<UPCGSettings>_u_0 TVar13;
  FPCGTaggedData *pFVar14;
  UClass *pUVar15;
  UPackage *pUVar16;
  UObject *pUVar17;
  longlong *plVar18;
  FPCGPinProperties *pFVar19;
  FPCGTaggedData *pFVar20;
  undefined1 auStack_1b8 [32];
  FPCGTaggedData *local_198;
  FPCGTaggedData *local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  char local_168;
  <lambda_1> local_167 [7];
  TObjectPtr<UPCGSettings>_u_0 local_160;
  FName local_158;
  undefined8 local_150;
  FPCGPinProperties *local_148;
  int local_140;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if (CpuChannel->Enabled < 0) {
    local_168 = '\0';
  }
  else {
    local_168 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId40,"FPCGSaveDataAssetElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGSaveAssetElement.cpp"
               ,0x28);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId40);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGSaveAssetElement.cpp"
                         ,0x29,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar12 = UPCGNode::GetSettings(this_00), pUVar12 == (UPCGSettings *)0x0)) {
      pFVar14 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSaveDataAssetSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_167[0]);
      if (pFVar14 != (FPCGTaggedData *)0x0) {
        local_160.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar14->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_160.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_160.DebugPtr);
        }
        if (local_160.DebugPtr != (UPCGSettings *)0x0) {
          pUVar11 = UPCGSaveDataAssetSettings::StaticClass();
          bVar8 = FObjectPtr::IsA(&local_160.ObjectPtr,pUVar11);
          TVar13 = local_160;
          if (bVar8) goto LAB_1499e9c91;
        }
      }
    }
    else {
      pUVar12 = UPCGNode::GetSettings(this_00);
      TVar13.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar12);
      if (TVar13.DebugPtr != (UPCGSettings *)0x0) {
        pUVar11 = UPCGSaveDataAssetSettings::StaticClass();
        iVar1 = (int)pUVar11->_padding_;
        if ((iVar1 <= *(int *)((TVar13.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar13.DebugPtr)->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar11->_padding_)) goto LAB_1499e9c91;
      }
    }
LAB_1499e9c8e:
    TVar13.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar11 = UPCGSaveDataAssetSettings::StaticClass();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar11);
    if (!bVar8) goto LAB_1499e9c8e;
    TVar13.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_1499e9c91:
  pUVar11 = (UClass *)0x0;
  if ((TVar13.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGSaveAssetElement.cpp"
                         ,0x2b,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  lVar2 = TVar13.DebugPtr[1]._padding_;
  if ((lVar2 != 0) &&
     (pUVar15 = UPCGDataCollectionExporter::StaticClass(), pUVar15 != (UClass *)0x0)) {
    iVar1 = (int)pUVar15->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar15->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((bVar8) && (lVar2 = TVar13.DebugPtr[1]._padding_, lVar2 != 0)) {
      local_158.ComparisonIndex.Value = 0;
      local_158.Number = 0;
      pUVar15 = UPCGDataCollectionExporter::StaticClass();
      if (pUVar15 != (UClass *)0x0) {
        iVar1 = (int)pUVar15->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar15->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          pUVar11 = (UClass *)TVar13.DebugPtr[1]._padding_;
        }
      }
      pUVar16 = GetTransientPackage();
      FVar6 = local_158;
      local_150 = 0;
      if (local_158 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar16,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar15 = UPCGDataCollectionExporter::StaticClass();
      CheckIsClassChildOf_Internal(pUVar15,pUVar11);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_138,pUVar11);
      FVar7 = local_158;
      local_138._48_8_ = (FObjectInstancingGraph *)0x0;
      local_138._56_8_ = (UPackage *)0x0;
      local_158.ComparisonIndex = FVar6.ComparisonIndex.Value;
      local_158.Number = FVar6.Number;
      local_138._16_4_ = local_158.ComparisonIndex.Value;
      local_138._20_4_ = local_158.Number;
      local_138._24_4_ = RF_NoFlags;
      local_138._40_8_ = (UObject *)0x0;
      local_138[0x20] = false;
      local_158 = FVar7;
      local_138._8_8_ = pUVar16;
      pUVar17 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
      if (local_138._64_8_ != 0) {
        plVar18 = (longlong *)(local_138 + 0x50);
        if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
          plVar18 = (longlong *)local_138._104_8_;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      if (pUVar17 != (UObject *)0x0) goto LAB_1499e9e39;
    }
  }
  pUVar17 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar17,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar11 = UPCGDataCollectionExporter::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar11);
  local_b8._8_8_ = pUVar17;
  pUVar17 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar18 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
LAB_1499e9e39:
  (**(code **)((TVar13.DebugPtr)->_padding_ + 0x450))(TVar13.DebugPtr,&local_148);
  if ((pUVar17 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Exporter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGSaveAssetElement.cpp"
                         ,0x3b,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  iVar1 = (param_1->InputData).TaggedData.ArrayNum;
  pFVar14 = (FPCGTaggedData *)(param_1->InputData).TaggedData.AllocatorInstance.Data;
  pFVar20 = pFVar14 + iVar1;
  do {
    while( true ) {
      if ((param_1->InputData).TaggedData.ArrayNum != iVar1) {
        local_167[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_167);
      }
      if (pFVar14 == pFVar20) {
        UPCGAssetExporterUtils::CreateAsset
                  ((UPCGAssetExporter *)pUVar17,
                   (FPCGAssetExporterParameters *)&TVar13.DebugPtr[1]._padding_,param_1);
        DestructItems<FPCGPinProperties,int>(local_148,local_140);
        cVar5 = local_168;
        if (local_148 != (FPCGPinProperties *)0x0) {
          FMemory::Free(local_148);
        }
        if (cVar5 != '\0') {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      if (local_148 != local_148 + local_140) break;
LAB_1499e9f6c:
      pFVar14 = pFVar14 + 1;
    }
    pFVar19 = local_148;
    do {
      if (pFVar14->Pin == pFVar19->Label) {
        pFVar3 = *(FPCGTaggedData **)(pUVar17 + 1);
        if ((pFVar3 <= pFVar14) &&
           (pFVar14 < pFVar3 + *(int *)&((UPCGAssetExporter *)(pUVar17 + 1))->field_0xc)) {
          local_180 = (longlong)*(int *)&((UPCGAssetExporter *)(pUVar17 + 1))->field_0x8;
          local_178 = 0x78;
          local_198 = pFVar14;
          local_190 = pFVar3;
          local_188 = (longlong)*(int *)&((UPCGAssetExporter *)(pUVar17 + 1))->field_0xc;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
        }
        iVar10 = *(int *)&((UPCGAssetExporter *)(pUVar17 + 1))->field_0x8;
        if (iVar10 == *(int *)&((UPCGAssetExporter *)(pUVar17 + 1))->field_0xc) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)(pUVar17 + 1),
                              (int *)&((UPCGAssetExporter *)(pUVar17 + 1))->field_0xc);
        }
        *(int *)&((UPCGAssetExporter *)(pUVar17 + 1))->field_0x8 = iVar10 + 1;
        FPCGTaggedData::FPCGTaggedData
                  ((FPCGTaggedData *)((longlong)iVar10 * 0x78 + *(longlong *)(pUVar17 + 1)),pFVar14)
        ;
        goto LAB_1499e9f6c;
      }
      pFVar19 = pFVar19 + 1;
    } while (pFVar19 != local_148 + local_140);
    pFVar14 = pFVar14 + 1;
  } while( true );
}

