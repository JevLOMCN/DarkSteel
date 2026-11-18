// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b43a020

UClass * __cdecl UDS_CCSAI_LoginWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CCSAI_LoginWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CCSAI_LoginWidget",
               &Z_Registration_Info_UClass_UDS_CCSAI_LoginWidget.InnerSingleton,
               StaticRegisterNativesUDS_CCSAI_LoginWidget,0x3b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CCSAI_LoginWidget>,
               InternalVTableHelperCtorCaller<UDS_CCSAI_LoginWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CCSAI_LoginWidget.InnerSingleton;
}

// UDS_CCSAI_LoginWidget @ 14b43bdc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_CCSAI_LoginWidget * __thiscall
UDS_CCSAI_LoginWidget::UDS_CCSAI_LoginWidget(UDS_CCSAI_LoginWidget *this,FVTableHelper *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_CCSAI_LoginWidget__6B_;
  ::FString::FString(&this->ErrorMsg,"");
  return this;
}

// UDS_CCSAI_LoginWidget @ 14b43be20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_CCSAI_LoginWidget * __thiscall
UDS_CCSAI_LoginWidget::UDS_CCSAI_LoginWidget
          (UDS_CCSAI_LoginWidget *this,FObjectInitializer *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_CCSAI_LoginWidget__6B_;
  ::FString::FString(&this->ErrorMsg,"");
  return this;
}

// ~UDS_CCSAI_LoginWidget @ 14b43cc70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_CCSAI_LoginWidget::~UDS_CCSAI_LoginWidget(UDS_CCSAI_LoginWidget *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_CCSAI_LoginWidget__6B_;
  pFVar1 = (this->ErrorMsg).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UUserWidget::~UUserWidget((UUserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b43dd80

UClass * __cdecl UDS_CCSAI_LoginWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CCSAI_LoginWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CCSAI_LoginWidget",
               &Z_Registration_Info_UClass_UDS_CCSAI_LoginWidget.InnerSingleton,
               StaticRegisterNativesUDS_CCSAI_LoginWidget,0x3b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CCSAI_LoginWidget>,
               InternalVTableHelperCtorCaller<UDS_CCSAI_LoginWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CCSAI_LoginWidget.InnerSingleton;
}

// StaticRegisterNativesUDS_CCSAI_LoginWidget @ 14b43e810

void __cdecl UDS_CCSAI_LoginWidget::StaticRegisterNativesUDS_CCSAI_LoginWidget(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_CCSAI_LoginWidget_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execLoginRequest @ 14b440370

/* WARNING: Type propagation algorithm not settling */

void __cdecl UDS_CCSAI_LoginWidget::execLoginRequest(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  bool *pbVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  bool local_res10 [8];
  int local_res20 [2];
  int local_38 [4];
  
  local_res20[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  piVar1 = (int *)param_2->MostRecentPropertyAddress;
  local_38[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  piVar7 = local_res20;
  if (piVar1 != (int *)0x0) {
    piVar7 = piVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  piVar1 = (int *)param_2->MostRecentPropertyAddress;
  local_38[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  piVar6 = local_38;
  if (piVar1 != (int *)0x0) {
    piVar6 = piVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38 + 1,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38 + 1);
  }
  piVar1 = (int *)param_2->MostRecentPropertyAddress;
  local_38[2] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  piVar4 = local_38 + 1;
  if (piVar1 != (int *)0x0) {
    piVar4 = piVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38 + 2,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38 + 2);
  }
  piVar1 = (int *)param_2->MostRecentPropertyAddress;
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  piVar5 = local_38 + 2;
  if (piVar1 != (int *)0x0) {
    piVar5 = piVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  LoginRequest((UDS_CCSAI_LoginWidget *)param_1,piVar7,piVar6,piVar4,piVar5,pbVar3);
  return;
}

// GetInst @ 14b8c7430

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_CCSAI_LoginWidget * __cdecl UDS_CCSAI_LoginWidget::GetInst(void)

{
  int iVar1;
  UDS_CCSAIManager *pUVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UWorld *pUVar6;
  UDS_CCSAI_LoginWidget *this;
  UDS_CCSAI_LoginWidget *pUVar7;
  undefined1 auStackY_1b8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  TStringView<wchar_t> local_178;
  FSoftObjectPath local_168;
  FName local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pUVar2 = UDS_CCSAIManager::GetInst();
  if (pUVar2 == (UDS_CCSAIManager *)0x0) {
    return (UDS_CCSAI_LoginWidget *)0x0;
  }
  pUVar7 = (pUVar2->CCSAI_LoginWidget).field0_0x0.DebugPtr;
  if (pUVar7 != (UDS_CCSAI_LoginWidget *)0x0) {
    return pUVar7;
  }
  local_178.Size = 0x3d;
  pUVar7 = (UDS_CCSAI_LoginWidget *)0x0;
  local_178.DataPtr = L"/Game/CCSAI/Widgets/CCSAI_LoginWidgetBP.CCSAI_LoginWidgetBP_C";
  local_168.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_168.AssetPath.PackageName.Number = 0;
  local_168.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_168.AssetPath.AssetName.Number = 0;
  local_168.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.SubPathString.Data.ArrayNum = 0;
  local_168.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_168,&local_178);
  if (local_168.AssetPath.PackageName == (FName)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b8c771e;
    pUVar3 = UDS_LogManager::GetInst();
    FSoftObjectPath::ToString(&local_168,(FString *)&local_178);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_CCSAI_LoginWidget::GetInst",0x1e,Yes);
    pwVar9 = L"Invalid WidgetPath. %s";
    uVar8 = 0x19;
  }
  else {
    pUVar4 = FSoftObjectPath::TryLoad(&local_168,(FUObjectSerializeContext *)0x0);
    if (pUVar4 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        local_148.ComparisonIndex.Value = 0;
        local_148.Number = 0;
        local_178.DataPtr = (wchar_t *)pUVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        pUVar6 = UDS_GameInstance::GetGameInstanceWorld();
        this = CreateWidget<UDS_CCSAI_LoginWidget,UWorld_*>
                         (pUVar6,(TSubclassOf<UUserWidget>)&local_178,local_148);
        if (this != (UDS_CCSAI_LoginWidget *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          (pUVar2->CCSAI_LoginWidget).field0_0x0.DebugPtr = this;
          UUserWidget::AddToViewport((UUserWidget *)this,9999);
          (**(code **)(this->_padding_ + 0x2c0))(this,1);
          pUVar7 = this;
          goto LAB_14b8c771e;
        }
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b8c771e;
        pUVar3 = UDS_LogManager::GetInst();
        FSoftObjectPath::ToString(&local_168,(FString *)&local_178);
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_CCSAI_LoginWidget::GetInst",0x1e,Yes);
        pwVar9 = L"Failed to CreateWidget. %s";
        uVar8 = 0x27;
        goto LAB_14b8c76e1;
      }
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b8c771e;
    pUVar3 = UDS_LogManager::GetInst();
    FSoftObjectPath::ToString(&local_168,(FString *)&local_178);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_CCSAI_LoginWidget::GetInst",0x1e,Yes);
    pwVar9 = L"Failed to TryLoad. %s";
    uVar8 = 0x20;
  }
LAB_14b8c76e1:
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar8,pwVar9);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if ((UObject *)local_178.DataPtr != (UObject *)0x0) {
    FMemory::Free(local_178.DataPtr);
  }
LAB_14b8c771e:
  if (local_168.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.SubPathString.Data.AllocatorInstance.Data);
  }
  return pUVar7;
}

// LoginRequest @ 14b8d0bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CCSAI_LoginWidget::LoginRequest
          (UDS_CCSAI_LoginWidget *this,int *param_1,int *param_2,int *param_3,int *param_4,
          bool *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  UDS_CCSAIManager *this_00;
  UDS_LogManager *pUVar10;
  UDS_CCSAI_LoginWidget *pUVar11;
  ForAnyElementType FVar12;
  ForElementType<unsigned_int> FVar13;
  longlong lVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  ulong64 uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint *puVar21;
  ulonglong uVar22;
  uint *puVar23;
  FString *this_01;
  ForAnyElementType FVar24;
  undefined1 auStackY_2c8 [32];
  FCCS_LoginRequest local_298;
  FString local_278;
  int local_268;
  uint uStack_264;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_260;
  undefined4 local_258;
  uint uStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  uint local_248;
  uint uStack_244;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_240;
  undefined4 local_238;
  uint uStack_234;
  uint uStack_230;
  undefined4 uStack_22c;
  FString *local_220;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_210;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e8;
  FSparseArrayAllocationInfo local_1c8;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1b8;
  FScriptContainerElement local_180 [8];
  ForAnyElementType local_178;
  uint local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  iVar7 = *param_2;
  local_298.deckCharId.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.deckCharId.ArrayNum = 0;
  local_298.deckCharId.ArrayMax = 0;
  local_298.isLeader = false;
  local_298.selectedCharId = *param_1 + 1;
  local_298.messageType = LoginRequest;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,&local_298.deckCharId.AllocatorInstance,&local_298.deckCharId.ArrayMax);
  iVar6 = iVar5 + 1;
  *(int *)(local_298.deckCharId.AllocatorInstance.Data + (longlong)iVar5 * 4) = iVar7 + 1;
  iVar7 = *param_3;
  if (iVar6 == local_298.deckCharId.ArrayMax) {
    local_298.deckCharId.ArrayNum = iVar6;
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_298.deckCharId.AllocatorInstance,&local_298.deckCharId.ArrayMax)
    ;
  }
  iVar5 = iVar6 + 1;
  *(int *)(local_298.deckCharId.AllocatorInstance.Data + (longlong)iVar6 * 4) = iVar7 + 1;
  iVar6 = *param_4;
  if (iVar5 == local_298.deckCharId.ArrayMax) {
    local_298.deckCharId.ArrayNum = iVar5;
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_298.deckCharId.AllocatorInstance,&local_298.deckCharId.ArrayMax)
    ;
  }
  local_298.deckCharId.ArrayNum = iVar5 + 1;
  *(int *)(local_298.deckCharId.AllocatorInstance.Data + (longlong)iVar5 * 4) = iVar6 + 1;
  local_298.isLeader = *param_5;
  ::FString::FString(&local_278,"");
  this_01 = &this->ErrorMsg;
  local_220 = this_01;
  if (this_01 != &local_278) {
    pFVar1 = (this_01->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this_01->Data).AllocatorInstance.Data = local_278.Data.AllocatorInstance.Data;
    (this->ErrorMsg).Data.ArrayNum = local_278.Data.ArrayNum;
    (this->ErrorMsg).Data.ArrayMax = local_278.Data.ArrayMax;
    local_278.Data.ArrayNum = 0;
    local_278.Data.ArrayMax = 0;
    local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  FVar24.Data = local_298.deckCharId.AllocatorInstance.Data;
  iVar6 = local_298.deckCharId.ArrayNum;
  FVar12.Data = local_298.deckCharId.AllocatorInstance.Data;
joined_r0x00014b8d0d39:
  if (FVar12.Data ==
      local_298.deckCharId.AllocatorInstance.Data + (longlong)local_298.deckCharId.ArrayNum * 4) {
    ::FString::operator=(this_01,L"SelectedCharID is not in the DeckCharID array.");
LAB_14b8d0d5c:
    if (local_298.deckCharId.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.deckCharId.AllocatorInstance.Data);
    }
    return;
  }
  if (*(uint *)FVar12.Data != local_298.selectedCharId) {
    FVar12.Data = FVar12.Data + 4;
    goto joined_r0x00014b8d0d39;
  }
  uVar18 = (ulong64)local_298.deckCharId.ArrayNum;
  if ((local_298.deckCharId.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  local_1b8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1b8.AllocationFlags.NumBits = 0;
  local_1b8.AllocationFlags.MaxBits = 0x80;
  local_1b8.FirstFreeIndex = -1;
  local_1b8.NumFreeIndices = 0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  if (iVar6 == 0) goto LAB_14b8d100b;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar18);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_1b8,iVar6);
  uVar16 = 1;
  if (3 < (uint)iVar6) {
    uVar20 = (ulonglong)(((uint)iVar6 >> 1) + 7) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar14 & 0x1f);
  }
  if ((local_170 == 0) || ((int)local_170 < (int)uVar16)) {
    local_170 = uVar16;
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,0,4);
    }
    if (uVar16 != 0) {
      uVar19 = uVar16;
      if (uVar16 < 2) {
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          uVar19 = 0;
          goto LAB_14b8d0e67;
        }
      }
      else {
LAB_14b8d0e67:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar19,4);
      }
      if (0 < (int)uVar16) {
        uVar22 = (ulonglong)uVar16;
        uVar20 = 0;
        do {
          FVar12.Data = local_180;
          if (local_178.Data != (FScriptContainerElement *)0x0) {
            FVar12.Data = local_178.Data;
          }
          uVar9 = uVar20 & (longlong)(int)uVar16 - 1U;
          uVar20 = uVar20 + 1;
          *(undefined4 *)(FVar12.Data + uVar9 * 4) = 0xffffffff;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
    }
    if (local_170 != 0) {
      pTStack_260 = &local_1b8.AllocationFlags;
      local_268 = 0;
      uStack_264 = 1;
      uStack_254 = 0;
      iStack_250 = 0;
      if (local_1b8.AllocationFlags.NumBits != 0) {
        FVar13 = (ForElementType<unsigned_int>)&local_1b8.AllocationFlags;
        if (local_1b8.AllocationFlags.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar13 = local_1b8.AllocationFlags.AllocatorInstance.SecondaryData;
        }
        uVar16 = *(uint *)FVar13;
        while (uVar16 == 0) {
          iStack_250 = iStack_250 + 0x20;
          lVar14 = (longlong)local_268;
          local_268 = local_268 + 1;
          if ((int)((local_1b8.AllocationFlags.NumBits - 1U) +
                   ((int)(local_1b8.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 < local_268
             ) goto LAB_14b8d0f6f;
          uVar16 = *(uint *)((uchar *)((longlong)FVar13 + 4) + lVar14 * 4);
        }
        uStack_264 = -uVar16 & uVar16;
        uVar20 = (ulonglong)uStack_264 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uStack_254 = iStack_250 + -1 + (int)lVar14;
        if ((int)uStack_254 <= local_1b8.AllocationFlags.NumBits) goto LAB_14b8d0f77;
LAB_14b8d0f6f:
        uStack_254 = local_1b8.AllocationFlags.NumBits;
      }
LAB_14b8d0f77:
      local_258 = 0xffffffff;
      local_218 = &local_1b8;
      local_210._padding_ = CONCAT44(uStack_264,local_268);
      local_210.CurrentBitIndex = uStack_254;
      local_210.UnvisitedBitMask = 0xffffffff;
      local_210._28_4_ = uStack_24c;
      local_210.BaseBitIndex = iStack_250;
      local_210.Array = pTStack_260;
      uVar16 = uStack_254;
      if ((int)uStack_254 < local_1b8.AllocationFlags.NumBits) {
        do {
          lVar14 = (longlong)(int)uVar16;
          pFVar1 = (local_218->Data).AllocatorInstance.Data;
          uVar19 = local_170 - 1 & *(uint *)(pFVar1 + lVar14 * 0xc);
          *(uint *)(pFVar1 + lVar14 * 0xc + 8) = uVar19;
          FVar12.Data = local_180;
          if (local_178.Data != (FScriptContainerElement *)0x0) {
            FVar12.Data = local_178.Data;
          }
          uVar20 = (longlong)(int)local_170 - 1U & (longlong)(int)uVar19;
          *(undefined4 *)(pFVar1 + lVar14 * 0xc + 4) = *(undefined4 *)(FVar12.Data + uVar20 * 4);
          *(uint *)(FVar12.Data + uVar20 * 4) = uVar16;
          local_210.UnvisitedBitMask = local_210.UnvisitedBitMask & ~local_210._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_210);
          uVar16 = local_210.CurrentBitIndex;
        } while (local_210.CurrentBitIndex < (local_210.Array)->NumBits);
      }
    }
  }
LAB_14b8d100b:
  pFVar1 = FVar24.Data + uVar18 * 4;
  if (FVar24.Data != pFVar1) {
    puVar23 = (uint *)0x0;
    do {
      if (local_1b8.NumFreeIndices == 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,1,(ForAnyElementType *)&local_1b8,&local_1b8.Data.ArrayNum,
                           &local_1b8.Data.ArrayMax);
        iVar6 = local_1b8.AllocationFlags.NumBits;
        if (local_1b8.AllocationFlags.NumBits == 0) {
          iVar5 = 0;
LAB_14b8d10a3:
          if (local_1b8.AllocationFlags.MaxBits < (int)(local_1b8.AllocationFlags.NumBits + 1U)) {
            uVar16 = local_1b8.AllocationFlags.MaxBits + 0x1fU >> 5;
            uVar19 = local_1b8.AllocationFlags.NumBits + 0x20U >> 5;
            if (uVar19 < 5) {
              iVar8 = 4;
            }
            else {
              uVar20 = (ulonglong)uVar19;
              if (uVar16 < 5) {
                uVar16 = 0;
              }
              if (uVar16 == 0) {
                uVar22 = 4;
                if (4 < uVar20) {
                  uVar22 = uVar20;
                }
              }
              else {
                uVar22 = ((ulonglong)uVar19 * 3 >> 3) + 0x10 + uVar20;
              }
              uVar18 = FMemory::QuantizeSize(uVar22 * 4,0);
              iVar8 = (int)(uVar18 >> 2);
              if (iVar8 < (int)uVar19) {
                iVar8 = 0x7fffffff;
              }
            }
            local_1b8.AllocationFlags.MaxBits = iVar8 << 5;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      (&local_1b8.AllocationFlags,local_1b8.AllocationFlags.NumBits);
          }
          local_1b8.AllocationFlags.NumBits = local_1b8.AllocationFlags.NumBits + 1;
          uVar19 = local_1b8.AllocationFlags.NumBits >> 0x1f & 0x1f;
          uVar16 = local_1b8.AllocationFlags.NumBits + uVar19;
          iVar8 = (uVar16 & 0x1f) - uVar19;
          if (iVar8 != 0) {
            FVar13 = (ForElementType<unsigned_int>)&local_1b8.AllocationFlags;
            if (local_1b8.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar13 = local_1b8.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            puVar15 = (uint *)((longlong)FVar13 + (longlong)((int)uVar16 >> 5) * 4);
            *puVar15 = *puVar15 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
          }
        }
        else {
          iVar5 = (int)(local_1b8.AllocationFlags.NumBits +
                       (local_1b8.AllocationFlags.NumBits >> 0x1f & 0x1fU)) >> 5;
          if (iVar5 != (int)(((int)(local_1b8.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU) +
                            (local_1b8.AllocationFlags.NumBits - 1U)) >> 5) goto LAB_14b8d10a3;
          local_1b8.AllocationFlags.NumBits = local_1b8.AllocationFlags.NumBits + 1;
        }
        FVar13 = (ForElementType<unsigned_int>)&local_1b8.AllocationFlags;
        if (local_1b8.AllocationFlags.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar13 = local_1b8.AllocationFlags.AllocatorInstance.SecondaryData;
        }
        puVar15 = (uint *)((longlong)FVar13 + (longlong)iVar5 * 4);
        *puVar15 = *puVar15 & ~(1 << ((byte)iVar6 & 0x1f));
        iVar6 = local_1b8.FirstFreeIndex;
      }
      else {
        iVar6 = *(int *)(local_1b8.Data.AllocatorInstance.Data +
                        (longlong)local_1b8.FirstFreeIndex * 0xc + 4);
        local_1b8.NumFreeIndices = local_1b8.NumFreeIndices + -1;
        iVar7 = local_1b8.FirstFreeIndex;
        if (local_1b8.NumFreeIndices != 0) {
          *(undefined4 *)(local_1b8.Data.AllocatorInstance.Data + (longlong)iVar6 * 0xc) =
               0xffffffff;
        }
      }
      local_1b8.FirstFreeIndex = iVar6;
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex(&local_1b8,&local_1c8,iVar7);
      puVar15 = puVar23;
      if (local_1c8.Pointer != (uint *)0x0) {
        *(uint *)local_1c8.Pointer = *(uint *)FVar24.Data;
        *(uint *)((longlong)local_1c8.Pointer + 4) = 0xffffffff;
        puVar15 = local_1c8.Pointer;
      }
      uVar16 = *puVar15;
      if ((local_1b8.Data.ArrayNum - local_1b8.NumFreeIndices != 1) &&
         (local_1b8.Data.ArrayNum != local_1b8.NumFreeIndices)) {
        FVar12.Data = local_180;
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_178.Data;
        }
        for (iVar6 = *(int *)(FVar12.Data + (ulonglong)(local_170 - 1 & uVar16) * 4); iVar6 != -1;
            iVar6 = *(int *)(local_1b8.Data.AllocatorInstance.Data + (longlong)iVar6 * 0xc + 4)) {
          if (*(uint *)(local_1b8.Data.AllocatorInstance.Data + (longlong)iVar6 * 0xc) == uVar16) {
            if (iVar6 != -1) {
              *(uint *)(local_1b8.Data.AllocatorInstance.Data + (longlong)iVar6 * 0xc) = uVar16;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized(&local_1b8,local_1c8.Index,1);
              goto LAB_14b8d14ad;
            }
            break;
          }
        }
      }
      uVar17 = 1;
      uVar19 = local_1b8.Data.ArrayNum - local_1b8.NumFreeIndices;
      if (3 < uVar19) {
        uVar20 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar17 = 1 << ((byte)lVar14 & 0x1f);
      }
      if (((int)uVar19 < 1) || ((int)uVar17 <= (int)local_170)) {
        uVar16 = local_170 - 1 & uVar16;
        puVar15[2] = uVar16;
        FVar12.Data = local_180;
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_178.Data;
        }
        uVar20 = (longlong)(int)local_170 - 1U & (longlong)(int)uVar16;
        puVar15[1] = *(uint *)(FVar12.Data + uVar20 * 4);
        *(int *)(FVar12.Data + uVar20 * 4) = local_1c8.Index;
      }
      else {
        local_170 = uVar17;
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,0,4);
        }
        if (uVar17 != 0) {
          uVar16 = uVar17;
          if (uVar17 < 2) {
            if (local_178.Data != (FScriptContainerElement *)0x0) {
              uVar16 = 0;
              goto LAB_14b8d12ea;
            }
          }
          else {
LAB_14b8d12ea:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_178,0,uVar16,4);
          }
          if (0 < (int)uVar17) {
            uVar20 = (ulonglong)uVar17;
            puVar15 = puVar23;
            do {
              FVar12.Data = local_180;
              if (local_178.Data != (FScriptContainerElement *)0x0) {
                FVar12.Data = local_178.Data;
              }
              uVar22 = (ulonglong)puVar15 & (longlong)(int)uVar17 - 1U;
              puVar15 = (uint *)((longlong)puVar15 + 1);
              *(undefined4 *)(FVar12.Data + uVar22 * 4) = 0xffffffff;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
        }
        if (local_170 != 0) {
          pTStack_240 = &local_1b8.AllocationFlags;
          local_248 = 0;
          uStack_244 = 1;
          uStack_234 = 0;
          uStack_230 = 0;
          puVar15 = puVar23;
          if (local_1b8.AllocationFlags.NumBits != 0) {
            FVar13 = (ForElementType<unsigned_int>)&local_1b8.AllocationFlags;
            if (local_1b8.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar13 = local_1b8.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            uVar16 = *(uint *)FVar13;
            puVar21 = puVar23;
            while (uVar16 == 0) {
              uStack_230 = (int)puVar21 + 0x20;
              puVar21 = (uint *)(ulonglong)uStack_230;
              iVar6 = (int)puVar15;
              local_248 = iVar6 + 1;
              puVar15 = (uint *)(ulonglong)local_248;
              if ((int)((local_1b8.AllocationFlags.NumBits - 1U) +
                       ((int)(local_1b8.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_248) goto LAB_14b8d13db;
              uVar16 = *(uint *)((uchar *)((longlong)FVar13 + 4) + (longlong)iVar6 * 4);
            }
            uStack_244 = -uVar16 & uVar16;
            uVar20 = (ulonglong)uStack_244 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uStack_234 = (uStack_230 - 1) + (int)lVar14;
            puVar15 = (uint *)(ulonglong)uStack_234;
            if (local_1b8.AllocationFlags.NumBits < (int)uStack_234) {
LAB_14b8d13db:
              puVar15 = (uint *)(ulonglong)(uint)local_1b8.AllocationFlags.NumBits;
              uStack_234 = local_1b8.AllocationFlags.NumBits;
            }
          }
          local_238 = 0xffffffff;
          local_1f0 = &local_1b8;
          local_1e8._padding_ = CONCAT44(uStack_244,local_248);
          local_1e8.CurrentBitIndex = uStack_234;
          local_1e8.UnvisitedBitMask = 0xffffffff;
          local_1e8._28_4_ = uStack_22c;
          local_1e8.BaseBitIndex = uStack_230;
          local_1e8.Array = pTStack_240;
          if ((int)puVar15 < local_1b8.AllocationFlags.NumBits) {
            do {
              lVar14 = (longlong)(int)puVar15;
              pFVar2 = (local_1f0->Data).AllocatorInstance.Data;
              uVar16 = local_170 - 1 & *(uint *)(pFVar2 + lVar14 * 0xc);
              *(uint *)(pFVar2 + lVar14 * 0xc + 8) = uVar16;
              FVar12.Data = local_180;
              if (local_178.Data != (FScriptContainerElement *)0x0) {
                FVar12.Data = local_178.Data;
              }
              uVar20 = (longlong)(int)local_170 - 1U & (longlong)(int)uVar16;
              *(undefined4 *)(pFVar2 + lVar14 * 0xc + 4) = *(undefined4 *)(FVar12.Data + uVar20 * 4)
              ;
              *(int *)(FVar12.Data + uVar20 * 4) = (int)puVar15;
              local_1e8.UnvisitedBitMask = local_1e8.UnvisitedBitMask & ~local_1e8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e8);
              puVar15 = (uint *)(ulonglong)(uint)local_1e8.CurrentBitIndex;
            } while (local_1e8.CurrentBitIndex < (local_1e8.Array)->NumBits);
          }
        }
      }
LAB_14b8d14ad:
      FVar24.Data = FVar24.Data + 4;
      this_01 = local_220;
    } while (FVar24.Data != pFVar1);
  }
  if (local_1b8.Data.ArrayNum - local_1b8.NumFreeIndices == local_298.deckCharId.ArrayNum) {
    this_00 = UDS_CCSAIManager::GetInst();
    if (this_00 == (UDS_CCSAIManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_CCSAI_LoginWidget::LoginRequest",0x23,Yes);
        UDS_LogManager::PrintLog(pUVar10,1,Warning,local_168.Ptr,0x5e,L"ccsAIMng is nullptr");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    else {
      UDS_CCSAIManager::OnRecv_LoginRequest(this_00,&local_298);
      pUVar11 = GetInst();
      if (pUVar11 != (UDS_CCSAI_LoginWidget *)0x0) {
        (**(code **)(pUVar11->_padding_ + 0x2c0))(pUVar11);
      }
    }
  }
  else {
    ::FString::operator=(this_01,L"Elements in DeckCharID are not unique.");
  }
  local_170 = 0;
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  bVar4 = local_1b8.Data.ArrayMax != 0;
  local_1b8.Data._8_8_ = (ulonglong)(uint)local_1b8.Data.ArrayMax << 0x20;
  if (bVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&local_1b8,0,&local_1b8.Data.ArrayMax);
  }
  local_1b8.FirstFreeIndex = -1;
  local_1b8.NumFreeIndices = 0;
  local_1b8.AllocationFlags.NumBits = 0;
  if (0x80 < (uint)local_1b8.AllocationFlags.MaxBits) {
    local_1b8.AllocationFlags.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1b8.AllocationFlags,0);
  }
  if (local_1b8.AllocationFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_1b8.AllocationFlags.AllocatorInstance.SecondaryData);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  goto LAB_14b8d0d5c;
}

// ShowWidget @ 14b8eb150

void __cdecl UDS_CCSAI_LoginWidget::ShowWidget(bool param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UDS_CCSAI_LoginWidget *pUVar1;
  undefined8 uVar2;
  
  pUVar1 = GetInst();
  if (pUVar1 != (UDS_CCSAI_LoginWidget *)0x0) {
    uVar2 = 1;
    if (param_1) {
      uVar2 = 4;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x2c0);
                    /* WARNING: Could not recover jumptable at 0x00014b8eb184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pUVar1,uVar2,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

