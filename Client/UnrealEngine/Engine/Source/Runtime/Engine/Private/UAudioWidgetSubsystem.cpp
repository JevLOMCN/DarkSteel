// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 147676f30

UClass * __cdecl UAudioWidgetSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioWidgetSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioWidgetSubsystem",
               &Z_Registration_Info_UClass_UAudioWidgetSubsystem.InnerSingleton,
               StaticRegisterNativesUAudioWidgetSubsystem,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioWidgetSubsystem>,
               InternalVTableHelperCtorCaller<UAudioWidgetSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioWidgetSubsystem.InnerSingleton;
}

// UAudioWidgetSubsystem @ 147688380

UAudioWidgetSubsystem * __thiscall
UAudioWidgetSubsystem::UAudioWidgetSubsystem(UAudioWidgetSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  *(undefined ***)this = &___7UAudioWidgetSubsystem__6B_;
  return this;
}

// UAudioWidgetSubsystem @ 1476883b0

UAudioWidgetSubsystem * __thiscall
UAudioWidgetSubsystem::UAudioWidgetSubsystem(UAudioWidgetSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  *(undefined ***)this = &___7UAudioWidgetSubsystem__6B_;
  return this;
}

// ~UAudioWidgetSubsystem @ 14768a750

void __thiscall UAudioWidgetSubsystem::~UAudioWidgetSubsystem(UAudioWidgetSubsystem *this)

{
  *(undefined ***)this = &___7UAudioWidgetSubsystem__6B_;
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// operator() @ 14768b830

bool __thiscall
`UAudioWidgetSubsystem::GetBlueprintAssetData'::__l2::<lambda_1>::operator()
          (void *this,FAssetData *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  bVar4 = UAudioWidgetSubsystem::ImplementsInterface(param_1,*(UClass **)((longlong)this + 8));
  if (bVar4) {
    pFVar2 = *(ForAnyElementType **)this;
    if (((FAssetData *)pFVar2->Data <= param_1) &&
       (param_1 < (FAssetData *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    iVar6 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x868,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar6 + 1;
    FAssetData::FAssetData((FAssetData *)(pFVar2->Data + (longlong)iVar6 * 0x68),param_1);
  }
  return true;
}

// CreateUserWidgets @ 14769aa90

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> * __thiscall
UAudioWidgetSubsystem::CreateUserWidgets
          (UAudioWidgetSubsystem *this,
          TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UWorld *param_1,
          TSubclassOf<UInterface> param_2,TFunction<bool___cdecl(UUserWidget_*)> *param_3)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  UClass *pUVar10;
  TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> *pTVar11;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  undefined8 uVar15;
  FString *pFVar16;
  ulonglong uVar17;
  longlong *plVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  FAssetData *pFVar21;
  ForAnyElementType this_00;
  undefined1 local_158 [8];
  UUserWidget *local_150;
  uint local_148;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> local_140;
  FName local_130;
  undefined1 local_128 [24];
  undefined8 uStack_110;
  void *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ForElementType<FSetElementId> local_f0;
  ulonglong local_e0;
  UObject *local_d8;
  UWorld *local_d0;
  UUserWidget *local_c8;
  FString local_c0;
  FString local_b0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_a0;
  
  pUVar14 = (UClass *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  lVar1 = *(longlong *)param_2.Class.field0_0x0;
  local_d0 = param_1;
  if ((lVar1 != 0) &&
     (pUVar10 = Z_Construct_UClass_UInterface_NoRegister(), pUVar10 != (UClass *)0x0)) {
    iVar9 = (int)pUVar10->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar9 * 8) !=
        &pUVar10->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) && (lVar1 = *(longlong *)param_2.Class.field0_0x0, lVar1 != 0)) {
      pUVar10 = Z_Construct_UClass_UInterface_NoRegister();
      if (pUVar10 != (UClass *)0x0) {
        iVar9 = (int)pUVar10->_padding_;
        if ((*(int *)(lVar1 + 0x38) < iVar9) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar9 * 8) !=
            &pUVar10->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          pUVar14 = *(UClass **)param_2.Class.field0_0x0;
        }
      }
      goto LAB_14769ab3d;
    }
  }
  pUVar14 = Z_Construct_UClass_UInterface_NoRegister();
LAB_14769ab3d:
  if (pUVar14 == (UClass *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1280492143651061736>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio\\AudioWidgetSubsystem.cpp"
                       ,0x18,"InterfaceClass");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar11;
    }
    if (*(longlong *)param_3 != 0) {
      plVar18 = (longlong *)&param_3->field_0x10;
      if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
        plVar18 = *(longlong **)&param_3->field_0x28;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  else {
    GetBlueprintAssetData(&local_140,pUVar14);
    uVar5 = _UNK_150631d98;
    uVar4 = ___xmm_00000000ffffffff0000008000000000;
    uVar17 = (ulonglong)local_140.ArrayNum;
    local_148 = local_140.ArrayNum;
    pFVar21 = (FAssetData *)(local_140.AllocatorInstance.Data + uVar17 * 0x68);
    this_00.Data = local_140.AllocatorInstance.Data;
    while( true ) {
      if (local_140.ArrayNum != (uint)uVar17) {
        local_158[0] = 0;
        `TCheckedPointerIterator<FAssetData_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_158);
      }
      if ((FAssetData *)this_00.Data == pFVar21) break;
      local_f0.InlineData[0] = '\0';
      local_f0.InlineData[1] = '\0';
      local_f0.InlineData[2] = '\0';
      local_f0.InlineData[3] = '\0';
      local_f0._padding_ = 0;
      local_e0 = 0;
      local_128._16_8_ = 0;
      uStack_110 = 0;
      local_128._0_8_ = (FScriptContainerElement *)0x0;
      local_128._8_8_ = 0;
      local_108 = (void *)0x0;
      local_f0.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_100 = uVar4;
      uStack_f8 = uVar5;
      pTVar12 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
                TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                          (&local_a0,
                           (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_128);
      pUVar13 = FAssetData::FastGetAsset((FAssetData *)this_00.Data,true,pTVar12);
      local_e0 = local_e0 & 0xffffffff00000000;
      if (local_f0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_f0.SecondaryData);
      }
      iVar9 = SUB84(local_128._8_8_,4);
      local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
      if (iVar9 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
      }
      uVar6 = local_100._4_4_;
      uStack_f8 = 0xffffffff;
      local_100 = (ulonglong)local_100._4_4_ << 0x20;
      if (0x80 < uVar6) {
        local_100 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
      }
      if (local_108 != (void *)0x0) {
        FMemory::Free(local_108);
      }
      if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_128._0_8_);
      }
      if (pUVar13 != (UObject *)0x0) {
        pUVar14 = UBlueprint::StaticClass();
        iVar9 = (int)pUVar14->_padding_;
        if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar9) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
            &pUVar14->_padding_)) {
          pFVar16 = GetTypeName<UBlueprint>(&local_c0);
          pwVar19 = L"";
          if ((pFVar16->Data).ArrayNum == 0) {
            pwVar20 = L"";
          }
          else {
            pwVar20 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
          }
          pFVar16 = GetFullNameForCastLogError<UObject>(&local_b0,pUVar13);
          if ((pFVar16->Data).ArrayNum != 0) {
            pwVar19 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar19,pwVar20);
        }
        lVar1 = *(longlong *)&pUVar13[1].field_0x8;
        if ((lVar1 != 0) &&
           (pUVar14 = Z_Construct_UClass_UObject_NoRegister(), pUVar14 != (UClass *)0x0)) {
          iVar9 = (int)pUVar14->_padding_;
          if ((*(int *)(lVar1 + 0x38) < iVar9) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar9 * 8) !=
              &pUVar14->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if ((bVar7) && (pUVar13 = *(UObject **)&pUVar13[1].field_0x8, pUVar13 != (UObject *)0x0))
          {
            local_130.ComparisonIndex.Value = 0;
            local_130.Number = 0;
            local_d8 = pUVar13;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar13);
            }
            local_150 = CreateWidget<UUserWidget,UWorld_*>
                                  (local_d0,(TSubclassOf<UUserWidget>)&local_d8,local_130);
            if (local_150 != (UUserWidget *)0x0) {
              if (*(void **)param_3 != (void *)0x0) {
                local_c8 = local_150;
                UE::Core::Private::Function::CheckCallable(*(void **)param_3);
                pcVar3 = *(code **)param_3;
                plVar18 = *(longlong **)&param_3->field_0x28;
                if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
                  plVar18 = (longlong *)&param_3->field_0x10;
                }
                uVar15 = (**(code **)(*plVar18 + 8))();
                cVar8 = (*pcVar3)(uVar15,&local_c8);
                if (cVar8 == '\0') goto LAB_14769ae47;
              }
              pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
              if (((pFVar2 <= (FScriptContainerElement *)&local_150) &&
                  ((FScriptContainerElement *)&local_150 <
                   pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar3 = (code *)swi(3);
                pTVar11 = (TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar11;
              }
              iVar9 = __return_storage_ptr__->ArrayNum;
              if (iVar9 == __return_storage_ptr__->ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
              __return_storage_ptr__->ArrayNum = iVar9 + 1;
              *(UUserWidget **)(pFVar2 + (longlong)iVar9 * 8) = local_150;
            }
          }
        }
      }
LAB_14769ae47:
      uVar17 = (ulonglong)local_148;
      this_00.Data = this_00.Data + 0x68;
    }
    DestructItems<FAssetData,int>((FAssetData *)local_140.AllocatorInstance.Data,local_140.ArrayNum)
    ;
    if ((FAssetData *)local_140.AllocatorInstance.Data != (FAssetData *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
    if (*(longlong *)param_3 != 0) {
      plVar18 = (longlong *)&param_3->field_0x10;
      if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
        plVar18 = *(longlong **)&param_3->field_0x28;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetBlueprintAssetData @ 1476adf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FAssetData,TSizedDefaultAllocator<32>_> * __cdecl
UAudioWidgetSubsystem::GetBlueprintAssetData
          (TArray<FAssetData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UClass *param_1)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FModuleManager *this;
  IModuleInterface *pIVar8;
  UClass *this_00;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStackY_248 [32];
  FTopLevelAssetPath local_1f8;
  FTopLevelAssetPath local_1e8;
  FTopLevelAssetPath local_1d8;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *local_1c8;
  UClass *local_1c0;
  code *local_1b8;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> **local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188 [2];
  void *local_178;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  FSoftObjectPath *local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  ForAnyElementType local_138;
  undefined8 local_130;
  undefined1 local_128 [32];
  void *local_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  void *local_e8;
  undefined4 local_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_98;
  undefined4 local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar7 = ::FName::FName(&local_1a8,"AssetRegistry");
  FVar2 = *pFVar7;
  this = FModuleManager::Get();
  pIVar8 = FModuleManager::LoadModuleChecked(this,FVar2);
  local_fc = 0x80;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_178 = (void *)0x0;
  local_170 = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  local_158 = (FSoftObjectPath *)0x0;
  local_150 = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = 0;
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_f4 = 0;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.NumBits = 0;
  local_a4 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_36 = 0;
  local_34 = 0;
  local_f8 = 0xffffffff;
  local_c8.MaxBits = 0x80;
  local_a8 = 0xffffffff;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  this_00 = UBlueprint::StaticClass();
  UStruct::GetStructPathName((UStruct *)this_00,&local_1d8);
  if (((local_138.Data <= &local_1d8) &&
      (&local_1d8 < (FTopLevelAssetPath *)(local_138.Data + (longlong)local_130._4_4_ * 0x10))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar9;
  }
  iVar6 = (int)local_130;
  if ((int)local_130 == local_130._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&local_138,(int *)((longlong)&local_130 + 4));
  }
  *(FName *)(local_138.Data + (longlong)iVar6 * 0x10) = local_1d8.PackageName;
  ((FName *)(local_138.Data + (longlong)iVar6 * 0x10))[1] = local_1d8.AssetName;
  local_130._0_4_ = iVar6 + 1;
  pFVar7 = ::FName::FName(&local_1a0,L"WidgetBlueprint");
  FVar2 = *pFVar7;
  pFVar7 = ::FName::FName(&local_198,L"/Script/UMGEditor");
  local_1f8.PackageName.ComparisonIndex.Value = 0;
  local_1f8.PackageName.Number = 0;
  local_1f8.AssetName.ComparisonIndex.Value = 0;
  local_1f8.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_1f8,*pFVar7,FVar2);
  if (((local_138.Data <= &local_1f8) &&
      (&local_1f8 < (FTopLevelAssetPath *)(local_138.Data + (longlong)local_130._4_4_ * 0x10))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar9;
  }
  if ((int)local_130 == local_130._4_4_) {
    local_130._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x410,&local_138,(int *)((longlong)&local_130 + 4));
  }
  *(FName *)(local_138.Data + (longlong)(int)local_130 * 0x10) = local_1f8.PackageName;
  ((FName *)(local_138.Data + (longlong)(int)local_130 * 0x10))[1] = local_1f8.AssetName;
  local_130._0_4_ = (int)local_130 + 1;
  pFVar7 = ::FName::FName(&local_190,L"EditorUtilityWidget");
  FVar2 = *pFVar7;
  pFVar7 = ::FName::FName(local_188,L"/Script/Blutility");
  local_1e8.PackageName.ComparisonIndex.Value = 0;
  local_1e8.PackageName.Number = 0;
  local_1e8.AssetName.ComparisonIndex.Value = 0;
  local_1e8.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_1e8,*pFVar7,FVar2);
  if (((local_138.Data <= &local_1e8) &&
      (&local_1e8 < (FTopLevelAssetPath *)(local_138.Data + (longlong)local_130._4_4_ * 0x10))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar9;
  }
  if ((int)local_130 == local_130._4_4_) {
    local_130._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x410,&local_138,(int *)((longlong)&local_130 + 4));
  }
  lVar10 = (longlong)(int)local_130;
  local_130 = CONCAT44(local_130._4_4_,(int)local_130 + 1);
  pFVar1 = local_138.Data + lVar10 * 0x10;
  *(uint *)pFVar1 = local_1e8.PackageName.ComparisonIndex.Value;
  *(uint *)(pFVar1 + 4) = local_1e8.PackageName.Number;
  *(uint *)(pFVar1 + 8) = local_1e8.AssetName.ComparisonIndex.Value;
  *(uint *)(pFVar1 + 0xc) = local_1e8.AssetName.Number;
  local_38 = CONCAT11(1,(undefined1)local_38);
  plVar11 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x40))(pIVar8);
  local_1b0 = &local_1c8;
  local_1b8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UAudioWidgetSubsystem::GetBlueprintAssetData'::__l2::<lambda_1>,bool,FAssetData_const_&>
              ::Call;
  local_1c8 = __return_storage_ptr__;
  local_1c0 = param_1;
  (**(code **)(*plVar11 + 0x70))(plVar11,&local_178,&local_1b8,0);
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  uVar4 = local_80 >> 0x20;
  local_80 = local_80 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_88,0,(int *)((longlong)&local_80 + 4));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_78.NumBits = 0;
  if (0x80 < (uint)local_78.MaxBits) {
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  local_90 = 0;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  uVar4 = local_d0 >> 0x20;
  local_d0 = local_d0 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_d8,0,(int *)((longlong)&local_d0 + 4));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_c8.NumBits = 0;
  if (0x80 < (uint)local_c8.MaxBits) {
    local_c8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c8,0);
  }
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  local_e0 = 0;
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_128,0,local_128._8_4_);
  iVar6 = SUB84(local_128._8_8_,4);
  local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
  }
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_100 = 0;
  if (0x80 < local_fc) {
    local_fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  if ((FTopLevelAssetPath *)local_138.Data != (FTopLevelAssetPath *)0x0) {
    FMemory::Free(local_138.Data);
  }
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  DestructItems<FSoftObjectPath,int>(local_158,(int)local_150);
  if (local_158 != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_158);
  }
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  if (local_178 != (void *)0x0) {
    FMemory::Free(local_178);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1476b3d10

UClass * __cdecl UAudioWidgetSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioWidgetSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioWidgetSubsystem",
               &Z_Registration_Info_UClass_UAudioWidgetSubsystem.InnerSingleton,
               StaticRegisterNativesUAudioWidgetSubsystem,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioWidgetSubsystem>,
               InternalVTableHelperCtorCaller<UAudioWidgetSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioWidgetSubsystem.InnerSingleton;
}

// ImplementsInterface @ 1476b73f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __cdecl UAudioWidgetSubsystem::ImplementsInterface(FAssetData *param_1,UClass *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  UClass *this;
  FCoreRedirectObjectName *pFVar4;
  int iVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  undefined1 local_res18 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FCoreRedirectObjectName local_48;
  FCoreRedirectObjectName local_30;
  
  UAssetRegistryHelpers::FindAssetNativeClass(param_1);
  this = FAssetData::GetClass(param_1,No);
  bVar1 = UClass::ImplementsInterface(this,param_2);
  if (bVar1) {
    return true;
  }
  FAssetData::GetTagValueRef<FString>(param_1,&local_58,FBlueprintTags::ImplementedInterfaces);
  if (local_58.Data.ArrayNum < 2) {
LAB_1476b7696:
    bVar1 = false;
  }
  else {
    ::FString::FString(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FString::FString(&InterfaceIdentifier,L"Interface=");
      atexit(`UAudioWidgetSubsystem::ImplementsInterface'::__l8::
             _dynamic_atexit_destructor_for__InterfaceIdentifier__);
      _Init_thread_footer(&::_TSS0);
    }
    pwVar6 = L"";
    iVar2 = InterfaceIdentifier.Data.ArrayNum + -1;
    FVar7.Data = InterfaceIdentifier.Data.AllocatorInstance.Data;
    if (InterfaceIdentifier.Data.ArrayNum == 0) {
      iVar2 = 0;
      FVar7.Data = (FScriptContainerElement *)L"";
    }
    iVar2 = ::FString::Find(&local_68,(wchar_t *)FVar7.Data,iVar2,IgnoreCase,FromStart,-1);
    if (0 < iVar2) {
      ::FString::RemoveAt(&local_68,0,iVar2,Default);
    }
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (InterfaceIdentifier.Data.ArrayNum != 0) {
      pwVar6 = (wchar_t *)InterfaceIdentifier.Data.AllocatorInstance.Data;
    }
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_68,&local_78,pwVar6,true);
    iVar2 = local_78.ArrayNum;
    pFVar8 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x10;
    FVar7.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      if (local_78.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar7.Data == pFVar8) {
        DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
        if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        goto LAB_1476b7696;
      }
      iVar3 = ::FString::Find((FString *)FVar7.Data,L"\'",1,IgnoreCase,FromStart,-1);
      if (0 < iVar3) {
        ::FString::RemoveAt((FString *)FVar7.Data,0,iVar3 + 1,Default);
      }
      ::FString::RemoveFromStart((FString *)FVar7.Data,L"\"",1,IgnoreCase);
      iVar3 = ::FString::Find((FString *)FVar7.Data,L"\'",1,IgnoreCase,FromStart,-1);
      if (0 < iVar3) {
        iVar5 = *(int *)(FVar7.Data + 8);
        iVar9 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar9 = 0;
        }
        iVar10 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar10 = 0;
        }
        if (iVar3 < iVar10) {
          iVar10 = iVar3;
        }
        iVar5 = 0;
        if (0 < iVar10) {
          iVar5 = iVar10;
        }
        ::FString::RemoveAt((FString *)FVar7.Data,iVar5,iVar9 - iVar3,Default);
      }
      ::FString::RemoveFromEnd((FString *)FVar7.Data,L"\"",1,IgnoreCase);
      pFVar4 = FCoreRedirectObjectName::FCoreRedirectObjectName(&local_30,(FString *)FVar7.Data);
      FCoreRedirects::GetRedirectedName(&local_48,Type_Class,pFVar4,None);
      if ((FName)param_2->_padding_ == local_48.ObjectName) break;
      FVar7.Data = FVar7.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// StaticRegisterNativesUAudioWidgetSubsystem @ 1476ca220

void __cdecl UAudioWidgetSubsystem::StaticRegisterNativesUAudioWidgetSubsystem(void)

{
  return;
}

