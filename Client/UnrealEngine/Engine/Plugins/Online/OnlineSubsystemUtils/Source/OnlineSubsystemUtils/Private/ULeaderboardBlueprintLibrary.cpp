// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 9

// StaticClass @ 14ec42c70

UClass * __cdecl ULeaderboardBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULeaderboardBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"LeaderboardBlueprintLibrary",
               &Z_Registration_Info_UClass_ULeaderboardBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesULeaderboardBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULeaderboardBlueprintLibrary>,
               InternalVTableHelperCtorCaller<ULeaderboardBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULeaderboardBlueprintLibrary.InnerSingleton;
}

// ULeaderboardBlueprintLibrary @ 14ec54700

ULeaderboardBlueprintLibrary * __thiscall
ULeaderboardBlueprintLibrary::ULeaderboardBlueprintLibrary
          (ULeaderboardBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULeaderboardBlueprintLibrary__6B_;
  return this;
}

// ULeaderboardBlueprintLibrary @ 14ec54730

ULeaderboardBlueprintLibrary * __thiscall
ULeaderboardBlueprintLibrary::ULeaderboardBlueprintLibrary
          (ULeaderboardBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULeaderboardBlueprintLibrary__6B_;
  return this;
}

// ~ULeaderboardBlueprintLibrary @ 14ec57510

void __thiscall
ULeaderboardBlueprintLibrary::~ULeaderboardBlueprintLibrary(ULeaderboardBlueprintLibrary *this)

{
  *(undefined ***)this = &___7ULeaderboardBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14ec78420

UClass * __cdecl ULeaderboardBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULeaderboardBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"LeaderboardBlueprintLibrary",
               &Z_Registration_Info_UClass_ULeaderboardBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesULeaderboardBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULeaderboardBlueprintLibrary>,
               InternalVTableHelperCtorCaller<ULeaderboardBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULeaderboardBlueprintLibrary.InnerSingleton;
}

// StaticRegisterNativesULeaderboardBlueprintLibrary @ 14ec999b0

void __cdecl ULeaderboardBlueprintLibrary::StaticRegisterNativesULeaderboardBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// WriteLeaderboardInteger @ 14eca01d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
ULeaderboardBlueprintLibrary::WriteLeaderboardInteger
          (APlayerController *param_1,FName param_2,int param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10 [3];
  undefined1 auStackY_138 [32];
  FString local_e8;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  TBitArray<FDefaultBitArrayAllocator> local_c0;
  longlong lStack_a0;
  void *local_90;
  undefined4 local_88;
  undefined8 local_80;
  Type local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_c0._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  lStack_a0 = _UNK_150631d98;
  local_d8._8_8_ = (void *)0x0;
  local_c8 = 0;
  local_c0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_d8._0_8_ = &___7FOnlineLeaderboardWrite__6B_;
  local_80._0_4_ = None;
  local_80._4_4_ = Number;
  local_78 = KeepBest;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  local_res10[0] = param_2;
  ::FName::ToString(local_res10,&local_e8);
  if (((local_70.Data <= (FScriptContainerElement *)&local_e8) &&
      ((FScriptContainerElement *)&local_e8 < local_70.Data + (longlong)local_68._4_4_ * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar6 = (int)local_68;
  if ((int)local_68 == local_68._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_70,(int *)((longlong)&local_68 + 4));
  }
  FVar3.Data = local_e8.Data.AllocatorInstance.Data;
  pFVar7 = local_70.Data + (longlong)iVar6 * 0x10;
  local_68._0_4_ = iVar6 + 1;
  *(FScriptContainerElement **)pFVar7 = (FScriptContainerElement *)0x0;
  iVar6 = local_e8.Data.ArrayNum;
  *(int *)(pFVar7 + 8) = iVar6;
  if (iVar6 == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar6,0,(ForAnyElementType *)pFVar7,iVar6,(int *)(pFVar7 + 0xc));
                    /* WARNING: Load size is inaccurate */
    memcpy(*pFVar7,FVar3.Data,(longlong)iVar6 * 2);
  }
  FVar3.Data = local_e8.Data.AllocatorInstance.Data;
  iVar6 = local_e8.Data.ArrayNum;
  local_58 = CONCAT44(local_58._4_4_,iVar6);
  if ((iVar6 == 0) && (local_58._4_4_ == 0)) {
    local_58 = local_e8.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar6,local_58._4_4_,&local_60,iVar6,(int *)((longlong)&local_58 + 4));
    if (iVar6 != 0) {
      memcpy(local_60.Data,FVar3.Data,(longlong)iVar6 * 2);
    }
  }
  local_80._0_4_ = Descending;
  local_80._4_4_ = Number;
  local_78 = KeepBest;
  FOnlineStats::SetIntStat((FOnlineStats *)local_d8,&local_e8,param_3);
  bVar4 = WriteLeaderboardObject(param_1,(FOnlineLeaderboardWrite *)local_d8);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  DestructItems<FString,int>((FString *)local_70.Data,(int)local_68);
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  local_d8._0_8_ = &___7FOnlineStats__6B_;
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(local_d8 + 8),0,(int)local_c8);
  uVar2 = local_c8 >> 0x20;
  local_c8 = local_c8 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)(local_d8 + 8),0,(int *)((longlong)&local_c8 + 4));
  }
  iVar6 = local_c0.MaxBits;
  lStack_a0 = 0xffffffff;
  local_c0._24_8_ = (ulonglong)(uint)local_c0.MaxBits << 0x20;
  if (0x80 < (uint)iVar6) {
    local_c0.NumBits = 0;
    local_c0.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c0,0);
  }
  if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c0.AllocatorInstance.SecondaryData);
  }
  if ((void *)local_d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._8_8_);
  }
  return bVar4;
}

// WriteLeaderboardObject @ 14eca04d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
ULeaderboardBlueprintLibrary::WriteLeaderboardObject
          (APlayerController *param_1,FOnlineLeaderboardWrite *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  FModuleManager *this;
  FName *pFVar8;
  FOnlineSubsystemModule *pFVar9;
  IOnlineSubsystem *pIVar10;
  wchar_t *pwVar11;
  FName local_res18;
  undefined8 local_res20;
  FName local_60;
  FName local_58;
  longlong *local_50;
  TReferenceControllerBase<1> *local_48;
  TSharedPtr<FUniqueNetId_const_,1> local_40;
  
  if ((param_1 == (APlayerController *)0x0) || (lVar1 = param_1->_padding_, lVar1 == 0)) {
    FFrame::KismetExecutionMessage
              (L"WriteLeaderboardObject - Invalid player state",Warning,(FName)0x0);
    return false;
  }
  FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)(lVar1 + 0x2d0),&local_40);
  if (local_40.Object == (FUniqueNetId *)0x0) {
    pwVar11 = L"WriteLeaderboardObject - Cannot map local player to unique net ID";
  }
  else {
    this = FModuleManager::Get();
    pFVar8 = ::FName::FName(&local_60,"OnlineSubsystem");
    bVar4 = FModuleManager::IsModuleLoaded(this,*pFVar8);
    if (bVar4) {
      pFVar8 = ::FName::FName(&local_58,"OnlineSubsystem");
      pFVar9 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar8);
      cVar5 = (**(code **)(pFVar9->_padding_ + 0x70))(pFVar9,0);
      if (cVar5 != '\0') {
        local_res18.ComparisonIndex.Value = 0;
        local_res18.Number = 0;
        pIVar10 = IOnlineSubsystem::Get(&local_res18);
        if (pIVar10 != (IOnlineSubsystem *)0x0) {
          (**(code **)(pIVar10->_padding_ + 0x60))(pIVar10,&local_50);
          if (local_50 == (longlong *)0x0) {
            local_res20 = 0;
            FFrame::KismetExecutionMessage
                      (L"WriteLeaderboardObject - Leaderboards not supported by Online Subsystem",
                       Warning,(FName)0x0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_48);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_40.SharedReferenceCount.ReferenceController);
            return false;
          }
          if ((local_50 == (longlong *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          plVar3 = local_50;
          pcVar2 = *(code **)(*local_50 + 0x50);
          if ((local_40.Object == (FUniqueNetId *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          cVar5 = (*pcVar2)(plVar3,lVar1 + 800,local_40.Object,param_2);
          if ((local_50 == (longlong *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          cVar7 = (**(code **)(*local_50 + 0x58))(local_50,lVar1 + 800);
          if ((cVar5 == '\0') || (cVar7 == '\0')) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40.SharedReferenceCount.ReferenceController);
          return bVar4;
        }
      }
    }
    pwVar11 = L"WriteLeaderboardObject - Invalid or uninitialized OnlineSubsystem";
  }
  FFrame::KismetExecutionMessage(pwVar11,Warning,(FName)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  return false;
}

// execWriteLeaderboardInteger @ 14eca7170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ULeaderboardBlueprintLibrary::execWriteLeaderboardInteger
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  FName local_res18;
  APlayerController *local_res20;
  
  local_res20 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = WriteLeaderboardInteger(local_res20,local_res18,local_res10[0]);
  *(bool *)param_3 = bVar2;
  return;
}

