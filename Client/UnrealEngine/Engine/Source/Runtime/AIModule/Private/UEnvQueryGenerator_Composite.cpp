// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 11

// StaticClass @ 146f10bb0

UClass * __cdecl UEnvQueryGenerator_Composite::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_Composite",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_Composite,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_Composite>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_Composite>,local_res8,
               UEnvQueryGenerator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.InnerSingleton;
}

// UEnvQueryGenerator_Composite @ 146f2ac20

UEnvQueryGenerator_Composite * __thiscall
UEnvQueryGenerator_Composite::UEnvQueryGenerator_Composite
          (UEnvQueryGenerator_Composite *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_Composite__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->Generators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Generators).ArrayNum = 0;
  (this->Generators).ArrayMax = 0;
  (this->ForcedItemType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UEnvQueryGenerator_Composite @ 146f2ac70

UEnvQueryGenerator_Composite * __thiscall
UEnvQueryGenerator_Composite::UEnvQueryGenerator_Composite
          (UEnvQueryGenerator_Composite *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffd | 1;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_Composite__6B_;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->Generators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Generators).ArrayNum = 0;
  (this->Generators).ArrayMax = 0;
  (this->ForcedItemType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  pUVar1 = UEnvQueryItemType_Point::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->_padding_ = (longlong)pUVar1;
  this->bHasMatchingItemType = 1;
  return this;
}

// ~UEnvQueryGenerator_Composite @ 146f2ea40

void __thiscall
UEnvQueryGenerator_Composite::~UEnvQueryGenerator_Composite(UEnvQueryGenerator_Composite *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_Composite__6B_;
  pFVar1 = (this->Generators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GenerateItems @ 146f4cb20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryGenerator_Composite::GenerateItems
          (UEnvQueryGenerator_Composite *this,FEnvQueryInstance *param_1)

{
  int *piVar1;
  UObjectBaseUtility *pUVar2;
  TAtomic<FMinimalName> TVar3;
  FName FVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  FUObjectItem *pFVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester> FVar12;
  FUObjectItem *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  TStatIdData *pTVar13;
  uint uVar14;
  FNameEntryId FVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  FColor_u_0 local_res18 [4];
  FName local_78;
  uint local_70;
  uint uStack_6c;
  LARGE_INTEGER local_68;
  FName local_60;
  FName local_58;
  byte local_50;
  FStatMessage local_48;
  
  if ((this->bHasMatchingItemType != 0) && (uVar14 = 0, 0 < (this->Generators).ArrayNum)) {
    lVar16 = 0;
    do {
      uVar17 = ~uVar14 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar14 < (this->Generators).ArrayNum) {
        uVar9 = uVar17;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(longlong *)((this->Generators).AllocatorInstance.Data + lVar16) != 0) {
        uVar9 = 0;
        if ((int)uVar14 < (this->Generators).ArrayNum) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pUVar2 = *(UObjectBaseUtility **)((this->Generators).AllocatorInstance.Data + lVar16);
        local_58.ComparisonIndex.Value = 0;
        local_58.Number = 0;
        local_50 = 0;
        if (pUVar2 != (UObjectBaseUtility *)0x0) {
          pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc);
          FVar12 = StatPtr_STAT_UObjectsStatGroupTester;
          if (StatPtr_STAT_UObjectsStatGroupTester ==
              (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)0x0) {
            pFVar11 = ::FName::FName(&local_60,"STAT_UObjectsStatGroupTester");
            FVar12 = (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UObjectsStatGroupTester,
                                *pFVar11,L"STAT_UObjectsStatGroupTester","STATGROUP_UObjects",
                                "STATCAT_Advanced",L"UObjects",true,true,ST_int64,false,false,
                                MCR_Invalid);
          }
          if ((((int)*(undefined8 *)FVar12 == 0) &&
              ((int)((ulonglong)*(undefined8 *)FVar12 >> 0x20) == 0)) ||
             (FThreadStats::bPrimaryEnable == false)) {
            pTVar13 = &TStatId::TStatId_NAME_None;
          }
          else {
            TVar3 = ((pFVar10->StatID).StatIdPtr)->Name;
            if ((TVar3._0_4_ == 0) && (TVar3._4_4_ == 0)) {
              this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc);
              FUObjectItem::CreateStatID(this_00);
            }
            pTVar13 = (pFVar10->StatID).StatIdPtr;
          }
          if (((SUB84(pTVar13->Name,0) == 0) && (SUB84(pTVar13->Name,4) == 0)) ||
             (FThreadStats::bPrimaryEnable == false)) {
            if (-1 < CpuChannel->Enabled) {
              FScopeCycleCounterUObject::StartObjectTrace
                        ((FScopeCycleCounterUObject *)&local_58,pUVar2);
            }
          }
          else {
            FVar4 = *(FName *)&pTVar13->Name;
            FVar15 = FVar4.ComparisonIndex.Value;
            uVar9 = FVar4.Number;
            if ((FVar15.Value != 0) || (uVar9 != 0)) {
              if (GCycleStatsShouldEmitNamedEvents != 0) {
                local_res18[0].Bits = 0;
                FGenericPlatformMisc::BeginNamedEvent
                          ((FColor *)&local_res18[0]._s_0,(pTVar13->StatDescriptionAnsi).Ptr);
                local_50 = local_50 | 1;
                if (-1 < CpuChannel->Enabled) {
                  local_78.ComparisonIndex.Value = FVar15.Value;
                  local_78.Number = uVar9;
                  FCpuProfilerTrace::OutputBeginDynamicEventWithId
                            (&local_78,(pTVar13->StatDescriptionWide).Ptr,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0x3d8);
                  local_50 = local_50 | 2;
                }
              }
              if (FThreadStats::bPrimaryEnable != false) {
                local_70 = FVar15.Value;
                uStack_6c = uVar9;
                local_58 = FVar4;
                FThreadStats::AddMessage(FVar4,CycleScopeStart);
                local_50 = local_50 | 4;
              }
            }
          }
        }
        uVar9 = 0;
        if ((int)uVar14 < (this->Generators).ArrayNum) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar5 = *(longlong **)((this->Generators).AllocatorInstance.Data + lVar16);
        (**(code **)(*plVar5 + 0x2d0))(plVar5,param_1);
        uVar9 = 0;
        if ((int)uVar14 < (this->Generators).ArrayNum) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        cVar8 = (**(code **)(**(longlong **)((this->Generators).AllocatorInstance.Data + lVar16) +
                            0x2c8))();
        if (cVar8 != '\0') {
          local_res8[0] = 0;
          `UEnvQueryGenerator_Composite::GenerateItems'::__l10::<lambda_1>::operator()(local_res8);
        }
        if ((local_50 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_50 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        FVar4 = local_58;
        if (((((local_50 & 4) != 0) && (local_58 != (FName)0x0)) &&
            (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_01 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_01 == (FThreadStats *)0x0) {
            this_02 = FThreadStatsPool::Get();
            this_01 = FThreadStatsPool::GetFromPool(this_02);
          }
          if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
            local_48.NameAndInfo.Index = FVar4.ComparisonIndex.Value;
            local_48.NameAndInfo.Number = FVar4.Number & 0xffff6fff | 0x6000;
            QueryPerformanceCounter(&local_68);
            local_48.StatData.Pad[4] = '\0';
            local_48.StatData.Pad[5] = '\0';
            local_48.StatData.Pad[6] = '\0';
            local_48.StatData.Pad[7] = '\0';
            local_48.StatData.Pad[0] = local_68.s.LowPart._0_1_;
            local_48.StatData.Pad[1] = local_68.s.LowPart._1_1_;
            local_48.StatData.Pad[2] = local_68.s.LowPart._2_1_;
            local_48.StatData.Pad[3] = local_68.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(this_01,&local_48);
            piVar1 = &this_01->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(this_01,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_01,false,false);
            }
          }
        }
        local_50 = 0;
      }
      uVar14 = uVar14 + 1;
      lVar16 = lVar16 + 8;
    } while ((int)uVar14 < (this->Generators).ArrayNum);
  }
  return;
}

// GetDescriptionTitle @ 146f53e20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryGenerator_Composite::GetDescriptionTitle
          (UEnvQueryGenerator_Composite *this,FText *__return_storage_ptr__)

{
  longlong *plVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FText local_a8;
  FFormatArgumentValue local_98;
  undefined4 local_78;
  FText local_68;
  FText local_58;
  undefined1 local_48 [16];
  FTextFormat local_38;
  
  UEnvQueryTypes::GetShortTypeName(__return_storage_ptr__,(UObject *)this);
  uVar10 = 0;
  uVar11 = uVar10;
  if (0 < (this->Generators).ArrayNum) {
    do {
      uVar9 = (uint)uVar10;
      uVar5 = 0;
      if ((int)uVar9 < (this->Generators).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FText *)(*pcVar3)();
        return pFVar6;
      }
      if (*(longlong *)((this->Generators).AllocatorInstance.Data + uVar11) != 0) {
        uVar5 = 0;
        if ((int)uVar9 < (this->Generators).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FText *)(*pcVar3)();
          return pFVar6;
        }
        plVar1 = *(longlong **)((this->Generators).AllocatorInstance.Data + uVar11);
        pFVar6 = (FText *)(**(code **)(*plVar1 + 0x2b8))(plVar1,local_48);
        local_c8.TextData.Reference = (__return_storage_ptr__->TextData).Reference;
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 8))
                    (local_c8.TextData.Reference,local_res8);
        }
        local_c8.Flags = __return_storage_ptr__->Flags;
        pFVar7 = FText::AsLocalizable_Advanced_LocText
                           (&local_58,L"EnvQueryGenerator",L"DescTitleExtention",L"{0}\n  {1}");
        pFVar8 = FTextFormat::FTextFormat(&local_38,pFVar7,Default);
        local_98.Type = Text;
        FText::FText((FText *)&local_98.TextValue,&local_c8);
        if ((local_98.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FText *)(*pcVar3)();
          return pFVar6;
        }
        local_78 = 4;
        FText::FText(&local_68,pFVar6);
        if ((local_68.TextData.Reference == (ITextData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FText *)(*pcVar3)();
          return pFVar6;
        }
        local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_d8.AllocatorInstance.Data,&local_98,2);
        local_b8.TextFormatData.Object = (pFVar8->TextFormatData).Object;
        local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar8->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_a8,&local_b8,&local_d8);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
        if ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_d8.AllocatorInstance.Data);
        }
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
        if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar8->TextFormatData).SharedReferenceCount.ReferenceController);
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        }
        pIVar2 = (pFVar6->TextData).Reference;
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 0x10))();
        }
        FText::operator=(__return_storage_ptr__,&local_a8);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar9 + 1) < (this->Generators).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f58150

UClass * __cdecl UEnvQueryGenerator_Composite::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_Composite",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_Composite,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_Composite>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_Composite>,local_res8,
               UEnvQueryGenerator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.InnerSingleton;
}

// IsValidGenerator @ 146f5c010

bool __thiscall UEnvQueryGenerator_Composite::IsValidGenerator(UEnvQueryGenerator_Composite *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  lVar3 = this->_padding_;
  if ((lVar3 != 0) && (pUVar6 = UEnvQueryItemType::StaticClass(), pUVar6 != (UClass *)0x0)) {
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (this->_padding_ != 0)) {
      iVar2 = (this->Generators).ArrayNum;
      if (iVar2 != 0) {
        pFVar7 = (this->Generators).AllocatorInstance.Data;
        pFVar1 = pFVar7 + (longlong)iVar2 * 8;
        while( true ) {
          if ((this->Generators).ArrayNum != iVar2) {
            `TCheckedPointerIterator<TObjectPtr<UEnvQueryGenerator>_const_,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_res8);
          }
          if (pFVar7 == pFVar1) break;
          if ((*(longlong **)pFVar7 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(**(longlong **)pFVar7 + 0x2d8))(), cVar5 == '\0')) {
            return false;
          }
          pFVar7 = pFVar7 + 8;
        }
        return true;
      }
    }
  }
  return false;
}

// StaticRegisterNativesUEnvQueryGenerator_Composite @ 146f76d00

void __cdecl UEnvQueryGenerator_Composite::StaticRegisterNativesUEnvQueryGenerator_Composite(void)

{
  return;
}

// VerifyItemTypes @ 146f7cca0

void __thiscall UEnvQueryGenerator_Composite::VerifyItemTypes(UEnvQueryGenerator_Composite *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  uint uVar13;
  uint uVar14;
  UClass *pUVar15;
  FName local_res8;
  FString local_38;
  
  this->bHasMatchingItemType = 1;
  pUVar11 = (UClass *)0x0;
  if (this->bAllowDifferentItemTypes == 0) {
    pUVar12 = pUVar11;
    pUVar9 = pUVar11;
    pUVar15 = pUVar11;
    if (0 < (this->Generators).ArrayNum) {
      do {
        uVar14 = (uint)pUVar9;
        uVar13 = ~uVar14 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar14 < (this->Generators).ArrayNum) {
          uVar7 = uVar13;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(longlong *)
             ((longlong)&pUVar15->_padding_ + (longlong)(this->Generators).AllocatorInstance.Data)
            != 0) {
          uVar7 = 0;
          if ((int)uVar14 < (this->Generators).ArrayNum) {
            uVar7 = uVar13;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar7 = 0;
          if ((*(uint *)(*(longlong *)
                          ((longlong)&pUVar15->_padding_ +
                          (longlong)(this->Generators).AllocatorInstance.Data) + 0x48) >> 1 & 1) !=
              0) {
            uVar8 = uVar7;
            if ((int)uVar14 < (this->Generators).ArrayNum) {
              uVar8 = uVar13;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_res8 = *(FName *)(*(longlong *)
                                     ((longlong)&pUVar15->_padding_ +
                                     (longlong)(this->Generators).AllocatorInstance.Data) + 0x18);
            ::FName::ToString(&local_res8,&local_38);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Generators[Idx]->CanRunAsync()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Generators\\EnvQueryGenerator_Composite.cpp"
                               ,0x56,
                               L"Async Generators such as [%s] are not supported members of Composite Generators."
                              );
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if ((pUVar12 != (UClass *)0x0) &&
             (pUVar9 = UEnvQueryItemType::StaticClass(), pUVar9 != (UClass *)0x0)) {
            iVar1 = (int)pUVar9->_padding_;
            if (((int)pUVar12->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar9->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              if ((int)uVar14 < (this->Generators).ArrayNum) {
                uVar7 = uVar13;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar2 = *(longlong *)
                       ((longlong)&pUVar15->_padding_ +
                       (longlong)(this->Generators).AllocatorInstance.Data);
              lVar3 = *(longlong *)(lVar2 + 0x40);
              pUVar9 = pUVar11;
              if ((lVar3 != 0) &&
                 (pUVar10 = UEnvQueryItemType::StaticClass(), pUVar10 != (UClass *)0x0)) {
                iVar1 = (int)pUVar10->_padding_;
                if ((*(int *)(lVar3 + 0x38) < iVar1) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8)
                    != &pUVar10->_padding_)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (bVar6) {
                  pUVar9 = *(UClass **)(lVar2 + 0x40);
                }
              }
              pUVar10 = UEnvQueryItemType::StaticClass();
              if (pUVar10 == (UClass *)0x0) {
LAB_146f7cfbb:
                pUVar10 = pUVar11;
              }
              else {
                iVar1 = (int)pUVar10->_padding_;
                if (((int)pUVar12->_padding_ < iVar1) ||
                   ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar1 * 8) !=
                    &pUVar10->_padding_)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                pUVar10 = pUVar12;
                if (!bVar6) goto LAB_146f7cfbb;
              }
              if (pUVar10 == pUVar9) goto LAB_146f7d077;
              this->bHasMatchingItemType = 0;
              break;
            }
          }
          if ((int)uVar14 < (this->Generators).ArrayNum) {
            uVar7 = uVar13;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar2 = *(longlong *)
                   ((longlong)&pUVar15->_padding_ +
                   (longlong)(this->Generators).AllocatorInstance.Data);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar4 = *(UObject **)(lVar2 + 0x40), pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          pUVar12 = *(UClass **)(lVar2 + 0x40);
        }
LAB_146f7d077:
        pUVar9 = (UClass *)(ulonglong)(uVar14 + 1);
        pUVar15 = (UClass *)&pUVar15->_padding_;
      } while ((int)(uVar14 + 1) < (this->Generators).ArrayNum);
    }
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 = (this->ForcedItemType).Class.field0_0x0.DebugPtr, pUVar12 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    pUVar12 = (this->ForcedItemType).Class.field0_0x0.DebugPtr;
    if ((pUVar12 != (UClass *)0x0) &&
       (pUVar9 = UEnvQueryItemType::StaticClass(), pUVar9 != (UClass *)0x0)) {
      iVar1 = (int)pUVar9->_padding_;
      if (((int)pUVar12->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar9->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        pUVar11 = (this->ForcedItemType).Class.field0_0x0.DebugPtr;
      }
    }
    this->bHasMatchingItemType = 0;
    *(uint *)&this->field_0x60 = *(uint *)&this->field_0x60 | -(uint)(pUVar11 != (UClass *)0x0) & 2;
  }
  if (this->bHasMatchingItemType != 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    this->_padding_ = (longlong)pUVar12;
    return;
  }
  pUVar11 = UEnvQueryItemType_Point::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  this->_padding_ = (longlong)pUVar11;
  return;
}

// operator() @ 1504ff540

bool __thiscall
`UEnvQueryGenerator_Composite::GenerateItems'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2351737629579411482>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2351737629579411482>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

