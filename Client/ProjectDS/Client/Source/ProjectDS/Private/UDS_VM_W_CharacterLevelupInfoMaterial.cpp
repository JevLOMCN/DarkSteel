// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetOnClickedExecuteEvent_WrapperImpl @ 14b71bf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_CharacterLevelupInfoMaterial::SetOnClickedExecuteEvent_WrapperImpl
          (void *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UDS_CharInfoData *this;
  UObject *pUVar7;
  long64 lVar8;
  FDS_CharacterAscendTableRow *this_00;
  UObject *pUVar9;
  int *piVar10;
  int *piVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStackY_588 [32];
  EDS_InventoryType aEStack_548 [16];
  FString FStack_538;
  longlong lStack_528;
  ForAnyElementType FStack_518;
  undefined8 uStack_510;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> TStack_508;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> TStack_4f8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> TStack_4e8;
  FWeakObjectPtr FStack_4d8;
  FWeakObjectPtr FStack_4d0;
  TArray<DS_MoneyDataUtil::FDS_BuyData,TSizedDefaultAllocator<32>_> TStack_4c8;
  FWeakObjectPtr FStack_4b8;
  FString FStack_4b0;
  FString FStack_4a0;
  longlong lStack_490;
  UObject *pUStack_488;
  UObject *pUStack_480;
  UObject *pUStack_478;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> TStack_470;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> TStack_458;
  FDestructionSentinel FStack_440;
  undefined1 *puStack_428;
  FDestructionSentinel FStack_420;
  undefined1 *puStack_408;
  FStringFormatArg FStack_400;
  FStringFormatArg FStack_3e0;
  FStringFormatArg FStack_3c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  if (*(int *)((longlong)param_1 + 0x1c8) == 1) {
    if (*(UDS_VM_CharacterLevelup **)((longlong)param_1 + 0xa0) != (UDS_VM_CharacterLevelup *)0x0) {
      UDS_VM_CharacterLevelup::ExecuteExpUp(*(UDS_VM_CharacterLevelup **)((longlong)param_1 + 0xa0))
      ;
      return;
    }
  }
  else if ((*(int *)((longlong)param_1 + 0x1c8) == 2) &&
          (pUVar9 = *(UObject **)((longlong)param_1 + 0xa8), pUVar9 != (UObject *)0x0)) {
    uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_588;
    pUStack_488 = pUVar9;
    UDS_CharInfoData::GetData((ulong64)&FStack_4d8);
    bVar3 = FWeakObjectPtr::IsValid(&FStack_4d8);
    if (bVar3) {
      this = (UDS_CharInfoData *)FWeakObjectPtr::Get(&FStack_4d8);
      pUVar7 = FWeakObjectPtr::Get(&FStack_4d8);
      lVar8 = UDS_CharInfoData::GetAscendTableRowID(this,*(int *)&pUVar7[0xd].field_0x10);
      this_00 = FDS_CharacterAscendTableRow::GetRef(lVar8,true);
      bVar3 = FDS_CharacterAscendTableRow::IsValid(this_00);
      if (bVar3) {
        UDS_PlayerData::GetData((ulong64)&FStack_4b8,*(ulong64 *)&pUVar9[7].field_0x20,false);
        bVar3 = FWeakObjectPtr::IsValid(&FStack_4b8);
        if (bVar3) {
          pUVar7 = FWeakObjectPtr::Get(&FStack_4b8);
          uVar15 = 0;
          if (*(int *)&pUVar7[6].field_0x10 < this_00->ReqPlayerLevel) {
            FStack_4b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            FStack_4b0.Data.ArrayNum = 0;
            FStack_4b0.Data.ArrayMax = 0;
            ::FString::AppendInt(&FStack_4b0,this_00->ReqPlayerLevel);
            FStringFormatArg::FStringFormatArg(&FStack_400,&FStack_4b0);
            TStack_508.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TStack_508.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&TStack_508.AllocatorInstance,1,&TStack_508.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (TStack_508.AllocatorInstance.Data,&FStack_400,1);
            UDS_UIMessageManager::OpenMsgByStringUi
                      (0x2bb3c,Alert_None_01,&TStack_508,
                       (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                        *)0x0);
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)TStack_508.AllocatorInstance.Data,TStack_508.ArrayNum);
            if ((FStringFormatArg *)TStack_508.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(TStack_508.AllocatorInstance.Data);
            }
            if (FStack_400.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(FStack_400.StringValue.Data.AllocatorInstance.Data);
            }
          }
          else {
            lStack_490 = (longlong)(this_00->ReqItem).ArrayNum;
            uVar17 = uVar15;
            if (0 < lStack_490) {
              do {
                uVar16 = (uint)uVar17;
                uVar4 = 0;
                if ((int)uVar16 < (this_00->ReqItem).ArrayNum) {
                  uVar4 = ~uVar16 >> 0x1f;
                }
                if ((uVar4 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                DS_ItemDataUtil::GetItemDataByTID((int)&FStack_4d0);
                bVar3 = FWeakObjectPtr::IsValid(&FStack_4d0);
                if (!bVar3) {
LAB_14bde2ecc:
                  FStack_538.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  FStack_538.Data.ArrayNum = 0;
                  FStack_538.Data.ArrayMax = 0;
                  ::FString::AppendInt(&FStack_538,this_00->ReqPlayerLevel);
                  FStringFormatArg::FStringFormatArg(&FStack_3c0,&FStack_538);
                  TStack_4e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  TStack_4e8.ArrayNum = 1;
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,0,&TStack_4e8.AllocatorInstance,1,&TStack_4e8.ArrayMax);
                  ConstructItems<FStringFormatArg,FStringFormatArg,int>
                            (TStack_4e8.AllocatorInstance.Data,&FStack_3c0,1);
                  UDS_UIMessageManager::OpenMsgByStringUi
                            (0x2bb39,Alert_None_01,&TStack_4e8,
                             (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                              *)0x0);
                  DestructItems<FStringFormatArg,int>
                            ((FStringFormatArg *)TStack_4e8.AllocatorInstance.Data,
                             TStack_4e8.ArrayNum);
                  if ((FStringFormatArg *)TStack_4e8.AllocatorInstance.Data !=
                      (FStringFormatArg *)0x0) {
                    FMemory::Free(TStack_4e8.AllocatorInstance.Data);
                  }
                  goto LAB_14bde2fde;
                }
                pUVar9 = FWeakObjectPtr::Get(&FStack_4d0);
                aEStack_548[0] = PlayerNormal;
                piVar10 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                          ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                    (&pUVar9[10].field_0x18,1,aEStack_548);
                piVar11 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                          ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                    (&pUVar9[8].field_0x18,(uint)aEStack_548[0],aEStack_548);
                iVar5 = *piVar10;
                iVar1 = *piVar11;
                uVar4 = 0;
                if ((int)uVar16 < (this_00->ReqItemCnt).ArrayNum) {
                  uVar4 = ~uVar16 >> 0x1f;
                }
                if ((uVar4 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (iVar5 + iVar1 <
                    *(int *)((this_00->ReqItemCnt).AllocatorInstance.Data + uVar15 * 4))
                goto LAB_14bde2ecc;
                pUVar9 = FWeakObjectPtr::Get(&FStack_4d0);
                if (pUVar9[0x11].field_0x9 != '\0') {
                  FStack_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  FStack_4a0.Data.ArrayNum = 0;
                  FStack_4a0.Data.ArrayMax = 0;
                  ::FString::AppendInt(&FStack_4a0,this_00->ReqPlayerLevel);
                  FStringFormatArg::FStringFormatArg(&FStack_3e0,&FStack_4a0);
                  TStack_4f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  TStack_4f8.ArrayNum = 1;
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,0,&TStack_4f8.AllocatorInstance,1,&TStack_4f8.ArrayMax);
                  ConstructItems<FStringFormatArg,FStringFormatArg,int>
                            (TStack_4f8.AllocatorInstance.Data,&FStack_3e0,1);
                  UDS_UIMessageManager::OpenMsgByStringUi
                            (0x2bb3b,Alert_None_01,&TStack_4f8,
                             (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                              *)0x0);
                  DestructItems<FStringFormatArg,int>
                            ((FStringFormatArg *)TStack_4f8.AllocatorInstance.Data,
                             TStack_4f8.ArrayNum);
                  FStack_3c0.StringValue.Data.AllocatorInstance.Data =
                       FStack_3e0.StringValue.Data.AllocatorInstance.Data;
                  if ((FStringFormatArg *)TStack_4f8.AllocatorInstance.Data !=
                      (FStringFormatArg *)0x0) {
                    FMemory::Free(TStack_4f8.AllocatorInstance.Data);
                    FStack_3c0.StringValue.Data.AllocatorInstance.Data =
                         FStack_3e0.StringValue.Data.AllocatorInstance.Data;
                  }
                  goto LAB_14bde2fde;
                }
                uVar15 = uVar15 + 1;
                uVar17 = (ulonglong)(uVar16 + 1);
                pUVar9 = pUStack_488;
              } while ((longlong)uVar15 < lStack_490);
            }
            bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar9[6].field_0x18);
            if (!bVar3) {
              FStack_538.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)UDS_VM_CharacterAscend::ExecuteAscend;
              FStack_538.Data._8_8_ = FStack_538.Data._8_8_ & 0xffffffff00000000;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &pUVar9[6].field_0x18,(FWriteAccessScope *)&FStack_440);
              puStack_428 = &pUVar9[6].field_0x20;
              puVar12 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puStack_428)
              ;
              if (puVar12 != (undefined8 *)0x0) {
                *puVar12 = &
                           ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar13 = FDelegateHandle::GenerateNewID();
                puVar12[2] = uVar13;
                *puVar12 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterAscend____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
                ;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar9);
                }
                puVar12[3] = 0;
                pUStack_480 = pUVar9;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar9);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&pUStack_480);
                puVar12[4] = FStack_538.Data.AllocatorInstance.Data;
                puVar12[5] = FStack_538.Data._8_8_;
              }
              if (FStack_440.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_440.Accessor,&FStack_440);
              }
            }
            bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar9[7].field_0x8);
            if (!bVar3) {
              FStack_538.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)UDS_VM_CharacterAscend::ShowMsgDeficitMoneyAscend;
              FStack_538.Data._8_8_ = FStack_538.Data._8_8_ & 0xffffffff00000000;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &pUVar9[7].field_0x8,(FWriteAccessScope *)&FStack_420);
              puStack_408 = &pUVar9[7].field_0x10;
              puVar12 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puStack_408)
              ;
              if (puVar12 != (undefined8 *)0x0) {
                *puVar12 = &
                           ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar13 = FDelegateHandle::GenerateNewID();
                puVar12[2] = uVar13;
                *puVar12 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterAscend____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
                ;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar9);
                }
                puVar12[3] = 0;
                pUStack_478 = pUVar9;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar9);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&pUStack_478);
                puVar12[4] = FStack_538.Data.AllocatorInstance.Data;
                puVar12[5] = FStack_538.Data._8_8_;
              }
              if (FStack_420.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_420.Accessor,&FStack_420);
              }
            }
            FStack_538.Data.AllocatorInstance.Data._0_1_ = this_00->ReqMoneyType;
            FStack_538.Data._8_8_ = this_00->ReqMoneyValue;
            lStack_528 = (longlong)this_00->ID_MoneyExchange;
            FStack_518.Data = (FScriptContainerElement *)0x0;
            uStack_510 = 0;
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&FStack_518,(int *)((longlong)&uStack_510 + 4));
            TStack_470._0_8_ = 0;
            TStack_470._8_8_ = 0;
            uStack_510 = CONCAT44(uStack_510._4_4_,iVar5 + 1);
            TStack_470._16_4_ = 0;
            *(FScriptContainerElement **)(FStack_518.Data + (longlong)iVar5 * 0x18) =
                 FStack_538.Data.AllocatorInstance.Data;
            *(undefined8 *)(FStack_518.Data + (longlong)iVar5 * 0x18 + 8) = FStack_538.Data._8_8_;
            *(longlong *)(FStack_518.Data + (longlong)iVar5 * 0x18 + 0x10) = lStack_528;
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CopyFrom<FDefaultDelegateUserPolicy>
                      (&TStack_470,
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                       &pUVar9[7].field_0x8);
            TStack_458._0_8_ = 0;
            TStack_458._8_8_ = 0;
            TStack_458._16_4_ = 0;
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CopyFrom<FDefaultDelegateUserPolicy>
                      (&TStack_458,
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                       &pUVar9[6].field_0x18);
            _Src.Data = FStack_518.Data;
            lVar14 = (longlong)(int)uStack_510;
            TStack_4c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TStack_4c8.ArrayNum = (int)uStack_510;
            if ((int)uStack_510 == 0) {
              TStack_4c8.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,(int)uStack_510,0,&TStack_4c8.AllocatorInstance,(int)uStack_510,
                         &TStack_4c8.ArrayMax);
              memcpy(TStack_4c8.AllocatorInstance.Data,_Src.Data,lVar14 * 0x18);
            }
            DS_MoneyDataUtil::RequestBuy(&TStack_4c8,&TStack_458,&TStack_470);
            FStack_3c0.StringValue.Data.AllocatorInstance.Data = FStack_518.Data;
LAB_14bde2fde:
            if (FStack_3c0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(FStack_3c0.StringValue.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 != (UDS_LogManager *)0x0) {
            pUVar6 = UDS_LogManager::GetInst();
            TStack_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&TStack_158,"UDS_VM_CharacterAscend::RequestAscend",0x25,Yes);
            UDS_LogManager::PrintLog
                      (pUVar6,1,Warning,TStack_158.Ptr,0x5c,
                       L"playerData is Invalid. CharEntityID : %llu");
            if ((void *)TStack_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)TStack_158._padding_);
            }
          }
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5494883941917654947>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                             ,0x5d,"false");
          if (bVar3) goto code_r0x00014bde2977;
        }
      }
      else {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          TStack_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_278,"UDS_VM_CharacterAscend::RequestAscend",0x25,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,TStack_278.Ptr,0x54,
                     L"charAscendTableRow is Invalid. rowID : %d");
          if ((void *)TStack_278._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_278._padding_);
          }
        }
      }
    }
    else {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        TStack_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_398,"UDS_VM_CharacterAscend::RequestAscend",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,TStack_398.Ptr,0x4b,
                   L"charInfoData is Invalid. CharEntityID : %llu");
        if ((void *)TStack_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_398._padding_);
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5494883941917654964>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                         ,0x4c,"false");
      if (bVar3) {
code_r0x00014bde2977:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    return;
  }
  return;
}

// StaticClass @ 14b71bf40

UClass * __cdecl UDS_VM_W_CharacterLevelupInfoMaterial::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CharacterLevelupInfoMaterial.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CharacterLevelupInfoMaterial",
               &Z_Registration_Info_UClass_UDS_VM_W_CharacterLevelupInfoMaterial.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CharacterLevelupInfoMaterial,0x1d0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_CharacterLevelupInfoMaterial>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CharacterLevelupInfoMaterial>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CharacterLevelupInfoMaterial.InnerSingleton;
}

// UDS_VM_W_CharacterLevelupInfoMaterial @ 14b71eba0

UDS_VM_W_CharacterLevelupInfoMaterial * __thiscall
UDS_VM_W_CharacterLevelupInfoMaterial::UDS_VM_W_CharacterLevelupInfoMaterial
          (UDS_VM_W_CharacterLevelupInfoMaterial *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterLevelupInfoMaterial__6B_;
  (this->VM_Levelup).field0_0x0.DebugPtr = (UDS_VM_CharacterLevelup *)0x0;
  (this->VM_Ascend).field0_0x0.DebugPtr = (UDS_VM_CharacterAscend *)0x0;
  (this->OnClickedExecuteEvent)._padding_ = '\0';
  (this->OnClickedExecuteEvent).bIsCustomSelected = false;
  (this->OnClickedExecuteEvent).bIsLacked = false;
  (this->OnClickedExecuteEvent).bIsCustomDisabled = false;
  (this->OnClickedExecuteEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedExecuteEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedExecuteEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedExecuteEvent).Delegate.field_0x8 = 0;
  (this->ExecuteBtnText).StringTableType = None;
  (this->ExecuteBtnText).StringTableID = 0;
  (this->ExecuteBtnText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ExecuteBtnText).StringEnumTableNameID.Number = 0;
  (this->ExecuteBtnText).DateTime.Ticks = 0;
  (this->ExecuteBtnText).TimeSpan.Ticks = 0;
  (this->ExecuteBtnText).TimeExpressionType = None;
  (this->ExecuteBtnText).IsExpression = false;
  (this->ExecuteBtnText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecuteBtnText).UniqueString.Data.ArrayNum = 0;
  (this->ExecuteBtnText).UniqueString.Data.ArrayMax = 0;
  (this->ExecuteBtnText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecuteBtnText).FormatArgs.ArrayNum = 0;
  (this->ExecuteBtnText).FormatArgs.ArrayMax = 0;
  (this->FixedText_RequireAscenderLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_RequireAscenderLevel).StringEnumTableNameID.Number = 0;
  (this->FixedText_RequireAscenderLevel).DateTime.Ticks = 0;
  (this->FixedText_RequireAscenderLevel).TimeSpan.Ticks = 0;
  (this->FixedText_RequireAscenderLevel).TimeExpressionType = None;
  (this->FixedText_RequireAscenderLevel).IsExpression = false;
  (this->FixedText_RequireAscenderLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_RequireAscenderLevel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_RequireAscenderLevel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_RequireAscenderLevel).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_RequireAscenderLevel).FormatArgs.ArrayNum = 0;
  (this->FixedText_RequireAscenderLevel).FormatArgs.ArrayMax = 0;
  (this->FixedText_Sign).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Sign).StringEnumTableNameID.Number = 0;
  (this->FixedText_Sign).DateTime.Ticks = 0;
  (this->FixedText_Sign).TimeSpan.Ticks = 0;
  (this->FixedText_Sign).TimeExpressionType = None;
  (this->FixedText_Sign).IsExpression = false;
  (this->FixedText_Sign).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Sign).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Sign).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Sign).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Sign).FormatArgs.ArrayNum = 0;
  (this->FixedText_Sign).FormatArgs.ArrayMax = 0;
  this->CharEntityID = 0;
  (this->FixedText_RequireAscenderLevel).StringTableType = StringUi;
  (this->FixedText_RequireAscenderLevel).StringTableID = 0x298db;
  (this->FixedText_Sign).StringTableType = StringUi;
  (this->FixedText_Sign).StringTableID = 0x298dd;
  return this;
}

// UDS_VM_W_CharacterLevelupInfoMaterial @ 14b71ed00

UDS_VM_W_CharacterLevelupInfoMaterial * __thiscall
UDS_VM_W_CharacterLevelupInfoMaterial::UDS_VM_W_CharacterLevelupInfoMaterial
          (UDS_VM_W_CharacterLevelupInfoMaterial *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterLevelupInfoMaterial__6B_;
  (this->VM_Levelup).field0_0x0.DebugPtr = (UDS_VM_CharacterLevelup *)0x0;
  (this->VM_Ascend).field0_0x0.DebugPtr = (UDS_VM_CharacterAscend *)0x0;
  (this->OnClickedExecuteEvent)._padding_ = '\0';
  (this->OnClickedExecuteEvent).bIsCustomSelected = false;
  (this->OnClickedExecuteEvent).bIsLacked = false;
  (this->OnClickedExecuteEvent).bIsCustomDisabled = false;
  (this->OnClickedExecuteEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedExecuteEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedExecuteEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedExecuteEvent).Delegate.field_0x8 = 0;
  (this->ExecuteBtnText).StringTableType = None;
  (this->ExecuteBtnText).StringTableID = 0;
  (this->ExecuteBtnText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ExecuteBtnText).StringEnumTableNameID.Number = 0;
  (this->ExecuteBtnText).DateTime.Ticks = 0;
  (this->ExecuteBtnText).TimeSpan.Ticks = 0;
  (this->ExecuteBtnText).TimeExpressionType = None;
  (this->ExecuteBtnText).IsExpression = false;
  (this->ExecuteBtnText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecuteBtnText).UniqueString.Data.ArrayNum = 0;
  (this->ExecuteBtnText).UniqueString.Data.ArrayMax = 0;
  (this->ExecuteBtnText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecuteBtnText).FormatArgs.ArrayNum = 0;
  (this->ExecuteBtnText).FormatArgs.ArrayMax = 0;
  (this->FixedText_RequireAscenderLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_RequireAscenderLevel).StringEnumTableNameID.Number = 0;
  (this->FixedText_RequireAscenderLevel).DateTime.Ticks = 0;
  (this->FixedText_RequireAscenderLevel).TimeSpan.Ticks = 0;
  (this->FixedText_RequireAscenderLevel).TimeExpressionType = None;
  (this->FixedText_RequireAscenderLevel).IsExpression = false;
  (this->FixedText_RequireAscenderLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_RequireAscenderLevel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_RequireAscenderLevel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_RequireAscenderLevel).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_RequireAscenderLevel).FormatArgs.ArrayNum = 0;
  (this->FixedText_RequireAscenderLevel).FormatArgs.ArrayMax = 0;
  (this->FixedText_Sign).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Sign).StringEnumTableNameID.Number = 0;
  (this->FixedText_Sign).DateTime.Ticks = 0;
  (this->FixedText_Sign).TimeSpan.Ticks = 0;
  (this->FixedText_Sign).TimeExpressionType = None;
  (this->FixedText_Sign).IsExpression = false;
  (this->FixedText_Sign).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Sign).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Sign).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Sign).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Sign).FormatArgs.ArrayNum = 0;
  (this->FixedText_Sign).FormatArgs.ArrayMax = 0;
  this->CharEntityID = 0;
  (this->FixedText_RequireAscenderLevel).StringTableType = StringUi;
  (this->FixedText_RequireAscenderLevel).StringTableID = 0x298db;
  (this->FixedText_Sign).StringTableType = StringUi;
  (this->FixedText_Sign).StringTableID = 0x298dd;
  return this;
}

// ~UDS_VM_W_CharacterLevelupInfoMaterial @ 14b71fdd0

void __thiscall
UDS_VM_W_CharacterLevelupInfoMaterial::~UDS_VM_W_CharacterLevelupInfoMaterial
          (UDS_VM_W_CharacterLevelupInfoMaterial *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterLevelupInfoMaterial__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Sign).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Sign).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Sign).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Sign).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_RequireAscenderLevel).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_RequireAscenderLevel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_RequireAscenderLevel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_RequireAscenderLevel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ExecuteBtnText).FormatArgs.AllocatorInstance.Data,
             (this->ExecuteBtnText).FormatArgs.ArrayNum);
  pFVar1 = (this->ExecuteBtnText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExecuteBtnText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnClickedExecuteEvent).Delegate);
  pvVar2 = *(void **)&(this->OnClickedExecuteEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnClickedExecuteEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7212c0

IClassDescriptor * __thiscall
UDS_VM_W_CharacterLevelupInfoMaterial::GetFieldNotificationDescriptor
          (UDS_VM_W_CharacterLevelupInfoMaterial *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_CharacterLevelupInfoMaterial::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7219a0

UClass * __cdecl UDS_VM_W_CharacterLevelupInfoMaterial::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CharacterLevelupInfoMaterial.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CharacterLevelupInfoMaterial",
               &Z_Registration_Info_UClass_UDS_VM_W_CharacterLevelupInfoMaterial.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CharacterLevelupInfoMaterial,0x1d0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_CharacterLevelupInfoMaterial>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CharacterLevelupInfoMaterial>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CharacterLevelupInfoMaterial.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_CharacterLevelupInfoMaterial @ 14b721c60

void __cdecl
UDS_VM_W_CharacterLevelupInfoMaterial::StaticRegisterNativesUDS_VM_W_CharacterLevelupInfoMaterial
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_CharacterLevelupInfoMaterial_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b722630

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_W_CharacterLevelupInfoMaterial::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_W_CharacterLevelupInfoMaterial__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].Visibility = Hidden;
    *(undefined8 *)&this[1].VMName.Number = 0x298db;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0x298dd;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execIsExecuteBtnDisabled @ 14b722c00

void __cdecl
UDS_VM_W_CharacterLevelupInfoMaterial::execIsExecuteBtnDisabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsExecuteBtnDisabled((UDS_VM_W_CharacterLevelupInfoMaterial *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execVisibilityAscendPlayerLevelLimit @ 14b7231f0

void __cdecl
UDS_VM_W_CharacterLevelupInfoMaterial::execVisibilityAscendPlayerLevelLimit
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibilityAscendPlayerLevelLimit((UDS_VM_W_CharacterLevelupInfoMaterial *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibilityFirstMoney @ 14b723230

void __cdecl
UDS_VM_W_CharacterLevelupInfoMaterial::execVisibilityFirstMoney
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibilityFirstMoney((UDS_VM_W_CharacterLevelupInfoMaterial *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibilityQuantityControl @ 14b723270

void __cdecl
UDS_VM_W_CharacterLevelupInfoMaterial::execVisibilityQuantityControl
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibilityQuantityControl((UDS_VM_W_CharacterLevelupInfoMaterial *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibilitySecondMoney @ 14b7232b0

void __cdecl
UDS_VM_W_CharacterLevelupInfoMaterial::execVisibilitySecondMoney
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibilitySecondMoney((UDS_VM_W_CharacterLevelupInfoMaterial *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// GetCharLevelupData @ 14bfab040

FDS_CharLevelupData * __thiscall
UDS_VM_W_CharacterLevelupInfoMaterial::GetCharLevelupData
          (UDS_VM_W_CharacterLevelupInfoMaterial *this,FDS_CharLevelupData *__return_storage_ptr__)

{
  UDS_VM_CharacterLevelup *this_00;
  
  this_00 = (this->VM_Levelup).field0_0x0.DebugPtr;
  if (this_00 == (UDS_VM_CharacterLevelup *)0x0) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    __return_storage_ptr__->AddExp = 0;
    __return_storage_ptr__->PostLevelUpExp = 0;
    return __return_storage_ptr__;
  }
  UDS_VM_CharacterLevelup::GetCharLevelupData(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsExecuteBtnDisabled @ 14bfb2fb0

bool __thiscall
UDS_VM_W_CharacterLevelupInfoMaterial::IsExecuteBtnDisabled
          (UDS_VM_W_CharacterLevelupInfoMaterial *this)

{
  UDS_VM_CharacterLevelup *pUVar1;
  
  if ((this->PanelType == Levelup) &&
     (pUVar1 = (this->VM_Levelup).field0_0x0.DebugPtr, pUVar1 != (UDS_VM_CharacterLevelup *)0x0)) {
    return pUVar1->IsExpIncreasing == true;
  }
  return false;
}

// OnClickExecute @ 14bfb9a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterLevelupInfoMaterial::OnClickExecute
          (UDS_VM_W_CharacterLevelupInfoMaterial *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  UDS_VM_CharacterLevelup *this_00;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UDS_CharInfoData *this_01;
  UObject *pUVar7;
  long64 lVar8;
  FDS_CharacterAscendTableRow *this_02;
  int *piVar9;
  int *piVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  UDS_VM_CharacterAscend *pUVar17;
  undefined1 auStackY_588 [32];
  EDS_InventoryType aEStack_548 [16];
  FString FStack_538;
  longlong lStack_528;
  ForAnyElementType FStack_518;
  undefined8 uStack_510;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> TStack_508;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> TStack_4f8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> TStack_4e8;
  FWeakObjectPtr FStack_4d8;
  FWeakObjectPtr FStack_4d0;
  TArray<DS_MoneyDataUtil::FDS_BuyData,TSizedDefaultAllocator<32>_> TStack_4c8;
  FWeakObjectPtr FStack_4b8;
  FString FStack_4b0;
  FString FStack_4a0;
  longlong lStack_490;
  UDS_VM_CharacterAscend *pUStack_488;
  UDS_VM_CharacterAscend *pUStack_480;
  UDS_VM_CharacterAscend *pUStack_478;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> TStack_470;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> TStack_458;
  FDestructionSentinel FStack_440;
  undefined1 *puStack_428;
  FDestructionSentinel FStack_420;
  undefined1 *puStack_408;
  FStringFormatArg FStack_400;
  FStringFormatArg FStack_3e0;
  FStringFormatArg FStack_3c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  if (this->PanelType == Levelup) {
    this_00 = (this->VM_Levelup).field0_0x0.DebugPtr;
    if (this_00 != (UDS_VM_CharacterLevelup *)0x0) {
      UDS_VM_CharacterLevelup::ExecuteExpUp(this_00);
      return;
    }
  }
  else if ((this->PanelType == Ascend) &&
          (pUVar17 = (this->VM_Ascend).field0_0x0.DebugPtr, pUVar17 != (UDS_VM_CharacterAscend *)0x0
          )) {
    uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_588;
    pUStack_488 = pUVar17;
    UDS_CharInfoData::GetData((ulong64)&FStack_4d8);
    bVar3 = FWeakObjectPtr::IsValid(&FStack_4d8);
    if (bVar3) {
      this_01 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&FStack_4d8);
      pUVar7 = FWeakObjectPtr::Get(&FStack_4d8);
      lVar8 = UDS_CharInfoData::GetAscendTableRowID(this_01,*(int *)&pUVar7[0xd].field_0x10);
      this_02 = FDS_CharacterAscendTableRow::GetRef(lVar8,true);
      bVar3 = FDS_CharacterAscendTableRow::IsValid(this_02);
      if (bVar3) {
        UDS_PlayerData::GetData((ulong64)&FStack_4b8,pUVar17->CharEntityID,false);
        bVar3 = FWeakObjectPtr::IsValid(&FStack_4b8);
        if (bVar3) {
          pUVar7 = FWeakObjectPtr::Get(&FStack_4b8);
          uVar14 = 0;
          if (*(int *)&pUVar7[6].field_0x10 < this_02->ReqPlayerLevel) {
            FStack_4b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            FStack_4b0.Data.ArrayNum = 0;
            FStack_4b0.Data.ArrayMax = 0;
            ::FString::AppendInt(&FStack_4b0,this_02->ReqPlayerLevel);
            FStringFormatArg::FStringFormatArg(&FStack_400,&FStack_4b0);
            TStack_508.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TStack_508.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&TStack_508.AllocatorInstance,1,&TStack_508.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (TStack_508.AllocatorInstance.Data,&FStack_400,1);
            UDS_UIMessageManager::OpenMsgByStringUi
                      (0x2bb3c,Alert_None_01,&TStack_508,
                       (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                        *)0x0);
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)TStack_508.AllocatorInstance.Data,TStack_508.ArrayNum);
            if ((FStringFormatArg *)TStack_508.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(TStack_508.AllocatorInstance.Data);
            }
            if (FStack_400.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(FStack_400.StringValue.Data.AllocatorInstance.Data);
            }
          }
          else {
            lStack_490 = (longlong)(this_02->ReqItem).ArrayNum;
            uVar16 = uVar14;
            if (0 < lStack_490) {
              do {
                uVar15 = (uint)uVar16;
                uVar4 = 0;
                if ((int)uVar15 < (this_02->ReqItem).ArrayNum) {
                  uVar4 = ~uVar15 >> 0x1f;
                }
                if ((uVar4 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                DS_ItemDataUtil::GetItemDataByTID((int)&FStack_4d0);
                bVar3 = FWeakObjectPtr::IsValid(&FStack_4d0);
                if (!bVar3) {
LAB_14bde2ecc:
                  FStack_538.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  FStack_538.Data.ArrayNum = 0;
                  FStack_538.Data.ArrayMax = 0;
                  ::FString::AppendInt(&FStack_538,this_02->ReqPlayerLevel);
                  FStringFormatArg::FStringFormatArg(&FStack_3c0,&FStack_538);
                  TStack_4e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  TStack_4e8.ArrayNum = 1;
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,0,&TStack_4e8.AllocatorInstance,1,&TStack_4e8.ArrayMax);
                  ConstructItems<FStringFormatArg,FStringFormatArg,int>
                            (TStack_4e8.AllocatorInstance.Data,&FStack_3c0,1);
                  UDS_UIMessageManager::OpenMsgByStringUi
                            (0x2bb39,Alert_None_01,&TStack_4e8,
                             (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                              *)0x0);
                  DestructItems<FStringFormatArg,int>
                            ((FStringFormatArg *)TStack_4e8.AllocatorInstance.Data,
                             TStack_4e8.ArrayNum);
                  if ((FStringFormatArg *)TStack_4e8.AllocatorInstance.Data !=
                      (FStringFormatArg *)0x0) {
                    FMemory::Free(TStack_4e8.AllocatorInstance.Data);
                  }
                  goto LAB_14bde2fde;
                }
                pUVar7 = FWeakObjectPtr::Get(&FStack_4d0);
                aEStack_548[0] = PlayerNormal;
                piVar9 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                         ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                   (&pUVar7[10].field_0x18,1,aEStack_548);
                piVar10 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                          ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                    (&pUVar7[8].field_0x18,(uint)aEStack_548[0],aEStack_548);
                iVar5 = *piVar9;
                iVar1 = *piVar10;
                uVar4 = 0;
                if ((int)uVar15 < (this_02->ReqItemCnt).ArrayNum) {
                  uVar4 = ~uVar15 >> 0x1f;
                }
                if ((uVar4 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (iVar5 + iVar1 <
                    *(int *)((this_02->ReqItemCnt).AllocatorInstance.Data + uVar14 * 4))
                goto LAB_14bde2ecc;
                pUVar7 = FWeakObjectPtr::Get(&FStack_4d0);
                if (pUVar7[0x11].field_0x9 != '\0') {
                  FStack_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  FStack_4a0.Data.ArrayNum = 0;
                  FStack_4a0.Data.ArrayMax = 0;
                  ::FString::AppendInt(&FStack_4a0,this_02->ReqPlayerLevel);
                  FStringFormatArg::FStringFormatArg(&FStack_3e0,&FStack_4a0);
                  TStack_4f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  TStack_4f8.ArrayNum = 1;
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,0,&TStack_4f8.AllocatorInstance,1,&TStack_4f8.ArrayMax);
                  ConstructItems<FStringFormatArg,FStringFormatArg,int>
                            (TStack_4f8.AllocatorInstance.Data,&FStack_3e0,1);
                  UDS_UIMessageManager::OpenMsgByStringUi
                            (0x2bb3b,Alert_None_01,&TStack_4f8,
                             (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                              *)0x0);
                  DestructItems<FStringFormatArg,int>
                            ((FStringFormatArg *)TStack_4f8.AllocatorInstance.Data,
                             TStack_4f8.ArrayNum);
                  FStack_3c0.StringValue.Data.AllocatorInstance.Data =
                       FStack_3e0.StringValue.Data.AllocatorInstance.Data;
                  if ((FStringFormatArg *)TStack_4f8.AllocatorInstance.Data !=
                      (FStringFormatArg *)0x0) {
                    FMemory::Free(TStack_4f8.AllocatorInstance.Data);
                    FStack_3c0.StringValue.Data.AllocatorInstance.Data =
                         FStack_3e0.StringValue.Data.AllocatorInstance.Data;
                  }
                  goto LAB_14bde2fde;
                }
                uVar14 = uVar14 + 1;
                uVar16 = (ulonglong)(uVar15 + 1);
                pUVar17 = pUStack_488;
              } while ((longlong)uVar14 < lStack_490);
            }
            bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                               &pUVar17->RequestAscendDelegate);
            if (!bVar3) {
              FStack_538.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)UDS_VM_CharacterAscend::ExecuteAscend;
              FStack_538.Data._8_8_ = FStack_538.Data._8_8_ & 0xffffffff00000000;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &pUVar17->RequestAscendDelegate,(FWriteAccessScope *)&FStack_440);
              puStack_428 = &(pUVar17->RequestAscendDelegate).field_0x8;
              puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puStack_428)
              ;
              if (puVar11 != (undefined8 *)0x0) {
                *puVar11 = &
                           ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar12 = FDelegateHandle::GenerateNewID();
                puVar11[2] = uVar12;
                *puVar11 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterAscend____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
                ;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar17);
                }
                puVar11[3] = 0;
                pUStack_480 = pUVar17;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar17);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&pUStack_480);
                puVar11[4] = FStack_538.Data.AllocatorInstance.Data;
                puVar11[5] = FStack_538.Data._8_8_;
              }
              if (FStack_440.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_440.Accessor,&FStack_440);
              }
            }
            bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                               &pUVar17->DeficitMoneyAscendDelegate);
            if (!bVar3) {
              FStack_538.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)UDS_VM_CharacterAscend::ShowMsgDeficitMoneyAscend;
              FStack_538.Data._8_8_ = FStack_538.Data._8_8_ & 0xffffffff00000000;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &pUVar17->DeficitMoneyAscendDelegate,(FWriteAccessScope *)&FStack_420);
              puStack_408 = &(pUVar17->DeficitMoneyAscendDelegate).field_0x8;
              puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puStack_408)
              ;
              if (puVar11 != (undefined8 *)0x0) {
                *puVar11 = &
                           ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar12 = FDelegateHandle::GenerateNewID();
                puVar11[2] = uVar12;
                *puVar11 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterAscend____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
                ;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar17);
                }
                puVar11[3] = 0;
                pUStack_478 = pUVar17;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar17);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&pUStack_478);
                puVar11[4] = FStack_538.Data.AllocatorInstance.Data;
                puVar11[5] = FStack_538.Data._8_8_;
              }
              if (FStack_420.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_420.Accessor,&FStack_420);
              }
            }
            FStack_538.Data.AllocatorInstance.Data._0_1_ = this_02->ReqMoneyType;
            FStack_538.Data._8_8_ = this_02->ReqMoneyValue;
            lStack_528 = (longlong)this_02->ID_MoneyExchange;
            FStack_518.Data = (FScriptContainerElement *)0x0;
            uStack_510 = 0;
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&FStack_518,(int *)((longlong)&uStack_510 + 4));
            TStack_470._0_8_ = 0;
            TStack_470._8_8_ = 0;
            uStack_510 = CONCAT44(uStack_510._4_4_,iVar5 + 1);
            TStack_470._16_4_ = 0;
            *(FScriptContainerElement **)(FStack_518.Data + (longlong)iVar5 * 0x18) =
                 FStack_538.Data.AllocatorInstance.Data;
            *(undefined8 *)(FStack_518.Data + (longlong)iVar5 * 0x18 + 8) = FStack_538.Data._8_8_;
            *(longlong *)(FStack_518.Data + (longlong)iVar5 * 0x18 + 0x10) = lStack_528;
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CopyFrom<FDefaultDelegateUserPolicy>(&TStack_470,&pUVar17->DeficitMoneyAscendDelegate);
            TStack_458._0_8_ = 0;
            TStack_458._8_8_ = 0;
            TStack_458._16_4_ = 0;
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CopyFrom<FDefaultDelegateUserPolicy>(&TStack_458,&pUVar17->RequestAscendDelegate);
            _Src.Data = FStack_518.Data;
            lVar13 = (longlong)(int)uStack_510;
            TStack_4c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TStack_4c8.ArrayNum = (int)uStack_510;
            if ((int)uStack_510 == 0) {
              TStack_4c8.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,(int)uStack_510,0,&TStack_4c8.AllocatorInstance,(int)uStack_510,
                         &TStack_4c8.ArrayMax);
              memcpy(TStack_4c8.AllocatorInstance.Data,_Src.Data,lVar13 * 0x18);
            }
            DS_MoneyDataUtil::RequestBuy(&TStack_4c8,&TStack_458,&TStack_470);
            FStack_3c0.StringValue.Data.AllocatorInstance.Data = FStack_518.Data;
LAB_14bde2fde:
            if (FStack_3c0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(FStack_3c0.StringValue.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 != (UDS_LogManager *)0x0) {
            pUVar6 = UDS_LogManager::GetInst();
            TStack_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&TStack_158,"UDS_VM_CharacterAscend::RequestAscend",0x25,Yes);
            UDS_LogManager::PrintLog
                      (pUVar6,1,Warning,TStack_158.Ptr,0x5c,
                       L"playerData is Invalid. CharEntityID : %llu");
            if ((void *)TStack_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)TStack_158._padding_);
            }
          }
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5494883941917654947>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                             ,0x5d,"false");
          if (bVar3) goto code_r0x00014bde2977;
        }
      }
      else {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          TStack_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_278,"UDS_VM_CharacterAscend::RequestAscend",0x25,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,TStack_278.Ptr,0x54,
                     L"charAscendTableRow is Invalid. rowID : %d");
          if ((void *)TStack_278._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_278._padding_);
          }
        }
      }
    }
    else {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        TStack_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_398,"UDS_VM_CharacterAscend::RequestAscend",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,TStack_398.Ptr,0x4b,
                   L"charInfoData is Invalid. CharEntityID : %llu");
        if ((void *)TStack_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_398._padding_);
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5494883941917654964>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                         ,0x4c,"false");
      if (bVar3) {
code_r0x00014bde2977:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    return;
  }
  return;
}

// OnSetViewModel @ 14bfc7830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterLevelupInfoMaterial::OnSetViewModel
          (UDS_VM_W_CharacterLevelupInfoMaterial *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_CharStatusPanelType EVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UDS_VM_CharacterLevelup *pUVar8;
  FDS_ViewModelContext *pFVar9;
  UScriptStruct *pUVar10;
  UDS_ViewModelContextManager *pUVar11;
  UDS_VM_CharacterAscend *pUVar12;
  longlong *plVar13;
  FName *pFVar14;
  FDS_ViewModelContext *pFVar15;
  FDS_ViewModelContext *pFVar16;
  undefined1 auStackY_388 [32];
  TSharedPtr<FDS_ViewModelContext_CharacterLevelupMaterialPanel,1> local_348;
  FName local_338;
  int local_330;
  FName local_328;
  int local_320;
  FName local_318;
  int local_310;
  FName local_308;
  int local_300;
  FName local_2f8;
  int local_2f0;
  FName local_2e8;
  int local_2e0;
  FName local_2d8;
  int local_2d0;
  FName local_2c8;
  int local_2c0;
  FName local_2b8;
  int local_2b0;
  TSharedPtr<FDS_ViewModelContext,1> local_2a8;
  TSharedPtr<FDS_ViewModelContext,1> local_298;
  TSharedPtr<FDS_ViewModelContext,1> local_288;
  TSharedPtr<FDS_ViewModelContext,1> local_278;
  TSharedPtr<FDS_ViewModelContext,1> local_268;
  undefined1 local_258 [128];
  undefined1 local_1d8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_288.Object = param_1->Object;
  local_288.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_288.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CharacterLevelupMaterialPanel>(&local_348,&local_288);
  if (local_348.Object == (FDS_ViewModelContext_CharacterLevelupMaterialPanel *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_CharacterLevelupInfoMaterial::OnSetViewModel",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x15,L"context is Invalid.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_348.SharedReferenceCount.ReferenceController);
    goto LAB_14bfc7ee4;
  }
  if ((local_348.Object == (FDS_ViewModelContext_CharacterLevelupMaterialPanel *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->CharEntityID = (local_348.Object)->CharEntityID;
  EVar1 = (local_348.Object)->PanelType;
  this->PanelType = EVar1;
  if (EVar1 == Levelup) {
    pFVar15 = (FDS_ViewModelContext *)0x0;
    if ((this->VM_Levelup).field0_0x0.DebugPtr == (UDS_VM_CharacterLevelup *)0x0) {
      pUVar6 = Z_Construct_UClass_UDS_VM_CharacterLevelup_NoRegister();
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = Z_Construct_UClass_UDS_VM_CharacterLevelup_NoRegister();
      CheckIsClassChildOf_Internal(pUVar7,pUVar6);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_258,pUVar6);
      local_258._48_8_ = (FObjectInstancingGraph *)0x0;
      local_258._56_8_ = (UPackage *)0x0;
      local_258._16_4_ = 0;
      local_258._20_4_ = 0;
      local_258._24_4_ = RF_Transient;
      local_258._40_8_ = (UObject *)0x0;
      local_258[0x20] = false;
      local_258._8_8_ = this;
      pUVar8 = (UDS_VM_CharacterLevelup *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_258);
      if (local_258._64_8_ != 0) {
        plVar13 = (longlong *)(local_258 + 0x50);
        if ((longlong *)local_258._104_8_ != (longlong *)0x0) {
          plVar13 = (longlong *)local_258._104_8_;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      if (pUVar8 != (UDS_VM_CharacterLevelup *)0x0) {
        *(undefined1 *)((longlong)&pUVar8->_padding_ + 4) = 0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 != (UDS_VM_CharacterLevelup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      (this->VM_Levelup).field0_0x0.DebugPtr = pUVar8;
      if (pUVar8 != (UDS_VM_CharacterLevelup *)0x0) goto LAB_14bfc7a5b;
    }
    else {
LAB_14bfc7a5b:
      pFVar9 = ::operator_new(0x28);
      pFVar16 = pFVar15;
      if (pFVar9 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar9->ViewModelTemplateKey = 0;
        *(undefined8 *)&pFVar9->DerivedStaticStruct = 0;
        (pFVar9->ViewModelName).ComparisonIndex = 0;
        (pFVar9->ViewModelName).Number = 0;
        pFVar9->_padding_ = (longlong)&___7FDS_ViewModelContext_CharLevelUp__6B_;
        pFVar9[1]._padding_ = 0;
        pFVar16 = pFVar9;
      }
      pFVar9 = ::operator_new(0x20);
      if (pFVar9 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar9->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar9->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar9->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharLevelUp__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar9->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar9->ViewModelTemplateKey = pFVar16;
        pFVar15 = pFVar9;
      }
      if ((pFVar16 == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar10 = FDS_ViewModelContext_CharLevelUp::StaticStruct();
      *(UScriptStruct **)&pFVar16->DerivedStaticStruct = pUVar10;
      pUVar11 = UDS_ViewModelContextManager::GetInst();
      if (pUVar11 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar15 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar15->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_2a8.Object = pFVar16;
        local_2a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
        UDS_ViewModelContextManager::RegisterContext(pUVar11,&local_2a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2a8.SharedReferenceCount.ReferenceController);
      }
      pFVar16[1]._padding_ = this->CharEntityID;
      pUVar8 = (this->VM_Levelup).field0_0x0.DebugPtr;
      if (pFVar15 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar15->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_278.Object = pFVar16;
      local_278.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar8,&local_278);
      local_330 = FFieldNotificationClassDescriptor::VM_Levelup.BitNumber;
      local_338 = FFieldNotificationClassDescriptor::VM_Levelup.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_338);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar15);
    }
    FDS_Text::SetTextFromStringTable(&this->ExecuteBtnText,StringUi,0x29830);
    pFVar14 = &local_328;
    local_328 = FFieldNotificationClassDescriptor::ExecuteBtnText.FieldName;
    local_320 = FFieldNotificationClassDescriptor::ExecuteBtnText.BitNumber;
LAB_14bfc7e0e:
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar14);
  }
  else if (EVar1 == Ascend) {
    pFVar15 = (FDS_ViewModelContext *)0x0;
    if ((this->VM_Ascend).field0_0x0.DebugPtr == (UDS_VM_CharacterAscend *)0x0) {
      pUVar6 = Z_Construct_UClass_UDS_VM_CharacterAscend_NoRegister();
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = Z_Construct_UClass_UDS_VM_CharacterAscend_NoRegister();
      CheckIsClassChildOf_Internal(pUVar7,pUVar6);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1d8,pUVar6);
      local_1d8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_1d8._56_8_ = (UPackage *)0x0;
      local_1d8._16_4_ = 0;
      local_1d8._20_4_ = 0;
      local_1d8._24_4_ = RF_Transient;
      local_1d8._40_8_ = (UObject *)0x0;
      local_1d8[0x20] = false;
      local_1d8._8_8_ = this;
      pUVar12 = (UDS_VM_CharacterAscend *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
      if (local_1d8._64_8_ != 0) {
        plVar13 = (longlong *)(local_1d8 + 0x50);
        if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
          plVar13 = (longlong *)local_1d8._104_8_;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      if (pUVar12 != (UDS_VM_CharacterAscend *)0x0) {
        *(undefined1 *)((longlong)&pUVar12->_padding_ + 4) = 0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar12 != (UDS_VM_CharacterAscend *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      (this->VM_Ascend).field0_0x0.DebugPtr = pUVar12;
      if (pUVar12 != (UDS_VM_CharacterAscend *)0x0) goto LAB_14bfc7cb2;
    }
    else {
LAB_14bfc7cb2:
      pFVar9 = ::operator_new(0x28);
      pFVar16 = pFVar15;
      if (pFVar9 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar9->ViewModelTemplateKey = 0;
        *(undefined8 *)&pFVar9->DerivedStaticStruct = 0;
        (pFVar9->ViewModelName).ComparisonIndex = 0;
        (pFVar9->ViewModelName).Number = 0;
        pFVar9->_padding_ = (longlong)&___7FDS_ViewModelContext_CharAscend__6B_;
        pFVar9[1]._padding_ = 0;
        pFVar16 = pFVar9;
      }
      pFVar9 = ::operator_new(0x20);
      if (pFVar9 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar9->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar9->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar9->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharAscend__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar9->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar9->ViewModelTemplateKey = pFVar16;
        pFVar15 = pFVar9;
      }
      if ((pFVar16 == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar10 = FDS_ViewModelContext_CharAscend::StaticStruct();
      *(UScriptStruct **)&pFVar16->DerivedStaticStruct = pUVar10;
      pUVar11 = UDS_ViewModelContextManager::GetInst();
      if (pUVar11 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar15 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar15->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_298.Object = pFVar16;
        local_298.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
        UDS_ViewModelContextManager::RegisterContext(pUVar11,&local_298);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_298.SharedReferenceCount.ReferenceController);
      }
      pFVar16[1]._padding_ = this->CharEntityID;
      pUVar12 = (this->VM_Ascend).field0_0x0.DebugPtr;
      if (pFVar15 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar15->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_268.Object = pFVar16;
      local_268.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar12,&local_268);
      local_310 = FFieldNotificationClassDescriptor::VM_Ascend.BitNumber;
      local_318 = FFieldNotificationClassDescriptor::VM_Ascend.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_318);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar15);
    }
    FDS_Text::SetTextFromStringTable(&this->ExecuteBtnText,StringUi,0x29831);
    pFVar14 = &local_308;
    local_308 = FFieldNotificationClassDescriptor::ExecuteBtnText.FieldName;
    local_300 = FFieldNotificationClassDescriptor::ExecuteBtnText.BitNumber;
    goto LAB_14bfc7e0e;
  }
  local_2f0 = FFieldNotificationClassDescriptor::VisibilityQuantityControl.BitNumber;
  local_2f8 = FFieldNotificationClassDescriptor::VisibilityQuantityControl.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2f8);
  local_2e0 = FFieldNotificationClassDescriptor::VisibilityAscendPlayerLevelLimit.BitNumber;
  local_2e8 = FFieldNotificationClassDescriptor::VisibilityAscendPlayerLevelLimit.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2e8);
  local_2d0 = FFieldNotificationClassDescriptor::VisibilityFirstMoney.BitNumber;
  local_2d8 = FFieldNotificationClassDescriptor::VisibilityFirstMoney.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2d8);
  local_2c0 = FFieldNotificationClassDescriptor::VisibilitySecondMoney.BitNumber;
  local_2c8 = FFieldNotificationClassDescriptor::VisibilitySecondMoney.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2c8);
  local_2b0 = FFieldNotificationClassDescriptor::IsExecuteBtnDisabled.BitNumber;
  local_2b8 = FFieldNotificationClassDescriptor::IsExecuteBtnDisabled.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_348.SharedReferenceCount.ReferenceController);
LAB_14bfc7ee4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// VisibilityAscendPlayerLevelLimit @ 14bfe7c60

ESlateVisibility __thiscall
UDS_VM_W_CharacterLevelupInfoMaterial::VisibilityAscendPlayerLevelLimit
          (UDS_VM_W_CharacterLevelupInfoMaterial *this)

{
  UDS_VM_CharacterAscend *this_00;
  bool bVar1;
  ESlateVisibility EVar2;
  
  if ((this->PanelType == Ascend) &&
     (this_00 = (this->VM_Ascend).field0_0x0.DebugPtr, this_00 != (UDS_VM_CharacterAscend *)0x0)) {
    bVar1 = UDS_VM_CharacterAscend::IsAscendPlayerLevelLimit(this_00);
    EVar2 = Collapsed;
    if (bVar1) {
      EVar2 = SelfHitTestInvisible;
    }
    return EVar2;
  }
  return Collapsed;
}

// VisibilityFirstMoney @ 14bfe7cb0

ESlateVisibility __thiscall
UDS_VM_W_CharacterLevelupInfoMaterial::VisibilityFirstMoney
          (UDS_VM_W_CharacterLevelupInfoMaterial *this)

{
  UDS_VM_CharacterLevelup *pUVar1;
  ESlateVisibility EVar2;
  
  if (this->PanelType == Levelup) {
    pUVar1 = (this->VM_Levelup).field0_0x0.DebugPtr;
    if (pUVar1 != (UDS_VM_CharacterLevelup *)0x0) {
      EVar2 = Collapsed;
      if (0 < *(int *)&(pUVar1->LevelUpMoneyMap).field_0x8 -
              *(int *)&(pUVar1->LevelUpMoneyMap).field_0x34) {
        EVar2 = SelfHitTestInvisible;
      }
      return EVar2;
    }
  }
  else if (this->PanelType == Ascend) {
    EVar2 = Collapsed;
    if ((this->VM_Ascend).field0_0x0.DebugPtr != (UDS_VM_CharacterAscend *)0x0) {
      EVar2 = SelfHitTestInvisible;
    }
    return EVar2;
  }
  return Collapsed;
}

// VisibilityQuantityControl @ 14bfe7d10

ESlateVisibility __thiscall
UDS_VM_W_CharacterLevelupInfoMaterial::VisibilityQuantityControl
          (UDS_VM_W_CharacterLevelupInfoMaterial *this)

{
  ESlateVisibility EVar1;
  
  EVar1 = Collapsed;
  if (this->PanelType == Levelup) {
    EVar1 = SelfHitTestInvisible;
  }
  return EVar1;
}

// VisibilitySecondMoney @ 14bfe7d30

ESlateVisibility __thiscall
UDS_VM_W_CharacterLevelupInfoMaterial::VisibilitySecondMoney
          (UDS_VM_W_CharacterLevelupInfoMaterial *this)

{
  UDS_VM_CharacterLevelup *pUVar1;
  ESlateVisibility EVar2;
  
  if ((this->PanelType == Levelup) &&
     (pUVar1 = (this->VM_Levelup).field0_0x0.DebugPtr, pUVar1 != (UDS_VM_CharacterLevelup *)0x0)) {
    EVar2 = Collapsed;
    if (1 < *(int *)&(pUVar1->LevelUpMoneyMap).field_0x8 -
            *(int *)&(pUVar1->LevelUpMoneyMap).field_0x34) {
      EVar2 = SelfHitTestInvisible;
    }
    return EVar2;
  }
  return Collapsed;
}

