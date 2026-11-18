// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// StaticClass @ 146f0e8a0

UClass * __cdecl UEnvQueryGenerator_SimpleGrid::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_SimpleGrid.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_SimpleGrid",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_SimpleGrid.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_SimpleGrid,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_SimpleGrid>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_SimpleGrid>,local_res8,
               UEnvQueryGenerator_ProjectedPoints::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_SimpleGrid.InnerSingleton;
}

// UEnvQueryGenerator_SimpleGrid @ 146f2bec0

UEnvQueryGenerator_SimpleGrid * __thiscall
UEnvQueryGenerator_SimpleGrid::UEnvQueryGenerator_SimpleGrid
          (UEnvQueryGenerator_SimpleGrid *this,FVTableHelper *param_1)

{
  FFieldClass *pFVar1;
  
  UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints
            ((UEnvQueryGenerator_ProjectedPoints *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_SimpleGrid__6B_;
  (this->GridSize)._padding_ = 0;
  (this->GridSize)._padding_ = 0;
  (this->GridSize)._padding_ = 0;
  (this->GridSize)._padding_ = 0;
  (this->GridSize)._padding_ = 0;
  (this->GridSize)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->GridSize).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->GridSize)._padding_ = (longlong)pFVar1;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->SpaceBetween).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->SpaceBetween)._padding_ = (longlong)pFVar1;
  (this->GenerateAround).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UEnvQueryGenerator_SimpleGrid @ 146f2bf90

UEnvQueryGenerator_SimpleGrid * __thiscall
UEnvQueryGenerator_SimpleGrid::UEnvQueryGenerator_SimpleGrid
          (UEnvQueryGenerator_SimpleGrid *this,FObjectInitializer *param_1)

{
  FFieldClass *pFVar1;
  UClass *pUVar2;
  
  UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints
            ((UEnvQueryGenerator_ProjectedPoints *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_SimpleGrid__6B_;
  (this->GridSize)._padding_ = 0;
  (this->GridSize)._padding_ = 0;
  (this->GridSize)._padding_ = 0;
  (this->GridSize)._padding_ = 0;
  (this->GridSize)._padding_ = 0;
  (this->GridSize)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->GridSize).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->GridSize)._padding_ = (longlong)pFVar1;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->SpaceBetween).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->SpaceBetween)._padding_ = (longlong)pFVar1;
  (this->GenerateAround).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  pUVar2 = UEnvQueryContext_Querier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->GenerateAround).Class.field0_0x0.DebugPtr = pUVar2;
  (this->GridSize).DefaultValue = 500.0;
  (this->SpaceBetween).DefaultValue = 100.0;
  return this;
}

// ~UEnvQueryGenerator_SimpleGrid @ 146f2ed30

void __thiscall
UEnvQueryGenerator_SimpleGrid::~UEnvQueryGenerator_SimpleGrid(UEnvQueryGenerator_SimpleGrid *this)

{
  (this->SpaceBetween)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->GridSize)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GenerateItems @ 146f4ed20

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
UEnvQueryGenerator_SimpleGrid::GenerateItems
          (UEnvQueryGenerator_SimpleGrid *this,FEnvQueryInstance *param_1)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  UObject *pUVar10;
  FProperty *pFVar11;
  float *pfVar12;
  float *pfVar13;
  UClass *pUVar14;
  longlong lVar15;
  UClass *pUVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_b8;
  ForAnyElementType local_b0;
  int local_a8;
  int iStack_a4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_a0;
  double local_90;
  double dStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  lVar20 = param_1->_padding_;
  plVar3 = (longlong *)(this->GridSize)._padding_;
  pfVar13 = (float *)0x0;
  if (plVar3 != (longlong *)0x0) {
    if (pUVar10 == (UObject *)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1120252505884721189>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                         ,0x25,"Owner");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      (this->GridSize)._padding_ = 0;
      (**(code **)(*plVar3 + 0x2b0))(plVar3,pUVar10,(int)lVar20);
      FVar4 = (FName)(this->GridSize)._padding_;
      if (FVar4 != (FName)0x0) {
        pFVar11 = UStruct::FindPropertyByName
                            (*(UStruct **)((this->GridSize)._padding_ + 0x10),FVar4);
        if ((pFVar11 == (FProperty *)0x0) ||
           (cVar7 = (**(code **)((this->GridSize)._padding_ + 8))(&this->GridSize), cVar7 == '\0'))
        {
          local_res18[0] = 0;
          bVar6 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res18);
          if (!bVar6) goto LAB_146f4ee02;
        }
        (this->GridSize)._padding_ = (longlong)pFVar11;
      }
    }
  }
LAB_146f4ee02:
  plVar3 = (longlong *)(this->SpaceBetween)._padding_;
  if (plVar3 != (longlong *)0x0) {
    if (pUVar10 == (UObject *)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1120252505884721189>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                         ,0x25,"Owner");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      (this->SpaceBetween)._padding_ = 0;
      (**(code **)(*plVar3 + 0x2b0))(plVar3,pUVar10);
      FVar4 = (FName)(this->SpaceBetween)._padding_;
      if (FVar4 != (FName)0x0) {
        pFVar11 = UStruct::FindPropertyByName
                            (*(UStruct **)((this->SpaceBetween)._padding_ + 0x10),FVar4);
        if ((pFVar11 == (FProperty *)0x0) ||
           (cVar7 = (**(code **)((this->SpaceBetween)._padding_ + 8))(&this->SpaceBetween),
           cVar7 == '\0')) {
          local_res20[0] = 0;
          bVar6 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res20);
          if (!bVar6) goto LAB_146f4ee9e;
        }
        (this->SpaceBetween)._padding_ = (longlong)pFVar11;
      }
    }
  }
LAB_146f4ee9e:
  pFVar11 = (FProperty *)(this->GridSize)._padding_;
  pfVar12 = pfVar13;
  if (pFVar11 != (FProperty *)0x0) {
    pfVar12 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        (pFVar11,(UObject *)(this->GridSize)._padding_,0);
  }
  if (pfVar12 == (float *)0x0) {
    pfVar12 = &(this->GridSize).DefaultValue;
  }
  fVar1 = *pfVar12;
  pFVar11 = (FProperty *)(this->SpaceBetween)._padding_;
  if (pFVar11 != (FProperty *)0x0) {
    pfVar13 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        (pFVar11,(UObject *)(this->SpaceBetween)._padding_,0);
  }
  pUVar16 = (this->GenerateAround).Class.field0_0x0.DebugPtr;
  if (pfVar13 == (float *)0x0) {
    pfVar13 = &(this->SpaceBetween).DefaultValue;
  }
  fVar2 = *pfVar13;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  iVar18 = (int)((fVar1 + fVar1) / fVar2 + __real_3f800000);
  if ((pUVar16 != (UClass *)0x0) &&
     (pUVar14 = UEnvQueryContext::StaticClass(), pUVar14 != (UClass *)0x0)) {
    iVar19 = (int)pUVar14->_padding_;
    if (((int)pUVar16->_padding_ < iVar19) ||
       ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar19 * 8) !=
        &pUVar14->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar16 = (this->GenerateAround).Class.field0_0x0.DebugPtr;
      goto LAB_146f4ef69;
    }
  }
  pUVar16 = (UClass *)0x0;
LAB_146f4ef69:
  FEnvQueryInstance::PrepareContext(param_1,pUVar16,&local_a0);
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  iStack_a4 = 0;
  uVar8 = local_a0.ArrayNum * iVar18 * iVar18;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (0 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar8,&local_b0,0,&iStack_a4);
  }
  uVar8 = 0;
  if (0 < local_a0.ArrayNum) {
    lVar20 = 0;
    iVar19 = local_a0.ArrayNum;
    do {
      local_b8 = 0;
      if (0 < iVar18) {
        do {
          iVar17 = 0;
          do {
            uVar9 = 0;
            if ((int)uVar8 < iVar19) {
              uVar9 = ~uVar8 >> 0x1f;
            }
            if ((uVar9 == 0) &&
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
            local_80 = *(undefined8 *)(local_a0.AllocatorInstance.Data + lVar20 + 0x10);
            dStack_88 = *(double *)(local_a0.AllocatorInstance.Data + lVar20 + 8) -
                        (double)((float)(-(iVar18 / 2) + iVar17) * fVar2);
            uStack_78 = 0;
            local_90 = *(double *)(local_a0.AllocatorInstance.Data + lVar20) -
                       (double)((float)(-(iVar18 / 2) + local_b8) * fVar2);
            if (((local_b0.Data <= (FScriptContainerElement *)&local_90) &&
                ((FScriptContainerElement *)&local_90 < local_b0.Data + (longlong)iStack_a4 * 0x20))
               && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (local_a8 == iStack_a4) {
              local_a8 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&local_b0,&iStack_a4);
            }
            lVar15 = (longlong)local_a8;
            iVar17 = iVar17 + 1;
            local_a8 = local_a8 + 1;
            *(double *)(local_b0.Data + lVar15 * 0x20) = local_90;
            *(double *)(local_b0.Data + lVar15 * 0x20 + 8) = dStack_88;
            *(undefined8 *)(local_b0.Data + lVar15 * 0x20 + 0x10) = local_80;
            *(undefined8 *)(local_b0.Data + lVar15 * 0x20 + 0x10 + 8) = uStack_78;
            iVar19 = local_a0.ArrayNum;
          } while (iVar17 < iVar18);
          local_b8 = local_b8 + 1;
        } while (local_b8 < iVar18);
      }
      uVar8 = uVar8 + 1;
      lVar20 = lVar20 + 0x18;
    } while ((int)uVar8 < iVar19);
  }
  (**(code **)(this->_padding_ + 0x2e0))(this,&local_b0,param_1);
  (**(code **)(this->_padding_ + 0x2e8))(this,&local_b0,param_1);
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return;
}

// GetDescriptionDetails @ 146f52a60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryGenerator_SimpleGrid::GetDescriptionDetails
          (UEnvQueryGenerator_SimpleGrid *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_128
  ;
  FText local_118;
  FString local_108;
  FString local_f8;
  FFormatArgumentValue local_e8;
  FFormatArgumentValue local_c8;
  FText local_a8;
  FString local_98;
  FString local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  FTextFormat local_28;
  
  pFVar3 = FAIDataProviderValue::ToString((FAIDataProviderValue *)&this->SpaceBetween,&local_88);
  pFVar4 = FText::FromString(&local_58,pFVar3);
  pFVar3 = FAIDataProviderValue::ToString((FAIDataProviderValue *)&this->GridSize,&local_98);
  pFVar5 = FText::FromString(&local_48,pFVar3);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_a8,L"EnvQueryGenerator",L"SimpleGridDescription",
                      L"radius: {0}, space between: {1}");
  pFVar7 = FTextFormat::FTextFormat(&local_38,pFVar6,Default);
  FText::Format<FText,FText>(__return_storage_ptr__,pFVar7,pFVar5,pFVar4);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  FEnvTraceData::ToText((FEnvTraceData *)&this->_padding_,&local_118,Brief);
  bVar2 = FText::IsEmpty(&local_118);
  if (!bVar2) {
    local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(__return_storage_ptr__->TextData).Reference;
    local_128.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Pairs.ArrayNum = 0;
    local_128.Pairs.ArrayMax = 0;
    local_e8.Type = Text;
    if (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference,local_res8);
    }
    local_e8.TextValue.field0_0x0.TypedValue.Flags = __return_storage_ptr__->Flags;
    if (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FText *)(*pcVar1)();
        return pFVar4;
      }
    }
    ::FString::FString(&local_108,L"Description");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_128,&local_108,&local_e8);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    local_c8.Type = Text;
    local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_118.TextData.Reference;
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 8))
                (local_118.TextData.Reference,local_res10);
    }
    local_c8.TextValue.field0_0x0.TypedValue.Flags = local_118.Flags;
    if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FText *)(*pcVar1)();
        return pFVar4;
      }
    }
    ::FString::FString(&local_f8,L"ProjectionDescription");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_128,&local_f8,&local_c8);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"EnvQueryGenerator",L"SimpleGridDescriptionWithProjection",
                        L"{Description}, {ProjectionDescription}");
    pFVar7 = FTextFormat::FTextFormat(&local_28,pFVar4,Default);
    pFVar4 = FText::Format(&local_78,pFVar7,&local_128);
    FText::operator=(__return_storage_ptr__,pFVar4);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_128.Pairs.AllocatorInstance.Data,
               local_128.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_128.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_128.Pairs.AllocatorInstance.Data);
    }
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetDescriptionTitle @ 146f54970

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryGenerator_SimpleGrid::GetDescriptionTitle
          (UEnvQueryGenerator_SimpleGrid *this,FText *__return_storage_ptr__)

{
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  UClass *local_res8;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  local_res8 = (this->GenerateAround).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar1 = UEnvQueryTypes::DescribeContext(&local_28,(TSubclassOf<UEnvQueryContext>)&local_res8);
  UEnvQueryTypes::GetShortTypeName(&local_48,(UObject *)this);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"EnvQueryGenerator",L"SimpleGridDescriptionGenerateAroundContext",
                      L"{0}: generate around {1}");
  pFVar3 = FTextFormat::FTextFormat(&local_18,pFVar2,Default);
  FText::Format<FText,FText>(__return_storage_ptr__,pFVar3,&local_48,pFVar1);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f58750

UClass * __cdecl UEnvQueryGenerator_SimpleGrid::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_SimpleGrid.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_SimpleGrid",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_SimpleGrid.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_SimpleGrid,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_SimpleGrid>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_SimpleGrid>,local_res8,
               UEnvQueryGenerator_ProjectedPoints::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_SimpleGrid.InnerSingleton;
}

// StaticRegisterNativesUEnvQueryGenerator_SimpleGrid @ 146f76d80

void __cdecl UEnvQueryGenerator_SimpleGrid::StaticRegisterNativesUEnvQueryGenerator_SimpleGrid(void)

{
  return;
}

