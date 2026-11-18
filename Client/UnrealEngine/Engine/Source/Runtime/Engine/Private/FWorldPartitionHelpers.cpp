// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ConvertEditorPathToRuntimePath @ 148ac2820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FWorldPartitionHelpers::ConvertEditorPathToRuntimePath
          (FSoftObjectPath *param_1,FSoftObjectPath *param_2)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  FUtf8String *pFVar2;
  UWorld *this;
  UClass *pUVar3;
  UWorldPartition *this_00;
  size_t _Size;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  TStringOverload<FUtf8String> local_98;
  FUtf8String local_88;
  FTopLevelAssetPath local_78;
  FUtf8String local_68;
  FSoftObjectPath local_58;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_20 = (param_1->SubPathString).Data.ArrayNum;
  _Size = (size_t)local_20;
  pFVar4 = (FScriptContainerElement *)0x0;
  _Src = (param_1->SubPathString).Data.AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_38 = (param_1->AssetPath).PackageName.ComparisonIndex.Value;
  uStack_34 = (param_1->AssetPath).PackageName.Number;
  uStack_30 = (param_1->AssetPath).AssetName.ComparisonIndex.Value;
  uStack_2c = (param_1->AssetPath).AssetName.Number;
  iVar5 = 0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,_Src,_Size);
  }
  local_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_58.AssetPath.PackageName.Number = 0;
  local_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_58.AssetPath.AssetName.Number = 0;
  local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.SubPathString.Data.ArrayNum = 0;
  local_58.SubPathString.Data.ArrayMax = 0;
  iVar6 = 0;
  local_78.PackageName.ComparisonIndex.Value = local_38;
  local_78.PackageName.Number = uStack_34;
  local_78.AssetName.ComparisonIndex.Value = uStack_30;
  local_78.AssetName.Number = uStack_2c;
  pFVar2 = FUtf8String::ConstructFromPtrSize(&local_88,(wchar_t *)0x0,0);
  if (&local_68 != pFVar2) {
    pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar5 = (pFVar2->Data).ArrayNum;
    iVar6 = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  local_98.String.Data.AllocatorInstance.Data = pFVar4;
  local_98.String.Data.ArrayNum = iVar5;
  local_98.String.Data.ArrayMax = iVar6;
  FSoftObjectPath::SetPath(&local_58,&local_78,&local_98);
  this = (UWorld *)FSoftObjectPath::ResolveObject(&local_58);
  if (this != (UWorld *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar5 = (int)pUVar3->_padding_;
    if ((iVar5 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
        &pUVar3->_padding_)) {
      this_00 = UWorld::GetWorldPartition(this);
      if (this_00 != (UWorldPartition *)0x0) {
        bVar1 = UWorldPartition::ConvertEditorPathToRuntimePath(this_00,param_1,param_2);
        goto LAB_148ac296e;
      }
    }
  }
  bVar1 = false;
LAB_148ac296e:
  if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return bVar1;
}

// ServerExecConsoleCommand @ 148adaab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FWorldPartitionHelpers::ServerExecConsoleCommand
          (UWorld *param_1,FString *param_2,TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  ENetMode EVar3;
  int iVar4;
  int iVar5;
  APlayerController *this;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  if ((((param_1 != (UWorld *)0x0) && (bVar2 = UWorld::IsGameWorld(param_1), bVar2)) &&
      (EVar3 = UWorld::InternalGetNetMode(param_1), EVar3 == NM_Client)) &&
     (this = UEngine::GetFirstLocalPlayerController(GEngine,param_1),
     this != (APlayerController *)0x0)) {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
    local_48.ArrayNum = iVar4 + 1;
    ::FString::FString((FString *)(local_48.AllocatorInstance.Data + (longlong)iVar4 * 0x10),param_2
                      );
    if ((&local_48 == param_3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = param_3->ArrayNum;
    if (iVar4 != 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar4,&local_48.AllocatorInstance,&local_48.ArrayNum,
                         &local_48.ArrayMax);
      ConstructItems<FString,FString,int>
                (local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10,
                 (FString *)(param_3->AllocatorInstance).Data,iVar4);
    }
    iVar4 = local_48.ArrayNum;
    uVar6 = (ulonglong)local_48.ArrayNum;
    bVar2 = true;
    pFVar8 = local_48.AllocatorInstance.Data + uVar6 * 0x10;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FVar7.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar6 != iVar4) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar7.Data == pFVar8) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_38,L" ",1);
      }
      iVar5 = *(int *)(FVar7.Data + 8) + -1;
      if (*(int *)(FVar7.Data + 8) == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars(&local_38,*(wchar_t **)FVar7.Data,iVar5);
      uVar6 = local_48._8_8_ & 0xffffffff;
      FVar7.Data = FVar7.Data + 0x10;
    }
    APlayerController::ServerExecRPC(this,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

