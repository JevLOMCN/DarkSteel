// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSSMPS
// Functions: 9

// StaticClass @ 14de301d0

UClass * __cdecl UMoviePipelineDLSSSetting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineDLSSSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DLSSMoviePipelineSupport",L"MoviePipelineDLSSSetting",
               &Z_Registration_Info_UClass_UMoviePipelineDLSSSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineDLSSSetting,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMoviePipelineDLSSSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineDLSSSetting>,local_res8,
               UMoviePipelineViewFamilySetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineDLSSSetting.InnerSingleton;
}

// UMoviePipelineDLSSSetting @ 14de30470

UMoviePipelineDLSSSetting * __thiscall
UMoviePipelineDLSSSetting::UMoviePipelineDLSSSetting
          (UMoviePipelineDLSSSetting *this,FVTableHelper *param_1)

{
  UMoviePipelineViewFamilySetting::UMoviePipelineViewFamilySetting
            ((UMoviePipelineViewFamilySetting *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineDLSSSetting__6B_;
  return this;
}

// UMoviePipelineDLSSSetting @ 14de304a0

UMoviePipelineDLSSSetting * __thiscall
UMoviePipelineDLSSSetting::UMoviePipelineDLSSSetting(UMoviePipelineDLSSSetting *this)

{
  UMoviePipelineViewFamilySetting::UMoviePipelineViewFamilySetting
            ((UMoviePipelineViewFamilySetting *)this);
  this->DLSSQuality = EMoviePipelineDLSSQuality_Performance;
  this->_padding_ = (longlong)&___7UMoviePipelineDLSSSetting__6B_;
  return this;
}

// ~UMoviePipelineDLSSSetting @ 14de304d0

void __thiscall
UMoviePipelineDLSSSetting::~UMoviePipelineDLSSSetting(UMoviePipelineDLSSSetting *this)

{
  this->_padding_ = (longlong)&___7UMoviePipelineDLSSSetting__6B_;
  UMoviePipelineViewFamilySetting::~UMoviePipelineViewFamilySetting
            ((UMoviePipelineViewFamilySetting *)this);
  return;
}

// GetFormatArguments @ 14de30580

void __thiscall
UMoviePipelineDLSSSetting::GetFormatArguments
          (UMoviePipelineDLSSSetting *this,FMoviePipelineFormatArgs *param_1)

{
  bool bVar1;
  UPackage *pUVar2;
  FText *pFVar3;
  FString *pFVar4;
  undefined1 local_48 [16];
  FString local_38;
  undefined1 local_28 [16];
  
  bVar1 = UDLSSLibrary::IsDLSSModeSupported(this->DLSSQuality + EMoviePipelineDLSSQuality_Quality);
  if (bVar1) {
    if (Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton == (UEnum *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DLSSMoviePipelineSupport();
      Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality,
                         (UObject *)pUVar2,L"EMoviePipelineDLSSQuality");
    }
    pFVar3 = (FText *)(**(code **)((Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.
                                   OuterSingleton)->_padding_ + 0x2c0))
                                (Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton,
                                 local_28,this->DLSSQuality);
    pFVar4 = FText::ToString(pFVar3);
    ::FString::FString((FString *)local_48,L"unreal/dlssQuality");
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Emplace<FString,FString_const_&>
              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)&param_1->FileMetadata,(FString *)local_48,pFVar4);
    if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_28._0_8_ + 0x10))();
    }
    if (Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton == (UEnum *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DLSSMoviePipelineSupport();
      Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality,
                         (UObject *)pUVar2,L"EMoviePipelineDLSSQuality");
    }
    pFVar3 = (FText *)(**(code **)((Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.
                                   OuterSingleton)->_padding_ + 0x2c0))
                                (Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton,
                                 local_28,this->DLSSQuality);
    pFVar4 = FText::ToString(pFVar3);
    ::FString::FString((FString *)local_48,L"dlss_quality");
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Emplace<FString,FString_const_&>
              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)param_1,(FString *)local_48,pFVar4);
    if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_28._0_8_ + 0x10))();
      return;
    }
  }
  else {
    ::FString::FString((FString *)local_28,"Unsupported");
    ::FString::FString(&local_38,L"unreal/dlssQuality");
    local_48._0_8_ = &local_38;
    local_48._8_8_ = local_28;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008
               ,(bool *)local_48);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
    ::FString::FString((FString *)local_48,"Unsupported");
    ::FString::FString(&local_38,L"dlss_quality");
    local_28._0_8_ = &local_38;
    local_28._8_8_ = local_48;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
               (bool *)local_28);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14de307c0

UClass * __cdecl UMoviePipelineDLSSSetting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineDLSSSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DLSSMoviePipelineSupport",L"MoviePipelineDLSSSetting",
               &Z_Registration_Info_UClass_UMoviePipelineDLSSSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineDLSSSetting,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMoviePipelineDLSSSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineDLSSSetting>,local_res8,
               UMoviePipelineViewFamilySetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineDLSSSetting.InnerSingleton;
}

// SetupViewFamily @ 14de30880

void __thiscall
UMoviePipelineDLSSSetting::SetupViewFamily
          (UMoviePipelineDLSSSetting *this,FSceneViewFamily *param_1)

{
  int *piVar1;
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  FName FVar4;
  code *pcVar5;
  IConsoleVariable *pIVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  FName *pFVar10;
  FModuleManager *this_00;
  IModuleInterface *pIVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  bool local_res10 [8];
  bool local_res18 [8];
  float local_res20 [2];
  longlong local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  undefined8 local_c8;
  float local_c0;
  float local_bc;
  float local_b8 [2];
  FString local_b0;
  longlong local_98;
  TReferenceControllerBase<1> *pTStack_90;
  uint local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 local_70;
  FName local_68 [2];
  TVector2<double>_u_0 local_58;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_res10[0] = false;
  if (param_1->ViewMode == VMI_Lit) {
    local_38 = 0;
    uStack_30 = 0;
    local_58._s_0.X = 0.0;
    local_58._s_0.Y = 0.0;
    UDLSSLibrary::GetDLSSModeInformation
              (this->DLSSQuality + EMoviePipelineDLSSQuality_Quality,
               (TVector2<double> *)&local_58._s_0,local_res10,local_res20,local_res18,local_b8,
               &local_bc,&local_c0);
    if (local_res10[0] != false) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Singleton != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                   ,0x4fb,L""), bVar7)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        CVarScreenPercentage =
             (IConsoleVariable *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                       (IConsoleManager::Singleton,L"r.ScreenPercentage",1);
        _Init_thread_footer(&::_TSS0);
      }
      if (CVarScreenPercentage != (IConsoleVariable *)0x0) {
        local_88 = (**(code **)(*(longlong *)CVarScreenPercentage + 0x18))();
        pIVar6 = CVarScreenPercentage;
        local_88 = local_88 & 0xff000000;
        local_c8 = 0;
        local_84 = 0;
        local_80 = 0;
        local_78 = 0;
        local_74 = 0xf000000;
        local_70 = 0x1000000;
        ::FString::PrintfImpl(&local_b0,L"%g");
        lVar3 = *(longlong *)pIVar6;
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_b0.Data.ArrayNum != 0) {
          FVar14.Data = local_b0.Data.AllocatorInstance.Data;
        }
        uVar9 = (**(code **)(lVar3 + 0xa8))(pIVar6,local_48,&local_88);
        (**(code **)(lVar3 + 0xb0))(pIVar6,FVar14.Data,uVar9);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
      pFVar10 = ::FName::FName(local_68,"DLSS");
      FVar4 = *pFVar10;
      this_00 = FModuleManager::Get();
      pIVar11 = FModuleManager::LoadModuleChecked(this_00,FVar4);
      (**(code **)((longlong)*pIVar11 + 0x78))(pIVar11,&local_98);
      if (local_98 != 0) {
        pTVar2 = &param_1->ViewExtensions;
        pFVar12 = (pTVar2->AllocatorInstance).Data;
        pFVar13 = pFVar12 + (longlong)(param_1->ViewExtensions).ArrayNum * 0x10;
        for (; pFVar12 != pFVar13; pFVar12 = pFVar12 + 0x10) {
          if (local_98 == *(longlong *)pFVar12) goto LAB_14de30b9b;
        }
        if ((local_98 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_d8 = local_98;
        pTStack_d0 = pTStack_90;
        if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_90->SharedReferenceCount =
               (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_98 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar12 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar12 <= (FScriptContainerElement *)&local_d8) &&
            ((FScriptContainerElement *)&local_d8 <
             pFVar12 + (longlong)(param_1->ViewExtensions).ArrayMax * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_1->ViewExtensions).ArrayNum;
        piVar1 = &(param_1->ViewExtensions).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        (param_1->ViewExtensions).ArrayNum = iVar8 + 1;
        pFVar12 = (pTVar2->AllocatorInstance).Data;
        *(longlong *)(pFVar12 + (longlong)iVar8 * 0x10) = local_d8;
        *(TReferenceControllerBase<1> **)(pFVar12 + (longlong)iVar8 * 0x10 + 8) = pTStack_d0;
        if (pTStack_d0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_d0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_d0->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_d0);
      }
LAB_14de30b9b:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_90);
    }
  }
  UDLSSLibrary::EnableDLSS(local_res10[0]);
  return;
}

// StaticRegisterNativesUMoviePipelineDLSSSetting @ 14de30c60

void __cdecl UMoviePipelineDLSSSetting::StaticRegisterNativesUMoviePipelineDLSSSetting(void)

{
  return;
}

// ValidateStateImpl @ 14de30c70

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall UMoviePipelineDLSSSetting::ValidateStateImpl(UMoviePipelineDLSSSetting *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  UDLSSSupport UVar4;
  int iVar5;
  UEnum *this_00;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  UPackage *pUVar9;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  undefined1 local_28 [16];
  FTextFormat local_18;
  
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  iVar5 = (int)this->_padding_;
  if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
    DestructItems<FText,int>((FText *)this->_padding_,iVar5);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  else {
    DestructItems<FText,int>((FText *)this->_padding_,iVar5);
    *(undefined4 *)&this->_padding_ = 0;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  bVar3 = UDLSSLibrary::IsDLSSSupported();
  if (bVar3) {
    bVar3 = UDLSSLibrary::IsDLSSModeSupported(this->DLSSQuality + EMoviePipelineDLSSQuality_Quality)
    ;
    if (bVar3) {
      return;
    }
    if (Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton == (UEnum *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_DLSSMoviePipelineSupport();
      Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality,
                         (UObject *)pUVar9,L"EMoviePipelineDLSSQuality");
    }
    pFVar6 = (FText *)(**(code **)((Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.
                                   OuterSingleton)->_padding_ + 0x2c0))
                                (Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton,
                                 local_28,this->DLSSQuality);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"MoviePipelineDLSSSetting",L"DLSS_Mode_Unsupported",
                        L"\"{0}\" Mode is not supported. Please try a lower quality setting.");
    pFVar8 = FTextFormat::FTextFormat(&local_18,pFVar7,Default);
    pFVar6 = FText::Format<FText>(&local_68,pFVar8,pFVar6);
    if ((((FText *)this->_padding_ <= pFVar6) && (pFVar6 < (FText *)this->_padding_ + *piVar1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (int)this->_padding_;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar5 + 1;
    FText::FText((FText *)((longlong)iVar5 * 0x10 + this->_padding_),pFVar6);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
  }
  else {
    this_00 = StaticEnum<enum_UDLSSSupport>();
    UVar4 = UDLSSLibrary::QueryDLSSSupport();
    pFVar6 = UEnum::GetDisplayNameTextByValue(this_00,&local_48,(ulonglong)UVar4);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"MoviePipelineDLSSSetting",L"DLSS_Unsupported",
                        L"DLSS is not supported due to \"{0}\".");
    pFVar8 = FTextFormat::FTextFormat(&local_38,pFVar7,Default);
    pFVar6 = FText::Format<FText>(&local_88,pFVar8,pFVar6);
    if ((((FText *)this->_padding_ <= pFVar6) && (pFVar6 < (FText *)this->_padding_ + *piVar1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (int)this->_padding_;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar5 + 1;
    FText::FText((FText *)((longlong)iVar5 * 0x10 + this->_padding_),pFVar6);
    local_58.TextData.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      local_58.TextData.Reference = local_78.TextData.Reference;
    }
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  return;
}

