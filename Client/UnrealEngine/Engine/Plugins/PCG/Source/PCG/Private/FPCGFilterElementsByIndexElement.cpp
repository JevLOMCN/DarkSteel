// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// operator() @ 149b5e670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPCGFilterElementsByIndexElement::ExecuteInternal'::__l68::<lambda_1>::operator()
          (void *this,UPCGData *param_1,FName param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FPCGDataPtrWrapper *this_00;
  undefined1 auStackY_d8 [32];
  FPCGDataPtrWrapper local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  FObjectPtr_u_0 local_48;
  undefined2 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar2 = *(ForAnyElementType **)this;
  FPCGDataPtrWrapper::FPCGDataPtrWrapper(&local_a8,param_1);
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
             *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)((longlong)this + 8)
            );
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  local_40 = 0x100;
  local_3c = 0;
  local_34 = 0xffffffff;
  iVar3 = *(int *)&pFVar2[1].Data;
  local_48 = (FObjectPtr_u_0)param_2;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar3 + 1;
  this_00 = (FPCGDataPtrWrapper *)(pFVar2->Data + (longlong)iVar3 * 0x78);
  FPCGDataPtrWrapper::FPCGDataPtrWrapper(this_00,&local_a8);
  *(undefined8 *)
   &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1))->Elements = 0;
  this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
  this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[5].WeakData.WeakPtr.ObjectIndex = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1),
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98);
  this_00[6].Data.field0_0x0.ObjectPtr.field0_0x0 = local_48;
  *(undefined1 *)&this_00[6].WeakData.WeakPtr.ObjectIndex = (undefined1)local_40;
  *(undefined1 *)((longlong)&this_00[6].WeakData.WeakPtr.ObjectIndex + 1) = local_40._1_1_;
  *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = local_3c;
  *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = local_34;
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar3 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_a8);
  return;
}

// ExecuteInternal @ 149b81350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGFilterElementsByIndexElement::ExecuteInternal
          (FPCGFilterElementsByIndexElement *this,FPCGContext *param_1)

{
  float fVar1;
  double dVar2;
  int iVar3;
  UPCGNode *this_00;
  long64 lVar4;
  UPCGMetadata *this_01;
  UPCGMetadata *pUVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 this_02;
  TObjectPtr<UPCGMetadata>_u_0 TVar21;
  TObjectPtr<UPCGData_const_>_u_0 TVar22;
  undefined1 uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  undefined4 uVar27;
  UClass *pUVar28;
  UPCGSettings *pUVar29;
  UPCGFilterElementsByIndexSettings *pUVar30;
  FPCGTaggedData *pFVar31;
  FText *pFVar32;
  FPCGIndexCollection *pFVar33;
  UPCGBasePointData *pUVar34;
  UPCGBasePointData *pUVar35;
  TTransform<double> *pTVar36;
  float *pfVar37;
  TVector<double> *pTVar38;
  TVector4<double> *pTVar39;
  int *piVar40;
  long64 *plVar41;
  ForAnyElementType FVar42;
  UObject *pUVar43;
  UPCGParamData *pUVar44;
  FPCGMetadataInitializeParams *pFVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  FPCGDataPtrWrapper *pFVar48;
  uint uVar49;
  char cVar50;
  FPCGCrc FVar51;
  longlong lVar52;
  UPCGBasePointData *pUVar53;
  uint uVar54;
  UPCGBasePointData *pUVar55;
  uint uVar56;
  UPCGBasePointData *pUVar57;
  bool bVar58;
  undefined1 auStackY_ff8 [32];
  FIdentityFunctor local_fc8;
  char local_fc7;
  UPCGFilterElementsByIndexSettings *local_fc0;
  TArray<int,TSizedDefaultAllocator<32>_> local_fb8;
  undefined1 local_fa8;
  undefined1 local_fa7;
  FGCScopeGuard local_fa6 [6];
  FPCGTaggedData *local_fa0;
  undefined1 local_f98 [32];
  TArray<__int64,TSizedDefaultAllocator<32>_> local_f78;
  TObjectPtr<UPCGMetadata>_u_0 local_f68;
  TObjectPtr<UPCGMetadata>_u_0 local_f60;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_f58;
  TObjectPtr<UPCGMetadata>_u_0 local_f48;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_f40;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_f30;
  FPCGTaggedData *local_f20;
  FPCGAttributePropertySelector local_f18;
  FName local_ed8;
  FName local_ed0;
  TObjectPtr<UPCGData_const_>_u_0 local_ec8;
  FName local_ec0;
  UPCGParamData *local_eb8;
  UPCGParamData *local_eb0;
  TObjectPtr<UPCGData_const_>_u_0 local_ea8;
  TObjectPtr<UPCGData_const_>_u_0 local_ea0;
  undefined1 local_e98 [8];
  undefined8 local_e90;
  undefined8 uStack_e88;
  undefined8 local_e80;
  undefined8 uStack_e78;
  undefined8 local_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined8 uStack_e58;
  undefined8 local_e50;
  undefined8 uStack_e48;
  undefined8 local_e40;
  undefined8 uStack_e38;
  undefined8 local_e30;
  undefined8 uStack_e28;
  undefined8 local_e20;
  undefined8 uStack_e18;
  FName local_e10;
  TStringView<wchar_t> local_e08;
  FScriptContainerElement *local_df8;
  int iStack_df0;
  undefined4 uStack_dec;
  TArrayView<int,int> local_de8;
  FText local_dd8;
  FPCGMetadataInitializeParams local_dc8;
  FPCGMetadataInitializeParams local_da0;
  FPCGInitializeFromDataParams local_d78;
  FPCGDataPtrWrapper local_d38;
  undefined1 local_d28 [32];
  void *local_d08;
  undefined4 local_d00;
  uint local_cfc;
  undefined4 local_cf8;
  undefined4 local_cf4;
  ForElementType<FSetElementId> local_ce8;
  int local_ce0;
  TObjectPtr<UPCGData_const_>_u_0 local_cd8;
  undefined2 local_cd0;
  undefined8 local_ccc;
  undefined4 local_cc4;
  FPCGDataPtrWrapper local_cb8;
  undefined1 local_ca8 [32];
  void *local_c88;
  undefined4 local_c80;
  uint local_c7c;
  undefined4 local_c78;
  undefined4 local_c74;
  ForElementType<FSetElementId> local_c68;
  int local_c60;
  TObjectPtr<UPCGData_const_>_u_0 local_c58;
  undefined2 local_c50;
  undefined8 local_c4c;
  undefined4 local_c44;
  FPCGDataPtrWrapper local_c38;
  undefined1 local_c28 [32];
  void *local_c08;
  undefined4 local_c00;
  uint local_bfc;
  undefined4 local_bf8;
  undefined4 local_bf4;
  ForElementType<FSetElementId> local_be8;
  int local_be0;
  TObjectPtr<UPCGData_const_>_u_0 local_bd8;
  undefined2 local_bd0;
  undefined8 local_bcc;
  undefined4 local_bc4;
  FPCGPointValueRanges local_bb8;
  FPCGPointValueRanges local_a28;
  FConstPCGPointValueRanges local_898;
  FPCGIndexCollection local_708;
  FPCGIndexCollection local_4e8;
  FPCGIndexCollection local_2c8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_ff8;
  bVar58 = CpuChannel->Enabled < 0;
  local_f98._8_8_ = param_1;
  if (bVar58) {
    local_fc7 = '\0';
  }
  else {
    local_fc7 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId150,"FPCGFilterElementsByIndexElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterElementsByIndex.cpp"
               ,0x96);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId150);
  }
  cVar50 = !bVar58;
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterElementsByIndex.cpp"
                          ,0x99,L""), bVar58)) {
    pcVar6 = (code *)swi(3);
    uVar23 = (*pcVar6)();
    return (bool)uVar23;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_f30,&PCGPinConstants::DefaultInputLabel);
  if (local_f30.ArrayNum == 0) goto LAB_149b81c96;
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar29 = UPCGNode::GetSettings(this_00), pUVar29 == (UPCGSettings *)0x0)) {
      pFVar31 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGFilterElementsByIndexSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,(<lambda_1>)local_fc8);
      if (pFVar31 != (FPCGTaggedData *)0x0) {
        local_fc0 = Cast<UPCGFilterElementsByIndexSettings_const_>(&pFVar31->Data);
        goto LAB_149b8150c;
      }
    }
    else {
      pUVar29 = UPCGNode::GetSettings(this_00);
      pUVar30 = (UPCGFilterElementsByIndexSettings *)
                FPCGDataCollection::GetSettings(&param_1->InputData,pUVar29);
      if (pUVar30 != (UPCGFilterElementsByIndexSettings *)0x0) {
        local_fc0 = pUVar30;
        pUVar28 = UPCGFilterElementsByIndexSettings::StaticClass();
        iVar24 = (int)pUVar28->_padding_;
        if ((iVar24 <= *(int *)(pUVar30->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar30->_padding_ + 0x30) + (longlong)iVar24 * 8) ==
            &pUVar28->_padding_)) goto LAB_149b8150c;
      }
    }
LAB_149b81507:
    local_fc0 = (UPCGFilterElementsByIndexSettings *)0x0;
  }
  else {
    pUVar28 = UPCGFilterElementsByIndexSettings::StaticClass();
    bVar58 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar28);
    if (!bVar58) goto LAB_149b81507;
    local_fc0 = (UPCGFilterElementsByIndexSettings *)
                (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149b8150c:
  pUVar30 = local_fc0;
  pUVar55 = (UPCGBasePointData *)0x0;
  if ((local_fc0 == (UPCGFilterElementsByIndexSettings *)0x0) &&
     (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterElementsByIndex.cpp"
                          ,0xa2,L""), bVar58)) {
    pcVar6 = (code *)swi(3);
    uVar23 = (*pcVar6)();
    return (bool)uVar23;
  }
  memset(&local_708._padding_,0,0x204);
  local_708.ArraySize = -1;
  local_708.IndexRanges.AllocatorInstance.SecondaryData =
       (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
  uVar54 = 0;
  local_708.IndexRanges.ArrayNum = 0;
  local_708.IndexRanges.ArrayMax = 0x40;
  if (pUVar30->bSelectIndicesByInput == false) goto LAB_149b81d4f;
  FLazyName::Resolve(&PCGFilterElementsByIndex::Constants::FilterInputsPinLabel);
  FPCGDataCollection::GetInputsByPin(&param_1->InputData,&local_f40,&local_e10);
  uVar46 = (ulonglong)local_f40.ArrayNum;
  if (local_f40.ArrayNum != 0) {
    if (((local_f30.ArrayNum == local_f40.ArrayNum) || (local_f30.ArrayNum == 1)) ||
       (local_f40.ArrayNum == 1)) {
      local_f98._20_4_ = local_f40.ArrayNum;
      local_f48.DebugPtr =
           (UPCGMetadata *)((longlong)local_f40.AllocatorInstance.Data + uVar46 * 0x78);
      uVar47 = uVar46;
      FVar51 = (FPCGCrc)local_f40.AllocatorInstance.Data;
LAB_149b81634:
      do {
        TVar21 = local_f48;
        if ((int)uVar46 != (int)uVar47) {
          local_fa8 = 0;
          `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_fa8);
        }
        if (FVar51 == (FPCGCrc)TVar21.DebugPtr) goto LAB_149b81c49;
        pUVar34 = *(UPCGBasePointData **)FVar51;
        if ((((pUVar34 == (UPCGBasePointData *)0x0) ||
             (bVar58 = UObjectBaseUtility::IsA<UPCGBasePointData>((UObjectBaseUtility *)pUVar34),
             pUVar53 = pUVar34, !bVar58)) &&
            (pUVar53 = pUVar55, pUVar34 == (UPCGBasePointData *)0x0)) ||
           (bVar58 = UObjectBaseUtility::IsA<UPCGParamData>((UObjectBaseUtility *)pUVar34),
           pUVar35 = pUVar34, !bVar58)) {
          pUVar35 = pUVar55;
        }
        if ((pUVar53 != (UPCGBasePointData *)0x0) || (pUVar35 != (UPCGBasePointData *)0x0)) {
          FPCGAttributePropertyInputSelector::CopyAndFixLast
                    (&pUVar30->IndexSelectionAttribute,
                     (FPCGAttributePropertyInputSelector *)&local_f18,(UPCGData *)pUVar34);
          PCGAttributeAccessorHelpers::CreateConstAccessor
                    ((UPCGData *)(local_f98 + 0x18),(FPCGAttributePropertySelector *)pUVar34,
                     SUB81(&local_f18,0));
          PCGAttributeAccessorHelpers::CreateConstKeys
                    ((UPCGData *)local_f98,(FPCGAttributePropertySelector *)pUVar34);
          if (((IPCGAttributeAccessor *)local_f98._24_8_ == (IPCGAttributeAccessor *)0x0) ||
             ((IPCGAttributeAccessorKeys *)local_f98._0_8_ == (IPCGAttributeAccessorKeys *)0x0)) {
            PCGLog::Metadata::LogFailToCreateAccessorError(&local_f18,param_1);
LAB_149b81725:
            if ((IPCGAttributeAccessorKeys *)local_f98._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
              (**(code **)*(longlong *)local_f98._0_8_)(local_f98._0_8_,1);
            }
            if ((IPCGAttributeAccessor *)local_f98._24_8_ != (IPCGAttributeAccessor *)0x0) {
              (**(code **)*(longlong *)local_f98._24_8_)(local_f98._24_8_,1);
            }
            DestructItems<FString,int>
                      ((FString *)local_f18.ExtraNames.AllocatorInstance.Data,
                       local_f18.ExtraNames.ArrayNum);
            if (local_f18.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f18.ExtraNames.AllocatorInstance.Data);
              uVar46 = (ulonglong)(uint)local_f40.ArrayNum;
              FVar51 = (FPCGCrc)((longlong)FVar51 + 0x78);
              uVar47 = (ulonglong)(uint)local_f98._20_4_;
              goto LAB_149b81634;
            }
          }
          else {
            iVar24 = (**(code **)(*(longlong *)local_f98._0_8_ + 0x10))();
            if (iVar24 < 1) goto LAB_149b81725;
            local_fb8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_fb8.ArrayNum = 0;
            local_fb8.ArrayMax = 0;
            iVar24 = (**(code **)(*(longlong *)local_f98._0_8_ + 0x10))();
            TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_fb8,iVar24,Default);
            this_02 = local_f98._24_8_;
            uVar20 = local_f98._0_8_;
            iVar24 = local_fb8.ArrayNum;
            local_df8 = local_fb8.AllocatorInstance.Data;
            if ((local_fb8.ArrayNum < 0) &&
               (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar58)) {
              pcVar6 = (code *)swi(3);
              uVar23 = (*pcVar6)();
              return (bool)uVar23;
            }
            iStack_df0 = iVar24;
            local_de8._12_4_ = uStack_dec;
            local_de8.ArrayNum = iVar24;
            local_de8.DataPtr = (int *)local_df8;
            bVar58 = IPCGAttributeAccessor::GetRange<int>
                               ((IPCGAttributeAccessor *)this_02,&local_de8,0,
                                (IPCGAttributeAccessorKeys *)uVar20,AllowBroadcastAndConstructible);
            if (bVar58) {
              if ((local_fb8.ArrayNum == 0) &&
                 (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!IndexArray.IsEmpty()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterElementsByIndex.cpp"
                                      ,0xdd,L""), bVar58)) {
                pcVar6 = (code *)swi(3);
                uVar23 = (*pcVar6)();
                return (bool)uVar23;
              }
              AlgoImpl::
              IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                        ((int *)local_fb8.AllocatorInstance.Data,local_fb8.ArrayNum,local_fc8,
                         (TLess<void> *)(local_f98 + 0x10));
              uVar49 = uVar54;
              if ((int)(local_fb8.ArrayNum - 1U) < local_fb8.ArrayNum) {
                uVar49 = ~(local_fb8.ArrayNum - 1U) >> 0x1f;
              }
              if (uVar49 == 0) {
                bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar58) {
                  pcVar6 = (code *)swi(3);
                  uVar23 = (*pcVar6)();
                  return (bool)uVar23;
                }
              }
              local_4e8.IndexRanges.AllocatorInstance.SecondaryData =
                   (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
              local_4e8.IndexRanges.ArrayNum = 0;
              local_4e8.IndexRanges.ArrayMax = 0x40;
              local_4e8.ArraySize = -1;
              if (-1 < *(int *)(local_fb8.AllocatorInstance.Data +
                               (longlong)(local_fb8.ArrayNum + -1) * 4) + 1) {
                local_4e8.ArraySize =
                     *(int *)(local_fb8.AllocatorInstance.Data +
                             (longlong)(local_fb8.ArrayNum + -1) * 4) + 1;
              }
              bVar58 = PCGIndexing::FPCGIndexCollection::IsValid(&local_4e8);
              if (!bVar58) {
                pFVar32 = FText::AsLocalizable_Advanced_LocText
                                    (&local_dd8,L"PCGFilterElementsByIndexElement",
                                     L"FailureToGetIndicesFromInput",
                                     L"Filtered indices were invalid and could not be used to filter the input!"
                                    );
                PCGLog::LogWarningOnGraph(pFVar32,(FPCGContext *)0x0);
                if (local_dd8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_dd8.TextData.Reference + 0x10))();
                }
                if (local_4e8.IndexRanges.AllocatorInstance.SecondaryData !=
                    (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                  FMemory::Free((void *)local_4e8.IndexRanges.AllocatorInstance.SecondaryData);
                }
                goto LAB_149b81823;
              }
              uVar46 = (ulonglong)local_fb8.ArrayNum;
              if (local_fb8.ArrayNum < 1) {
                bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar58) {
                  pcVar6 = (code *)swi(3);
                  uVar23 = (*pcVar6)();
                  return (bool)uVar23;
                }
                uVar46 = local_fb8._8_8_ & 0xffffffff;
              }
              local_fa0 = (FPCGTaggedData *)
                          CONCAT44(local_fa0._4_4_,*(int *)local_fb8.AllocatorInstance.Data);
              iVar24 = *(int *)local_fb8.AllocatorInstance.Data;
              if ((int)uVar46 < 1) {
                bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar58) {
                  pcVar6 = (code *)swi(3);
                  uVar23 = (*pcVar6)();
                  return (bool)uVar23;
                }
                uVar46 = local_fb8._8_8_ & 0xffffffff;
                iVar24 = (int)local_fa0;
              }
              uVar49 = 1;
              iVar26 = *(int *)local_fb8.AllocatorInstance.Data;
              if (1 < (int)uVar46) {
                lVar52 = 4;
                do {
                  uVar56 = ~uVar49 >> 0x1f;
                  uVar25 = uVar54;
                  if ((int)uVar49 < (int)uVar46) {
                    uVar25 = uVar56;
                  }
                  if (uVar25 == 0) {
                    bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar58) {
                      pcVar6 = (code *)swi(3);
                      uVar23 = (*pcVar6)();
                      return (bool)uVar23;
                    }
                    uVar46 = local_fb8._8_8_ & 0xffffffff;
                  }
                  if (*(int *)(local_fb8.AllocatorInstance.Data + lVar52) == iVar26 + 1) {
                    uVar25 = uVar54;
                    if ((int)uVar49 < (int)uVar46) {
                      uVar25 = uVar56;
                    }
                    if (uVar25 == 0) {
                      bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar58) {
                        pcVar6 = (code *)swi(3);
                        uVar23 = (*pcVar6)();
                        return (bool)uVar23;
                      }
                      uVar46 = local_fb8._8_8_ & 0xffffffff;
                    }
                    iVar26 = *(int *)(local_fb8.AllocatorInstance.Data + lVar52);
                    iVar24 = (int)local_fa0;
                  }
                  else {
                    PCGIndexing::FPCGIndexCollection::AddRange(&local_4e8,(int)local_fa0,iVar26 + 1)
                    ;
                    uVar46 = (ulonglong)local_fb8.ArrayNum;
                    uVar25 = uVar54;
                    if ((int)uVar49 < local_fb8.ArrayNum) {
                      uVar25 = uVar56;
                    }
                    if (uVar25 == 0) {
                      bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar58) {
                        pcVar6 = (code *)swi(3);
                        uVar23 = (*pcVar6)();
                        return (bool)uVar23;
                      }
                      uVar46 = local_fb8._8_8_ & 0xffffffff;
                    }
                    iVar26 = *(int *)(local_fb8.AllocatorInstance.Data + lVar52);
                    local_fa0 = (FPCGTaggedData *)CONCAT44(local_fa0._4_4_,iVar26);
                    iVar24 = iVar26;
                  }
                  uVar49 = uVar49 + 1;
                  lVar52 = lVar52 + 4;
                } while ((int)uVar49 < (int)uVar46);
              }
              PCGIndexing::FPCGIndexCollection::AddRange(&local_4e8,iVar24,iVar26 + 1);
              PCGIndexing::FPCGIndexCollection::operator+=(&local_708,&local_4e8);
              if (local_4e8.IndexRanges.AllocatorInstance.SecondaryData !=
                  (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                FMemory::Free((void *)local_4e8.IndexRanges.AllocatorInstance.SecondaryData);
              }
              if (local_fb8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_fb8.AllocatorInstance.Data);
              }
              if ((IPCGAttributeAccessorKeys *)local_f98._0_8_ != (IPCGAttributeAccessorKeys *)0x0)
              {
                (**(code **)*(longlong *)local_f98._0_8_)(local_f98._0_8_,1);
              }
              if ((IPCGAttributeAccessor *)local_f98._24_8_ != (IPCGAttributeAccessor *)0x0) {
                (**(code **)*(longlong *)local_f98._24_8_)(local_f98._24_8_,1);
              }
              DestructItems<FString,int>
                        ((FString *)local_f18.ExtraNames.AllocatorInstance.Data,
                         local_f18.ExtraNames.ArrayNum);
              pUVar30 = local_fc0;
              param_1 = (FPCGContext *)local_f98._8_8_;
              if (local_f18.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f18.ExtraNames.AllocatorInstance.Data);
                pUVar30 = local_fc0;
                param_1 = (FPCGContext *)local_f98._8_8_;
              }
            }
            else {
              PCGLog::Metadata::LogFailToGetAttributeError(&local_f18,param_1);
LAB_149b81823:
              if (local_fb8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_fb8.AllocatorInstance.Data);
              }
              if ((IPCGAttributeAccessorKeys *)local_f98._0_8_ != (IPCGAttributeAccessorKeys *)0x0)
              {
                (**(code **)*(longlong *)local_f98._0_8_)(local_f98._0_8_,1);
              }
              if ((IPCGAttributeAccessor *)local_f98._24_8_ != (IPCGAttributeAccessor *)0x0) {
                (**(code **)*(longlong *)local_f98._24_8_)(local_f98._24_8_,1);
              }
              DestructItems<FString,int>
                        ((FString *)local_f18.ExtraNames.AllocatorInstance.Data,
                         local_f18.ExtraNames.ArrayNum);
              pUVar30 = local_fc0;
              if (local_f18.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f18.ExtraNames.AllocatorInstance.Data);
                pUVar30 = local_fc0;
              }
            }
          }
          uVar46 = (ulonglong)(uint)local_f40.ArrayNum;
          FVar51 = (FPCGCrc)((longlong)FVar51 + 0x78);
          uVar47 = (ulonglong)(uint)local_f98._20_4_;
          goto LAB_149b81634;
        }
        FLazyName::Resolve(&PCGFilterElementsByIndex::Constants::FilterInputsPinLabel);
        PCGLog::InputOutput::LogTypedDataNotFoundWarning(PointOrParam,local_ed0,param_1);
        uVar46 = (ulonglong)(uint)local_f40.ArrayNum;
        FVar51 = (FPCGCrc)((longlong)FVar51 + 0x78);
        uVar47 = (ulonglong)(uint)local_f98._20_4_;
      } while( true );
    }
    FLazyName::Resolve(&PCGFilterElementsByIndex::Constants::FilterInputsPinLabel);
    PCGLog::InputOutput::LogInvalidCardinalityError
              (PCGPinConstants::DefaultInputLabel,local_ed8,param_1);
  }
LAB_149b81c63:
  PCGFilterElementsByIndex::Helpers::PassThroughInputData(param_1);
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_f40.AllocatorInstance.Data,local_f40.ArrayNum);
  if ((FPCGCrc)local_f40.AllocatorInstance.Data != (FPCGCrc)0x0) {
    FMemory::Free(local_f40.AllocatorInstance.Data);
  }
LAB_149b81c85:
  if (local_708.IndexRanges.AllocatorInstance.SecondaryData !=
      (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
    FMemory::Free((void *)local_708.IndexRanges.AllocatorInstance.SecondaryData);
  }
LAB_149b81c96:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_f30.AllocatorInstance.Data,local_f30.ArrayNum);
  if ((FPCGTaggedData *)local_f30.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_f30.AllocatorInstance.Data);
  }
  if (cVar50 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
LAB_149b81c49:
  iVar24 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_708);
  cVar50 = local_fc7;
  if (iVar24 < 1) goto LAB_149b81c63;
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_f40.AllocatorInstance.Data,local_f40.ArrayNum);
  if ((FPCGCrc)local_f40.AllocatorInstance.Data != (FPCGCrc)0x0) {
    FMemory::Free(local_f40.AllocatorInstance.Data);
  }
LAB_149b81d4f:
  dVar19 = _UNK_15061cbc8;
  dVar18 = ___xmm_3ff00000000000000000000000000000;
  uVar46 = (ulonglong)local_f30.ArrayNum;
  local_f48.DebugPtr = (UPCGMetadata *)&param_1->OutputData;
  local_f20 = (FPCGTaggedData *)(local_f30.AllocatorInstance.Data + uVar46 * 0x78);
  local_f98._20_4_ = local_f30.ArrayNum;
  FVar42.Data = local_f30.AllocatorInstance.Data;
  while( true ) {
    pFVar31 = local_f20;
    TVar21 = local_f48;
    local_fa0 = (FPCGTaggedData *)FVar42.Data;
    if (local_f30.ArrayNum != (uint)uVar46) {
      local_fa7 = 0;
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_fa7);
    }
    if ((FPCGTaggedData *)FVar42.Data == pFVar31) break;
    pUVar34 = (UPCGBasePointData *)(((FPCGTaggedData *)FVar42.Data)->Data).Data.field0_0x0.DebugPtr;
    if (pUVar30->bSelectIndicesByInput == false) {
      iVar26 = PCGHelpers::GetNumberOfElements((UPCGData *)pUVar34);
      local_e08.DataPtr = (wchar_t *)(pUVar30->SelectedIndices).Data.AllocatorInstance.Data;
      iVar24 = (pUVar30->SelectedIndices).Data.ArrayNum;
      local_e08.Size = iVar24 - 1;
      if (iVar24 == 0) {
        local_e08.Size = uVar54;
      }
      pFVar33 = PCGFilterElementsByIndex::Helpers::StringToIndexCollection
                          (&local_2c8,iVar26,&local_e08,(FPCGContext *)local_f98._8_8_);
      local_708.ArraySize = pFVar33->ArraySize;
      if (&local_708.IndexRanges != &pFVar33->IndexRanges) {
        if ((pFVar33->IndexRanges).AllocatorInstance.SecondaryData ==
            (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
          memmove(&local_708.IndexRanges,&pFVar33->IndexRanges,0x200);
        }
        if (local_708.IndexRanges.AllocatorInstance.SecondaryData !=
            (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
          FMemory::Free((void *)local_708.IndexRanges.AllocatorInstance.SecondaryData);
        }
        local_708.IndexRanges.AllocatorInstance.SecondaryData =
             (pFVar33->IndexRanges).AllocatorInstance.SecondaryData;
        (pFVar33->IndexRanges).AllocatorInstance.SecondaryData =
             (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
        local_708.IndexRanges.ArrayNum = (pFVar33->IndexRanges).ArrayNum;
        local_708.IndexRanges.ArrayMax = (pFVar33->IndexRanges).ArrayMax;
        (pFVar33->IndexRanges).ArrayNum = 0;
        (pFVar33->IndexRanges).ArrayMax = 0x40;
      }
      if (local_2c8.IndexRanges.AllocatorInstance.SecondaryData !=
          (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
        FMemory::Free((void *)local_2c8.IndexRanges.AllocatorInstance.SecondaryData);
      }
    }
    local_f60.DebugPtr = (UPCGMetadata *)&((FPCGTaggedData *)FVar42.Data)->Tags;
    local_f68 = TVar21;
    if (pUVar34 == (UPCGBasePointData *)0x0) {
LAB_149b81ec2:
      pUVar53 = pUVar55;
    }
    else {
      pUVar28 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      iVar24 = (int)pUVar28->_padding_;
      if ((*(int *)(pUVar34->_padding_ + 0x38) < iVar24) ||
         (pUVar53 = pUVar34,
         (longlong *)
         *(undefined1 **)(*(longlong *)(pUVar34->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
         &pUVar28->_padding_)) goto LAB_149b81ec2;
    }
    if (pUVar53 == (UPCGBasePointData *)0x0) {
      if (pUVar34 != (UPCGBasePointData *)0x0) {
        pUVar28 = Z_Construct_UClass_UPCGParamData_NoRegister();
        iVar24 = (int)pUVar28->_padding_;
        if ((iVar24 <= *(int *)(pUVar34->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar34->_padding_ + 0x30) + (longlong)iVar24 * 8) ==
            &pUVar28->_padding_)) {
          this_01 = (((TObjectPtr<UPCGMetadata> *)&pUVar34->_padding_)->field0_0x0).DebugPtr;
          if ((this_01 == (UPCGMetadata *)0x0) &&
             (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InputMetadata",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterElementsByIndex.cpp"
                                  ,0x158,L""), bVar58)) {
            pcVar6 = (code *)swi(3);
            uVar23 = (*pcVar6)();
            return (bool)uVar23;
          }
          uVar46 = UPCGMetadata::GetItemCountForChild(this_01);
          local_f58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f58.ArrayNum = 0;
          local_f58.ArrayMax = 0;
          local_f78.ArrayMax = 0;
          local_f78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f78.ArrayNum = 0;
          iVar24 = (int)uVar46;
          if (iVar24 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar46 & 0xffffffff);
          }
          if (0 < iVar24) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar24,&local_f58.AllocatorInstance,0,&local_f58.ArrayMax);
          }
          if ((pUVar30->bOutputDiscardedElements != false) && (local_f78.ArrayMax < iVar24)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar24,&local_f78.AllocatorInstance,local_f78.ArrayNum,
                       &local_f78.ArrayMax);
          }
          pUVar34 = pUVar55;
          if (0 < (longlong)iVar24) {
            do {
              bVar58 = PCGIndexing::FPCGIndexCollection::ContainsIndex(&local_708,(int)pUVar34);
              if (pUVar30->bInvertFilter != false) {
                bVar58 = !bVar58;
              }
              if (bVar58 == false) {
                if (pUVar30->bOutputDiscardedElements != false) {
                  if (local_f78.ArrayNum == local_f78.ArrayMax) {
                    local_f78.ArrayNum =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_f78.AllocatorInstance,&local_f78.ArrayMax);
                  }
                  FVar42.Data = local_f78.AllocatorInstance.Data;
                  iVar26 = local_f78.ArrayNum;
                  local_f78.ArrayNum = local_f78.ArrayNum + 1;
                  goto LAB_149b829ea;
                }
              }
              else {
                iVar26 = local_f58.ArrayNum;
                if (local_f58.ArrayNum == local_f58.ArrayMax) {
                  iVar26 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_f58.AllocatorInstance,&local_f58.ArrayMax);
                }
                local_f58.ArrayNum = iVar26 + 1;
                FVar42.Data = local_f58.AllocatorInstance.Data;
LAB_149b829ea:
                *(UPCGBasePointData **)(FVar42.Data + (longlong)iVar26 * 8) = pUVar34;
              }
              pUVar34 = (UPCGBasePointData *)((longlong)&pUVar34->_padding_ + 1);
            } while ((longlong)pUVar34 < (longlong)iVar24);
          }
          bVar58 = IsInGameThread();
          uVar20 = local_f98._8_8_;
          if (bVar58) {
            pUVar43 = GetTransientPackageAsObject();
            pUVar44 = NewObject<UPCGParamData>(pUVar43);
          }
          else {
            if ((((FPCGAsyncState *)(local_f98._8_8_ + 0x88))->bIsRunningOnMainThread != false) &&
               (bVar58 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<4331830188552749348>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                    ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar58)) {
              pcVar6 = (code *)swi(3);
              uVar23 = (*pcVar6)();
              return (bool)uVar23;
            }
            FGCScopeGuard::FGCScopeGuard(local_fa6);
            pUVar43 = GetTransientPackageAsObject();
            pUVar44 = NewObject<UPCGParamData>(pUVar43);
            FGCScopeGuard::~FGCScopeGuard(local_fa6);
            if ((pUVar44 == (UPCGParamData *)0x0) &&
               (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Object",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                    ,0x12a,L""), bVar58)) {
              pcVar6 = (code *)swi(3);
              uVar23 = (*pcVar6)();
              return (bool)uVar23;
            }
            local_eb8 = pUVar44;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar44 != (UPCGParamData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar44);
            }
            TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
            Emplace<TObjectPtr<UObject>_>
                      ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                        *)(uVar20 + 0x1d0),(TObjectPtr<UObject> *)local_e98,(bool *)&local_eb8);
          }
          FLazyName::Resolve(&PCGFilterElementsByIndex::Constants::InFilterOutputPinLabel);
          TVar22 = local_ea0;
          FPCGDataPtrWrapper::FPCGDataPtrWrapper(&local_cb8,(UPCGData *)pUVar44);
          local_ca8._0_8_ = (FScriptContainerElement *)0x0;
          local_ca8._8_8_ = 0;
          local_c88 = (void *)0x0;
          local_c80 = 0;
          local_c7c = 0x80;
          local_c78 = 0xffffffff;
          local_c74 = 0;
          local_c68 = (ForElementType<FSetElementId>)0x0;
          local_c60 = 0;
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_ca8,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     local_f60.DebugPtr);
          local_c58 = TVar22;
          local_c4c = 0;
          piVar40 = &(((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)
                      &(TVar21.DebugPtr)->_padding_)->WeakPtr).ObjectSerialNumber;
          local_c50 = 0x100;
          local_c44 = 0xffffffff;
          iVar24 = (((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)&(TVar21.DebugPtr)->_padding_
                    )->WeakPtr).ObjectIndex;
          if (iVar24 == *piVar40) {
            iVar24 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)TVar21.DebugPtr,piVar40);
          }
          (((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)&(TVar21.DebugPtr)->_padding_)->
          WeakPtr).ObjectIndex = iVar24 + 1;
          pFVar48 = (FPCGDataPtrWrapper *)
                    ((((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                      &(TVar21.DebugPtr)->_padding_)->AllocatorInstance).Data +
                    (longlong)iVar24 * 0x78);
          FPCGDataPtrWrapper::FPCGDataPtrWrapper(pFVar48,&local_cb8);
          *(undefined8 *)
           &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar48 + 1))->
            Elements = 0;
          pFVar48[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
          pFVar48[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
          pFVar48[3].WeakData.WeakPtr.ObjectIndex = 0;
          pFVar48[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
          *(undefined4 *)&pFVar48[4].Data.field0_0x0 = 0xffffffff;
          *(undefined4 *)((longlong)&pFVar48[4].Data.field0_0x0 + 4) = 0;
          pFVar48[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
          pFVar48[5].WeakData.WeakPtr.ObjectIndex = 0;
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
          Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar48 + 1),
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_ca8);
          pFVar48[6].Data.field0_0x0 = local_c58;
          *(undefined1 *)&pFVar48[6].WeakData.WeakPtr.ObjectIndex = (undefined1)local_c50;
          *(undefined1 *)((longlong)&pFVar48[6].WeakData.WeakPtr.ObjectIndex + 1) = local_c50._1_1_;
          *(undefined8 *)&pFVar48[6].WeakData.WeakPtr.ObjectSerialNumber = local_c4c;
          *(undefined4 *)((longlong)&pFVar48[7].Data.field0_0x0 + 4) = local_c44;
          local_c60 = 0;
          if (local_c68 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_c68);
          }
          TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_ca8,0,local_ca8._8_4_);
          bVar58 = local_ca8._12_4_ != 0;
          local_ca8._8_8_ = (ulonglong)(uint)local_ca8._12_4_ << 0x20;
          if (bVar58) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,(ForAnyElementType *)local_ca8,0,(int *)(local_ca8 + 0xc));
          }
          local_c78 = 0xffffffff;
          local_c74 = 0;
          local_c80 = 0;
          if (0x80 < local_c7c) {
            local_c7c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_ca8 + 0x10),0);
          }
          if (local_c88 != (void *)0x0) {
            FMemory::Free(local_c88);
          }
          if ((FScriptContainerElement *)local_ca8._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_ca8._0_8_);
          }
          FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_cb8);
          pUVar5 = (UPCGMetadata *)pUVar44->_padding_;
          if ((pUVar5 == (UPCGMetadata *)0x0) &&
             (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InFilterMetadata",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterElementsByIndex.cpp"
                                  ,0x175,L""), bVar58)) {
            pcVar6 = (code *)swi(3);
            uVar23 = (*pcVar6)();
            return (bool)uVar23;
          }
          pFVar45 = FPCGMetadataInitializeParams::FPCGMetadataInitializeParams
                              (&local_dc8,this_01,&local_f58);
          UPCGMetadata::InitializeAsCopy(pUVar5,pFVar45);
          DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                    ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                     local_dc8.DomainInitializeParams.AllocatorInstance.Data,
                     local_dc8.DomainInitializeParams.ArrayNum);
          if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
              local_dc8.DomainInitializeParams.AllocatorInstance.Data !=
              (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
            FMemory::Free(local_dc8.DomainInitializeParams.AllocatorInstance.Data);
          }
          if (local_dc8.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_dc8.DomainMapping.AllocatorInstance.Data);
          }
          if (pUVar30->bOutputDiscardedElements != false) {
            bVar58 = IsInGameThread();
            uVar20 = local_f98._8_8_;
            if (bVar58) {
              pUVar43 = GetTransientPackageAsObject();
              pUVar44 = NewObject<UPCGParamData>(pUVar43);
            }
            else {
              if ((((FPCGAsyncState *)(local_f98._8_8_ + 0x88))->bIsRunningOnMainThread != false) &&
                 (bVar58 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<4331830188552749348>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                      ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar58)) {
                pcVar6 = (code *)swi(3);
                uVar23 = (*pcVar6)();
                return (bool)uVar23;
              }
              FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)&local_fc8);
              pUVar43 = GetTransientPackageAsObject();
              pUVar44 = NewObject<UPCGParamData>(pUVar43);
              FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)&local_fc8);
              if ((pUVar44 == (UPCGParamData *)0x0) &&
                 (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Object",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                      ,0x12a,L""), bVar58)) {
                pcVar6 = (code *)swi(3);
                uVar23 = (*pcVar6)();
                return (bool)uVar23;
              }
              local_eb0 = pUVar44;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar44 != (UPCGParamData *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar44);
              }
              TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
              ::Emplace<TObjectPtr<UObject>_>
                        ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                          *)(uVar20 + 0x1d0),(TObjectPtr<UObject> *)(local_e98 + 4),
                         (bool *)&local_eb0);
            }
            pUVar5 = (UPCGMetadata *)pUVar44->_padding_;
            if ((pUVar5 == (UPCGMetadata *)0x0) &&
               (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                   ("OutFilterMetadata",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterElementsByIndex.cpp"
                                    ,0x17c,L""), bVar58)) {
              pcVar6 = (code *)swi(3);
              uVar23 = (*pcVar6)();
              return (bool)uVar23;
            }
            FLazyName::Resolve(&PCGFilterElementsByIndex::Constants::OutFilterOutputPinLabel);
            TVar22 = local_ea8;
            FPCGDataPtrWrapper::FPCGDataPtrWrapper(&local_c38,(UPCGData *)pUVar44);
            local_c28._0_8_ = (FScriptContainerElement *)0x0;
            local_c28._8_8_ = 0;
            local_c08 = (void *)0x0;
            local_c00 = 0;
            local_bfc = 0x80;
            local_bf8 = 0xffffffff;
            local_bf4 = 0;
            local_be8 = (ForElementType<FSetElementId>)0x0;
            local_be0 = 0;
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_c28,
                       (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                       local_f60.DebugPtr);
            local_bd8 = TVar22;
            local_bcc = 0;
            piVar40 = &(((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)
                        &(TVar21.DebugPtr)->_padding_)->WeakPtr).ObjectSerialNumber;
            local_bd0 = 0x100;
            local_bc4 = 0xffffffff;
            iVar24 = (((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)
                      &(TVar21.DebugPtr)->_padding_)->WeakPtr).ObjectIndex;
            if (iVar24 == *piVar40) {
              iVar24 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x878,(ForAnyElementType *)TVar21.DebugPtr,piVar40);
            }
            (((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)&(TVar21.DebugPtr)->_padding_)->
            WeakPtr).ObjectIndex = iVar24 + 1;
            pFVar48 = (FPCGDataPtrWrapper *)
                      ((((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                        &(TVar21.DebugPtr)->_padding_)->AllocatorInstance).Data +
                      (longlong)iVar24 * 0x78);
            FPCGDataPtrWrapper::FPCGDataPtrWrapper(pFVar48,&local_c38);
            *(undefined8 *)
             &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar48 + 1))->
              Elements = 0;
            pFVar48[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
            pFVar48[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
            pFVar48[3].WeakData.WeakPtr.ObjectIndex = 0;
            pFVar48[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
            *(undefined4 *)&pFVar48[4].Data.field0_0x0 = 0xffffffff;
            *(undefined4 *)((longlong)&pFVar48[4].Data.field0_0x0 + 4) = 0;
            pFVar48[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
            pFVar48[5].WeakData.WeakPtr.ObjectIndex = 0;
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
            Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                       (pFVar48 + 1),
                       (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_c28);
            pFVar48[6].Data.field0_0x0 = local_bd8;
            *(undefined1 *)&pFVar48[6].WeakData.WeakPtr.ObjectIndex = (undefined1)local_bd0;
            *(undefined1 *)((longlong)&pFVar48[6].WeakData.WeakPtr.ObjectIndex + 1) =
                 local_bd0._1_1_;
            *(undefined8 *)&pFVar48[6].WeakData.WeakPtr.ObjectSerialNumber = local_bcc;
            *(undefined4 *)((longlong)&pFVar48[7].Data.field0_0x0 + 4) = local_bc4;
            local_be0 = 0;
            if (local_be8 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_be8);
            }
            TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_c28,0,local_c28._8_4_);
            bVar58 = local_c28._12_4_ != 0;
            local_c28._8_8_ = (ulonglong)(uint)local_c28._12_4_ << 0x20;
            if (bVar58) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,0,(ForAnyElementType *)local_c28,0,(int *)(local_c28 + 0xc));
            }
            local_bf8 = 0xffffffff;
            local_bf4 = 0;
            local_c00 = 0;
            if (0x80 < local_bfc) {
              local_bfc = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_c28 + 0x10),0);
            }
            if (local_c08 != (void *)0x0) {
              FMemory::Free(local_c08);
            }
            if ((FScriptContainerElement *)local_c28._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_c28._0_8_);
            }
            FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_c38);
            pFVar45 = FPCGMetadataInitializeParams::FPCGMetadataInitializeParams
                                (&local_da0,this_01,&local_f78);
            UPCGMetadata::InitializeAsCopy(pUVar5,pFVar45);
            DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                      ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                       local_da0.DomainInitializeParams.AllocatorInstance.Data,
                       local_da0.DomainInitializeParams.ArrayNum);
            if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                local_da0.DomainInitializeParams.AllocatorInstance.Data !=
                (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
              FMemory::Free(local_da0.DomainInitializeParams.AllocatorInstance.Data);
            }
            if (local_da0.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_da0.DomainMapping.AllocatorInstance.Data);
            }
          }
          if (local_f78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f78.AllocatorInstance.Data);
          }
          if (local_f58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f58.AllocatorInstance.Data);
          }
          goto LAB_149b8313b;
        }
      }
      PCGLog::InputOutput::LogTypedDataNotFoundWarning
                (PointOrParam,PCGPinConstants::DefaultInputLabel,(FPCGContext *)local_f98._8_8_);
    }
    else {
      pUVar34 = FPCGContext::NewPointData_AnyThread((FPCGContext *)local_f98._8_8_);
      FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                (&local_d78,(UPCGSpatialData *)pUVar53);
      local_d78.bInheritSpatialData = false;
      UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)pUVar34,&local_d78);
      if (local_fc0->bInvertFilter == false) {
        iVar24 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_708);
      }
      else {
        iVar24 = (**(code **)(pUVar53->_padding_ + 0x488))(pUVar53);
        iVar26 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_708);
        iVar24 = iVar24 - iVar26;
      }
      (**(code **)(pUVar34->_padding_ + 0x490))(pUVar34,iVar24,1);
      pcVar6 = *(code **)(pUVar34->_padding_ + 0x498);
      uVar27 = (**(code **)(pUVar53->_padding_ + 0x640))(pUVar53,1);
      (*pcVar6)(pUVar34,uVar27);
      (**(code **)(pUVar34->_padding_ + 0x4b0))(pUVar34,pUVar53);
      FLazyName::Resolve(&PCGFilterElementsByIndex::Constants::InFilterOutputPinLabel);
      TVar22 = local_ec8;
      FPCGDataPtrWrapper::FPCGDataPtrWrapper(&local_d38,(UPCGData *)pUVar34);
      local_d28._0_8_ = (FScriptContainerElement *)0x0;
      local_d28._8_8_ = 0;
      local_d08 = (void *)0x0;
      local_d00 = 0;
      local_cfc = 0x80;
      local_cf8 = 0xffffffff;
      local_cf4 = 0;
      local_ce8 = (ForElementType<FSetElementId>)0x0;
      local_ce0 = 0;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_d28,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_f60.DebugPtr
                );
      TVar21 = local_f48;
      local_cd8 = TVar22;
      local_cd0 = 0x100;
      piVar40 = &(((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)
                  &(local_f48.DebugPtr)->_padding_)->WeakPtr).ObjectSerialNumber;
      local_ccc = 0;
      local_cc4 = 0xffffffff;
      iVar26 = (((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)&(local_f48.DebugPtr)->_padding_)
               ->WeakPtr).ObjectIndex;
      if (iVar26 == *piVar40) {
        iVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)local_f48.DebugPtr,piVar40);
      }
      (((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)&(TVar21.DebugPtr)->_padding_)->WeakPtr).
      ObjectIndex = iVar26 + 1;
      pFVar48 = (FPCGDataPtrWrapper *)
                ((((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                  &(TVar21.DebugPtr)->_padding_)->AllocatorInstance).Data + (longlong)iVar26 * 0x78)
      ;
      FPCGDataPtrWrapper::FPCGDataPtrWrapper(pFVar48,&local_d38);
      *(undefined8 *)
       &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar48 + 1))->Elements =
           0;
      pFVar48[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      pFVar48[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar48[3].WeakData.WeakPtr.ObjectIndex = 0;
      pFVar48[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
      *(undefined4 *)&pFVar48[4].Data.field0_0x0 = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar48[4].Data.field0_0x0 + 4) = 0;
      pFVar48[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      pFVar48[5].WeakData.WeakPtr.ObjectIndex = 0;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
      Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar48 + 1),
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_d28);
      pFVar48[6].Data.field0_0x0 = local_cd8;
      *(undefined1 *)&pFVar48[6].WeakData.WeakPtr.ObjectIndex = (undefined1)local_cd0;
      *(undefined1 *)((longlong)&pFVar48[6].WeakData.WeakPtr.ObjectIndex + 1) = local_cd0._1_1_;
      *(undefined8 *)&pFVar48[6].WeakData.WeakPtr.ObjectSerialNumber = local_ccc;
      *(undefined4 *)((longlong)&pFVar48[7].Data.field0_0x0 + 4) = local_cc4;
      local_ce0 = 0;
      if (local_ce8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_ce8);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_d28,0,local_d28._8_4_);
      bVar58 = local_d28._12_4_ != 0;
      local_d28._8_8_ = (ulonglong)(uint)local_d28._12_4_ << 0x20;
      if (bVar58) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_d28,0,(int *)(local_d28 + 0xc));
      }
      local_cf8 = 0xffffffff;
      local_cf4 = 0;
      local_d00 = 0;
      if (0x80 < local_cfc) {
        local_cfc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_d28 + 0x10),0);
      }
      if (local_d08 != (void *)0x0) {
        FMemory::Free(local_d08);
      }
      if ((FScriptContainerElement *)local_d28._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_d28._0_8_);
      }
      FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_d38);
      pUVar35 = pUVar55;
      if (local_fc0->bOutputDiscardedElements != false) {
        pUVar35 = FPCGContext::NewPointData_AnyThread((FPCGContext *)local_f98._8_8_);
        UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)pUVar35,&local_d78);
        iVar26 = (**(code **)(pUVar53->_padding_ + 0x488))(pUVar53);
        (**(code **)(pUVar35->_padding_ + 0x490))(pUVar35,iVar26 - iVar24,1);
        pcVar6 = *(code **)(pUVar35->_padding_ + 0x498);
        uVar27 = (**(code **)(pUVar53->_padding_ + 0x640))(pUVar53,1);
        (*pcVar6)(pUVar35,uVar27);
        (**(code **)(pUVar35->_padding_ + 0x4b0))(pUVar35,pUVar53);
        FLazyName::Resolve(&PCGFilterElementsByIndex::Constants::OutFilterOutputPinLabel);
        `FPCGFilterElementsByIndexElement::ExecuteInternal'::__l68::<lambda_1>::operator()
                  (&local_f68,(UPCGData *)pUVar35,local_ec0);
      }
      pUVar30 = local_fc0;
      FConstPCGPointValueRanges::FConstPCGPointValueRanges(&local_898,pUVar53);
      FPCGPointValueRanges::FPCGPointValueRanges(&local_a28,pUVar34,false);
      if (pUVar35 == (UPCGBasePointData *)0x0) {
        local_bb8.BoundsMinRange._20_8_ = 0;
        local_bb8.BoundsMinRange.StubValue.field0_0x0._4_8_ = 0;
        uStack_e88 = 0;
        local_bb8.BoundsMaxRange._20_8_ = 0;
        local_bb8.BoundsMaxRange.StubValue.field0_0x0._4_8_ = 0;
        local_e90 = 0;
        local_bb8.MetadataEntryRange._20_8_ = 0;
        local_bb8._388_8_ = 0;
        local_e80 = 0;
        uStack_e78 = 0;
        local_e70 = 0;
        local_bb8.TransformRange.ElementView.FirstElementPtr = (TTransform<double> *)0x0;
        local_bb8.TransformRange.ElementView.BytesBetweenElements = 0;
        local_bb8.TransformRange.ElementView.NumElements = 0;
        uStack_e68 = 0;
        local_e60 = 0;
        uStack_e58 = 0;
        local_e50 = 0;
        uStack_e48 = 0;
        local_bb8.TransformRange.StubValue.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_bb8.TransformRange.StubValue.Rotation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_bb8.TransformRange.StubValue.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_e40 = 0;
        uStack_e38 = 0;
        local_e30 = 0;
        uStack_e28 = 0;
        local_e20 = 0;
        uStack_e18 = 0;
        local_bb8.TransformRange._20_8_ = 0;
        local_bb8.TransformRange._padding_._4_4_ = 0;
        local_bb8.DensityRange.NumElements = 0;
        local_bb8.DensityRange.StubValue = 0.0;
        local_bb8.SteepnessRange.NumElements = 0;
        local_bb8.SteepnessRange.StubValue = 0.0;
        local_bb8.TransformRange.StubValue.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_bb8.TransformRange.StubValue.Rotation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_bb8.TransformRange.StubValue.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_bb8.TransformRange.StubValue.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_bb8.TransformRange.StubValue.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_bb8.TransformRange.StubValue.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_bb8.BoundsMinRange.StubValue.field0_0x0._12_8_ = 0;
        local_bb8.BoundsMinRange.StubValue.field0_0x0._20_4_ = 0;
        local_bb8.BoundsMaxRange.StubValue.field0_0x0._12_8_ = 0;
        local_bb8.BoundsMaxRange.StubValue.field0_0x0._20_4_ = 0;
        local_bb8.ColorRange._20_8_ = 0;
        local_bb8.ColorRange._padding_._4_4_ = 0;
        local_bb8.SeedRange.StubValue = 0;
        local_bb8._396_4_ = 0;
        local_bb8.TransformRange.NumElements = 0;
        local_bb8.BoundsMinRange.NumElements = 0;
        local_bb8.TransformRange.StubValue.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_bb8.TransformRange.StubValue.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_bb8.TransformRange.StubValue.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_bb8.BoundsMaxRange.NumElements = 0;
        local_bb8.ColorRange.NumElements = 0;
        local_bb8.SeedRange.NumElements = 0;
        local_bb8.MetadataEntryRange.NumElements = 0;
        local_bb8.TransformRange.StubValue.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_bb8.TransformRange.StubValue.Scale3D.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_bb8.TransformRange.StubValue.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_bb8.TransformRange.StubValue.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_bb8.TransformRange.StubValue.Scale3D.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_bb8.TransformRange.StubValue.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        local_bb8.ColorRange.StubValue.field0_0x0._s_0.X = 0.0;
        local_bb8.ColorRange.StubValue.field0_0x0._s_0.Y = 0.0;
        local_bb8.DensityRange.ElementView.FirstElementPtr = (float *)0x0;
        local_bb8.DensityRange.ElementView.BytesBetweenElements = 0;
        local_bb8.DensityRange.ElementView.NumElements = 0;
        local_bb8.ColorRange.StubValue.field0_0x0._s_0.Z = dVar18;
        local_bb8.ColorRange.StubValue.field0_0x0._s_0.W = dVar19;
        local_bb8.SteepnessRange.ElementView.FirstElementPtr = (float *)0x0;
        local_bb8.SteepnessRange.ElementView.BytesBetweenElements = 0;
        local_bb8.SteepnessRange.ElementView.NumElements = 0;
        local_bb8.BoundsMinRange.ElementView.FirstElementPtr = (TVector<double> *)0x0;
        local_bb8.BoundsMinRange.ElementView.BytesBetweenElements = 0;
        local_bb8.BoundsMinRange.ElementView.NumElements = 0;
        local_bb8.BoundsMaxRange.ElementView.FirstElementPtr = (TVector<double> *)0x0;
        local_bb8.BoundsMaxRange.ElementView.BytesBetweenElements = 0;
        local_bb8.BoundsMaxRange.ElementView.NumElements = 0;
        local_bb8.ColorRange.ElementView.FirstElementPtr = (TVector4<double> *)0x0;
        local_bb8.ColorRange.ElementView.BytesBetweenElements = 0;
        local_bb8.ColorRange.ElementView.NumElements = 0;
        local_bb8.SeedRange.ElementView.FirstElementPtr = (int *)0x0;
        local_bb8.SeedRange.ElementView.BytesBetweenElements = 0;
        local_bb8.SeedRange.ElementView.NumElements = 0;
        local_bb8.MetadataEntryRange.ElementView.FirstElementPtr._0_4_ = 0;
        local_bb8.MetadataEntryRange.ElementView.FirstElementPtr._4_4_ = 0;
        local_bb8.MetadataEntryRange.ElementView.BytesBetweenElements = 0;
        local_bb8.MetadataEntryRange.ElementView.NumElements = 0;
      }
      else {
        FPCGPointValueRanges::FPCGPointValueRanges(&local_bb8,pUVar35,false);
      }
      iVar24 = (**(code **)(pUVar53->_padding_ + 0x488))(pUVar53);
      pUVar34 = pUVar55;
      pUVar35 = pUVar55;
      pUVar57 = pUVar55;
      if (0 < iVar24) {
        do {
          iVar24 = (int)pUVar34;
          bVar58 = PCGIndexing::FPCGIndexCollection::ContainsIndex(&local_708,iVar24);
          if (pUVar30->bInvertFilter != false) {
            bVar58 = !bVar58;
          }
          if (bVar58 == false) {
            if (pUVar30->bOutputDiscardedElements != false) {
              iVar26 = (int)pUVar35;
              if (local_bb8.TransformRange.NumElements != 0) {
                pTVar36 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                          ::GetElement(&local_898.TransformRange,iVar24);
                dVar2 = (pTVar36->Rotation).XY.m128d_f64[0];
                dVar7 = (pTVar36->Rotation).XY.m128d_f64[1];
                dVar8 = (pTVar36->Rotation).ZW.m128d_f64[0];
                dVar9 = (pTVar36->Rotation).ZW.m128d_f64[1];
                dVar10 = (pTVar36->Translation).XY.m128d_f64[0];
                dVar11 = (pTVar36->Translation).XY.m128d_f64[1];
                dVar12 = (pTVar36->Translation).ZW.m128d_f64[0];
                dVar13 = (pTVar36->Translation).ZW.m128d_f64[1];
                dVar14 = (pTVar36->Scale3D).XY.m128d_f64[0];
                dVar15 = (pTVar36->Scale3D).XY.m128d_f64[1];
                dVar16 = (pTVar36->Scale3D).ZW.m128d_f64[0];
                dVar17 = (pTVar36->Scale3D).ZW.m128d_f64[1];
                pTVar36 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                          ::operator[](&local_bb8.TransformRange,iVar26);
                (pTVar36->Rotation).XY.m128d_f64[0] = dVar2;
                (pTVar36->Rotation).XY.m128d_f64[1] = dVar7;
                (pTVar36->Rotation).ZW.m128d_f64[0] = dVar8;
                (pTVar36->Rotation).ZW.m128d_f64[1] = dVar9;
                (pTVar36->Translation).XY.m128d_f64[0] = dVar10;
                (pTVar36->Translation).XY.m128d_f64[1] = dVar11;
                (pTVar36->Translation).ZW.m128d_f64[0] = dVar12;
                (pTVar36->Translation).ZW.m128d_f64[1] = dVar13;
                (pTVar36->Scale3D).XY.m128d_f64[0] = dVar14;
                (pTVar36->Scale3D).XY.m128d_f64[1] = dVar15;
                (pTVar36->Scale3D).ZW.m128d_f64[0] = dVar16;
                (pTVar36->Scale3D).ZW.m128d_f64[1] = dVar17;
              }
              if (local_bb8.DensityRange.NumElements != 0) {
                pfVar37 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                                    (&local_898.DensityRange,iVar24);
                fVar1 = *pfVar37;
                pfVar37 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                                    (&local_bb8.DensityRange,iVar26);
                *pfVar37 = fVar1;
              }
              if (local_bb8.SteepnessRange.NumElements != 0) {
                pfVar37 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                                    (&local_898.SteepnessRange,iVar24);
                fVar1 = *pfVar37;
                pfVar37 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                                    (&local_bb8.SteepnessRange,iVar26);
                *pfVar37 = fVar1;
              }
              if (local_bb8.BoundsMinRange.NumElements != 0) {
                pTVar38 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                          ::GetElement(&local_898.BoundsMinRange,iVar24);
                dVar7 = (pTVar38->field0_0x0)._s_0.X;
                dVar8 = (pTVar38->field0_0x0)._s_0.Y;
                dVar2 = (pTVar38->field0_0x0)._s_0.Z;
                pTVar38 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                          ::operator[](&local_bb8.BoundsMinRange,iVar26);
                (pTVar38->field0_0x0)._s_0.X = dVar7;
                (pTVar38->field0_0x0)._s_0.Y = dVar8;
                (pTVar38->field0_0x0)._s_0.Z = dVar2;
              }
              if (local_bb8.BoundsMaxRange.NumElements != 0) {
                pTVar38 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                          ::GetElement(&local_898.BoundsMaxRange,iVar24);
                dVar7 = (pTVar38->field0_0x0)._s_0.X;
                dVar8 = (pTVar38->field0_0x0)._s_0.Y;
                dVar2 = (pTVar38->field0_0x0)._s_0.Z;
                pTVar38 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                          ::operator[](&local_bb8.BoundsMaxRange,iVar26);
                (pTVar38->field0_0x0)._s_0.X = dVar7;
                (pTVar38->field0_0x0)._s_0.Y = dVar8;
                (pTVar38->field0_0x0)._s_0.Z = dVar2;
              }
              if (local_bb8.ColorRange.NumElements != 0) {
                pTVar39 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                          ::GetElement(&local_898.ColorRange,iVar24);
                dVar2 = (pTVar39->field0_0x0)._s_0.X;
                dVar7 = (pTVar39->field0_0x0)._s_0.Y;
                dVar8 = (pTVar39->field0_0x0)._s_0.Z;
                dVar9 = (pTVar39->field0_0x0)._s_0.W;
                pTVar39 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                          ::operator[](&local_bb8.ColorRange,iVar26);
                (pTVar39->field0_0x0)._s_0.X = dVar2;
                (pTVar39->field0_0x0)._s_0.Y = dVar7;
                (pTVar39->field0_0x0)._s_0.Z = dVar8;
                (pTVar39->field0_0x0)._s_0.W = dVar9;
              }
              if (local_bb8.SeedRange.NumElements != 0) {
                piVar40 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                                    (&local_898.SeedRange,iVar24);
                iVar3 = *piVar40;
                piVar40 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                                    (&local_bb8.SeedRange,iVar26);
                *piVar40 = iVar3;
              }
              if (local_bb8.MetadataEntryRange.NumElements != 0) {
                plVar41 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::
                          GetElement(&local_898.MetadataEntryRange,iVar24);
                lVar4 = *plVar41;
                plVar41 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                                    (&local_bb8.MetadataEntryRange,iVar26);
                *plVar41 = lVar4;
              }
              pUVar35 = (UPCGBasePointData *)(ulonglong)(iVar26 + 1);
              pUVar30 = local_fc0;
            }
          }
          else {
            iVar26 = (int)pUVar57;
            if (local_a28.TransformRange.NumElements != 0) {
              pTVar36 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                        ::GetElement(&local_898.TransformRange,iVar24);
              dVar2 = (pTVar36->Rotation).XY.m128d_f64[0];
              dVar7 = (pTVar36->Rotation).XY.m128d_f64[1];
              dVar8 = (pTVar36->Rotation).ZW.m128d_f64[0];
              dVar9 = (pTVar36->Rotation).ZW.m128d_f64[1];
              dVar10 = (pTVar36->Translation).XY.m128d_f64[0];
              dVar11 = (pTVar36->Translation).XY.m128d_f64[1];
              dVar12 = (pTVar36->Translation).ZW.m128d_f64[0];
              dVar13 = (pTVar36->Translation).ZW.m128d_f64[1];
              dVar14 = (pTVar36->Scale3D).XY.m128d_f64[0];
              dVar15 = (pTVar36->Scale3D).XY.m128d_f64[1];
              dVar16 = (pTVar36->Scale3D).ZW.m128d_f64[0];
              dVar17 = (pTVar36->Scale3D).ZW.m128d_f64[1];
              pTVar36 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                        ::operator[](&local_a28.TransformRange,iVar26);
              (pTVar36->Rotation).XY.m128d_f64[0] = dVar2;
              (pTVar36->Rotation).XY.m128d_f64[1] = dVar7;
              (pTVar36->Rotation).ZW.m128d_f64[0] = dVar8;
              (pTVar36->Rotation).ZW.m128d_f64[1] = dVar9;
              (pTVar36->Translation).XY.m128d_f64[0] = dVar10;
              (pTVar36->Translation).XY.m128d_f64[1] = dVar11;
              (pTVar36->Translation).ZW.m128d_f64[0] = dVar12;
              (pTVar36->Translation).ZW.m128d_f64[1] = dVar13;
              (pTVar36->Scale3D).XY.m128d_f64[0] = dVar14;
              (pTVar36->Scale3D).XY.m128d_f64[1] = dVar15;
              (pTVar36->Scale3D).ZW.m128d_f64[0] = dVar16;
              (pTVar36->Scale3D).ZW.m128d_f64[1] = dVar17;
            }
            if (local_a28.DensityRange.NumElements != 0) {
              pfVar37 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                                  (&local_898.DensityRange,iVar24);
              fVar1 = *pfVar37;
              pfVar37 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                                  (&local_a28.DensityRange,iVar26);
              *pfVar37 = fVar1;
            }
            if (local_a28.SteepnessRange.NumElements != 0) {
              pfVar37 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                                  (&local_898.SteepnessRange,iVar24);
              fVar1 = *pfVar37;
              pfVar37 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                                  (&local_a28.SteepnessRange,iVar26);
              *pfVar37 = fVar1;
            }
            if (local_a28.BoundsMinRange.NumElements != 0) {
              pTVar38 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                        ::GetElement(&local_898.BoundsMinRange,iVar24);
              dVar7 = (pTVar38->field0_0x0)._s_0.X;
              dVar8 = (pTVar38->field0_0x0)._s_0.Y;
              dVar2 = (pTVar38->field0_0x0)._s_0.Z;
              pTVar38 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                        ::operator[](&local_a28.BoundsMinRange,iVar26);
              (pTVar38->field0_0x0)._s_0.X = dVar7;
              (pTVar38->field0_0x0)._s_0.Y = dVar8;
              (pTVar38->field0_0x0)._s_0.Z = dVar2;
            }
            if (local_a28.BoundsMaxRange.NumElements != 0) {
              pTVar38 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                        ::GetElement(&local_898.BoundsMaxRange,iVar24);
              dVar7 = (pTVar38->field0_0x0)._s_0.X;
              dVar8 = (pTVar38->field0_0x0)._s_0.Y;
              dVar2 = (pTVar38->field0_0x0)._s_0.Z;
              pTVar38 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                        ::operator[](&local_a28.BoundsMaxRange,iVar26);
              (pTVar38->field0_0x0)._s_0.X = dVar7;
              (pTVar38->field0_0x0)._s_0.Y = dVar8;
              (pTVar38->field0_0x0)._s_0.Z = dVar2;
            }
            if (local_a28.ColorRange.NumElements != 0) {
              pTVar39 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                        ::GetElement(&local_898.ColorRange,iVar24);
              dVar2 = (pTVar39->field0_0x0)._s_0.X;
              dVar7 = (pTVar39->field0_0x0)._s_0.Y;
              dVar8 = (pTVar39->field0_0x0)._s_0.Z;
              dVar9 = (pTVar39->field0_0x0)._s_0.W;
              pTVar39 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                        ::operator[](&local_a28.ColorRange,iVar26);
              (pTVar39->field0_0x0)._s_0.X = dVar2;
              (pTVar39->field0_0x0)._s_0.Y = dVar7;
              (pTVar39->field0_0x0)._s_0.Z = dVar8;
              (pTVar39->field0_0x0)._s_0.W = dVar9;
            }
            if (local_a28.SeedRange.NumElements != 0) {
              piVar40 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                                  (&local_898.SeedRange,iVar24);
              iVar3 = *piVar40;
              piVar40 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                                  (&local_a28.SeedRange,iVar26);
              *piVar40 = iVar3;
            }
            if (local_a28.MetadataEntryRange.NumElements != 0) {
              plVar41 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                                  (&local_898.MetadataEntryRange,iVar24);
              lVar4 = *plVar41;
              plVar41 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                                  (&local_a28.MetadataEntryRange,iVar26);
              *plVar41 = lVar4;
            }
            pUVar57 = (UPCGBasePointData *)(ulonglong)(iVar26 + 1);
            pUVar30 = local_fc0;
          }
          pUVar34 = (UPCGBasePointData *)(ulonglong)(iVar24 + 1U);
          iVar26 = (**(code **)(pUVar53->_padding_ + 0x488))(pUVar53);
        } while ((int)(iVar24 + 1U) < iVar26);
      }
      DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                 local_d78.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data,
                 local_d78.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
      if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
          local_d78.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
          (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
        FMemory::Free(local_d78.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                      Data);
      }
      if (local_d78.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d78.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
      }
    }
LAB_149b8313b:
    FVar42.Data = (FScriptContainerElement *)(local_fa0 + 1);
    uVar46 = (ulonglong)(uint)local_f98._20_4_;
    pUVar30 = local_fc0;
  }
  goto LAB_149b81c85;
}

// SupportsBasePointDataInputs @ 149b98aa0

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
FPCGFilterElementsByIndexElement::SupportsBasePointDataInputs
          (FPCGFilterElementsByIndexElement *this,FPCGContext *param_1)

{
  return true;
}

