// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 7

// FNetAnalyticsAggregator @ 1441d1d20

FNetAnalyticsAggregator * __thiscall
FNetAnalyticsAggregator::FNetAnalyticsAggregator
          (FNetAnalyticsAggregator *this,TSharedPtr<IAnalyticsProvider,1> *param_1,FName param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->AnalyticsProvider).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->AnalyticsProvider).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->NetDriverName = param_2;
  *(undefined8 *)&(this->AnalyticsDataMap).field_0x10 = 0;
  *(undefined8 *)&(this->AnalyticsDataMap).field_0x18 = 0;
  *(undefined8 *)&(this->AnalyticsDataMap).field_0x38 = 0;
  *(undefined8 *)&(this->AnalyticsDataMap).field_0x48 = 0;
  *(undefined8 *)&this->AnalyticsDataMap = 0;
  *(undefined8 *)&(this->AnalyticsDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->AnalyticsDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->AnalyticsDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->AnalyticsDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnalyticsDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnalyticsDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->AnalyticsDataMap).field_0x40 = 0;
  *(undefined8 *)&(this->AnalyticsDataTypeMap).field_0x10 = 0;
  *(undefined8 *)&(this->AnalyticsDataTypeMap).field_0x18 = 0;
  *(undefined8 *)&(this->AnalyticsDataTypeMap).field_0x38 = 0;
  *(undefined8 *)&(this->AnalyticsDataTypeMap).field_0x48 = 0;
  *(undefined8 *)&this->AnalyticsDataTypeMap = 0;
  *(undefined8 *)&(this->AnalyticsDataTypeMap).field_0x8 = 0;
  *(undefined8 *)&(this->AnalyticsDataTypeMap).field_0x20 = 0;
  *(undefined4 *)&(this->AnalyticsDataTypeMap).field_0x28 = 0;
  *(undefined4 *)&(this->AnalyticsDataTypeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnalyticsDataTypeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnalyticsDataTypeMap).field_0x34 = 0;
  *(undefined8 *)&(this->AnalyticsDataTypeMap).field_0x40 = 0;
  *(undefined8 *)&(this->AnalyticsDataConfigMap).field_0x10 = 0;
  *(undefined8 *)&(this->AnalyticsDataConfigMap).field_0x18 = 0;
  *(undefined8 *)&(this->AnalyticsDataConfigMap).field_0x38 = 0;
  *(undefined8 *)&(this->AnalyticsDataConfigMap).field_0x48 = 0;
  *(undefined8 *)&this->AnalyticsDataConfigMap = 0;
  *(undefined8 *)&(this->AnalyticsDataConfigMap).field_0x8 = 0;
  *(undefined8 *)&(this->AnalyticsDataConfigMap).field_0x20 = 0;
  *(undefined4 *)&(this->AnalyticsDataConfigMap).field_0x28 = 0;
  *(undefined4 *)&(this->AnalyticsDataConfigMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnalyticsDataConfigMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnalyticsDataConfigMap).field_0x34 = 0;
  *(undefined8 *)&(this->AnalyticsDataConfigMap).field_0x40 = 0;
  *(undefined8 *)&this->AnalyticsAppender = 0;
  *(undefined8 *)&(this->AnalyticsAppender).field_0x28 = 0;
  this->bSentAnalytics = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// AppendGameInstanceAttributes @ 1441d6c30

void __thiscall
FNetAnalyticsAggregator::AppendGameInstanceAttributes
          (FNetAnalyticsAggregator *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(void **)&this->AnalyticsAppender != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->AnalyticsAppender);
    pcVar1 = *(code **)&this->AnalyticsAppender;
    plVar2 = *(longlong **)&(this->AnalyticsAppender).field_0x28;
    plVar4 = (longlong *)&(this->AnalyticsAppender).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,param_1);
  }
  return;
}

// Init @ 1441dd620

void __thiscall FNetAnalyticsAggregator::Init(FNetAnalyticsAggregator *this)

{
  LOCK();
  GNetAnalyticsCounter = (TAtomic<unsigned_char>)((char)GNetAnalyticsCounter + '\x01');
  UNLOCK();
  InitConfig(this);
  return;
}

// InitConfig @ 1441de5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNetAnalyticsAggregator::InitConfig(FNetAnalyticsAggregator *this)

{
  undefined1 *puVar1;
  TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *this_00;
  FName *pFVar2;
  int iVar3;
  FName FVar4;
  bool bVar5;
  UClass *pUVar6;
  FString *pFVar7;
  size_t sVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  longlong *plVar11;
  FName *this_01;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [24];
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pUVar6 = UNetAnalyticsAggregatorConfig::StaticClass();
  pFVar7 = ::FName::ToString(&this->NetDriverName,(FString *)(local_d8 + 8));
  local_e8._8_4_ = 0;
  if ((pFVar7->Data).ArrayNum == 0) {
    local_e8._0_8_ = L"";
  }
  else {
    local_e8._0_8_ = (pFVar7->Data).AllocatorInstance.Data;
    if ((FName *)local_e8._0_8_ == (FName *)0x0) goto LAB_1441de65c;
  }
  sVar8 = wcslen((wchar_t *)local_e8._0_8_);
  local_e8._8_4_ = (undefined4)sVar8;
LAB_1441de65c:
  pUVar9 = UNetAnalyticsAggregatorConfig::StaticClass();
  pUVar10 = StaticFindObject(pUVar9,(UObject *)pUVar6,(TStringView<wchar_t> *)local_e8,None);
  if ((bool *)local_d8._8_8_ != (bool *)0x0) {
    FMemory::Free((void *)local_d8._8_8_);
  }
  if (pUVar10 == (UObject *)0x0) {
    FVar4 = this->NetDriverName;
    if (FVar4 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar6,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar9 = UNetAnalyticsAggregatorConfig::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar9);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._24_4_ = RF_NoFlags;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = pUVar6;
    local_a8._16_8_ = FVar4;
    pUVar10 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar11 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  this_00 = &this->AnalyticsDataConfigMap;
  bVar5 = 1 < *(int *)&(this->AnalyticsDataConfigMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar1 = &(this->AnalyticsDataConfigMap).field_0xc;
  *(undefined4 *)&(this->AnalyticsDataConfigMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AnalyticsDataConfigMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnalyticsDataConfigMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->AnalyticsDataConfigMap).field_0x2c;
  *(undefined4 *)&(this->AnalyticsDataConfigMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->AnalyticsDataConfigMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AnalyticsDataConfigMap).field_0x10,0)
    ;
  }
  if (bVar5) {
    *(undefined4 *)&(this->AnalyticsDataConfigMap).field_0x48 = 1;
    TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                *)this_00);
  }
  if ((2 < (byte)LogNetCore._0_1_) &&
     (0 < *(int *)&(this->AnalyticsDataMap).field_0x8 - *(int *)&(this->AnalyticsDataMap).field_0x34
     )) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
  }
  if (pUVar10 != (UObject *)0x0) {
    iVar3 = *(int *)&pUVar10[1].field_0x8;
    this_01 = *(FName **)(pUVar10 + 1);
    pFVar2 = (FName *)((longlong)this_01 + (longlong)iVar3 * 0xc);
    while( true ) {
      if (*(int *)&pUVar10[1].field_0x8 != iVar3) {
        `TCheckedPointerIterator<FNetAnalyticsDataConfig,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (this_01 == pFVar2) break;
      local_e8._8_8_ = this_01 + 1;
      local_e8._0_8_ = this_01;
      TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,bool_const_&>_>
                ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                  *)this_00,(TPairInitializer<FName_const_&,bool_const_&> *)local_d8,
                 (bool *)local_e8);
      if (4 < (byte)LogNetCore._0_1_) {
        ::FName::ToString(this_01,&local_c0);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      this_01 = (FName *)&this_01[1].Number;
    }
  }
  return;
}

// RegisterAnalyticsData_Internal @ 1441e46e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FNetAnalyticsData,1> * __thiscall
FNetAnalyticsAggregator::RegisterAnalyticsData_Internal
          (FNetAnalyticsAggregator *this,TSharedPtr<FNetAnalyticsData,1> *__return_storage_ptr__,
          TSharedRef<FNetAnalyticsData,1> *param_1,FName *param_2,FString *param_3)

{
  longlong lVar1;
  uint uVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FString *pFVar6;
  uint uVar7;
  int iVar8;
  TSharedPtr<FNetAnalyticsData,1> *pTVar9;
  FName *pFVar10;
  FName *pFVar11;
  undefined1 *puVar12;
  FName *pFVar13;
  bool bVar14;
  TSharedPtr<FNetAnalyticsData,1> local_78;
  FName *local_68;
  FString *local_60;
  FName *local_58;
  TSharedRef<FNetAnalyticsData,1> *local_50;
  FString local_48;
  FString local_38;
  
  pFVar13 = (FName *)0x0;
  __return_storage_ptr__->Object = (FNetAnalyticsData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FVar3 = *param_2;
  uVar7 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  pFVar6 = param_3;
  if (*(int *)&(this->AnalyticsDataConfigMap).field_0x8 !=
      *(int *)&(this->AnalyticsDataConfigMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->AnalyticsDataConfigMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->AnalyticsDataConfigMap).field_0x38;
    }
    iVar8 = *(int *)(puVar12 +
                    (ulonglong)
                    (*(int *)&(this->AnalyticsDataConfigMap).field_0x48 - 1U & FVar3.Number + uVar7)
                    * 4);
    if (iVar8 != -1) {
      do {
        lVar1 = *(longlong *)&this->AnalyticsDataConfigMap + (longlong)iVar8 * 0x14;
        if (*(FName *)(*(longlong *)&this->AnalyticsDataConfigMap + (longlong)iVar8 * 0x14) == FVar3
           ) {
          pFVar11 = (FName *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar11 = pFVar13;
          }
          if (pFVar11 != (FName *)0x0) {
            if ((char)(pFVar11->ComparisonIndex).Value == '\0') goto LAB_1441e4a38;
            FVar3 = *param_2;
            uVar7 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
            if (*(int *)&(this->AnalyticsDataTypeMap).field_0x8 ==
                *(int *)&(this->AnalyticsDataTypeMap).field_0x34) goto LAB_1441e483d;
            puVar12 = *(undefined1 **)&(this->AnalyticsDataTypeMap).field_0x40;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = &(this->AnalyticsDataTypeMap).field_0x38;
            }
            uVar7 = *(uint *)(puVar12 +
                             (ulonglong)
                             (*(int *)&(this->AnalyticsDataTypeMap).field_0x48 - 1U &
                             FVar3.Number + uVar7) * 4);
            if (uVar7 == 0xffffffff) goto LAB_1441e483d;
            goto LAB_1441e4822;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0xc);
      } while (iVar8 != -1);
    }
  }
  if (1 < (byte)LogNetCore._0_1_) {
    ::FName::ToString(&this->NetDriverName,&local_38);
    ::FName::ToString(param_2,&local_48);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  goto LAB_1441e4a38;
  while (uVar7 = pFVar11[3].ComparisonIndex.Value, uVar7 != 0xffffffff) {
LAB_1441e4822:
    pFVar11 = (FName *)((longlong)(int)uVar7 * 0x20 + *(longlong *)&this->AnalyticsDataTypeMap);
    if (*pFVar11 == FVar3) {
      pFVar10 = pFVar11 + 1;
      if (pFVar11 == (FName *)0x0) {
        pFVar10 = pFVar13;
      }
      if (pFVar10 != (FName *)0x0) {
        uVar7 = pFVar10[1].ComparisonIndex.Value;
        uVar2 = (pFVar6->Data).ArrayNum;
        if (uVar7 == uVar2) {
          if ((int)uVar7 < 2) goto LAB_1441e4860;
          iVar8 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)*pFVar10,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
          bVar14 = iVar8 == 0;
        }
        else {
          bVar14 = uVar2 + uVar7 == 1;
        }
        if (!bVar14) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("*TypeVal == InTypeName",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Analytics\\NetAnalytics.cpp"
                              ,0x7a,L"");
          if (bVar14) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<FNetAnalyticsData,1> *)(*pcVar5)();
            return pTVar9;
          }
        }
        goto LAB_1441e4860;
      }
      break;
    }
  }
LAB_1441e483d:
  local_68 = param_2;
  local_60 = pFVar6;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FString_const_&>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&this->AnalyticsDataTypeMap,
             (TPairInitializer<FName_const_&,FString_const_&> *)&stack0x00000008,(bool *)&local_68);
LAB_1441e4860:
  FVar3 = *param_2;
  uVar7 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  if (*(int *)&(this->AnalyticsDataMap).field_0x8 != *(int *)&(this->AnalyticsDataMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->AnalyticsDataMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->AnalyticsDataMap).field_0x38;
    }
    uVar7 = *(uint *)(puVar12 +
                     (ulonglong)
                     (*(int *)&(this->AnalyticsDataMap).field_0x48 - 1U & FVar3.Number + uVar7) * 4)
    ;
    if (uVar7 != 0xffffffff) {
      do {
        pFVar11 = (FName *)((longlong)(int)uVar7 * 0x20 + *(longlong *)&this->AnalyticsDataMap);
        if (*pFVar11 == FVar3) {
          pFVar10 = pFVar11 + 1;
          if (pFVar11 == (FName *)0x0) {
            pFVar10 = pFVar13;
          }
          if (pFVar10 != (FName *)0x0) goto LAB_1441e499a;
          break;
        }
        uVar7 = pFVar11[3].ComparisonIndex.Value;
      } while (uVar7 != 0xffffffff);
    }
  }
  local_58 = param_2;
  local_50 = param_1;
  TSet<TTuple<FName,TSharedRef<FNetAnalyticsData,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FNetAnalyticsData,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedRef<FNetAnalyticsData,1>_const_&>_>
            ((TSet<TTuple<FName,TSharedRef<FNetAnalyticsData,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FNetAnalyticsData,1>,0>,FDefaultSetAllocator>
              *)&this->AnalyticsDataMap,
             (TPairInitializer<FName_const_&,TSharedRef<FNetAnalyticsData,1>_const_&> *)&param_3,
             (bool *)&local_58);
  pFVar10 = (FName *)(*(longlong *)&this->AnalyticsDataMap + (longlong)(int)param_3 * 0x20 + 8);
LAB_1441e499a:
  local_78.SharedReferenceCount.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar10 + 1)
  ;
  local_78.Object = *(FNetAnalyticsData **)pFVar10;
  if ((FName)local_78.SharedReferenceCount.ReferenceController != (FName)0x0) {
    LOCK();
    *(int *)((longlong)local_78.SharedReferenceCount.ReferenceController + 8) =
         *(int *)((longlong)local_78.SharedReferenceCount.ReferenceController + 8) + 1;
    UNLOCK();
  }
  if (__return_storage_ptr__ != &local_78) {
    __return_storage_ptr__->Object = local_78.Object;
    local_78.Object = (FNetAnalyticsData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_78.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  param_1->Object->Aggregator = this;
LAB_1441e4a38:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  pFVar4 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return __return_storage_ptr__;
}

// SendAnalytics @ 1441ea3f0

void __thiscall FNetAnalyticsAggregator::SendAnalytics(FNetAnalyticsAggregator *this)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMap<FName,TSharedRef<FNetAnalyticsData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FNetAnalyticsData,1>,0>_>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  if (this->bSentAnalytics == false) {
    iStack_38 = 0;
    uStack_34 = 1;
    local_20 = 0;
    iVar2 = *(int *)&(this->AnalyticsDataMap).field_0x28;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->AnalyticsDataMap).field_0x10;
    iStack_24 = 0;
    if (iVar2 != 0) {
      puVar5 = *(uint **)&(this->AnalyticsDataMap).field_0x20;
      if (puVar5 == (uint *)0x0) {
        puVar5 = (uint *)TStack_60.Array;
      }
      uVar3 = *puVar5;
      while (uVar3 == 0) {
        lVar4 = (longlong)iStack_38;
        local_20 = local_20 + 0x20;
        iStack_38 = iStack_38 + 1;
        iStack_24 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_1441ea499;
        uVar3 = puVar5[lVar4 + 1];
      }
      uStack_34 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_34 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_24 = (int)lVar4 + -1 + local_20;
      if (iVar2 < iStack_24) {
        iStack_24 = iVar2;
      }
    }
LAB_1441ea499:
    uStack_28 = 0xffffffff;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iStack_1c = TStack_60.CurrentBitIndex;
    TStack_60._28_4_ = TStack_60.CurrentBitIndex;
    TStack_60.BaseBitIndex = local_20;
    local_40 = &this->AnalyticsDataMap;
    local_30 = (undefined1 *)TStack_60.Array;
    TStack_60._padding_._0_4_ = iStack_38;
    TStack_60._padding_._4_4_ = uStack_34;
    TStack_60.CurrentBitIndex = iStack_24;
    if (iStack_24 < *(int *)&(this->AnalyticsDataMap).field_0x28) {
      do {
        (**(code **)(**(longlong **)
                       ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 +
                       *(longlong *)&this->AnalyticsDataMap) + 0x10))();
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
    this->bSentAnalytics = true;
  }
  return;
}

// SetAnalyticsAppender @ 1441ea6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNetAnalyticsAggregator::SetAnalyticsAppender
          (FNetAnalyticsAggregator *this,
          TFunction<void___cdecl(TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_&)>
          *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = *(longlong *)param_1;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_48);
  }
  lVar6 = *(longlong *)&this->AnalyticsAppender;
  uVar7 = *(undefined8 *)&(this->AnalyticsAppender).field_0x8;
  uVar1 = *(undefined4 *)&(this->AnalyticsAppender).field_0x10;
  uVar2 = *(undefined4 *)&(this->AnalyticsAppender).field_0x14;
  uVar3 = *(undefined4 *)&(this->AnalyticsAppender).field_0x18;
  uVar4 = *(undefined4 *)&(this->AnalyticsAppender).field_0x1c;
  uVar5 = *(undefined8 *)&(this->AnalyticsAppender).field_0x20;
  plVar10 = *(longlong **)&(this->AnalyticsAppender).field_0x28;
  *(longlong *)&this->AnalyticsAppender = local_58;
  *(undefined8 *)&(this->AnalyticsAppender).field_0x8 = uStack_50;
  *(undefined4 *)&(this->AnalyticsAppender).field_0x10 = (undefined4)local_48;
  *(undefined4 *)&(this->AnalyticsAppender).field_0x14 = local_48._4_4_;
  *(undefined4 *)&(this->AnalyticsAppender).field_0x18 = uStack_40;
  *(undefined4 *)&(this->AnalyticsAppender).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->AnalyticsAppender).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->AnalyticsAppender).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->AnalyticsAppender).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->AnalyticsAppender).field_0x2c = uStack_30._4_4_;
  local_48._0_4_ = uVar1;
  local_48._4_4_ = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar10;
  local_58 = lVar6;
  uStack_50 = uVar7;
  if (lVar6 != 0) {
    plVar9 = &local_48;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}

