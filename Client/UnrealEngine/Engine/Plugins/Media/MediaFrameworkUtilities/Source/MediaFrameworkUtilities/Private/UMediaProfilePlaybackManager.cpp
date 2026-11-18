// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 55

// StaticClass @ 14d7ca9d0

UClass * __cdecl UMediaProfilePlaybackManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaProfilePlaybackManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaProfilePlaybackManager",
               &Z_Registration_Info_UClass_UMediaProfilePlaybackManager.InnerSingleton,
               StaticRegisterNativesUMediaProfilePlaybackManager,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaProfilePlaybackManager>,
               InternalVTableHelperCtorCaller<UMediaProfilePlaybackManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaProfilePlaybackManager.InnerSingleton;
}

// UMediaProfilePlaybackManager @ 14d7d0ca0

UMediaProfilePlaybackManager * __thiscall
UMediaProfilePlaybackManager::UMediaProfilePlaybackManager
          (UMediaProfilePlaybackManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMediaProfilePlaybackManager__6B_;
  *(undefined8 *)&this->MediaSourcePlayers = 0;
  *(undefined8 *)&(this->MediaSourcePlayers).field_0x8 = 0;
  *(undefined8 *)&(this->MediaSourcePlayers).field_0x20 = 0;
  *(undefined4 *)&(this->MediaSourcePlayers).field_0x28 = 0;
  *(undefined4 *)&(this->MediaSourcePlayers).field_0x2c = 0x80;
  *(undefined4 *)&(this->MediaSourcePlayers).field_0x34 = 0;
  *(undefined4 *)&(this->MediaSourcePlayers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MediaSourcePlayers).field_0x40 = 0;
  *(undefined4 *)&(this->MediaSourcePlayers).field_0x48 = 0;
  (this->MediaSourceTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaSourceTextures).ArrayNum = 0;
  (this->MediaSourceTextures).ArrayMax = 0;
  *(undefined8 *)&this->MediaOutputCaptures = 0;
  *(undefined8 *)&(this->MediaOutputCaptures).field_0x8 = 0;
  *(undefined8 *)&(this->MediaOutputCaptures).field_0x20 = 0;
  *(undefined4 *)&(this->MediaOutputCaptures).field_0x28 = 0;
  *(undefined4 *)&(this->MediaOutputCaptures).field_0x2c = 0x80;
  *(undefined4 *)&(this->MediaOutputCaptures).field_0x34 = 0;
  *(undefined4 *)&(this->MediaOutputCaptures).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MediaOutputCaptures).field_0x40 = 0;
  *(undefined4 *)&(this->MediaOutputCaptures).field_0x48 = 0;
  *(undefined8 *)&this->SourceConsumers = 0;
  *(undefined8 *)&(this->SourceConsumers).field_0x8 = 0;
  *(undefined8 *)&(this->SourceConsumers).field_0x20 = 0;
  *(undefined4 *)&(this->SourceConsumers).field_0x28 = 0;
  *(undefined4 *)&(this->SourceConsumers).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceConsumers).field_0x34 = 0;
  *(undefined4 *)&(this->SourceConsumers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SourceConsumers).field_0x40 = 0;
  *(undefined4 *)&(this->SourceConsumers).field_0x48 = 0;
  (this->ManagedOutputViewports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManagedOutputViewports).ArrayNum = 0;
  (this->ManagedOutputViewports).ArrayMax = 0;
  (this->ActiveOutputViewports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveOutputViewports).ArrayNum = 0;
  (this->ActiveOutputViewports).ArrayMax = 0;
  *(undefined8 *)&(this->CapturesWithError).Elements = 0;
  *(undefined8 *)&(this->CapturesWithError).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CapturesWithError).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CapturesWithError).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CapturesWithError).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CapturesWithError).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CapturesWithError).Elements.field_0x30 = 0xffffffff;
  (this->CapturesWithError).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CapturesWithError).HashSize = 0;
  (this->RestartCaptureFuncs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestartCaptureFuncs).ArrayNum = 0;
  (this->RestartCaptureFuncs).ArrayMax = 0;
  (this->RestartCapturesTimerHandle).Handle = 0;
  return this;
}

// UMediaProfilePlaybackManager @ 14d7d0e00

/* WARNING: Removing unreachable block (ram,0x00014d7d14b6) */

UMediaProfilePlaybackManager * __thiscall
UMediaProfilePlaybackManager::UMediaProfilePlaybackManager
          (UMediaProfilePlaybackManager *this,FObjectInitializer *param_1)

{
  TArray<TSoftObjectPtr<UMediaTexture>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  FString *pFVar11;
  UMediaProfilePlaybackManager *pUVar12;
  int iVar13;
  size_t _Size;
  ForAnyElementType _Src;
  uint uVar14;
  undefined4 local_res18;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1d8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1c8;
  undefined8 local_1b8;
  FName local_1b0;
  FName FStack_1a8;
  ForAnyElementType local_1a0;
  undefined8 local_198;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FSoftObjectPath local_130;
  FString local_110;
  FString local_100;
  FString local_f0;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TStringView<wchar_t> local_c8;
  FStringFormatArg local_b8;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  local_res18 = 0;
  UObject::UObject((UObject *)this,param_1);
  pTVar1 = &this->MediaSourceTextures;
  uVar14 = 1;
  this->_padding_ = (longlong)&___7UMediaProfilePlaybackManager__6B_;
  *(undefined8 *)&this->MediaSourcePlayers = 0;
  *(undefined8 *)&(this->MediaSourcePlayers).field_0x8 = 0;
  *(undefined8 *)&(this->MediaSourcePlayers).field_0x20 = 0;
  *(undefined4 *)&(this->MediaSourcePlayers).field_0x28 = 0;
  *(undefined4 *)&(this->MediaSourcePlayers).field_0x2c = 0x80;
  *(undefined4 *)&(this->MediaSourcePlayers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MediaSourcePlayers).field_0x34 = 0;
  *(undefined8 *)&(this->MediaSourcePlayers).field_0x40 = 0;
  *(undefined4 *)&(this->MediaSourcePlayers).field_0x48 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MediaSourceTextures).ArrayNum = 0;
  (this->MediaSourceTextures).ArrayMax = 0;
  *(undefined8 *)&this->MediaOutputCaptures = 0;
  *(undefined8 *)&(this->MediaOutputCaptures).field_0x8 = 0;
  *(undefined8 *)&(this->MediaOutputCaptures).field_0x20 = 0;
  *(undefined4 *)&(this->MediaOutputCaptures).field_0x28 = 0;
  *(undefined4 *)&(this->MediaOutputCaptures).field_0x2c = 0x80;
  *(undefined4 *)&(this->MediaOutputCaptures).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MediaOutputCaptures).field_0x34 = 0;
  *(undefined8 *)&(this->MediaOutputCaptures).field_0x40 = 0;
  *(undefined4 *)&(this->MediaOutputCaptures).field_0x48 = 0;
  *(undefined8 *)&this->SourceConsumers = 0;
  *(undefined8 *)&(this->SourceConsumers).field_0x8 = 0;
  *(undefined8 *)&(this->SourceConsumers).field_0x20 = 0;
  *(undefined4 *)&(this->SourceConsumers).field_0x28 = 0;
  *(undefined4 *)&(this->SourceConsumers).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceConsumers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceConsumers).field_0x34 = 0;
  *(undefined8 *)&(this->SourceConsumers).field_0x40 = 0;
  *(undefined4 *)&(this->SourceConsumers).field_0x48 = 0;
  (this->ManagedOutputViewports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManagedOutputViewports).ArrayNum = 0;
  (this->ManagedOutputViewports).ArrayMax = 0;
  (this->ActiveOutputViewports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveOutputViewports).ArrayNum = 0;
  (this->ActiveOutputViewports).ArrayMax = 0;
  *(undefined8 *)&(this->CapturesWithError).Elements = 0;
  *(undefined8 *)&(this->CapturesWithError).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CapturesWithError).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CapturesWithError).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CapturesWithError).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CapturesWithError).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CapturesWithError).Elements.field_0x34 = 0;
  (this->CapturesWithError).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CapturesWithError).HashSize = 0;
  (this->RestartCaptureFuncs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestartCaptureFuncs).ArrayNum = 0;
  (this->RestartCaptureFuncs).ArrayMax = 0;
  (this->RestartCapturesTimerHandle).Handle = 0;
  while( true ) {
    if (uVar14 < 10) {
      local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar6 = true;
      bVar5 = true;
      local_140.Data.ArrayNum = 0;
      local_140.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_140,uVar14);
      ::FString::ConcatCF(&local_110,L"0",&local_140);
      pFVar11 = &local_110;
      _Src.Data = local_110.Data.AllocatorInstance.Data;
    }
    else {
      bVar7 = true;
      local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_190.Data.ArrayNum = 0;
      local_190.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_190,uVar14);
      pFVar11 = &local_190;
      _Src.Data = local_190.Data.AllocatorInstance.Data;
    }
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = (pFVar11->Data).ArrayNum;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    if ((bVar5) &&
       (bVar5 = false, local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if ((bVar6) &&
       (bVar6 = false, local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if ((bVar7) &&
       (bVar7 = false, local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    FVar8.Data = MediaProfilePlaybackManager::DefaultMediaTextureName.Data.AllocatorInstance.Data;
    local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar13 = MediaProfilePlaybackManager::DefaultMediaTextureName.Data.ArrayNum;
    local_180.Data.ArrayNum = iVar13;
    if (iVar13 == 0) {
      local_180.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar13,0,(ForAnyElementType *)&local_180,iVar13,&local_180.Data.ArrayMax);
      memcpy(local_180.Data.AllocatorInstance.Data,FVar8.Data,(longlong)iVar13 * 2);
    }
    FStringFormatArg::FStringFormatArg(&local_b8,&local_180);
    local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_170.Data.ArrayNum = iVar10;
    if (iVar10 == 0) {
      local_170.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar10,0,(ForAnyElementType *)&local_170,iVar10,&local_170.Data.ArrayMax);
      memcpy(local_170.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar10 * 2);
    }
    FStringFormatArg::FStringFormatArg(&local_98,&local_170);
    local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_1d8.AllocatorInstance,2,&local_1d8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1d8.AllocatorInstance.Data,&local_b8,2);
    ::FString::FormatImpl(&local_f0,L"{0}_{1}",&local_1d8);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
    if ((FStringFormatArg *)local_1d8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
    if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
    }
    FVar8.Data = MediaProfilePlaybackManager::DefaultMediaTexturesPath.Data.AllocatorInstance.Data;
    local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = MediaProfilePlaybackManager::DefaultMediaTexturesPath.Data.ArrayNum;
    local_160.Data.ArrayNum = iVar10;
    if (iVar10 == 0) {
      local_160.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar10,0,(ForAnyElementType *)&local_160,iVar10,&local_160.Data.ArrayMax);
      memcpy(local_160.Data.AllocatorInstance.Data,FVar8.Data,(longlong)iVar10 * 2);
    }
    FStringFormatArg::FStringFormatArg(&local_78,&local_160);
    FVar8.Data = local_f0.Data.AllocatorInstance.Data;
    local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = local_f0.Data.ArrayNum;
    local_150.Data.ArrayNum = iVar10;
    if (iVar10 == 0) {
      local_150.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar10,0,(ForAnyElementType *)&local_150,iVar10,&local_150.Data.ArrayMax);
      memcpy(local_150.Data.AllocatorInstance.Data,FVar8.Data,(longlong)iVar10 * 2);
    }
    FStringFormatArg::FStringFormatArg(&local_58,&local_150);
    local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_1c8.AllocatorInstance,2,&local_1c8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1c8.AllocatorInstance.Data,&local_78,2);
    ::FString::FormatImpl(&local_100,L"{0}/{1}.{1}",&local_1c8);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum);
    if ((FStringFormatArg *)local_1c8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
    }
    local_d8 = local_100.Data.AllocatorInstance.Data;
    local_130.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_130.AssetPath.PackageName.Number = 0;
    local_130.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_130.AssetPath.AssetName.Number = 0;
    local_130.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.SubPathString.Data.ArrayNum = 0;
    local_130.SubPathString.Data.ArrayMax = 0;
    iStack_d0 = local_100.Data.ArrayNum + -1;
    if (local_100.Data.ArrayNum == 0) {
      iStack_d0 = 0;
    }
    local_c8._12_4_ = uStack_cc;
    local_c8.Size = iStack_d0;
    local_c8.DataPtr = (wchar_t *)local_100.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath(&local_130,&local_c8);
    FVar8.Data = local_130.SubPathString.Data.AllocatorInstance.Data;
    _Size = (size_t)local_130.SubPathString.Data.ArrayNum;
    local_1b8 = 0;
    local_1a0.Data = (FScriptContainerElement *)0x0;
    local_198 = CONCAT44(local_198._4_4_,local_130.SubPathString.Data.ArrayNum);
    local_1b0 = local_130.AssetPath.PackageName;
    FStack_1a8 = local_130.AssetPath.AssetName;
    if (local_130.SubPathString.Data.ArrayNum == 0) {
      local_198 = local_130.SubPathString.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_130.SubPathString.Data.ArrayNum,0,&local_1a0,
                 local_130.SubPathString.Data.ArrayNum,(int *)((longlong)&local_198 + 4));
      memcpy(local_1a0.Data,FVar8.Data,_Size);
    }
    if (local_130.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.SubPathString.Data.AllocatorInstance.Data);
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    piVar2 = &(this->MediaSourceTextures).ArrayMax;
    if (((pFVar3 <= (FScriptContainerElement *)&local_1b8) &&
        ((FScriptContainerElement *)&local_1b8 < pFVar3 + (longlong)*piVar2 * 0x28)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) break;
    iVar10 = (this->MediaSourceTextures).ArrayNum;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->MediaSourceTextures).ArrayNum = iVar10 + 1;
    pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 0x28;
    *(undefined8 *)pFVar3 = local_1b8;
    *(FName *)(pFVar3 + 8) = local_1b0;
    *(FName *)(pFVar3 + 0x10) = FStack_1a8;
    *(undefined8 *)(pFVar3 + 0x18) = 0;
    *(FScriptContainerElement **)(pFVar3 + 0x18) = local_1a0.Data;
    *(undefined4 *)(pFVar3 + 0x20) = (undefined4)local_198;
    *(undefined4 *)(pFVar3 + 0x24) = local_198._4_4_;
    local_198 = 0;
    local_1a0.Data = (FScriptContainerElement *)0x0;
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (_Src.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(_Src.Data);
    }
    uVar14 = uVar14 + 1;
    if (0x10 < (int)uVar14) {
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UMediaProfilePlaybackManager>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnEnginePreExit,(UMediaProfilePlaybackManager *)&local_res18,
                 (pmf_d7091d8a)this);
      return this;
    }
  }
  pcVar4 = (code *)swi(3);
  pUVar12 = (UMediaProfilePlaybackManager *)(*pcVar4)();
  return pUVar12;
}

// ~UMediaProfilePlaybackManager @ 14d7d1c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMediaProfilePlaybackManager::~UMediaProfilePlaybackManager(UMediaProfilePlaybackManager *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7UMediaProfilePlaybackManager__6B_;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEnginePreExit,
             this);
  DestructItems<TFunction<void___cdecl(UMediaProfilePlaybackManager_*)>,int>
            ((TFunction<void___cdecl(UMediaProfilePlaybackManager_*)> *)
             (this->RestartCaptureFuncs).AllocatorInstance.Data,(this->RestartCaptureFuncs).ArrayNum
            );
  pFVar1 = (this->RestartCaptureFuncs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CapturesWithError).HashSize = 0;
  FVar2 = (this->CapturesWithError).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UMediaCapture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UMediaCapture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CapturesWithError).Elements);
  DestructItems<TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1>,int>
            ((TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1> *)
             (this->ActiveOutputViewports).AllocatorInstance.Data,
             (this->ActiveOutputViewports).ArrayNum);
  pFVar1 = (this->ActiveOutputViewports).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1>,int>
            ((TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *)
             (this->ManagedOutputViewports).AllocatorInstance.Data,
             (this->ManagedOutputViewports).ArrayNum);
  pFVar1 = (this->ManagedOutputViewports).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SourceConsumers).field_0x48 = 0;
  pvVar3 = *(void **)&(this->SourceConsumers).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourceConsumers);
  *(undefined4 *)&(this->MediaOutputCaptures).field_0x48 = 0;
  pvVar3 = *(void **)&(this->MediaOutputCaptures).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaCapture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaCapture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaCapture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MediaOutputCaptures);
  DestructItems<TSoftObjectPtr<UMediaTexture>,int>
            ((TSoftObjectPtr<UMediaTexture> *)(this->MediaSourceTextures).AllocatorInstance.Data,
             (this->MediaSourceTextures).ArrayNum);
  pFVar1 = (this->MediaSourceTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MediaSourcePlayers).field_0x48 = 0;
  pvVar3 = *(void **)&(this->MediaSourcePlayers).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaPlayer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaPlayer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaPlayer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MediaSourcePlayers);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14d7d22b0

void __thiscall
`UMediaProfilePlaybackManager::RestartActiveViewportOutput'::__l2::<lambda_1>::operator()
          (void *this,UMediaProfilePlaybackManager *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  undefined8 *puVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  int iVar7;
  undefined8 *puVar8;
  UObject *local_res8;
  
  TVar4 = FWeakObjectPtr::Pin(this);
                    /* WARNING: Load size is inaccurate */
  pUVar2 = *TVar4.Object;
  *(undefined8 *)TVar4.Object = 0;
  if (local_res8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
  }
  if (pUVar2 == (UObject *)0x0) {
    return;
  }
  if (param_1 != (UMediaProfilePlaybackManager *)0x0) {
    bVar1 = *(bool *)((longlong)this + 200);
    pUVar5 = UMediaProfile::StaticClass();
    pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar5);
    if (pUVar6 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      puVar3 = *(undefined8 **)&pUVar6[1].field_0x10;
      for (puVar8 = puVar3; puVar8 != puVar3 + *(int *)&pUVar6[1].field_0x18; puVar8 = puVar8 + 1) {
        if ((UObject *)*puVar8 == pUVar2) {
          iVar7 = (int)((longlong)puVar8 - (longlong)puVar3 >> 3);
          goto LAB_14d7d2355;
        }
      }
      iVar7 = -1;
LAB_14d7d2355:
      UMediaProfilePlaybackManager::OpenActiveViewportOutputFromIndex
                (param_1,iVar7,(FMediaCaptureOptions *)((longlong)this + 8),bVar1);
    }
  }
  UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
  return;
}

// operator() @ 14d7d23a0

void __thiscall
`UMediaProfilePlaybackManager::RestartManagedViewportOutput'::__l2::<lambda_1>::operator()
          (void *this,UMediaProfilePlaybackManager *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  undefined8 *puVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  int iVar7;
  undefined8 *puVar8;
  UObject *local_res8;
  
  TVar4 = FWeakObjectPtr::Pin(this);
                    /* WARNING: Load size is inaccurate */
  pUVar2 = *TVar4.Object;
  *(undefined8 *)TVar4.Object = 0;
  if (local_res8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
  }
  if (pUVar2 == (UObject *)0x0) {
    return;
  }
  if (param_1 != (UMediaProfilePlaybackManager *)0x0) {
    bVar1 = *(bool *)((longlong)this + 200);
    pUVar5 = UMediaProfile::StaticClass();
    pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar5);
    if (pUVar6 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      puVar3 = *(undefined8 **)&pUVar6[1].field_0x10;
      for (puVar8 = puVar3; puVar8 != puVar3 + *(int *)&pUVar6[1].field_0x18; puVar8 = puVar8 + 1) {
        if ((UObject *)*puVar8 == pUVar2) {
          iVar7 = (int)((longlong)puVar8 - (longlong)puVar3 >> 3);
          goto LAB_14d7d2445;
        }
      }
      iVar7 = -1;
LAB_14d7d2445:
      UMediaProfilePlaybackManager::OpenManagedViewportOutputFromIndex
                (param_1,iVar7,(FMediaCaptureOptions *)((longlong)this + 8),bVar1);
    }
  }
  UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
  return;
}

// operator() @ 14d7d2490

void __thiscall
`UMediaProfilePlaybackManager::RestartRenderTargetOutput'::__l2::<lambda_1>::operator()
          (void *this,UMediaProfilePlaybackManager *param_1)

{
  UTextureRenderTarget2D *pUVar1;
  UObject *pUVar2;
  undefined8 *puVar3;
  char cVar4;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UMediaProfile *this_00;
  UMediaOutput *pUVar8;
  UMediaCapture *this_01;
  FMediaCaptureOptions *pFVar9;
  int iVar10;
  undefined8 *puVar11;
  UObject *local_res8;
  FMediaCaptureOptions local_d8;
  
  TVar5 = FWeakObjectPtr::Pin(this);
  pUVar1 = *(UTextureRenderTarget2D **)TVar5.Object;
  *(undefined8 *)TVar5.Object = 0;
  if (local_res8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
  }
  TVar5 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 8));
                    /* WARNING: Load size is inaccurate */
  pUVar2 = *TVar5.Object;
  *(undefined8 *)TVar5.Object = 0;
  if (local_res8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
  }
  if ((param_1 == (UMediaProfilePlaybackManager *)0x0) || (pUVar1 == (UTextureRenderTarget2D *)0x0))
  {
    if (pUVar2 != (UObject *)0x0) goto LAB_14d7d25fe;
  }
  else {
    if (pUVar2 == (UObject *)0x0) goto LAB_14d7d260b;
    pUVar6 = UMediaProfile::StaticClass();
    pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar6);
    if (pUVar7 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      puVar3 = *(undefined8 **)&pUVar7[1].field_0x10;
      for (puVar11 = puVar3; puVar11 != puVar3 + *(int *)&pUVar7[1].field_0x18;
          puVar11 = puVar11 + 1) {
        if ((UObject *)*puVar11 == pUVar2) {
          iVar10 = (int)((longlong)puVar11 - (longlong)puVar3 >> 3);
          goto LAB_14d7d2577;
        }
      }
      iVar10 = -1;
LAB_14d7d2577:
      pUVar6 = UMediaProfile::StaticClass();
      this_00 = (UMediaProfile *)
                UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar6);
      if ((((this_00 != (UMediaProfile *)0x0) &&
           (pUVar8 = UMediaProfile::GetMediaOutput(this_00,iVar10), pUVar8 != (UMediaOutput *)0x0))
          && (((uint)pUVar8->_padding_ >> 0x1e & 1) == 0)) &&
         (((this_01 = UMediaProfilePlaybackManager::FindOrCreateMediaCaptureForIndex(param_1,iVar10)
           , this_01 != (UMediaCapture *)0x0 && (((uint)this_01->_padding_ >> 0x1e & 1) == 0)) &&
          ((cVar4 = (**(code **)(this_01->_padding_ + 0x2b0))(this_01), (byte)(cVar4 - 3U) < 2 ||
           (cVar4 == '\0')))))) {
        pFVar9 = FMediaCaptureOptions::FMediaCaptureOptions
                           (&local_d8,(FMediaCaptureOptions *)((longlong)this + 0x10));
        UMediaCapture::CaptureTextureRenderTarget2D(this_01,pUVar1,pFVar9);
      }
    }
LAB_14d7d25fe:
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
  }
  if (pUVar1 == (UTextureRenderTarget2D *)0x0) {
    return;
  }
LAB_14d7d260b:
  UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
  return;
}

// operator() @ 14d7d2650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
`UMediaProfilePlaybackManager::PostStopCapture'::__l14::<lambda_1>::operator()
          (void *this,TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1->Object == (FManagedViewport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = TWeakObjectPtr<UMediaOutput,FWeakObjectPtr>::UEOpEquals<UMediaOutput,bool>
                    (&param_1->Object->MediaOutput,*(UMediaOutput **)this);
  if (bVar2) {
    if (param_1->Object == (FManagedViewport *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(int *)&(param_1->Object->Consumers).Elements.field_0x8 ==
        *(int *)&(param_1->Object->Consumers).Elements.field_0x34) {
      return true;
    }
  }
  return false;
}

// ChangeMediaOutputIndex @ 14d7d3ca0

void __thiscall
UMediaProfilePlaybackManager::ChangeMediaOutputIndex
          (UMediaProfilePlaybackManager *this,int param_1,int param_2)

{
  TMap<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  TObjectPtr<UMediaCapture> *pTVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  TObjectPtr<UMediaCapture>_u_0 TVar11;
  TObjectPtr<UMediaCapture>_u_0 local_res18;
  TObjectPtr<UMediaCapture>_u_0 local_res20;
  TObjectPtr<UMediaCapture>_u_0 local_48;
  TObjectPtr<UMediaCapture>_u_0 *local_40;
  TObjectPtr<UMediaCapture>_u_0 *local_38;
  
  local_res18._0_4_ = param_2;
  pUVar3 = UMediaProfile::StaticClass();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if ((pUVar4 != (UObject *)0x0) && (param_1 != local_res18._0_4_)) {
    TVar11.DebugPtr = (UMediaCapture *)0x0;
    if (param_1 != -1) {
      pTVar1 = &this->MediaOutputCaptures;
      puVar2 = &(this->MediaOutputCaptures).field_0x38;
      if (*(int *)&(this->MediaOutputCaptures).field_0x8 !=
          *(int *)&(this->MediaOutputCaptures).field_0x34) {
        puVar7 = *(undefined1 **)&(this->MediaOutputCaptures).field_0x40;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = puVar2;
        }
        iVar10 = *(int *)(puVar7 + (ulonglong)
                                   (*(int *)&(this->MediaOutputCaptures).field_0x48 - 1U & param_1)
                                   * 4);
        if (iVar10 != -1) {
          do {
            if (*(int *)(*(longlong *)&pTVar1->field_0x0 + (longlong)iVar10 * 0x18) == param_1) {
              if (iVar10 != -1) {
                pTVar5 = TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                         ::FindChecked((TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                                        *)pTVar1,param_1);
                TVar11.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar5->field0_0x0).DebugPtr;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (TVar11.DebugPtr != (UMediaCapture *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
                }
              }
              break;
            }
            iVar10 = *(int *)(*(longlong *)&pTVar1->field_0x0 + 0x10 + (longlong)iVar10 * 0x18);
          } while (iVar10 != -1);
        }
      }
      uVar8 = param_1 + 1;
      uVar9 = 0xffffffff;
      if ((int)uVar8 < *(int *)&pUVar4[1].field_0x18) {
        do {
          if (*(int *)&(this->MediaOutputCaptures).field_0x8 !=
              *(int *)&(this->MediaOutputCaptures).field_0x34) {
            puVar7 = *(undefined1 **)&(this->MediaOutputCaptures).field_0x40;
            puVar6 = puVar2;
            if (puVar7 != (undefined1 *)0x0) {
              puVar6 = puVar7;
            }
            iVar10 = *(int *)(puVar6 + (ulonglong)
                                       (*(int *)&(this->MediaOutputCaptures).field_0x48 - 1U & uVar8
                                       ) * 4);
            if (iVar10 != -1) {
              do {
                if (*(uint *)(*(longlong *)&pTVar1->field_0x0 + (longlong)iVar10 * 0x18) == uVar8) {
                  local_38 = &TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                              ::FindChecked((TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                                             *)pTVar1,uVar8)->field0_0x0;
                  local_res20._0_4_ = uVar8 - 1;
                  local_40 = &local_res20;
                  TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<int_&&,TObjectPtr<UMediaCapture>_const_&>_>
                            ((TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
                              *)pTVar1,
                             (TPairInitializer<int_&&,TObjectPtr<UMediaCapture>_const_&> *)
                             &local_48.ObjectPtr,(bool *)&local_40);
                  uVar9 = uVar8;
                  break;
                }
                iVar10 = *(int *)(*(longlong *)&pTVar1->field_0x0 + 0x10 + (longlong)iVar10 * 0x18);
              } while (iVar10 != -1);
            }
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < *(int *)&pUVar4[1].field_0x18);
        if ((uVar9 != 0xffffffff) &&
           (local_res20._0_4_ = uVar9,
           *(int *)&(this->MediaOutputCaptures).field_0x8 !=
           *(int *)&(this->MediaOutputCaptures).field_0x34)) {
          TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
          ::RemoveImpl<int>((TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
                             *)pTVar1,uVar9,(int *)&local_res20);
        }
      }
    }
    if (local_res18._0_4_ != -1) {
      pTVar1 = &this->MediaOutputCaptures;
      uVar9 = *(int *)&pUVar4[1].field_0x18 - 1;
      if ((int)local_res18._0_4_ <= (int)uVar9) {
        do {
          if (*(int *)&(this->MediaOutputCaptures).field_0x8 !=
              *(int *)&(this->MediaOutputCaptures).field_0x34) {
            puVar2 = *(undefined1 **)&(this->MediaOutputCaptures).field_0x40;
            puVar7 = &(this->MediaOutputCaptures).field_0x38;
            if (puVar2 != (undefined1 *)0x0) {
              puVar7 = puVar2;
            }
            iVar10 = *(int *)(puVar7 + (ulonglong)
                                       (*(int *)&(this->MediaOutputCaptures).field_0x48 - 1U & uVar9
                                       ) * 4);
            if (iVar10 != -1) {
              do {
                if (*(uint *)(*(longlong *)&pTVar1->field_0x0 + (longlong)iVar10 * 0x18) == uVar9) {
                  local_38 = &TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                              ::FindChecked((TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                                             *)pTVar1,uVar9)->field0_0x0;
                  local_res20._0_4_ = uVar9 + 1;
                  local_40 = &local_res20;
                  TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<int_&&,TObjectPtr<UMediaCapture>_const_&>_>
                            ((TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
                              *)pTVar1,
                             (TPairInitializer<int_&&,TObjectPtr<UMediaCapture>_const_&> *)
                             &local_48.ObjectPtr,(bool *)&local_40);
                  break;
                }
                iVar10 = *(int *)(*(longlong *)&pTVar1->field_0x0 + 0x10 + (longlong)iVar10 * 0x18);
              } while (iVar10 != -1);
            }
          }
          uVar9 = uVar9 - 1;
        } while ((int)local_res18._0_4_ <= (int)uVar9);
      }
      if (TVar11.DebugPtr != (UMediaCapture *)0x0) {
        local_48 = TVar11;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
        }
        local_40 = &local_res18;
        local_38 = &local_48;
        TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,TObjectPtr<UMediaCapture>_&&>_>
                  ((TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
                    *)pTVar1,
                   (TPairInitializer<int_const_&,TObjectPtr<UMediaCapture>_&&> *)
                   &local_res20.ObjectPtr,(bool *)&local_40);
      }
    }
  }
  return;
}

// ChangeMediaSourceIndex @ 14d7d3f40

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
UMediaProfilePlaybackManager::ChangeMediaSourceIndex
          (UMediaProfilePlaybackManager *this,int param_1,int param_2)

{
  TMap<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
  *this_00;
  undefined1 *puVar1;
  longlong lVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UMediaTexture *this_01;
  TObjectPtr<UMediaPlayer> *pTVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  UMediaPlayer *pUVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TObjectPtr<UMediaPlayer>_u_0 TVar13;
  TObjectPtr<UMediaPlayer>_u_0 local_res18;
  TObjectPtr<UMediaPlayer>_u_0 local_res20;
  TObjectPtr<UMediaPlayer>_u_0 local_58;
  TObjectPtr<UMediaPlayer>_u_0 *local_50;
  TObjectPtr<UMediaPlayer>_u_0 *local_48;
  
  local_res18._0_4_ = param_2;
  pUVar3 = UMediaProfile::StaticClass();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if ((pUVar4 != (UObject *)0x0) && (param_1 != local_res18._0_4_)) {
    uVar11 = 0;
    TVar13.DebugPtr = (UMediaPlayer *)0x0;
    if (param_1 != -1) {
      puVar1 = &(this->MediaSourcePlayers).field_0x38;
      if (*(int *)&(this->MediaSourcePlayers).field_0x8 !=
          *(int *)&(this->MediaSourcePlayers).field_0x34) {
        puVar7 = *(undefined1 **)&(this->MediaSourcePlayers).field_0x40;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = puVar1;
        }
        iVar12 = *(int *)(puVar7 + (ulonglong)
                                   (*(int *)&(this->MediaSourcePlayers).field_0x48 - 1U & param_1) *
                                   4);
        if (iVar12 != -1) {
          do {
            if (*(int *)(*(longlong *)&this->MediaSourcePlayers + (longlong)iVar12 * 0x18) ==
                param_1) {
              if (iVar12 != -1) {
                pTVar5 = TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
                         ::FindChecked((TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
                                        *)&this->MediaSourcePlayers,param_1);
                TVar13.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar5->field0_0x0).DebugPtr;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (TVar13.DebugPtr != (UMediaPlayer *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)TVar13.DebugPtr);
                }
              }
              break;
            }
            iVar12 = *(int *)(*(longlong *)&this->MediaSourcePlayers + 0x10 +
                             (longlong)iVar12 * 0x18);
          } while (iVar12 != -1);
        }
      }
      uVar9 = param_1 + 1;
      uVar10 = 0xffffffff;
      if ((int)uVar9 < *(int *)&pUVar4[1].field_0x8) {
        do {
          if (*(int *)&(this->MediaSourcePlayers).field_0x8 !=
              *(int *)&(this->MediaSourcePlayers).field_0x34) {
            puVar7 = *(undefined1 **)&(this->MediaSourcePlayers).field_0x40;
            puVar6 = puVar1;
            if (puVar7 != (undefined1 *)0x0) {
              puVar6 = puVar7;
            }
            iVar12 = *(int *)(puVar6 + (ulonglong)
                                       (*(int *)&(this->MediaSourcePlayers).field_0x48 - 1U & uVar9)
                                       * 4);
            if (iVar12 != -1) {
              do {
                if (*(uint *)(*(longlong *)&this->MediaSourcePlayers + (longlong)iVar12 * 0x18) ==
                    uVar9) {
                  local_48 = &TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
                              ::FindChecked((TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
                                             *)&this->MediaSourcePlayers,uVar9)->field0_0x0;
                  local_res20._0_4_ = uVar9 - 1;
                  local_50 = &local_res20;
                  TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<int_&&,TObjectPtr<UMediaPlayer>_const_&>_>
                            ((TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
                              *)&this->MediaSourcePlayers,
                             (TPairInitializer<int_&&,TObjectPtr<UMediaPlayer>_const_&> *)
                             &local_58.ObjectPtr,(bool *)&local_50);
                  uVar10 = uVar9;
                  break;
                }
                iVar12 = *(int *)(*(longlong *)&this->MediaSourcePlayers + 0x10 +
                                 (longlong)iVar12 * 0x18);
              } while (iVar12 != -1);
            }
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < *(int *)&pUVar4[1].field_0x8);
        if (uVar10 != 0xffffffff) {
          local_res20._0_4_ = uVar10;
          if (*(int *)&(this->MediaSourcePlayers).field_0x8 !=
              *(int *)&(this->MediaSourcePlayers).field_0x34) {
            TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
                               *)&this->MediaSourcePlayers,uVar10,(int *)&local_res20);
          }
        }
      }
    }
    if (local_res18._0_4_ == -1) {
      local_res20 = TVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar13.DebugPtr != (UMediaPlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar13.DebugPtr);
      }
      TMapBase<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
      ::Remove((TMapBase<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
                *)&this->SourceConsumers,(TObjectPtr<UMediaPlayer_const_>)&local_res20);
    }
    else {
      this_00 = &this->MediaSourcePlayers;
      uVar10 = *(int *)&pUVar4[1].field_0x8 - 1;
      if ((int)local_res18._0_4_ <= (int)uVar10) {
        do {
          if (*(int *)&(this->MediaSourcePlayers).field_0x8 !=
              *(int *)&(this->MediaSourcePlayers).field_0x34) {
            puVar1 = *(undefined1 **)&(this->MediaSourcePlayers).field_0x40;
            puVar7 = &(this->MediaSourcePlayers).field_0x38;
            if (puVar1 != (undefined1 *)0x0) {
              puVar7 = puVar1;
            }
            iVar12 = *(int *)(puVar7 + (ulonglong)
                                       (*(int *)&(this->MediaSourcePlayers).field_0x48 - 1U & uVar10
                                       ) * 4);
            if (iVar12 != -1) {
              do {
                if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar12 * 0x18) == uVar10)
                {
                  local_48 = &TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
                              ::FindChecked((TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
                                             *)this_00,uVar10)->field0_0x0;
                  local_res20._0_4_ = uVar10 + 1;
                  local_50 = &local_res20;
                  TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<int_&&,TObjectPtr<UMediaPlayer>_const_&>_>
                            ((TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
                              *)this_00,
                             (TPairInitializer<int_&&,TObjectPtr<UMediaPlayer>_const_&> *)
                             &local_58.ObjectPtr,(bool *)&local_50);
                  break;
                }
                iVar12 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar12 * 0x18)
                ;
              } while (iVar12 != -1);
            }
          }
          uVar10 = uVar10 - 1;
        } while ((int)local_res18._0_4_ <= (int)uVar10);
      }
      if (TVar13.DebugPtr != (UMediaPlayer *)0x0) {
        local_58 = TVar13;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar13.DebugPtr);
        }
        local_50 = &local_res18;
        local_48 = &local_58;
        TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,TObjectPtr<UMediaPlayer>_&&>_>
                  ((TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
                    *)this_00,
                   (TPairInitializer<int_const_&,TObjectPtr<UMediaPlayer>_&&> *)
                   &local_res20.ObjectPtr,(bool *)&local_50);
      }
    }
    if (0 < (this->MediaSourceTextures).ArrayNum) {
      do {
        this_01 = GetSourceMediaTextureFromIndex(this,uVar11);
        if (this_01 != (UMediaTexture *)0x0) {
          if (*(int *)&(this->MediaSourcePlayers).field_0x8 !=
              *(int *)&(this->MediaSourcePlayers).field_0x34) {
            puVar1 = *(undefined1 **)&(this->MediaSourcePlayers).field_0x40;
            puVar7 = &(this->MediaSourcePlayers).field_0x38;
            if (puVar1 != (undefined1 *)0x0) {
              puVar7 = puVar1;
            }
            iVar12 = *(int *)(puVar7 + (ulonglong)
                                       (*(int *)&(this->MediaSourcePlayers).field_0x48 - 1U & uVar11
                                       ) * 4);
            if (iVar12 != -1) {
              lVar2 = *(longlong *)&this->MediaSourcePlayers;
              do {
                if (*(uint *)(lVar2 + (longlong)iVar12 * 0x18) == uVar11) {
                  pTVar5 = TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
                           ::FindChecked((TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
                                          *)&this->MediaSourcePlayers,uVar11);
                  pUVar8 = (pTVar5->field0_0x0).DebugPtr;
                  goto LAB_14d7d4267;
                }
                iVar12 = *(int *)(lVar2 + 0x10 + (longlong)iVar12 * 0x18);
              } while (iVar12 != -1);
            }
          }
          pUVar8 = (UMediaPlayer *)0x0;
LAB_14d7d4267:
          UMediaTexture::SetMediaPlayer(this_01,pUVar8);
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (this->MediaSourceTextures).ArrayNum);
    }
  }
  return;
}

// Cleanup @ 14d7d42b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMediaProfilePlaybackManager::Cleanup(UMediaProfilePlaybackManager *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  undefined1 local_58 [8];
  bool local_50;
  undefined2 uStack_4f;
  undefined5 uStack_4d;
  bool local_48;
  undefined1 local_40 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  int local_28;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
              *)&this->MediaSourcePlayers,&local_68);
  iVar3 = local_68.ArrayNum;
  uVar4 = (ulonglong)local_68.ArrayNum;
  pFVar2 = local_68.AllocatorInstance.Data + uVar4 * 4;
  FVar5.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar3) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar5.Data == pFVar2) break;
    local_58 = (undefined1  [8])0x0;
    uStack_4f._0_1_ = true;
    uStack_4f._1_1_ = false;
    local_50 = true;
    CloseSourceFromIndex(this,*(int *)FVar5.Data,(FCloseSourceArgs *)local_58);
    uVar4 = local_68._8_8_ & 0xffffffff;
    FVar5.Data = FVar5.Data + 4;
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
              *)&this->MediaOutputCaptures,&local_78);
  iVar3 = local_78.ArrayNum;
  uVar4 = (ulonglong)local_78.ArrayNum;
  pFVar2 = local_78.AllocatorInstance.Data + uVar4 * 4;
  FVar5.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar3) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar5.Data == pFVar2) break;
    local_40[0] = true;
    local_28 = 0;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    CloseOutputFromIndex(this,*(int *)FVar5.Data,(FCloseOutputArgs *)local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)local_58);
    if ((local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_48 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT53(uStack_4d,CONCAT21(uStack_4f,local_50)),
                 (FDestructionSentinel *)local_58);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
    uVar4 = local_78._8_8_ & 0xffffffff;
    FVar5.Data = FVar5.Data + 4;
  }
  DestructItems<TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1>,int>
            ((TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *)
             (this->ManagedOutputViewports).AllocatorInstance.Data,
             (this->ManagedOutputViewports).ArrayNum);
  piVar1 = &(this->ManagedOutputViewports).ArrayMax;
  (this->ManagedOutputViewports).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ManagedOutputViewports).AllocatorInstance,0,piVar1);
  }
  DestructItems<TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1>,int>
            ((TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1> *)
             (this->ActiveOutputViewports).AllocatorInstance.Data,
             (this->ActiveOutputViewports).ArrayNum);
  piVar1 = &(this->ActiveOutputViewports).ArrayMax;
  (this->ActiveOutputViewports).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ActiveOutputViewports).AllocatorInstance,0,piVar1);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// CloseOutput @ 14d7d4720

void __thiscall
UMediaProfilePlaybackManager::CloseOutput
          (UMediaProfilePlaybackManager *this,UMediaOutput *param_1,FCloseOutputArgs *param_2)

{
  longlong *plVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  int iVar4;
  longlong *plVar5;
  
  pUVar2 = UMediaProfile::StaticClass();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  if (pUVar3 != (UObject *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaOutput *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    plVar1 = *(longlong **)&pUVar3[1].field_0x10;
    for (plVar5 = plVar1; plVar5 != plVar1 + *(int *)&pUVar3[1].field_0x18; plVar5 = plVar5 + 1) {
      if ((UMediaOutput *)*plVar5 == param_1) {
        iVar4 = (int)((longlong)plVar5 - (longlong)plVar1 >> 3);
        goto LAB_14d7d4793;
      }
    }
    iVar4 = -1;
LAB_14d7d4793:
    CloseOutputFromIndex(this,iVar4,param_2);
  }
  return;
}

// CloseOutputFromIndex @ 14d7d47d0

void __thiscall
UMediaProfilePlaybackManager::CloseOutputFromIndex
          (UMediaProfilePlaybackManager *this,int param_1,FCloseOutputArgs *param_2)

{
  longlong lVar1;
  TObjectPtr<UMediaCapture> this_00;
  int iVar2;
  UClass *pUVar3;
  UMediaProfile *this_01;
  UMediaOutput *pUVar4;
  TObjectPtr<UMediaCapture>_u_0 *pTVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  undefined1 *puVar8;
  UMediaProfilePlaybackManager *local_res20;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  pUVar3 = UMediaProfile::GetPrivateStaticClass();
  this_01 = (UMediaProfile *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if (this_01 != (UMediaProfile *)0x0) {
    pUVar4 = UMediaProfile::GetMediaOutput(this_01,param_1);
    if (((pUVar4 != (UMediaOutput *)0x0) && (((uint)pUVar4->_padding_ >> 0x1e & 1) == 0)) &&
       (*(int *)&(this->MediaOutputCaptures).field_0x8 !=
        *(int *)&(this->MediaOutputCaptures).field_0x34)) {
      puVar8 = *(undefined1 **)&(this->MediaOutputCaptures).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->MediaOutputCaptures).field_0x38;
      }
      iVar2 = *(int *)(puVar8 + (ulonglong)
                                (*(int *)&(this->MediaOutputCaptures).field_0x48 - 1U & param_1) * 4
                      );
      if (iVar2 != -1) {
        lVar1 = *(longlong *)&this->MediaOutputCaptures;
        while (*(int *)(lVar1 + (longlong)iVar2 * 0x18) != param_1) {
          iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18);
          if (iVar2 == -1) {
            return;
          }
        }
        pTVar5 = &TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                  ::FindChecked((TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                                 *)&this->MediaOutputCaptures,param_1)->field0_0x0;
        local_58 = (undefined1  [8])0x0;
        local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        this_00.field0_0x0 = (TObjectPtr<UMediaCapture>_u_0)pTVar5->DebugPtr;
        local_50.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_40);
        local_28 = &local_50;
        puVar6 = UE::Core::Private::DelegateAllocate(0x48,&local_50);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__HUFCloseOutputArgs_UMediaProfilePlaybackManager____6B_
          ;
          *(int *)(puVar6 + 1) = param_1;
          *(bool *)(puVar6 + 2) = param_2->bDestroyCaptureObjects;
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar6 + 3),
                     &param_2->Callback);
          uVar7 = FDelegateHandle::GenerateNewID();
          puVar6[6] = uVar7;
          *puVar6 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaProfilePlaybackManager____A6AXXZUFDefaultDelegateUserPolicy__HUFCloseOutputArgs_1___6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UMediaProfilePlaybackManager *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar6[7] = 0;
          local_res20 = this;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UMediaProfilePlaybackManager *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 7),(FObjectPtr)&local_res20);
          puVar6[8] = PostStopCapture;
        }
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        UMediaCapture::StopCapture_Callback
                  ((UMediaCapture *)this_00.field0_0x0,false,
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58);
      }
    }
  }
  return;
}

// CloseSource @ 14d7d49c0

void __thiscall
UMediaProfilePlaybackManager::CloseSource
          (UMediaProfilePlaybackManager *this,UMediaSource *param_1,FCloseSourceArgs *param_2)

{
  longlong *plVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  int iVar4;
  longlong *plVar5;
  
  pUVar2 = UMediaProfile::StaticClass();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  if (pUVar3 != (UObject *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    plVar1 = *(longlong **)(pUVar3 + 1);
    for (plVar5 = plVar1; plVar5 != plVar1 + *(int *)&pUVar3[1].field_0x8; plVar5 = plVar5 + 1) {
      if ((UMediaSource *)*plVar5 == param_1) {
        iVar4 = (int)((longlong)plVar5 - (longlong)plVar1 >> 3);
        goto LAB_14d7d4a33;
      }
    }
    iVar4 = -1;
LAB_14d7d4a33:
    CloseSourceFromIndex(this,iVar4,param_2);
  }
  return;
}

// CloseSourceFromIndex @ 14d7d4a70

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
UMediaProfilePlaybackManager::CloseSourceFromIndex
          (UMediaProfilePlaybackManager *this,int param_1,FCloseSourceArgs *param_2)

{
  void *pvVar1;
  TObjectPtr<UMediaPlayer>_u_0 this_00;
  int iVar2;
  TObjectPtr<UMediaPlayer> *pTVar3;
  TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> *pTVar4;
  UMediaTexture *this_01;
  uint uVar5;
  undefined1 *puVar6;
  TObjectPtr<UMediaPlayer>_u_0 local_res8;
  int local_res10 [2];
  
  if (*(int *)&(this->MediaSourcePlayers).field_0x8 ==
      *(int *)&(this->MediaSourcePlayers).field_0x34) {
    return;
  }
  puVar6 = *(undefined1 **)&(this->MediaSourcePlayers).field_0x40;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = &(this->MediaSourcePlayers).field_0x38;
  }
  iVar2 = *(int *)(puVar6 + (ulonglong)
                            (*(int *)&(this->MediaSourcePlayers).field_0x48 - 1U & param_1) * 4);
  if (iVar2 == -1) {
    return;
  }
  while (*(int *)(*(longlong *)&this->MediaSourcePlayers + (longlong)iVar2 * 0x18) != param_1) {
    iVar2 = *(int *)(*(longlong *)&this->MediaSourcePlayers + 0x10 + (longlong)iVar2 * 0x18);
    if (iVar2 == -1) {
      return;
    }
  }
  pTVar3 = TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
           ::FindChecked((TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
                          *)&this->MediaSourcePlayers,param_1);
  pvVar1 = param_2->Consumer;
  this_00.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar3->field0_0x0).DebugPtr;
  if (pvVar1 != (void *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00.DebugPtr != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
    }
    local_res8.ObjectPtr.field0_0x0 = this_00.ObjectPtr.field0_0x0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (this_00.DebugPtr != (UMediaPlayer *)0x0) {
        UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00.DebugPtr != (UMediaPlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
      }
    }
    uVar5 = ((uint)((ulonglong)this_00.DebugPtr >> 0x14) & 0xffff ^
            (uint)((ulonglong)this_00.DebugPtr >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    iVar2 = TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TObjectPtr<UMediaPlayer_const_>_>
                      ((TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)&this->SourceConsumers,uVar5 >> 0x10 ^ uVar5,
                       (TObjectPtr<UMediaPlayer_const_> *)&local_res8.ObjectPtr);
    if (iVar2 != -1) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00.DebugPtr != (UMediaPlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
      }
      local_res8.ObjectPtr.field0_0x0 = this_00.ObjectPtr.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00.DebugPtr != (UMediaPlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
      }
      pTVar4 = TMapBase<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
               ::FindChecked((TMapBase<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
                              *)&this->SourceConsumers,(TObjectPtr<UMediaPlayer_const_>)&local_res8)
      ;
      TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>::Remove(pTVar4,pvVar1);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00.DebugPtr != (UMediaPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
  }
  local_res8.ObjectPtr.field0_0x0 = this_00.ObjectPtr.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_00.DebugPtr != (UMediaPlayer *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00.DebugPtr != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
    }
  }
  uVar5 = ((uint)((ulonglong)this_00.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)this_00.DebugPtr >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar2 = TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UMediaPlayer_const_>_>
                    ((TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)&this->SourceConsumers,uVar5 >> 0x10 ^ uVar5,
                     (TObjectPtr<UMediaPlayer_const_> *)&local_res8.ObjectPtr);
  if (iVar2 == -1) {
LAB_14d7d4cc4:
    if (param_2->bSoftClose == false) goto LAB_14d7d4cd2;
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00.DebugPtr != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
    }
    local_res8.ObjectPtr.field0_0x0 = this_00.ObjectPtr.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00.DebugPtr != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
    }
    pTVar4 = TMapBase<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
             ::FindChecked((TMapBase<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
                            *)&this->SourceConsumers,(TObjectPtr<UMediaPlayer_const_>)&local_res8);
    if (*(int *)&(pTVar4->Elements).field_0x8 - *(int *)&(pTVar4->Elements).field_0x34 < 1)
    goto LAB_14d7d4cc4;
  }
  if (param_2->bForceClose == false) {
    return;
  }
LAB_14d7d4cd2:
  UMediaPlayer::Close(this_00.DebugPtr);
  this_01 = GetSourceMediaTextureFromIndex(this,param_1);
  if (this_01 != (UMediaTexture *)0x0) {
    UMediaTexture::SetMediaPlayer(this_01,(UMediaPlayer *)0x0);
  }
  if (param_2->bDestroyMediaPlayer != false) {
    pTVar3 = TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
             ::FindChecked((TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
                            *)&this->MediaSourcePlayers,param_1);
    local_res8.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar3->field0_0x0).DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    TMapBase<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
    ::Remove((TMapBase<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
              *)&this->SourceConsumers,(TObjectPtr<UMediaPlayer_const_>)&local_res8);
    if (*(int *)&(this->MediaSourcePlayers).field_0x8 !=
        *(int *)&(this->MediaSourcePlayers).field_0x34) {
      local_res10[0] = param_1;
      TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
      ::RemoveImpl<int>((TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
                         *)&this->MediaSourcePlayers,param_1,local_res10);
    }
  }
  return;
}

// CloseSourcesForConsumer @ 14d7d4d70

void __thiscall
UMediaProfilePlaybackManager::CloseSourcesForConsumer
          (UMediaProfilePlaybackManager *this,FCloseSourceArgs *param_1)

{
  undefined1 *puVar1;
  TMap<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
  *pTVar2;
  int *piVar3;
  ulonglong uVar4;
  void *pvVar5;
  UObject *pUVar6;
  code *pcVar7;
  TMap<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
  *pTVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint *puVar22;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_108;
  int local_100;
  int iStack_fc;
  TMap<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  int iStack_d0;
  undefined4 uStack_cc;
  TMap<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  int local_98;
  int local_94;
  undefined4 local_74;
  undefined4 local_54;
  
  iVar18 = 0;
  puVar1 = &(this->SourceConsumers).field_0x10;
  local_108.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->SourceConsumers;
  local_100 = 0;
  iStack_fc = 0;
  uVar12 = *(uint *)&(this->SourceConsumers).field_0x28;
  TStack_f0.BaseBitIndex = 0;
  uVar10 = 1;
  TStack_f0.CurrentBitIndex = TStack_f0.BaseBitIndex;
  if (uVar12 != 0) {
    puVar21 = *(uint **)&(this->SourceConsumers).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar11 = *puVar21;
    TStack_f0.BaseBitIndex = 0;
    while (uVar11 == 0) {
      lVar13 = (longlong)iVar18;
      TStack_f0.BaseBitIndex = TStack_f0.BaseBitIndex + 0x20;
      iVar18 = iVar18 + 1;
      TStack_f0.CurrentBitIndex = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14d7d4e2d;
      uVar11 = puVar21[lVar13 + 1];
    }
    uVar10 = -uVar11 & uVar11;
    uVar4 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_98 = (int)lVar13;
    TStack_f0.CurrentBitIndex = (TStack_f0.BaseBitIndex - 1U) + local_98;
    if ((int)uVar12 < TStack_f0.CurrentBitIndex) {
      TStack_f0.CurrentBitIndex = uVar12;
    }
  }
LAB_14d7d4e2d:
  uVar11 = *(uint *)&(this->SourceConsumers).field_0x28;
  iStack_d0 = *(int *)&(this->SourceConsumers).field_0x8 -
              *(int *)&(this->SourceConsumers).field_0x34;
  uVar17 = uVar11 & 0xffffffe0;
  TStack_f0._padding_ = CONCAT44(uVar10,iVar18);
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_f0._28_4_ = local_74;
  TStack_c0._padding_ = TStack_f0._padding_;
  iVar18 = (int)uVar11 >> 5;
  uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0.BaseBitIndex = TStack_f0.BaseBitIndex;
  TStack_c0._28_4_ = local_74;
  local_f8 = pTVar2;
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_c8 = pTVar2;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  TStack_c0.CurrentBitIndex = TStack_f0.CurrentBitIndex;
  if ((((int)uVar11 < 0) || ((int)uVar12 < (int)uVar11)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar12 = *(uint *)&(this->SourceConsumers).field_0x28;
  if (uVar11 != uVar12) {
    puVar20 = *(undefined1 **)&(this->SourceConsumers).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar18 * 4);
    while (uVar10 == 0) {
      lVar13 = (longlong)iVar18;
      uVar17 = uVar17 + 0x20;
      iVar18 = iVar18 + 1;
      uVar11 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14d7d4f40;
      uVar10 = *(uint *)(puVar20 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_94 = (int)lVar13;
    uVar11 = local_94 + -1 + uVar17;
    if ((int)uVar12 < (int)uVar11) {
      uVar11 = uVar12;
    }
  }
LAB_14d7d4f40:
  while( true ) {
    pTVar8 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    iVar18 = local_100;
    if (((TStack_c0.CurrentBitIndex == uVar11) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    pvVar5 = param_1->Consumer;
    pFVar15 = (FScriptContainerElement *)
              (*(longlong *)pTVar8 + (longlong)TStack_c0.CurrentBitIndex * 0x60);
    uVar12 = ((uint)((ulonglong)pvVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pvVar5 >> 4)) *
             -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    if (*(int *)(pFVar15 + 0x10) != *(int *)(pFVar15 + 0x3c)) {
      pFVar14 = pFVar15 + 0x40;
      if (*(FScriptContainerElement **)(pFVar15 + 0x48) != (FScriptContainerElement *)0x0) {
        pFVar14 = *(FScriptContainerElement **)(pFVar15 + 0x48);
      }
      iVar18 = *(int *)(pFVar14 +
                       (ulonglong)(*(int *)(pFVar15 + 0x50) - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
      if (iVar18 != -1) {
        do {
          if (*(void **)(*(longlong *)(pFVar15 + 8) + (longlong)iVar18 * 0x10) == pvVar5) {
            if (((local_108.Data <= pFVar15) && (pFVar15 < local_108.Data + (longlong)iStack_fc * 8)
                ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (local_100 == iStack_fc) {
              local_100 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&local_108,&iStack_fc);
            }
            lVar13 = (longlong)local_100;
            local_100 = local_100 + 1;
            pUVar6 = *(UObject **)pFVar15;
            *(UObject **)(local_108.Data + lVar13 * 8) = pUVar6;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar6);
            }
            break;
          }
          iVar18 = *(int *)(*(longlong *)(pFVar15 + 8) + 8 + (longlong)iVar18 * 0x10);
        } while (iVar18 != -1);
      }
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  pFVar15 = local_108.Data + (longlong)local_100 * 8;
  FVar16.Data = local_108.Data;
LAB_14d7d50e0:
  do {
    if (local_100 != iVar18) {
      `TCheckedPointerIterator<TObjectPtr<UMediaPlayer>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar16.Data == pFVar15) {
      if (local_108.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data);
      }
      return;
    }
    iVar19 = 0;
    local_f8 = (TMap<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
                *)&this->MediaSourcePlayers;
    uVar12 = *(uint *)&(this->MediaSourcePlayers).field_0x28;
    TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->MediaSourcePlayers).field_0x10
    ;
    TStack_c0.BaseBitIndex = 0;
    uVar10 = 1;
    TStack_f0.CurrentBitIndex = 0;
    if (uVar12 != 0) {
      puVar21 = *(uint **)&(this->MediaSourcePlayers).field_0x20;
      puVar22 = (uint *)TStack_f0.Array;
      if (puVar21 != (uint *)0x0) {
        puVar22 = puVar21;
      }
      uVar11 = *puVar22;
      while (uVar11 == 0) {
        lVar13 = (longlong)iVar19;
        TStack_c0.BaseBitIndex = TStack_c0.BaseBitIndex + 0x20;
        iVar19 = iVar19 + 1;
        TStack_f0.CurrentBitIndex = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14d7d517a;
        uVar11 = puVar22[lVar13 + 1];
      }
      uVar10 = -uVar11 & uVar11;
      uVar4 = (ulonglong)uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      TStack_f0.CurrentBitIndex = TStack_c0.BaseBitIndex + -1 + (int)lVar13;
      if ((int)uVar12 < TStack_f0.CurrentBitIndex) {
        TStack_f0.CurrentBitIndex = uVar12;
      }
    }
LAB_14d7d517a:
    TStack_c0._padding_ = CONCAT44(uVar10,iVar19);
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    uVar10 = TStack_c0.UnvisitedBitMask;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    TStack_c0._28_4_ = local_54;
    TStack_f0._padding_ = TStack_c0._padding_;
    TStack_f0.BaseBitIndex = TStack_c0.BaseBitIndex;
    TStack_f0._28_4_ = local_54;
    TStack_f0.UnvisitedBitMask = 0xffffffff;
    local_c8 = local_f8;
    TStack_c0.Array = TStack_f0.Array;
    TStack_c0.CurrentBitIndex = TStack_f0.CurrentBitIndex;
    if (TStack_f0.CurrentBitIndex < (int)uVar12) {
      do {
        piVar3 = (int *)(*(longlong *)local_f8 + (longlong)TStack_f0.CurrentBitIndex * 0x18);
        if (*(longlong *)(piVar3 + 2) == *(longlong *)FVar16.Data) {
          uVar10 = TStack_c0.UnvisitedBitMask;
          if (piVar3 != (int *)0x0) {
            CloseSourceFromIndex(this,*piVar3,param_1);
            uVar10 = TStack_c0.UnvisitedBitMask;
          }
          goto LAB_14d7d521b;
        }
        TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
      } while (TStack_f0.CurrentBitIndex < (TStack_f0.Array)->NumBits);
      FVar16.Data = FVar16.Data + 8;
      goto LAB_14d7d50e0;
    }
LAB_14d7d521b:
    TStack_c0.UnvisitedBitMask = uVar10;
    FVar16.Data = FVar16.Data + 8;
  } while( true );
}

// DeferredRestart @ 14d7d6420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMediaProfilePlaybackManager::DeferredRestart(UMediaProfilePlaybackManager *this)

{
  UWorld *this_00;
  FTimerManager *this_01;
  undefined8 *puVar1;
  ulong64 uVar2;
  FTimerHandle FVar3;
  UMediaProfilePlaybackManager *local_res8 [2];
  FDelegateAllocation local_28;
  
  if ((this->RestartCapturesTimerHandle).Handle == 0) {
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    if (this_00 != (UWorld *)0x0) {
      this_01 = UWorld::GetTimerManager(this_00);
      local_28.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_28.DelegateSize = 0;
      puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_28);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar2 = FDelegateHandle::GenerateNewID();
        puVar1[2] = uVar2;
        *puVar1 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaProfilePlaybackManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar1[3] = 0;
        local_res8[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)local_res8);
        puVar1[4] = RestartCaptures;
      }
      FVar3 = FTimerManager::SetTimerForNextTick
                        (this_01,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                                  *)(local_res8 + 1));
                    /* WARNING: Load size is inaccurate */
      (this->RestartCapturesTimerHandle).Handle = *FVar3.Handle;
      if ((local_28.DelegateSize != 0) &&
         (local_28.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_28.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_28,0,0,0x10);
        local_28.DelegateSize = 0;
      }
      if (local_28.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_28.DelegateAllocator);
      }
    }
  }
  return;
}

// FindOrCreateMediaCaptureForIndex @ 14d7d7670

UMediaCapture * __thiscall
UMediaProfilePlaybackManager::FindOrCreateMediaCaptureForIndex
          (UMediaProfilePlaybackManager *this,int param_1)

{
  TMap<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
  *this_00;
  int iVar1;
  UClass *pUVar2;
  UMediaProfile *this_01;
  UMediaOutput *this_02;
  FObjectPtr_u_0 *pFVar3;
  undefined1 *puVar4;
  uint local_res10 [2];
  TPairInitializer<int_const_&,TObjectPtr<UMediaCapture>_&&> local_res18;
  uint *local_28;
  TObjectPtr<UMediaCapture> **local_20;
  
  local_res10[0] = param_1;
  pUVar2 = UMediaProfile::StaticClass();
  this_01 = (UMediaProfile *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  if (this_01 != (UMediaProfile *)0x0) {
    this_02 = UMediaProfile::GetMediaOutput(this_01,local_res10[0]);
    if ((this_02 != (UMediaOutput *)0x0) && (((uint)this_02->_padding_ >> 0x1e & 1) == 0)) {
      this_00 = &this->MediaOutputCaptures;
      if (*(int *)&(this->MediaOutputCaptures).field_0x8 !=
          *(int *)&(this->MediaOutputCaptures).field_0x34) {
        puVar4 = *(undefined1 **)&(this->MediaOutputCaptures).field_0x40;
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &(this->MediaOutputCaptures).field_0x38;
        }
        iVar1 = *(int *)(puVar4 + (ulonglong)
                                  (*(int *)&(this->MediaOutputCaptures).field_0x48 - 1U &
                                  local_res10[0]) * 4);
        if (iVar1 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar1 * 0x18) ==
                local_res10[0]) goto LAB_14d7d77a5;
            iVar1 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar1 * 0x18);
          } while (iVar1 != -1);
        }
      }
      local_res18.Value = (TObjectPtr<UMediaCapture> *)UMediaOutput::CreateMediaCapture(this_02);
      if (((UMediaCapture *)local_res18.Value != (UMediaCapture *)0x0) &&
         (((uint)((UMediaCapture *)local_res18.Value)->_padding_ >> 0x1e & 1) == 0)) {
        local_res18.Key = (int *)local_res18.Value;
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddUObject<UMediaProfilePlaybackManager,UMediaCapture_*_&>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &((UMediaCapture *)local_res18.Value)->OnStateChangedNative,
                   (UMediaProfilePlaybackManager *)&local_res18.Value,(pmf_a1498537)this,
                   (UMediaCapture **)OnCaptureStateChanged);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_res18.Value);
        }
        local_28 = local_res10;
        local_20 = &local_res18.Value;
        TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,TObjectPtr<UMediaCapture>_&&>_>
                  ((TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
                    *)this_00,&local_res18,(bool *)&local_28);
LAB_14d7d77a5:
        pFVar3 = (FObjectPtr_u_0 *)
                 TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                 ::FindChecked((TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                                *)this_00,local_res10[0]);
        return (UMediaCapture *)(FObjectPtr)pFVar3->Handle;
      }
    }
  }
  return (UMediaCapture *)0x0;
}

// FindOrCreateMediaPlayerForIndex @ 14d7d77d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMediaPlayer * __thiscall
UMediaProfilePlaybackManager::FindOrCreateMediaPlayerForIndex
          (UMediaProfilePlaybackManager *this,int param_1)

{
  TMap<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
  *this_00;
  UClass *pUVar1;
  UObject *pUVar2;
  TObjectPtr<UMediaPlayer> *pTVar3;
  UMediaPlayer *pUVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 auStack_e8 [32];
  uint local_c8 [2];
  TPairInitializer<int_const_&,TObjectPtr<UMediaPlayer>_&&> local_c0;
  uint *local_b0;
  TObjectPtr<UMediaPlayer> **local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8[0] = param_1;
  pUVar1 = UMediaProfile::StaticClass();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  if (((pUVar2 == (UObject *)0x0) || ((int)local_c8[0] < 0)) ||
     (*(int *)&pUVar2[1].field_0x8 <= (int)local_c8[0])) {
    pUVar4 = (UMediaPlayer *)0x0;
  }
  else {
    this_00 = &this->MediaSourcePlayers;
    if (*(int *)&(this->MediaSourcePlayers).field_0x8 !=
        *(int *)&(this->MediaSourcePlayers).field_0x34) {
      puVar6 = *(undefined1 **)&(this->MediaSourcePlayers).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->MediaSourcePlayers).field_0x38;
      }
      iVar7 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(this->MediaSourcePlayers).field_0x48 - 1U & local_c8[0])
                                * 4);
      if (iVar7 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar7 * 0x18) == local_c8[0]) {
            if (iVar7 != -1) goto LAB_14d7d7928;
            break;
          }
          iVar7 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar7 * 0x18);
        } while (iVar7 != -1);
      }
    }
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UMediaPlayer_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._8_8_ = this;
    local_c0.Value =
         (TObjectPtr<UMediaPlayer> *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_c0.Value != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_c0.Value);
    }
    local_b0 = local_c8;
    local_a8 = &local_c0.Value;
    TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,TObjectPtr<UMediaPlayer>_&&>_>
              ((TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
                *)this_00,&local_c0,(bool *)&local_b0);
LAB_14d7d7928:
    pTVar3 = TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
             ::FindChecked((TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
                            *)this_00,local_c8[0]);
    pUVar4 = (pTVar3->field0_0x0).DebugPtr;
  }
  return pUVar4;
}

// GetActiveViewport @ 14d7d7df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TSharedPtr<FSceneViewport,1> * __thiscall
UMediaProfilePlaybackManager::GetActiveViewport
          (UMediaProfilePlaybackManager *this,TSharedPtr<FSceneViewport,1> *__return_storage_ptr__,
          UMediaOutput *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  int iVar4;
  longlong *plVar5;
  
  pUVar2 = UMediaProfile::StaticClass();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  if (pUVar3 == (UObject *)0x0) {
    __return_storage_ptr__->Object = (FSceneViewport *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaOutput *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    plVar1 = *(longlong **)&pUVar3[1].field_0x10;
    for (plVar5 = plVar1; plVar5 != plVar1 + *(int *)&pUVar3[1].field_0x18; plVar5 = plVar5 + 1) {
      if ((UMediaOutput *)*plVar5 == param_1) {
        iVar4 = (int)((longlong)plVar5 - (longlong)plVar1 >> 3);
        goto LAB_14d7d7e6c;
      }
    }
    iVar4 = -1;
LAB_14d7d7e6c:
    GetActiveViewportFromIndex(this,__return_storage_ptr__,iVar4);
  }
  return __return_storage_ptr__;
}

// GetActiveViewportFromIndex @ 14d7d7ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FSceneViewport,1> * __thiscall
UMediaProfilePlaybackManager::GetActiveViewportFromIndex
          (UMediaProfilePlaybackManager *this,TSharedPtr<FSceneViewport,1> *__return_storage_ptr__,
          int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UEngine *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  UMediaProfile *this_00;
  UMediaOutput *pUVar7;
  TSharedPtr<FSceneViewport,1> *pTVar8;
  FActiveViewport *this_01;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  undefined1 local_res20 [8];
  
  pUVar6 = UMediaProfile::StaticClass();
  this_00 = (UMediaProfile *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  if (this_00 == (UMediaProfile *)0x0) {
    __return_storage_ptr__->Object = (FSceneViewport *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pUVar7 = UMediaProfile::GetMediaOutput(this_00,param_1);
  if ((pUVar7 == (UMediaOutput *)0x0) || (((uint)pUVar7->_padding_ >> 0x1e & 1) != 0)) {
    __return_storage_ptr__->Object = (FSceneViewport *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  iVar1 = (this->ActiveOutputViewports).ArrayNum;
  pFVar2 = (this->ActiveOutputViewports).AllocatorInstance.Data;
  pFVar10 = pFVar2;
  do {
    if (pFVar10 == pFVar2 + (longlong)iVar1 * 0x10) {
LAB_14d7d7f74:
      pUVar4 = GEngine;
      pFVar10 = (GEngine->WorldList).Array.AllocatorInstance.Data;
      iVar1 = (GEngine->WorldList).Array.ArrayNum;
      pFVar2 = pFVar10 + (longlong)iVar1 * 8;
      while( true ) {
        if ((pUVar4->WorldList).Array.ArrayNum != iVar1) {
          `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (pFVar10 == pFVar2) break;
        pFVar10 = pFVar10 + 8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      __return_storage_ptr__->Object = (FSceneViewport *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    if ((*(longlong *)pFVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FSceneViewport,1> *)(*pcVar3)();
      return pTVar8;
    }
    bVar5 = TWeakObjectPtr<UMediaOutput,FWeakObjectPtr>::UEOpEquals<UMediaOutput,bool>
                      (*(TWeakObjectPtr<UMediaOutput,FWeakObjectPtr> **)pFVar10,pUVar7);
    if (bVar5) {
      uVar11 = (uint)((longlong)pFVar10 - (longlong)pFVar2 >> 4);
      if (uVar11 != 0xffffffff) {
        uVar9 = 0;
        if ((int)uVar11 < (this->ActiveOutputViewports).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TSharedPtr<FSceneViewport,1> *)(*pcVar3)();
          return pTVar8;
        }
        this_01 = TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1>::operator->
                            ((TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1> *)
                             ((this->ActiveOutputViewports).AllocatorInstance.Data +
                             (longlong)(int)uVar11 * 0x10));
        MediaProfilePlaybackManager::FActiveViewport::GetSceneViewport
                  (this_01,__return_storage_ptr__);
        return __return_storage_ptr__;
      }
      goto LAB_14d7d7f74;
    }
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// GetMediaSourceConsumerCount @ 14d7d90c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall
UMediaProfilePlaybackManager::GetMediaSourceConsumerCount
          (UMediaProfilePlaybackManager *this,UMediaPlayer *param_1)

{
  int iVar1;
  TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> *pTVar2;
  uint uVar3;
  TObjectPtr<UMediaPlayer_const_>_u_0 local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMediaPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_1 != (UMediaPlayer *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  iVar1 = TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UMediaPlayer_const_>_>
                    ((TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)&this->SourceConsumers,uVar3 >> 0x10 ^ uVar3,
                     (TObjectPtr<UMediaPlayer_const_> *)&local_res8.ObjectPtr);
  if (iVar1 != -1) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.DebugPtr = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pTVar2 = TMapBase<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
             ::FindChecked((TMapBase<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
                            *)&this->SourceConsumers,(TObjectPtr<UMediaPlayer_const_>)&local_res8);
    return *(int *)&(pTVar2->Elements).field_0x8 - *(int *)&(pTVar2->Elements).field_0x34;
  }
  return 0;
}

// GetOrCreateManagedViewport @ 14d7d9fa0

TSharedPtr<FViewportClient,1> * __thiscall
UMediaProfilePlaybackManager::GetOrCreateManagedViewport
          (UMediaProfilePlaybackManager *this,TSharedPtr<FViewportClient,1> *__return_storage_ptr__,
          UMediaOutput *param_1,EViewModeIndex param_2,void *param_3)

{
  longlong *plVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  int iVar4;
  longlong *plVar5;
  
  pUVar2 = UMediaProfile::StaticClass();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  if (pUVar3 == (UObject *)0x0) {
    __return_storage_ptr__->Object = (FViewportClient *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaOutput *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    plVar1 = *(longlong **)&pUVar3[1].field_0x10;
    for (plVar5 = plVar1; plVar5 != plVar1 + *(int *)&pUVar3[1].field_0x18; plVar5 = plVar5 + 1) {
      if ((UMediaOutput *)*plVar5 == param_1) {
        iVar4 = (int)((longlong)plVar5 - (longlong)plVar1 >> 3);
        goto LAB_14d7da025;
      }
    }
    iVar4 = -1;
LAB_14d7da025:
    GetOrCreateManagedViewportFromIndex(this,__return_storage_ptr__,iVar4,param_2,param_3);
  }
  return __return_storage_ptr__;
}

// GetOrCreateManagedViewportFromIndex @ 14d7da070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TSharedPtr<FViewportClient,1> * __thiscall
UMediaProfilePlaybackManager::GetOrCreateManagedViewportFromIndex
          (UMediaProfilePlaybackManager *this,TSharedPtr<FViewportClient,1> *__return_storage_ptr__,
          int param_1,EViewModeIndex param_2,void *param_3)

{
  int *piVar1;
  TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  UClass *pUVar8;
  UMediaProfile *this_00;
  UMediaOutput *pUVar9;
  TSharedPtr<FViewportClient,1> *pTVar10;
  FManagedViewport *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  TArray<TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1>,TSizedDefaultAllocator<32>_>
  *pTVar15;
  undefined1 local_38 [8];
  TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> local_30;
  
  pUVar8 = UMediaProfile::StaticClass();
  this_00 = (UMediaProfile *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
  if (((this_00 == (UMediaProfile *)0x0) ||
      (pUVar9 = UMediaProfile::GetMediaOutput(this_00,param_1), pUVar9 == (UMediaOutput *)0x0)) ||
     (((uint)pUVar9->_padding_ >> 0x1e & 1) != 0)) {
    __return_storage_ptr__->Object = (FViewportClient *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar15 = &this->ManagedOutputViewports;
    pFVar14 = (pTVar15->AllocatorInstance).Data;
    iVar6 = (this->ManagedOutputViewports).ArrayNum;
    for (pFVar13 = pFVar14; pFVar13 != pFVar14 + (longlong)iVar6 * 0x10; pFVar13 = pFVar13 + 0x10) {
      if ((*(longlong *)pFVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FViewportClient,1> *)(*pcVar4)();
        return pTVar10;
      }
      bVar5 = TWeakObjectPtr<UMediaOutput,FWeakObjectPtr>::UEOpEquals<UMediaOutput,bool>
                        (*(TWeakObjectPtr<UMediaOutput,FWeakObjectPtr> **)pFVar13,pUVar9);
      if (bVar5) {
        uVar12 = (uint)((longlong)pFVar13 - (longlong)pFVar14 >> 4);
        if (uVar12 != 0xffffffff) {
          if (param_3 != (void *)0x0) {
            uVar7 = 0;
            if ((int)uVar12 < (this->ManagedOutputViewports).ArrayNum) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar10 = (TSharedPtr<FViewportClient,1> *)(*pcVar4)();
              return pTVar10;
            }
            pFVar11 = TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1>::operator->
                                ((TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *)
                                 ((pTVar15->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x10))
            ;
            TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>::Emplace<void_*_const_&>
                      (&pFVar11->Consumers,(void **)local_38,(bool *)&param_3);
          }
          uVar7 = 0;
          if ((int)uVar12 < (this->ManagedOutputViewports).ArrayNum) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar10 = (TSharedPtr<FViewportClient,1> *)(*pcVar4)();
            return pTVar10;
          }
          pFVar11 = TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1>::operator->
                              ((TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *)
                               ((pTVar15->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x10));
          __return_storage_ptr__->Object = (pFVar11->ViewportClient).Object;
          pTVar3 = (pFVar11->ViewportClient).SharedReferenceCount.ReferenceController;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
          if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
            return __return_storage_ptr__;
          }
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
          return __return_storage_ptr__;
        }
        break;
      }
    }
    MediaProfilePlaybackManager::CreateManagedViewport(&local_30,pUVar9,param_2);
    if (param_3 != (void *)0x0) {
      if ((local_30.Object == (FManagedViewport *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FViewportClient,1> *)(*pcVar4)();
        return pTVar10;
      }
      TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>::Emplace<void_*_const_&>
                (&(local_30.Object)->Consumers,(void **)(local_38 + 4),(bool *)&param_3);
    }
    pTVar2 = (TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *)
             (pTVar15->AllocatorInstance).Data;
    if (((pTVar2 <= &local_30) && (&local_30 < pTVar2 + (this->ManagedOutputViewports).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FViewportClient,1> *)(*pcVar4)();
      return pTVar10;
    }
    iVar6 = (this->ManagedOutputViewports).ArrayNum;
    piVar1 = &(this->ManagedOutputViewports).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar15->AllocatorInstance,piVar1);
    }
    pFVar14 = (pTVar15->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    (this->ManagedOutputViewports).ArrayNum = iVar6 + 1;
    *(FManagedViewport **)pFVar14 = local_30.Object;
    *(TReferenceControllerBase<1> **)(pFVar14 + 8) =
         local_30.SharedReferenceCount.ReferenceController;
    if (local_30.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_30.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_30.Object == (FManagedViewport *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FViewportClient,1> *)(*pcVar4)();
      return pTVar10;
    }
    __return_storage_ptr__->Object = ((local_30.Object)->ViewportClient).Object;
    pTVar3 = ((local_30.Object)->ViewportClient).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetOutputCaptureState @ 14d7da3f0

TOptional<EMediaCaptureState> __thiscall
UMediaProfilePlaybackManager::GetOutputCaptureState
          (UMediaProfilePlaybackManager *this,UMediaOutput *param_1,bool *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  TObjectPtr<UMediaCapture>_u_0 TVar3;
  undefined1 uVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  TObjectPtr<UMediaCapture> *pTVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 in_R9;
  TObjectPtr<UMediaCapture>_u_0 local_28 [2];
  
  pUVar6 = UMediaProfile::StaticClass();
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  if (pUVar7 == (UObject *)0x0) {
    *(undefined1 *)((longlong)&param_1->_padding_ + 1) = 0;
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (bool *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    plVar1 = *(longlong **)&pUVar7[1].field_0x10;
    for (plVar11 = plVar1; plVar11 != plVar1 + *(int *)&pUVar7[1].field_0x18; plVar11 = plVar11 + 1)
    {
      if ((bool *)*plVar11 == param_2) {
        uVar12 = (longlong)plVar11 - (longlong)plVar1 >> 3;
        goto LAB_14d7da477;
      }
    }
    uVar12 = 0xffffffff;
LAB_14d7da477:
    pUVar6 = UMediaProfile::StaticClass();
    pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
    if ((pUVar7 != (UObject *)0x0) &&
       (*(int *)&(this->MediaOutputCaptures).field_0x8 !=
        *(int *)&(this->MediaOutputCaptures).field_0x34)) {
      puVar10 = *(undefined1 **)&(this->MediaOutputCaptures).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->MediaOutputCaptures).field_0x38;
      }
      iVar5 = *(int *)(puVar10 +
                      ((ulonglong)(*(int *)&(this->MediaOutputCaptures).field_0x48 - 1) &
                      uVar12 & 0xffffffff) * 4);
      if (iVar5 != -1) {
        lVar2 = *(longlong *)&this->MediaOutputCaptures;
        do {
          if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == (int)uVar12) {
            pTVar8 = TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                     ::FindChecked((TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                                    *)&this->MediaOutputCaptures,(int)uVar12);
            TVar3.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar8->field0_0x0).DebugPtr;
            local_28[0].ObjectPtr.field0_0x0 = TVar3.ObjectPtr.field0_0x0;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (TVar3.DebugPtr != (UMediaCapture *)0x0) {
                UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (TVar3.DebugPtr != (UMediaCapture *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
              }
            }
            uVar9 = ((uint)((ulonglong)TVar3.DebugPtr >> 0x14) & 0xffff ^
                    (uint)((ulonglong)TVar3.DebugPtr >> 4)) * -0x7a143595;
            uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
            iVar5 = TSet<TObjectPtr<UMediaCapture>,DefaultKeyFuncs<TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<TObjectPtr<UMediaCapture_const_>_>
                              (&this->CapturesWithError,uVar9 >> 0x10 ^ uVar9,
                               (TObjectPtr<UMediaCapture_const_> *)&local_28[0].ObjectPtr);
            *(bool *)in_R9 = iVar5 != -1;
            uVar4 = (**(code **)((TVar3.DebugPtr)->_padding_ + 0x2b0))(TVar3.DebugPtr);
            *(undefined1 *)&param_1->_padding_ = uVar4;
            uVar4 = 1;
            goto LAB_14d7da4d8;
          }
          iVar5 = *(int *)(lVar2 + 0x10 + (longlong)iVar5 * 0x18);
        } while (iVar5 != -1);
      }
    }
    uVar4 = 0;
LAB_14d7da4d8:
    *(undefined1 *)((longlong)&param_1->_padding_ + 1) = uVar4;
  }
  return SUB82(param_1,0);
}

// GetOutputCaptureStateFromIndex @ 14d7da5b0

TOptional<EMediaCaptureState> __thiscall
UMediaProfilePlaybackManager::GetOutputCaptureStateFromIndex
          (UMediaProfilePlaybackManager *this,int param_1,bool *param_2)

{
  longlong lVar1;
  TObjectPtr<UMediaCapture>_u_0 TVar2;
  undefined1 uVar3;
  int iVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  TObjectPtr<UMediaCapture> *pTVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 in_R9;
  TObjectPtr<UMediaCapture>_u_0 local_18 [2];
  
  puVar9 = (undefined1 *)CONCAT44(in_register_00000014,param_1);
  pUVar5 = UMediaProfile::StaticClass();
  pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  if ((pUVar6 != (UObject *)0x0) &&
     (*(int *)&(this->MediaOutputCaptures).field_0x8 !=
      *(int *)&(this->MediaOutputCaptures).field_0x34)) {
    puVar10 = *(undefined1 **)&(this->MediaOutputCaptures).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->MediaOutputCaptures).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    ((ulonglong)(*(int *)&(this->MediaOutputCaptures).field_0x48 - 1) &
                    (ulonglong)param_2 & 0xffffffff) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->MediaOutputCaptures;
      do {
        if (*(int *)(lVar1 + (longlong)iVar4 * 0x18) == (int)param_2) {
          pTVar7 = TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                   ::FindChecked((TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                                  *)&this->MediaOutputCaptures,(int)param_2);
          TVar2.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar7->field0_0x0).DebugPtr;
          local_18[0].ObjectPtr.field0_0x0 = TVar2.ObjectPtr.field0_0x0;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (TVar2.DebugPtr != (UMediaCapture *)0x0) {
              UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar2.DebugPtr != (UMediaCapture *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
            }
          }
          uVar8 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
                  (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          iVar4 = TSet<TObjectPtr<UMediaCapture>,DefaultKeyFuncs<TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<TObjectPtr<UMediaCapture_const_>_>
                            (&this->CapturesWithError,uVar8 >> 0x10 ^ uVar8,
                             (TObjectPtr<UMediaCapture_const_> *)&local_18[0].ObjectPtr);
          *(bool *)in_R9 = iVar4 != -1;
          uVar3 = (**(code **)((TVar2.DebugPtr)->_padding_ + 0x2b0))(TVar2.DebugPtr);
          *puVar9 = uVar3;
          puVar9[1] = 1;
          goto LAB_14d7da639;
        }
        iVar4 = *(int *)(lVar1 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  puVar9[1] = 0;
LAB_14d7da639:
  return SUB42(param_1,0);
}

// GetOwningMediaProfile @ 14d7da700

UMediaProfile * __thiscall
UMediaProfilePlaybackManager::GetOwningMediaProfile(UMediaProfilePlaybackManager *this)

{
  UClass *pUVar1;
  UMediaProfile *pUVar2;
  
  pUVar1 = UMediaProfile::StaticClass();
  pUVar2 = (UMediaProfile *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  return pUVar2;
}

// GetPrivateStaticClass @ 14d7dac40

UClass * __cdecl UMediaProfilePlaybackManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaProfilePlaybackManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaProfilePlaybackManager",
               &Z_Registration_Info_UClass_UMediaProfilePlaybackManager.InnerSingleton,
               StaticRegisterNativesUMediaProfilePlaybackManager,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaProfilePlaybackManager>,
               InternalVTableHelperCtorCaller<UMediaProfilePlaybackManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaProfilePlaybackManager.InnerSingleton;
}

// GetSourceMediaTexture @ 14d7db140

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaTexture * __thiscall
UMediaProfilePlaybackManager::GetSourceMediaTexture
          (UMediaProfilePlaybackManager *this,UMediaSource *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  UMediaTexture *pUVar4;
  int iVar5;
  longlong *plVar6;
  
  pUVar2 = UMediaProfile::StaticClass();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  if (pUVar3 == (UObject *)0x0) {
    return (UMediaTexture *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  plVar1 = *(longlong **)(pUVar3 + 1);
  plVar6 = plVar1;
  do {
    if (plVar6 == plVar1 + *(int *)&pUVar3[1].field_0x8) {
      iVar5 = -1;
LAB_14d7db1ba:
      pUVar4 = GetSourceMediaTextureFromIndex(this,iVar5);
      return pUVar4;
    }
    if ((UMediaSource *)*plVar6 == param_1) {
      iVar5 = (int)((longlong)plVar6 - (longlong)plVar1 >> 3);
      goto LAB_14d7db1ba;
    }
    plVar6 = plVar6 + 1;
  } while( true );
}

// GetSourceMediaTextureFromIndex @ 14d7db1e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaTexture * __thiscall
UMediaProfilePlaybackManager::GetSourceMediaTextureFromIndex
          (UMediaProfilePlaybackManager *this,int param_1)

{
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UMediaTexture *pUVar6;
  
  if ((param_1 < 0) || ((this->MediaSourceTextures).ArrayNum <= param_1)) {
    return (UMediaTexture *)0x0;
  }
  pUVar4 = UMediaProfile::GetPrivateStaticClass();
  pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if (pUVar5 == (UObject *)0x0) {
    return (UMediaTexture *)0x0;
  }
  if (param_1 < *(int *)&pUVar5[1].field_0x8) {
    if (GIsRunning != false) {
      if (((this->MediaSourceTextures).ArrayNum <= param_1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UMediaTexture *)(*pcVar2)();
        return pUVar6;
      }
      this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)
                ((this->MediaSourceTextures).AllocatorInstance.Data + (longlong)param_1 * 0x28);
      pUVar6 = (UMediaTexture *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
      if (pUVar6 == (UMediaTexture *)0x0) {
        if ((this_00->ObjectID).AssetPath.PackageName == (FName)0x0) {
          return (UMediaTexture *)0x0;
        }
        FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar6 = (UMediaTexture *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
      }
      if (pUVar6 != (UMediaTexture *)0x0) {
        pUVar4 = Z_Construct_UClass_UMediaTexture_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) {
          return pUVar6;
        }
      }
    }
    return (UMediaTexture *)0x0;
  }
  return (UMediaTexture *)0x0;
}

// IsOutputCapturing @ 14d7dbbd0

bool __thiscall
UMediaProfilePlaybackManager::IsOutputCapturing
          (UMediaProfilePlaybackManager *this,UMediaOutput *param_1)

{
  longlong *plVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  int iVar5;
  longlong *plVar6;
  
  pUVar3 = UMediaProfile::StaticClass();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if (pUVar4 == (UObject *)0x0) {
    return false;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaOutput *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  plVar1 = *(longlong **)&pUVar4[1].field_0x10;
  plVar6 = plVar1;
  do {
    if (plVar6 == plVar1 + *(int *)&pUVar4[1].field_0x18) {
      iVar5 = -1;
LAB_14d7dbc4a:
      bVar2 = IsOutputCapturingFromIndex(this,iVar5);
      return bVar2;
    }
    if ((UMediaOutput *)*plVar6 == param_1) {
      iVar5 = (int)((longlong)plVar6 - (longlong)plVar1 >> 3);
      goto LAB_14d7dbc4a;
    }
    plVar6 = plVar6 + 1;
  } while( true );
}

// IsOutputCapturingFromIndex @ 14d7dbc70

bool __thiscall
UMediaProfilePlaybackManager::IsOutputCapturingFromIndex
          (UMediaProfilePlaybackManager *this,int param_1)

{
  TObjectPtr<UMediaCapture> TVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  UClass *pUVar4;
  UMediaProfile *this_00;
  UMediaOutput *pUVar5;
  TObjectPtr<UMediaCapture>_u_0 *pTVar6;
  undefined1 *puVar7;
  longlong lVar8;
  bool bVar9;
  FName local_res18 [2];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  FString local_18;
  
  pUVar4 = UMediaProfile::StaticClass();
  this_00 = (UMediaProfile *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if ((((this_00 != (UMediaProfile *)0x0) &&
       (pUVar5 = UMediaProfile::GetMediaOutput(this_00,param_1), pUVar5 != (UMediaOutput *)0x0)) &&
      (((uint)pUVar5->_padding_ >> 0x1e & 1) == 0)) &&
     (*(int *)&(this->MediaOutputCaptures).field_0x8 !=
      *(int *)&(this->MediaOutputCaptures).field_0x34)) {
    puVar7 = *(undefined1 **)&(this->MediaOutputCaptures).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->MediaOutputCaptures).field_0x38;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->MediaOutputCaptures).field_0x48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar8 = *(longlong *)&this->MediaOutputCaptures;
      do {
        if (*(int *)(lVar8 + (longlong)iVar3 * 0x18) == param_1) {
          pTVar6 = &TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                    ::FindChecked((TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                                   *)&this->MediaOutputCaptures,param_1)->field0_0x0;
          TVar1.field0_0x0 = (TObjectPtr<UMediaCapture>_u_0)pTVar6->DebugPtr;
          cVar2 = (**(code **)(*(longlong *)TVar1.field0_0x0 + 0x2b0))(TVar1.field0_0x0);
          if (cVar2 == '\x04') {
            return false;
          }
          cVar2 = (**(code **)(*(longlong *)TVar1.field0_0x0 + 0x2b0))(TVar1.field0_0x0);
          if (cVar2 == '\0') {
            return false;
          }
          local_res18[0] = (FName)pUVar5->_padding_;
          ::FName::ToString(local_res18,&local_18);
          local_20 = *(int *)((longlong)TVar1.field0_0x0 + 0x230);
          lVar8 = (longlong)local_20;
          _Src = *(void **)((longlong)TVar1.field0_0x0 + 0x228);
          local_28.Data = (FScriptContainerElement *)0x0;
          if (local_20 == 0) {
            local_1c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_20,0,&local_28,local_20,&local_1c);
            memcpy(local_28.Data,_Src,lVar8 * 2);
          }
          if (local_20 == local_18.Data.ArrayNum) {
            if (local_20 < 2) {
              bVar9 = true;
            }
            else {
              iVar3 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)local_28.Data,
                                 (wchar_t *)local_18.Data.AllocatorInstance.Data);
              bVar9 = iVar3 == 0;
            }
          }
          else {
            bVar9 = local_18.Data.ArrayNum + local_20 == 1;
          }
          if (local_28.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data);
          }
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
          return bVar9;
        }
        iVar3 = *(int *)(lVar8 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// IsSourceOpen @ 14d7dc120

bool __thiscall
UMediaProfilePlaybackManager::IsSourceOpen
          (UMediaProfilePlaybackManager *this,UMediaSource *param_1,void *param_2)

{
  longlong *plVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  int iVar5;
  longlong *plVar6;
  
  pUVar3 = UMediaProfile::StaticClass();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  bVar2 = false;
  if (pUVar4 != (UObject *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    plVar1 = *(longlong **)(pUVar4 + 1);
    for (plVar6 = plVar1; plVar6 != plVar1 + *(int *)&pUVar4[1].field_0x8; plVar6 = plVar6 + 1) {
      if ((UMediaSource *)*plVar6 == param_1) {
        iVar5 = (int)((longlong)plVar6 - (longlong)plVar1 >> 3);
        goto LAB_14d7dc193;
      }
    }
    iVar5 = -1;
LAB_14d7dc193:
    bVar2 = IsSourceOpenFromIndex(this,iVar5,param_2);
  }
  return bVar2;
}

// IsSourceOpenFromIndex @ 14d7dc1d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
UMediaProfilePlaybackManager::IsSourceOpenFromIndex
          (UMediaProfilePlaybackManager *this,int param_1,void *param_2)

{
  TObjectPtr<UMediaPlayer_const_>_u_0 TVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  TObjectPtr<UMediaPlayer>_u_0 *pTVar7;
  TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> *pTVar8;
  uint uVar9;
  undefined1 *puVar10;
  ForElementType<FSetElementId> FVar11;
  TObjectPtr<UMediaPlayer_const_>_u_0 local_res8;
  
  if ((-1 < param_1) && (param_1 < (this->MediaSourceTextures).ArrayNum)) {
    pUVar5 = UMediaProfile::StaticClass();
    pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
    if ((pUVar6 != (UObject *)0x0) &&
       ((param_1 < *(int *)&pUVar6[1].field_0x8 &&
        (*(int *)&(this->MediaSourcePlayers).field_0x8 !=
         *(int *)&(this->MediaSourcePlayers).field_0x34)))) {
      puVar10 = *(undefined1 **)&(this->MediaSourcePlayers).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->MediaSourcePlayers).field_0x38;
      }
      iVar4 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(this->MediaSourcePlayers).field_0x48 - 1U & param_1) * 4
                      );
      if (iVar4 != -1) {
        do {
          if (*(int *)(*(longlong *)&this->MediaSourcePlayers + (longlong)iVar4 * 0x18) == param_1)
          {
            pTVar7 = &TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
                      ::FindChecked((TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
                                     *)&this->MediaSourcePlayers,param_1)->field0_0x0;
            bVar3 = UMediaPlayer::IsClosed(pTVar7->DebugPtr);
            if (param_2 == (void *)0x0) {
              return !bVar3;
            }
            TVar1.DebugPtr = pTVar7->DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar1.DebugPtr != (UMediaPlayer *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
            }
            local_res8.DebugPtr = TVar1.DebugPtr;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (TVar1.DebugPtr != (UMediaPlayer *)0x0) {
                UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (TVar1.DebugPtr != (UMediaPlayer *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
              }
            }
            uVar9 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
                    (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
            uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
            iVar4 = TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<TObjectPtr<UMediaPlayer_const_>_>
                              ((TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                                *)&this->SourceConsumers,uVar9 >> 0x10 ^ uVar9,
                               (TObjectPtr<UMediaPlayer_const_> *)&local_res8.ObjectPtr);
            if (iVar4 == -1) goto LAB_14d7dc3c8;
            TVar1.DebugPtr = pTVar7->DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar1.DebugPtr != (UMediaPlayer *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
            }
            local_res8.DebugPtr = TVar1.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar1.DebugPtr != (UMediaPlayer *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
            }
            pTVar8 = TMapBase<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
                     ::FindChecked((TMapBase<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
                                    *)&this->SourceConsumers,
                                   (TObjectPtr<UMediaPlayer_const_>)&local_res8);
            uVar9 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4))
                    * -0x7a143595;
            uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
            if (*(int *)&(pTVar8->Elements).field_0x8 == *(int *)&(pTVar8->Elements).field_0x34)
            goto LAB_14d7dc3c8;
            FVar11 = (pTVar8->Hash).SecondaryData;
            if (FVar11 == (ForElementType<FSetElementId>)0x0) {
              FVar11 = (ForElementType<FSetElementId>)&pTVar8->Hash;
            }
            iVar4 = *(int *)((longlong)FVar11 +
                            (ulonglong)(pTVar8->HashSize - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
            if (iVar4 == -1) goto LAB_14d7dc3c8;
            goto LAB_14d7dc3b4;
          }
          iVar4 = *(int *)(*(longlong *)&this->MediaSourcePlayers + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
  }
  return false;
  while (iVar4 = *(int *)(*(longlong *)&pTVar8->Elements + 8 + (longlong)iVar4 * 0x10), iVar4 != -1)
  {
LAB_14d7dc3b4:
    if (*(void **)(*(longlong *)&pTVar8->Elements + (longlong)iVar4 * 0x10) == param_2) {
      bVar2 = true;
      goto LAB_14d7dc3ca;
    }
  }
LAB_14d7dc3c8:
  bVar2 = false;
LAB_14d7dc3ca:
  if ((!bVar3) && (bVar2)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// IsValidSourceMediaTexture @ 14d7dc400

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
UMediaProfilePlaybackManager::IsValidSourceMediaTexture
          (UMediaProfilePlaybackManager *this,UMediaTexture *param_1,int *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  UMediaTexture *local_res18 [2];
  undefined1 local_48 [8];
  FSoftObjectPath local_40;
  
  *param_2 = -1;
  pUVar3 = UMediaProfile::StaticClass();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if (pUVar4 != (UObject *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_40.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.SubPathString.Data.ArrayNum = 0;
    local_40.SubPathString.Data.ArrayMax = 0;
    local_48 = (undefined1  [8])0x0;
    local_40.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_40.AssetPath.AssetName.Number = 0;
    local_40.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_40.AssetPath.PackageName.Number = 0;
    FUtf8String::Reset(&local_40.SubPathString,0);
    local_res18[0] = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)local_48,(FObjectPtr)local_res18);
    pFVar1 = (this->MediaSourceTextures).AllocatorInstance.Data;
    iVar5 = (this->MediaSourceTextures).ArrayNum;
    for (pFVar6 = pFVar1; pFVar6 != pFVar1 + (longlong)iVar5 * 0x28; pFVar6 = pFVar6 + 0x28) {
      bVar2 = FSoftObjectPath::operator==((FSoftObjectPath *)(pFVar6 + 8),&local_40);
      if (bVar2) {
        iVar5 = (int)(((longlong)pFVar6 - (longlong)pFVar1) / 0x28);
        goto LAB_14d7dc4f0;
      }
    }
    iVar5 = -1;
LAB_14d7dc4f0:
    if (local_40.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.SubPathString.Data.AllocatorInstance.Data);
    }
    if ((iVar5 != -1) && (iVar5 < *(int *)&pUVar4[1].field_0x8)) {
      *param_2 = iVar5;
      return true;
    }
  }
  return false;
}

// OnCaptureStateChanged @ 14d7dcce0

void __thiscall
UMediaProfilePlaybackManager::OnCaptureStateChanged
          (UMediaProfilePlaybackManager *this,UMediaCapture *param_1)

{
  char cVar1;
  uint uVar2;
  TObjectPtr<UMediaCapture>_u_0 local_res10;
  UMediaCapture *local_res18 [2];
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x2b0))(param_1);
  if (cVar1 == '\0') {
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TSet<TObjectPtr<UMediaCapture>,DefaultKeyFuncs<TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
    ::Emplace<TObjectPtr<UMediaCapture>_>
              (&this->CapturesWithError,(TObjectPtr<UMediaCapture> *)&local_res10.ObjectPtr,
               (bool *)local_res18);
    return;
  }
  cVar1 = (**(code **)(param_1->_padding_ + 0x2b0))(param_1);
  if (cVar1 == '\x02') {
    local_res10.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (*(int *)&(this->CapturesWithError).Elements.field_0x8 !=
        *(int *)&(this->CapturesWithError).Elements.field_0x34) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      TSet<TObjectPtr<UMediaCapture>,DefaultKeyFuncs<TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<UMediaCapture_const_>_>
                (&this->CapturesWithError,uVar2 >> 0x10 ^ uVar2,
                 (TObjectPtr<UMediaCapture_const_> *)&local_res10.ObjectPtr);
    }
  }
  return;
}

// OpenActiveViewportOutput @ 14d7dd770

UMediaCapture * __thiscall
UMediaProfilePlaybackManager::OpenActiveViewportOutput
          (UMediaProfilePlaybackManager *this,UMediaOutput *param_1,FMediaCaptureOptions *param_2,
          bool param_3)

{
  longlong *plVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  UMediaCapture *pUVar4;
  int iVar5;
  longlong *plVar6;
  
  pUVar2 = UMediaProfile::StaticClass();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  pUVar4 = (UMediaCapture *)0x0;
  if (pUVar3 != (UObject *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaOutput *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    plVar1 = *(longlong **)&pUVar3[1].field_0x10;
    for (plVar6 = plVar1; plVar6 != plVar1 + *(int *)&pUVar3[1].field_0x18; plVar6 = plVar6 + 1) {
      if ((UMediaOutput *)*plVar6 == param_1) {
        iVar5 = (int)((longlong)plVar6 - (longlong)plVar1 >> 3);
        goto LAB_14d7dd7f3;
      }
    }
    iVar5 = -1;
LAB_14d7dd7f3:
    pUVar4 = OpenActiveViewportOutputFromIndex(this,iVar5,param_2,param_3);
  }
  return pUVar4;
}

// OpenActiveViewportOutputFromIndex @ 14d7dd830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

UMediaCapture * __thiscall
UMediaProfilePlaybackManager::OpenActiveViewportOutputFromIndex
          (UMediaProfilePlaybackManager *this,int param_1,FMediaCaptureOptions *param_2,bool param_3
          )

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UMediaProfile *this_00;
  UMediaOutput *pUVar10;
  UMediaCapture *pUVar11;
  TSharedRef<MediaProfilePlaybackManager::FActiveViewport,1> *pTVar12;
  FActiveViewport *pFVar13;
  FMediaCaptureOptions *pFVar14;
  UMediaCapture *pUVar15;
  FScriptContainerElement *pFVar16;
  TArray<TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1>,TSizedDefaultAllocator<32>_>
  *pTVar17;
  FScriptContainerElement *pFVar18;
  FActiveViewport *local_128;
  TReferenceControllerBase<1> *local_120;
  TSharedPtr<FSceneViewport,1> local_118;
  UMediaOutput *local_108;
  TSharedRef<MediaProfilePlaybackManager::FActiveViewport,1> local_100;
  FMediaCaptureOptions local_f0;
  
  pUVar9 = UMediaProfile::StaticClass();
  this_00 = (UMediaProfile *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar9);
  if ((((this_00 == (UMediaProfile *)0x0) ||
       (pUVar10 = UMediaProfile::GetMediaOutput(this_00,param_1), pUVar10 == (UMediaOutput *)0x0))
      || (((uint)pUVar10->_padding_ >> 0x1e & 1) != 0)) ||
     ((local_108 = pUVar10, pUVar11 = FindOrCreateMediaCaptureForIndex(this,param_1),
      pUVar11 == (UMediaCapture *)0x0 || (((uint)pUVar11->_padding_ >> 0x1e & 1) != 0)))) {
    return (UMediaCapture *)0x0;
  }
  bVar4 = (**(code **)(pUVar11->_padding_ + 0x2b0))(pUVar11);
  if (((byte)(bVar4 - 1) < 2) || (4 < bVar4)) {
    return pUVar11;
  }
  pTVar17 = &this->ActiveOutputViewports;
  pFVar18 = (pTVar17->AllocatorInstance).Data;
  iVar2 = (this->ActiveOutputViewports).ArrayNum;
  for (pFVar16 = pFVar18; pFVar16 != pFVar18 + (longlong)iVar2 * 0x10; pFVar16 = pFVar16 + 0x10) {
    if ((*(longlong *)pFVar16 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pUVar11 = (UMediaCapture *)(*pcVar3)();
      return pUVar11;
    }
    bVar5 = TWeakObjectPtr<UMediaOutput,FWeakObjectPtr>::UEOpEquals<UMediaOutput,bool>
                      (*(TWeakObjectPtr<UMediaOutput,FWeakObjectPtr> **)pFVar16,pUVar10);
    if (bVar5) {
      uVar6 = (uint)((longlong)pFVar16 - (longlong)pFVar18 >> 4);
      if (uVar6 != 0xffffffff) goto LAB_14d7dda52;
      break;
    }
  }
  pTVar12 = MakeShared<MediaProfilePlaybackManager::FActiveViewport,1,UMediaOutput_*_&,FMediaCaptureOptions_const_&>
                      (&local_100,&local_108,param_2);
  local_128 = pTVar12->Object;
  local_120 = (pTVar12->SharedReferenceCount).ReferenceController;
  if (local_120 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_120->SharedReferenceCount = (atomic<int>)((int)local_120->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar18 = (pTVar17->AllocatorInstance).Data;
  if (((pFVar18 <= (FScriptContainerElement *)&local_128) &&
      ((FScriptContainerElement *)&local_128 <
       pFVar18 + (longlong)(this->ActiveOutputViewports).ArrayMax * 0x10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pUVar11 = (UMediaCapture *)(*pcVar3)();
    return pUVar11;
  }
  uVar6 = (this->ActiveOutputViewports).ArrayNum;
  piVar1 = &(this->ActiveOutputViewports).ArrayMax;
  if (uVar6 == *piVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar17->AllocatorInstance,piVar1);
  }
  (this->ActiveOutputViewports).ArrayNum = uVar6 + 1;
  pFVar18 = (pTVar17->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10;
  *(FActiveViewport **)pFVar18 = local_128;
  *(TReferenceControllerBase<1> **)(pFVar18 + 8) = local_120;
  local_120 = (TReferenceControllerBase<1> *)0x0;
  local_128 = (FActiveViewport *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.SharedReferenceCount.ReferenceController);
LAB_14d7dda52:
  uVar7 = 0;
  if ((int)uVar6 < (this->ActiveOutputViewports).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pUVar11 = (UMediaCapture *)(*pcVar3)();
    return pUVar11;
  }
  pFVar13 = TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1>::operator->
                      ((TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1> *)
                       ((pTVar17->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10));
  local_118.SharedReferenceCount.ReferenceController =
       (pFVar13->Viewport).WeakReferenceCount.ReferenceController;
  pUVar15 = (UMediaCapture *)local_118.SharedReferenceCount.ReferenceController;
  if ((UMediaCapture *)local_118.SharedReferenceCount.ReferenceController != (UMediaCapture *)0x0) {
    iVar2 = (int)((UMediaCapture *)local_118.SharedReferenceCount.ReferenceController)->_padding_;
    do {
      pUVar15 = (UMediaCapture *)0x0;
      if (iVar2 == 0) goto LAB_14d7ddae1;
      LOCK();
      iVar8 = (int)((UMediaCapture *)local_118.SharedReferenceCount.ReferenceController)->_padding_;
      bVar5 = iVar2 == iVar8;
      if (bVar5) {
        *(int *)&((UMediaCapture *)local_118.SharedReferenceCount.ReferenceController)->_padding_ =
             iVar2 + 1;
        iVar8 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar8;
    } while (!bVar5);
    local_118.Object = (pFVar13->Viewport).Object;
    pUVar15 = (UMediaCapture *)local_118.SharedReferenceCount.ReferenceController;
    if (local_118.Object != (FSceneViewport *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      goto LAB_14d7ddaf2;
    }
  }
LAB_14d7ddae1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar15);
  local_118.Object = (FSceneViewport *)0x0;
  local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14d7ddaf2:
  pFVar14 = FMediaCaptureOptions::FMediaCaptureOptions(&local_f0,param_2);
  bVar5 = UMediaCapture::CaptureSceneViewport(pUVar11,&local_118,pFVar14);
  pUVar15 = (UMediaCapture *)0x0;
  if (bVar5) {
    pUVar15 = pUVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  return pUVar15;
}

// OpenManagedViewportOutput @ 14d7ddb90

UMediaCapture * __thiscall
UMediaProfilePlaybackManager::OpenManagedViewportOutput
          (UMediaProfilePlaybackManager *this,UMediaOutput *param_1,FMediaCaptureOptions *param_2,
          bool param_3)

{
  longlong *plVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  UMediaCapture *pUVar4;
  int iVar5;
  longlong *plVar6;
  
  pUVar2 = UMediaProfile::StaticClass();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  pUVar4 = (UMediaCapture *)0x0;
  if (pUVar3 != (UObject *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaOutput *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    plVar1 = *(longlong **)&pUVar3[1].field_0x10;
    for (plVar6 = plVar1; plVar6 != plVar1 + *(int *)&pUVar3[1].field_0x18; plVar6 = plVar6 + 1) {
      if ((UMediaOutput *)*plVar6 == param_1) {
        iVar5 = (int)((longlong)plVar6 - (longlong)plVar1 >> 3);
        goto LAB_14d7ddc13;
      }
    }
    iVar5 = -1;
LAB_14d7ddc13:
    pUVar4 = OpenManagedViewportOutputFromIndex(this,iVar5,param_2,param_3);
  }
  return pUVar4;
}

// OpenManagedViewportOutputFromIndex @ 14d7ddc50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

UMediaCapture * __thiscall
UMediaProfilePlaybackManager::OpenManagedViewportOutputFromIndex
          (UMediaProfilePlaybackManager *this,int param_1,FMediaCaptureOptions *param_2,bool param_3
          )

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  UMediaProfile *this_00;
  UMediaOutput *pUVar7;
  UMediaCapture *pUVar8;
  FMediaCaptureOptions *pFVar9;
  FManagedViewport *pFVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FMediaCaptureOptions local_d8;
  
  pUVar6 = UMediaProfile::StaticClass();
  this_00 = (UMediaProfile *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  if (((this_00 != (UMediaProfile *)0x0) &&
      (pUVar7 = UMediaProfile::GetMediaOutput(this_00,param_1), pUVar7 != (UMediaOutput *)0x0)) &&
     (((uint)pUVar7->_padding_ >> 0x1e & 1) == 0)) {
    pFVar2 = (this->ManagedOutputViewports).AllocatorInstance.Data;
    iVar1 = (this->ManagedOutputViewports).ArrayNum;
    for (pFVar13 = pFVar2; pFVar13 != pFVar2 + (longlong)iVar1 * 0x10; pFVar13 = pFVar13 + 0x10) {
      if ((*(longlong *)pFVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UMediaCapture *)(*pcVar3)();
        return pUVar8;
      }
      bVar4 = TWeakObjectPtr<UMediaOutput,FWeakObjectPtr>::UEOpEquals<UMediaOutput,bool>
                        (*(TWeakObjectPtr<UMediaOutput,FWeakObjectPtr> **)pFVar13,pUVar7);
      if (bVar4) {
        uVar12 = (uint)((longlong)pFVar13 - (longlong)pFVar2 >> 4);
        if (uVar12 != 0xffffffff) {
          pUVar8 = FindOrCreateMediaCaptureForIndex(this,param_1);
          if (pUVar8 == (UMediaCapture *)0x0) {
            return (UMediaCapture *)0x0;
          }
          if (((uint)pUVar8->_padding_ >> 0x1e & 1) != 0) {
            return (UMediaCapture *)0x0;
          }
          cVar5 = (**(code **)(pUVar8->_padding_ + 0x2b0))(pUVar8);
          if ((byte)(cVar5 - 1U) < 2) {
            return pUVar8;
          }
          pFVar9 = FMediaCaptureOptions::FMediaCaptureOptions(&local_d8,param_2);
          uVar11 = 0;
          if ((int)uVar12 < (this->ManagedOutputViewports).ArrayNum) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pUVar8 = (UMediaCapture *)(*pcVar3)();
            return pUVar8;
          }
          pFVar10 = TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1>::operator->
                              ((TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *)
                               ((this->ManagedOutputViewports).AllocatorInstance.Data +
                               (longlong)(int)uVar12 * 0x10));
          bVar4 = UMediaCapture::CaptureSceneViewport(pUVar8,&pFVar10->Viewport,pFVar9);
          if (!bVar4) {
            return (UMediaCapture *)0x0;
          }
          return pUVar8;
        }
        break;
      }
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaFrameworkUtilities\\Source\\MediaFrameworkUtilities\\Private\\Profile\\MediaProfilePlaybackManager.cpp"
                       ,0x2f0,
                       L"A managed viewport must have been registered prior to attempting the capture"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar8 = (UMediaCapture *)(*pcVar3)();
      return pUVar8;
    }
  }
  return (UMediaCapture *)0x0;
}

// OpenRenderTargetOutput @ 14d7de470

UMediaCapture * __thiscall
UMediaProfilePlaybackManager::OpenRenderTargetOutput
          (UMediaProfilePlaybackManager *this,UMediaOutput *param_1,UTextureRenderTarget2D *param_2,
          FMediaCaptureOptions *param_3,bool param_4)

{
  longlong *plVar1;
  byte bVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UMediaProfile *this_00;
  UMediaOutput *pUVar6;
  UMediaCapture *this_01;
  FMediaCaptureOptions *pFVar7;
  UMediaCapture *pUVar8;
  int iVar9;
  longlong *plVar10;
  FMediaCaptureOptions local_d8;
  
  pUVar4 = UMediaProfile::StaticClass();
  pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  pUVar8 = (UMediaCapture *)0x0;
  if (pUVar5 != (UObject *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaOutput *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    plVar1 = *(longlong **)&pUVar5[1].field_0x10;
    for (plVar10 = plVar1; plVar10 != plVar1 + *(int *)&pUVar5[1].field_0x18; plVar10 = plVar10 + 1)
    {
      if ((UMediaOutput *)*plVar10 == param_1) {
        iVar9 = (int)((longlong)plVar10 - (longlong)plVar1 >> 3);
        goto LAB_14d7de4f7;
      }
    }
    iVar9 = -1;
LAB_14d7de4f7:
    pUVar4 = UMediaProfile::StaticClass();
    this_00 = (UMediaProfile *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
    if ((((this_00 == (UMediaProfile *)0x0) ||
         (pUVar6 = UMediaProfile::GetMediaOutput(this_00,iVar9), pUVar6 == (UMediaOutput *)0x0)) ||
        (((uint)pUVar6->_padding_ >> 0x1e & 1) != 0)) ||
       ((this_01 = FindOrCreateMediaCaptureForIndex(this,iVar9), this_01 == (UMediaCapture *)0x0 ||
        (((uint)this_01->_padding_ >> 0x1e & 1) != 0)))) {
      pUVar8 = (UMediaCapture *)0x0;
    }
    else {
      bVar2 = (**(code **)(this_01->_padding_ + 0x2b0))(this_01);
      pUVar8 = this_01;
      if ((1 < (byte)(bVar2 - 1)) && (bVar2 < 5)) {
        pFVar7 = FMediaCaptureOptions::FMediaCaptureOptions(&local_d8,param_3);
        bVar3 = UMediaCapture::CaptureTextureRenderTarget2D(this_01,param_2,pFVar7);
        pUVar8 = (UMediaCapture *)0x0;
        if (bVar3) {
          pUVar8 = this_01;
        }
      }
    }
  }
  return pUVar8;
}

// OpenRenderTargetOutputFromIndex @ 14d7de5c0

UMediaCapture * __thiscall
UMediaProfilePlaybackManager::OpenRenderTargetOutputFromIndex
          (UMediaProfilePlaybackManager *this,int param_1,UTextureRenderTarget2D *param_2,
          FMediaCaptureOptions *param_3,bool param_4)

{
  char cVar1;
  bool bVar2;
  UClass *pUVar3;
  UMediaProfile *this_00;
  UMediaOutput *pUVar4;
  UMediaCapture *this_01;
  FMediaCaptureOptions *pFVar5;
  UMediaCapture *pUVar6;
  FMediaCaptureOptions local_c8;
  
  pUVar3 = UMediaProfile::StaticClass();
  this_00 = (UMediaProfile *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if ((((this_00 == (UMediaProfile *)0x0) ||
       (pUVar4 = UMediaProfile::GetMediaOutput(this_00,param_1), pUVar4 == (UMediaOutput *)0x0)) ||
      (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0)) ||
     ((this_01 = FindOrCreateMediaCaptureForIndex(this,param_1), this_01 == (UMediaCapture *)0x0 ||
      (((uint)this_01->_padding_ >> 0x1e & 1) != 0)))) {
    pUVar6 = (UMediaCapture *)0x0;
  }
  else {
    cVar1 = (**(code **)(this_01->_padding_ + 0x2b0))(this_01);
    if (((byte)(cVar1 - 3U) < 2) || (pUVar6 = this_01, cVar1 == '\0')) {
      pFVar5 = FMediaCaptureOptions::FMediaCaptureOptions(&local_c8,param_3);
      bVar2 = UMediaCapture::CaptureTextureRenderTarget2D(this_01,param_2,pFVar5);
      pUVar6 = (UMediaCapture *)0x0;
      if (bVar2) {
        pUVar6 = this_01;
      }
    }
  }
  return pUVar6;
}

// OpenSource @ 14d7de6a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaTexture * __thiscall
UMediaProfilePlaybackManager::OpenSource
          (UMediaProfilePlaybackManager *this,UMediaSource *param_1,void *param_2)

{
  longlong *plVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  UMediaTexture *pUVar4;
  int iVar5;
  longlong *plVar6;
  
  pUVar2 = UMediaProfile::StaticClass();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  pUVar4 = (UMediaTexture *)0x0;
  if (pUVar3 != (UObject *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    plVar1 = *(longlong **)(pUVar3 + 1);
    for (plVar6 = plVar1; plVar6 != plVar1 + *(int *)&pUVar3[1].field_0x8; plVar6 = plVar6 + 1) {
      if ((UMediaSource *)*plVar6 == param_1) {
        iVar5 = (int)((longlong)plVar6 - (longlong)plVar1 >> 3);
        goto LAB_14d7de713;
      }
    }
    iVar5 = -1;
LAB_14d7de713:
    pUVar4 = OpenSourceFromIndex(this,iVar5,param_2);
  }
  return pUVar4;
}

// OpenSourceFromIndex @ 14d7de750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMediaTexture * __thiscall
UMediaProfilePlaybackManager::OpenSourceFromIndex
          (UMediaProfilePlaybackManager *this,int param_1,void *param_2)

{
  UMediaSource *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UMediaTexture *pUVar8;
  TObjectPtr<UMediaPlayer> *pTVar9;
  undefined8 *puVar10;
  FString *pFVar11;
  undefined1 *puVar12;
  UMediaTexture *this_00;
  longlong *plVar13;
  UMediaTexture *pUVar14;
  undefined1 auStackY_208 [32];
  uint local_1d8 [2];
  TPairInitializer<int_const_&,TObjectPtr<UMediaPlayer>_&&> local_1d0;
  uint *local_1c0;
  TObjectPtr<UMediaPlayer> **local_1b8;
  void *local_1b0 [3];
  undefined1 local_198 [128];
  undefined1 local_118 [120];
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((-1 < param_1) && (param_1 < (this->MediaSourceTextures).ArrayNum)) {
    pUVar6 = UMediaProfile::StaticClass();
    pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
    if ((pUVar7 != (UObject *)0x0) &&
       (((param_1 < *(int *)&pUVar7[1].field_0x8 &&
         (pUVar8 = GetSourceMediaTextureFromIndex(this,param_1), pUVar8 != (UMediaTexture *)0x0)) &&
        (param_1 < *(int *)&pUVar7[1].field_0x8)))) {
      pUVar14 = (UMediaTexture *)0x0;
      uVar4 = 0;
      if (param_1 < *(int *)&pUVar7[1].field_0x8) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar8 = (UMediaTexture *)(*pcVar2)();
        return pUVar8;
      }
      pUVar1 = *(UMediaSource **)(*(longlong *)(pUVar7 + 1) + (longlong)param_1 * 8);
      if (pUVar1 != (UMediaSource *)0x0) {
        local_1d8[0] = param_1;
        pUVar6 = UMediaProfile::StaticClass();
        pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
        this_00 = pUVar14;
        if (((pUVar7 != (UObject *)0x0) && (-1 < (int)local_1d8[0])) &&
           ((int)local_1d8[0] < *(int *)&pUVar7[1].field_0x8)) {
          if (*(int *)&(this->MediaSourcePlayers).field_0x8 !=
              *(int *)&(this->MediaSourcePlayers).field_0x34) {
            puVar12 = *(undefined1 **)&(this->MediaSourcePlayers).field_0x40;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = &(this->MediaSourcePlayers).field_0x38;
            }
            iVar5 = *(int *)(puVar12 +
                            (ulonglong)
                            (*(int *)&(this->MediaSourcePlayers).field_0x48 - 1U & local_1d8[0]) * 4
                            );
            if (iVar5 != -1) {
              do {
                if (*(uint *)(*(longlong *)&this->MediaSourcePlayers + (longlong)iVar5 * 0x18) ==
                    local_1d8[0]) {
                  if (iVar5 != -1) goto LAB_14d7de963;
                  break;
                }
                iVar5 = *(int *)(*(longlong *)&this->MediaSourcePlayers + 0x10 +
                                (longlong)iVar5 * 0x18);
              } while (iVar5 != -1);
            }
          }
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)this,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar6 = Z_Construct_UClass_UMediaPlayer_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_198,pUVar6);
          local_198._8_8_ = this;
          local_1d0.Value =
               (TObjectPtr<UMediaPlayer> *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_198);
          if (local_198._64_8_ != 0) {
            plVar13 = (longlong *)(local_198 + 0x50);
            if ((longlong *)local_198._104_8_ != (longlong *)0x0) {
              plVar13 = (longlong *)local_198._104_8_;
            }
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UObject *)local_1d0.Value != (UObject *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_1d0.Value);
          }
          local_1c0 = local_1d8;
          local_1b8 = &local_1d0.Value;
          TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,TObjectPtr<UMediaPlayer>_&&>_>
                    ((TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
                      *)&this->MediaSourcePlayers,&local_1d0,(bool *)&local_1c0);
LAB_14d7de963:
          pTVar9 = TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
                   ::FindChecked((TMapBase<int,TObjectPtr<UMediaPlayer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>_>
                                  *)&this->MediaSourcePlayers,local_1d8[0]);
          this_00 = (UMediaTexture *)(pTVar9->field0_0x0).DebugPtr;
        }
        UMediaTexture::SetMediaPlayer(pUVar8,(UMediaPlayer *)this_00);
        bVar3 = UMediaPlayer::IsClosed((UMediaPlayer *)this_00);
        if (!bVar3) {
          puVar10 = (undefined8 *)(**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,local_1b0);
          pFVar11 = UMediaPlayer::GetUrl((UMediaPlayer *)this_00);
          iVar5 = (pFVar11->Data).ArrayNum;
          if (iVar5 == *(int *)(puVar10 + 1)) {
            if (iVar5 < 2) {
              bVar3 = true;
            }
            else {
              iVar5 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(pFVar11->Data).AllocatorInstance.Data,
                                 (wchar_t *)*puVar10);
              bVar3 = iVar5 == 0;
            }
          }
          else {
            bVar3 = *(int *)(puVar10 + 1) + iVar5 == 1;
          }
          if (local_1b0[0] != (void *)0x0) {
            FMemory::Free(local_1b0[0]);
          }
          if (bVar3) {
            RegisterMediaSourceConsumer(this,(UMediaPlayer *)this_00,param_2);
            return pUVar8;
          }
        }
        local_118._0_4_ = ___xmm_ffffffffffffffffffffffff00000000;
        local_118._4_4_ = _UNK_15076cba4;
        local_118._8_4_ = _UNK_15076cba8;
        local_118._12_4_ = _UNK_15076cbac;
        local_78 = ___xmm_00000000ffffffff0000008000000000;
        uStack_70 = _UNK_150631d98;
        local_118._16_4_ = -1;
        local_118._20_4_ = -1;
        local_118._24_4_ = 0;
        local_118._32_8_ = (FScriptContainerElement *)0x0;
        local_118._40_4_ = 0;
        local_118._44_4_ = 0;
        local_118._48_8_ = (FScriptContainerElement *)0x0;
        local_118._56_4_ = 0;
        local_118._60_4_ = 0;
        local_118._64_8_ = (FScriptContainerElement *)0x0;
        local_118._72_4_ = 0;
        local_118._76_4_ = 0;
        local_118._80_8_ = (FScriptContainerElement *)0x0;
        local_118._88_4_ = 0;
        local_118._92_4_ = 0;
        local_118[0x60] = UseTrackOptionIndices;
        local_118._104_8_ = 0;
        local_118[0x70] = RelativeToStartTime;
        local_118[0x71] = Enabled;
        local_a0._0_8_ = (FScriptContainerElement *)0x0;
        local_a0._8_8_ = 0;
        local_80 = (void *)0x0;
        local_60 = (void *)0x0;
        local_58 = 0;
        local_118[0x72] = Enabled;
        bVar3 = UMediaPlayer::OpenSourceWithOptions
                          ((UMediaPlayer *)this_00,pUVar1,(FMediaPlayerOptions *)local_118);
        if (bVar3) {
          RegisterMediaSourceConsumer(this,(UMediaPlayer *)this_00,param_2);
          pUVar14 = pUVar8;
        }
        local_58 = 0;
        if (local_60 != (void *)0x0) {
          FMemory::Free(local_60);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_a0,0,local_a0._8_4_);
        iVar5 = SUB84(local_a0._8_8_,4);
        local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
        if (iVar5 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
        }
        uVar4 = local_78._4_4_;
        uStack_70 = 0xffffffff;
        local_78 = (ulonglong)local_78._4_4_ << 0x20;
        if (0x80 < uVar4) {
          local_78 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
        }
        if (local_80 != (void *)0x0) {
          FMemory::Free(local_80);
        }
        if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_a0._0_8_);
        }
        if ((FScriptContainerElement *)local_118._80_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_118._80_8_);
        }
        if ((FScriptContainerElement *)local_118._64_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_118._64_8_);
        }
        if ((FScriptContainerElement *)local_118._48_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_118._48_8_);
        }
        if ((FScriptContainerElement *)local_118._32_8_ == (FScriptContainerElement *)0x0) {
          return pUVar14;
        }
        FMemory::Free((void *)local_118._32_8_);
        return pUVar14;
      }
    }
  }
  return (UMediaTexture *)0x0;
}

// PostStopCapture @ 14d7deef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMediaProfilePlaybackManager::PostStopCapture
          (UMediaProfilePlaybackManager *this,int param_1,FCloseOutputArgs *param_2)

{
  TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  UClass *pUVar6;
  UMediaProfile *this_00;
  UMediaOutput *pUVar7;
  TObjectPtr<UMediaCapture> *pTVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  int local_res20 [2];
  UMediaOutput *local_88;
  UMediaOutput *local_80;
  FScriptContainerElement *local_78;
  UMediaCapture *local_70;
  FReadAccessScope local_68;
  
  pUVar6 = UMediaProfile::GetPrivateStaticClass();
  this_00 = (UMediaProfile *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  if ((((this_00 != (UMediaProfile *)0x0) &&
       (pUVar7 = UMediaProfile::GetMediaOutput(this_00,param_1), local_80 = pUVar7,
       pUVar7 != (UMediaOutput *)0x0)) && (((uint)pUVar7->_padding_ >> 0x1e & 1) == 0)) &&
     (*(int *)&(this->MediaOutputCaptures).field_0x8 !=
      *(int *)&(this->MediaOutputCaptures).field_0x34)) {
    puVar9 = *(undefined1 **)&(this->MediaOutputCaptures).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->MediaOutputCaptures).field_0x38;
    }
    iVar15 = *(int *)(puVar9 + (ulonglong)
                               (*(int *)&(this->MediaOutputCaptures).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar15 != -1) {
      lVar12 = *(longlong *)&this->MediaOutputCaptures;
      do {
        if (*(int *)(lVar12 + (longlong)iVar15 * 0x18) == param_1) {
          pTVar8 = TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                   ::FindChecked((TMapBase<int,TObjectPtr<UMediaCapture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>_>
                                  *)&this->MediaOutputCaptures,param_1);
          local_70 = (pTVar8->field0_0x0).DebugPtr;
          if (param_2->bDestroyCaptureObjects != false) {
            iVar15 = (this->ManagedOutputViewports).ArrayNum;
            uVar16 = 0;
            local_88 = pUVar7;
            if (iVar15 != 0) {
              pTVar1 = (TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *)
                       (this->ManagedOutputViewports).AllocatorInstance.Data;
              bVar4 = `UMediaProfilePlaybackManager::PostStopCapture'::__l14::<lambda_1>::operator()
                                (&local_88,pTVar1);
              bVar4 = !bVar4;
              uVar17 = uVar16;
              uVar19 = uVar16;
              do {
                uVar10 = (uint)uVar17;
                uVar11 = uVar10;
                do {
                  uVar11 = uVar11 + 1;
                  uVar17 = (ulonglong)uVar11;
                  if (iVar15 <= (int)uVar11) break;
                  bVar5 = `UMediaProfilePlaybackManager::PostStopCapture'::__l14::<lambda_1>::
                          operator()(&local_88,pTVar1 + (int)uVar11);
                } while (bVar4 == !bVar5);
                iVar14 = uVar11 - uVar10;
                if (bVar4 == false) {
                  DestructItems<TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1>,int>
                            (pTVar1 + (int)uVar10,iVar14);
                }
                else {
                  uVar18 = (uint)uVar19;
                  if (uVar18 != uVar10) {
                    memmove(pTVar1 + (int)uVar18,pTVar1 + (int)uVar10,(longlong)iVar14 << 4);
                  }
                  uVar19 = (ulonglong)(uVar18 + iVar14);
                }
                bVar4 = (bool)(bVar4 ^ 1);
              } while ((int)uVar11 < iVar15);
              (this->ManagedOutputViewports).ArrayNum = (int)uVar19;
              pUVar7 = local_80;
            }
            iVar15 = (this->ActiveOutputViewports).ArrayNum;
            lVar12 = (longlong)iVar15;
            if (iVar15 != 0) {
              pFVar20 = (this->ActiveOutputViewports).AllocatorInstance.Data;
              local_78 = pFVar20;
              if ((*(longlong *)pFVar20 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              bVar4 = TWeakObjectPtr<UMediaOutput,FWeakObjectPtr>::UEOpEquals<UMediaOutput,bool>
                                (*(TWeakObjectPtr<UMediaOutput,FWeakObjectPtr> **)pFVar20,pUVar7);
              bVar4 = !bVar4;
              uVar17 = uVar16;
              uVar19 = uVar16;
              do {
                pUVar7 = local_80;
                iVar15 = (int)uVar16;
                uVar17 = uVar17 + 1;
                uVar16 = (ulonglong)(iVar15 + 1);
                if ((longlong)uVar17 < lVar12) {
                  pFVar13 = pFVar20 + uVar17 * 0x10;
                  do {
                    if ((*(longlong *)pFVar13 == 0) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar5)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    bVar5 = TWeakObjectPtr<UMediaOutput,FWeakObjectPtr>::
                            UEOpEquals<UMediaOutput,bool>
                                      (*(TWeakObjectPtr<UMediaOutput,FWeakObjectPtr> **)pFVar13,
                                       pUVar7);
                    pFVar20 = local_78;
                    if (bVar4 != !bVar5) break;
                    uVar16 = (ulonglong)((int)uVar16 + 1);
                    uVar17 = uVar17 + 1;
                    pFVar13 = pFVar13 + 0x10;
                  } while ((longlong)uVar17 < lVar12);
                }
                iVar14 = (int)uVar16 - iVar15;
                if (bVar4 == false) {
                  DestructItems<TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1>,int>
                            ((TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1> *)
                             (pFVar20 + (longlong)iVar15 * 0x10),iVar14);
                }
                else {
                  iVar21 = (int)uVar19;
                  if (iVar21 != iVar15) {
                    memmove(pFVar20 + (longlong)iVar21 * 0x10,pFVar20 + (longlong)iVar15 * 0x10,
                            (longlong)iVar14 << 4);
                  }
                  uVar19 = (ulonglong)(uint)(iVar21 + iVar14);
                }
                bVar4 = (bool)(bVar4 ^ 1);
              } while ((longlong)uVar17 < lVar12);
              (this->ActiveOutputViewports).ArrayNum = (int)uVar19;
            }
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &local_70->OnStateChangedNative,this);
            local_res20[0] = param_1;
            if (*(int *)&(this->MediaOutputCaptures).field_0x8 !=
                *(int *)&(this->MediaOutputCaptures).field_0x34) {
              TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
              ::RemoveImpl<int>((TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
                                 *)&this->MediaOutputCaptures,param_1,local_res20);
            }
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Callback,
                     &local_68);
          if ((*(int *)&(param_2->Callback).field_0x10 != 0) &&
             (plVar2 = *(longlong **)&(param_2->Callback).field_0x8, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x68))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_68);
          break;
        }
        iVar15 = *(int *)(lVar12 + 0x10 + (longlong)iVar15 * 0x18);
      } while (iVar15 != -1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_2->Callback);
  return;
}

// QueueRestartCapture @ 14d7df290

void __thiscall
UMediaProfilePlaybackManager::QueueRestartCapture
          (UMediaProfilePlaybackManager *this,UMediaOutput *param_1,
          TFunction<void___cdecl(UMediaProfilePlaybackManager_*)> *param_2)

{
  int *piVar1;
  TArray<TFunction<void___cdecl(UMediaProfilePlaybackManager_*)>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TFunction<void___cdecl(UMediaProfilePlaybackManager_*)> *pTVar3;
  code *pcVar4;
  ForElementType<TAlignedBytes<16,16>_> FVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  ForAnyElementType FStack_d0;
  int local_c8;
  UMediaProfilePlaybackManager *local_c0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  pTVar2 = &this->RestartCaptureFuncs;
  pTVar3 = (TFunction<void___cdecl(UMediaProfilePlaybackManager_*)> *)
           (pTVar2->AllocatorInstance).Data;
  if (((pTVar3 <= param_2) && (param_2 < pTVar3 + (this->RestartCaptureFuncs).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->RestartCaptureFuncs).ArrayNum;
  piVar1 = &(this->RestartCaptureFuncs).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->RestartCaptureFuncs).ArrayNum = iVar7 + 1;
  pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
  *(longlong *)pFVar14 = *(longlong *)param_2;
  *(longlong *)(pFVar14 + 0x28) = 0;
  if (*(longlong *)pFVar14 != 0) {
    puVar8 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar8)();
  }
  local_c8 = 0;
  local_e0[0] = false;
  local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_d0.Data = (FScriptContainerElement *)0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f8,(FWriteAccessScope *)&local_58);
  local_40 = &local_f0;
  puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_f0);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaProfilePlaybackManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UMediaProfilePlaybackManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[3] = 0;
    local_c0 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UMediaProfilePlaybackManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_c0);
    puVar8[4] = DeferredRestart;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f8,(FWriteAccessScope *)&local_b8);
  iVar7 = local_f0.DelegateSize;
  FVar5 = local_f0.DelegateAllocator;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_a0);
  if (local_c8 != 0) {
    if (FStack_d0.Data == (FScriptContainerElement *)0x0) goto LAB_14d7df4bc;
    (*(code *)**(undefined8 **)FStack_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d0,0,0,0x10);
    local_c8 = 0;
  }
  if (FStack_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d0.Data);
  }
LAB_14d7df4bc:
  FStack_d0.Data = (FScriptContainerElement *)FVar5;
  local_c8 = iVar7;
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f8,(FWriteAccessScope *)&local_88);
  if ((local_f0.DelegateSize != 0) &&
     (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f0,0,0,0x10);
    local_f0.DelegateSize = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
  pUVar10 = UMediaProfile::StaticClass();
  pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar10);
  if (pUVar11 != (UObject *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaOutput *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    plVar12 = *(longlong **)&pUVar11[1].field_0x10;
    for (plVar13 = plVar12; plVar13 != plVar12 + *(int *)&pUVar11[1].field_0x18;
        plVar13 = plVar13 + 1) {
      if ((UMediaOutput *)*plVar13 == param_1) {
        iVar7 = (int)((longlong)plVar13 - (longlong)plVar12 >> 3);
        goto LAB_14d7df5a7;
      }
    }
    iVar7 = -1;
LAB_14d7df5a7:
    CloseOutputFromIndex(this,iVar7,(FCloseOutputArgs *)local_e0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_70);
  if ((local_c8 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_d0.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d0,0,0,0x10);
    local_c8 = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_d0.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  if (*(longlong *)param_2 != 0) {
    plVar12 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar12 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  return;
}

// RegisterMediaSourceConsumer @ 14d7df7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
UMediaProfilePlaybackManager::RegisterMediaSourceConsumer
          (UMediaProfilePlaybackManager *this,UMediaPlayer *param_1,void *param_2)

{
  TMap<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
  *this_00;
  int iVar1;
  TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> *pTVar2;
  uint uVar3;
  void *local_res18 [2];
  undefined1 auStack_c8 [32];
  TObjectPtr<UMediaPlayer_const_>_u_0 local_a8;
  undefined1 local_a0 [8];
  initializer_list<void_*> local_98;
  UMediaPlayer *local_88 [2];
  TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> local_78;
  ulonglong local_28;
  
  if (param_2 != (void *)0x0) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
    this_00 = &this->SourceConsumers;
    local_res18[0] = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_a8.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (param_1 != (UMediaPlayer *)0x0) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaPlayer *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
    }
    uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    iVar1 = TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TObjectPtr<UMediaPlayer_const_>_>
                      ((TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)this_00,uVar3 >> 0x10 ^ uVar3,
                       (TObjectPtr<UMediaPlayer_const_> *)&local_a8.ObjectPtr);
    if (iVar1 == -1) {
      local_98._First = (void **)&local_a8;
      local_98._Last = (void **)local_a0;
      local_a8 = (TObjectPtr<UMediaPlayer_const_>_u_0)param_2;
      pTVar2 = TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>::
               TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>
                         (&local_78,(initializer_list<void_*> *)(local_a0 + 8));
      local_88[0] = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaPlayer *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_98._First = local_88;
      local_98._Last = (void **)pTVar2;
      TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TObjectPtr<UMediaPlayer>_&&,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_&&>_>
                ((TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                  *)this_00,
                 (TPairInitializer<TObjectPtr<UMediaPlayer>_&&,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_&&>
                  *)local_a0,(bool *)(local_a0 + 8));
      local_78.HashSize = 0;
      if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_78.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_78.Elements);
    }
    else {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaPlayer *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_a8.DebugPtr = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaPlayer *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      pTVar2 = TMapBase<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
               ::FindChecked((TMapBase<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
                              *)this_00,(TObjectPtr<UMediaPlayer_const_>)&local_a8);
      TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>::Emplace<void_*_const_&>
                (pTVar2,(void **)local_a0,(bool *)local_res18);
    }
  }
  return;
}

// ReleaseManagedViewport @ 14d7e01a0

void __thiscall
UMediaProfilePlaybackManager::ReleaseManagedViewport
          (UMediaProfilePlaybackManager *this,UMediaOutput *param_1,void *param_2)

{
  longlong *plVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  int iVar4;
  longlong *plVar5;
  
  pUVar2 = UMediaProfile::StaticClass();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  if (pUVar3 != (UObject *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaOutput *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    plVar1 = *(longlong **)&pUVar3[1].field_0x10;
    for (plVar5 = plVar1; plVar5 != plVar1 + *(int *)&pUVar3[1].field_0x18; plVar5 = plVar5 + 1) {
      if ((UMediaOutput *)*plVar5 == param_1) {
        iVar4 = (int)((longlong)plVar5 - (longlong)plVar1 >> 3);
        goto LAB_14d7e0213;
      }
    }
    iVar4 = -1;
LAB_14d7e0213:
    ReleaseManagedViewportFromIndex(this,iVar4,param_2);
  }
  return;
}

// ReleaseManagedViewportFromIndex @ 14d7e0250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMediaProfilePlaybackManager::ReleaseManagedViewportFromIndex
          (UMediaProfilePlaybackManager *this,int param_1,void *param_2)

{
  int *piVar1;
  TArray<TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  UMediaProfile *this_00;
  UMediaOutput *pUVar7;
  FManagedViewport *pFVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  
  pUVar6 = UMediaProfile::StaticClass();
  this_00 = (UMediaProfile *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  if (((this_00 != (UMediaProfile *)0x0) &&
      (pUVar7 = UMediaProfile::GetMediaOutput(this_00,param_1), pUVar7 != (UMediaOutput *)0x0)) &&
     (((uint)pUVar7->_padding_ >> 0x1e & 1) == 0)) {
    pTVar2 = &this->ManagedOutputViewports;
    iVar9 = (this->ManagedOutputViewports).ArrayNum;
    pFVar12 = (pTVar2->AllocatorInstance).Data;
    for (pFVar11 = pFVar12; pFVar11 != pFVar12 + (longlong)iVar9 * 0x10; pFVar11 = pFVar11 + 0x10) {
      if ((*(longlong *)pFVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = TWeakObjectPtr<UMediaOutput,FWeakObjectPtr>::UEOpEquals<UMediaOutput,bool>
                        (*(TWeakObjectPtr<UMediaOutput,FWeakObjectPtr> **)pFVar11,pUVar7);
      if (bVar4) {
        uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar12 >> 4);
        if (uVar10 == 0xffffffff) {
          return;
        }
        uVar13 = ~uVar10 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar10 < (this->ManagedOutputViewports).ArrayNum) {
          uVar5 = uVar13;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar14 = (longlong)(int)uVar10 * 0x10;
        pFVar8 = TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1>::operator->
                           ((TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *)
                            ((pTVar2->AllocatorInstance).Data + lVar14));
        TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>::Remove
                  (&pFVar8->Consumers,param_2);
        uVar5 = 0;
        if ((int)uVar10 < (this->ManagedOutputViewports).ArrayNum) {
          uVar5 = uVar13;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar8 = TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1>::operator->
                           ((TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *)
                            ((pTVar2->AllocatorInstance).Data + lVar14));
        if (*(int *)&(pFVar8->Consumers).Elements.field_0x8 !=
            *(int *)&(pFVar8->Consumers).Elements.field_0x34) {
          return;
        }
        bVar4 = IsOutputCapturingFromIndex(this,param_1);
        if (bVar4) {
          return;
        }
        uVar5 = 0;
        if ((int)uVar10 < (this->ManagedOutputViewports).ArrayNum) {
          uVar5 = uVar13;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar12 = (pTVar2->AllocatorInstance).Data + lVar14;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(pFVar12 + 8));
        iVar9 = (this->ManagedOutputViewports).ArrayNum + ~uVar10;
        if (iVar9 != 0) {
          memmove(pFVar12,pFVar12 + 0x10,(longlong)iVar9 << 4);
        }
        piVar1 = &(this->ManagedOutputViewports).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar2->AllocatorInstance,(this->ManagedOutputViewports).ArrayNum,
                   &(this->ManagedOutputViewports).ArrayMax);
        return;
      }
    }
  }
  return;
}

// RestartActiveViewportOutput @ 14d7e0c70

void __thiscall
UMediaProfilePlaybackManager::RestartActiveViewportOutput
          (UMediaProfilePlaybackManager *this,UMediaOutput *param_1,FMediaCaptureOptions *param_2,
          bool param_3)

{
  undefined8 *puVar1;
  FWeakObjectPtr local_res10;
  UMediaOutput *local_res18 [2];
  code *local_118 [5];
  undefined8 *local_f0;
  FWeakObjectPtr local_e8;
  FMediaCaptureOptions local_e0;
  undefined1 local_20;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMediaOutput *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaOutput *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  local_e8 = local_res10;
  FMediaCaptureOptions::FMediaCaptureOptions(&local_e0,param_2);
  local_118[0] = (code *)0x0;
  local_20 = param_3;
  puVar1 = FMemory::Malloc(0xd8,8);
  *puVar1 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartActiveViewportOutput'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  *(FWeakObjectPtr *)(puVar1 + 1) = local_e8;
  local_f0 = puVar1;
  FMediaCaptureOptions::FMediaCaptureOptions((FMediaCaptureOptions *)(puVar1 + 2),&local_e0);
  *(undefined1 *)(puVar1 + 0x1a) = local_20;
  if ((FWeakObjectPtr *)(puVar1 + 1) != (FWeakObjectPtr *)0x0) {
    local_118[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UMediaProfilePlaybackManager::RestartActiveViewportOutput'::__l2::<lambda_1>,void,UMediaProfilePlaybackManager_*>
                   ::Call;
  }
  QueueRestartCapture(this,param_1,
                      (TFunction<void___cdecl(UMediaProfilePlaybackManager_*)> *)local_118);
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&local_e0.ColorConversionSettings);
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&param_2->ColorConversionSettings);
  return;
}

// RestartCaptures @ 14d7e0db0

void __thiscall UMediaProfilePlaybackManager::RestartCaptures(UMediaProfilePlaybackManager *this)

{
  int *piVar1;
  TArray<TFunction<void___cdecl(UMediaProfilePlaybackManager_*)>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  UMediaProfilePlaybackManager *local_res8;
  
  pTVar2 = &this->RestartCaptureFuncs;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  iVar3 = (this->RestartCaptureFuncs).ArrayNum;
  pFVar8 = pFVar7 + (longlong)iVar3 * 0x30;
  while( true ) {
    if ((this->RestartCaptureFuncs).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TFunction<void___cdecl(UMediaProfilePlaybackManager_*)>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar7 == pFVar8) break;
    local_res8 = this;
    UE::Core::Private::Function::CheckCallable(*(void **)pFVar7);
    pcVar4 = *(code **)pFVar7;
    pFVar6 = pFVar7 + 0x10;
    if (*(FScriptContainerElement **)(pFVar7 + 0x28) != (FScriptContainerElement *)0x0) {
      pFVar6 = *(FScriptContainerElement **)(pFVar7 + 0x28);
    }
    uVar5 = (**(code **)(*(longlong *)pFVar6 + 8))();
    (*pcVar4)(uVar5,&local_res8);
    pFVar7 = pFVar7 + 0x30;
  }
  DestructItems<TFunction<void___cdecl(UMediaProfilePlaybackManager_*)>,int>
            ((TFunction<void___cdecl(UMediaProfilePlaybackManager_*)> *)
             (pTVar2->AllocatorInstance).Data,(this->RestartCaptureFuncs).ArrayNum);
  piVar1 = &(this->RestartCaptureFuncs).ArrayMax;
  (this->RestartCaptureFuncs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  (this->RestartCapturesTimerHandle).Handle = 0;
  return;
}

// RestartManagedViewportOutput @ 14d7e0e90

void __thiscall
UMediaProfilePlaybackManager::RestartManagedViewportOutput
          (UMediaProfilePlaybackManager *this,UMediaOutput *param_1,FMediaCaptureOptions *param_2,
          bool param_3)

{
  undefined8 *puVar1;
  FWeakObjectPtr local_res10;
  UMediaOutput *local_res18 [2];
  code *local_118 [5];
  undefined8 *local_f0;
  FWeakObjectPtr local_e8;
  FMediaCaptureOptions local_e0;
  undefined1 local_20;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMediaOutput *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaOutput *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  local_e8 = local_res10;
  FMediaCaptureOptions::FMediaCaptureOptions(&local_e0,param_2);
  local_118[0] = (code *)0x0;
  local_20 = param_3;
  puVar1 = FMemory::Malloc(0xd8,8);
  *puVar1 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartManagedViewportOutput'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  *(FWeakObjectPtr *)(puVar1 + 1) = local_e8;
  local_f0 = puVar1;
  FMediaCaptureOptions::FMediaCaptureOptions((FMediaCaptureOptions *)(puVar1 + 2),&local_e0);
  *(undefined1 *)(puVar1 + 0x1a) = local_20;
  if ((FWeakObjectPtr *)(puVar1 + 1) != (FWeakObjectPtr *)0x0) {
    local_118[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UMediaProfilePlaybackManager::RestartManagedViewportOutput'::__l2::<lambda_1>,void,UMediaProfilePlaybackManager_*>
                   ::Call;
  }
  QueueRestartCapture(this,param_1,
                      (TFunction<void___cdecl(UMediaProfilePlaybackManager_*)> *)local_118);
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&local_e0.ColorConversionSettings);
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&param_2->ColorConversionSettings);
  return;
}

// RestartRenderTargetOutput @ 14d7e0fd0

void __thiscall
UMediaProfilePlaybackManager::RestartRenderTargetOutput
          (UMediaProfilePlaybackManager *this,UMediaOutput *param_1,UTextureRenderTarget2D *param_2,
          FMediaCaptureOptions *param_3,bool param_4)

{
  undefined8 *puVar1;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UTextureRenderTarget2D *local_res20;
  code *local_138 [5];
  undefined8 *local_110;
  FWeakObjectPtr local_108;
  FWeakObjectPtr local_100;
  FMediaCaptureOptions local_f8;
  bool local_38;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res20 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaOutput *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = (UTextureRenderTarget2D *)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaOutput *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  local_108 = local_res10;
  local_100 = local_res18;
  FMediaCaptureOptions::FMediaCaptureOptions(&local_f8,param_3);
  local_38 = param_4;
  local_138[0] = (code *)0x0;
  puVar1 = FMemory::Malloc(0xe0,8);
  *puVar1 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartRenderTargetOutput'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  *(FWeakObjectPtr *)(puVar1 + 1) = local_108;
  *(FWeakObjectPtr *)(puVar1 + 2) = local_100;
  local_110 = puVar1;
  FMediaCaptureOptions::FMediaCaptureOptions((FMediaCaptureOptions *)(puVar1 + 3),&local_f8);
  *(bool *)(puVar1 + 0x1b) = local_38;
  if ((FWeakObjectPtr *)(puVar1 + 1) != (FWeakObjectPtr *)0x0) {
    local_138[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UMediaProfilePlaybackManager::RestartRenderTargetOutput'::__l2::<lambda_1>,void,UMediaProfilePlaybackManager_*>
                   ::Call;
  }
  QueueRestartCapture(this,param_1,
                      (TFunction<void___cdecl(UMediaProfilePlaybackManager_*)> *)local_138);
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&local_f8.ColorConversionSettings);
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&param_3->ColorConversionSettings);
  return;
}

// StaticRegisterNativesUMediaProfilePlaybackManager @ 14d7e1f10

void __cdecl UMediaProfilePlaybackManager::StaticRegisterNativesUMediaProfilePlaybackManager(void)

{
  return;
}

// UnregisterMediaSourceConsumer @ 14d7e2020

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
UMediaProfilePlaybackManager::UnregisterMediaSourceConsumer
          (UMediaProfilePlaybackManager *this,UMediaPlayer *param_1,void *param_2)

{
  int iVar1;
  TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> *this_00;
  uint uVar2;
  TObjectPtr<UMediaPlayer_const_>_u_0 local_res18 [2];
  
  if (param_2 != (void *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res18[0].DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (param_1 != (UMediaPlayer *)0x0) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaPlayer *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
    }
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    iVar1 = TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TObjectPtr<UMediaPlayer_const_>_>
                      ((TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)&this->SourceConsumers,uVar2 >> 0x10 ^ uVar2,
                       (TObjectPtr<UMediaPlayer_const_> *)&local_res18[0].ObjectPtr);
    if (iVar1 != -1) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaPlayer *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res18[0].DebugPtr = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaPlayer *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      this_00 = TMapBase<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
                ::FindChecked((TMapBase<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>_>
                               *)&this->SourceConsumers,(TObjectPtr<UMediaPlayer_const_>)local_res18
                             );
      TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>::Remove(this_00,param_2);
    }
  }
  return;
}

