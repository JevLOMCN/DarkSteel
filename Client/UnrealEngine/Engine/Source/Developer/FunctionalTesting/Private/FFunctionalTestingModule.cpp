// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 15

// StartupModule @ 148c70c00

void __thiscall FFunctionalTestingModule::StartupModule(FFunctionalTestingModule *this)

{
  this->bPendingActivation = false;
  return;
}

// ShutdownModule @ 148c70c10

void __thiscall FFunctionalTestingModule::ShutdownModule(FFunctionalTestingModule *this)

{
  return;
}

// RunAllTestsOnMap @ 148c70c20

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
FFunctionalTestingModule::RunAllTestsOnMap(FFunctionalTestingModule *this,bool param_1,bool param_2)

{
  UWorldProxy UVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_18;
  
  UVar1.World = GWorld.World;
  if (GWorld.World != (UWorld *)0x0) {
    this->bPendingActivation = false;
    pFVar3 = ::FString::FString(&local_18,L"");
    bVar2 = UFunctionalTestingManager::RunAllFunctionalTests
                      ((UObject *)UVar1.World,param_1,param_2,pFVar3);
    if ((!bVar2) && (1 < (byte)LogFunctionalTest._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
    }
  }
  return;
}

// RunTestOnMap @ 148c70ca0

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
FFunctionalTestingModule::RunTestOnMap
          (FFunctionalTestingModule *this,FString *param_1,bool param_2,bool param_3)

{
  UWorldProxy UVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_18;
  
  UVar1.World = GWorld.World;
  if (GWorld.World != (UWorld *)0x0) {
    this->bPendingActivation = false;
    pFVar3 = ::FString::FString(&local_18,param_1);
    bVar2 = UFunctionalTestingManager::RunAllFunctionalTests
                      ((UObject *)UVar1.World,param_2,param_3,pFVar3);
    if ((!bVar2) && (1 < (byte)LogFunctionalTest._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
    }
  }
  return;
}

// MarkPendingActivation @ 148c70d20

void __thiscall FFunctionalTestingModule::MarkPendingActivation(FFunctionalTestingModule *this)

{
  this->bPendingActivation = true;
  return;
}

// IsActivationPending @ 148c70d30

bool __thiscall FFunctionalTestingModule::IsActivationPending(FFunctionalTestingModule *this)

{
  return this->bPendingActivation;
}

// IsRunning @ 148c70d40

bool __thiscall FFunctionalTestingModule::IsRunning(FFunctionalTestingModule *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->TestManager).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->TestManager).WeakPtr);
    if (pUVar2[3].field_0x18 != '\0') {
      return true;
    }
  }
  return false;
}

// IsFinished @ 148c70d80

bool __thiscall FFunctionalTestingModule::IsFinished(FFunctionalTestingModule *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->TestManager).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->TestManager).WeakPtr);
    if (pUVar2[3].field_0x19 == '\0') {
      return false;
    }
  }
  return true;
}

// SetManager @ 148c70dc0

void __thiscall
FFunctionalTestingModule::SetManager
          (FFunctionalTestingModule *this,UFunctionalTestingManager *param_1)

{
  UFunctionalTestingManager *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UFunctionalTestingManager *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->TestManager).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// GetCurrentManager @ 148c70e00

UFunctionalTestingManager * __thiscall
FFunctionalTestingModule::GetCurrentManager(FFunctionalTestingModule *this)

{
  UFunctionalTestingManager *pUVar1;
  
  pUVar1 = (UFunctionalTestingManager *)FWeakObjectPtr::Get(&(this->TestManager).WeakPtr);
  return pUVar1;
}

// SetLooping @ 148c70e10

void __thiscall FFunctionalTestingModule::SetLooping(FFunctionalTestingModule *this,bool param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->TestManager).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->TestManager).WeakPtr);
    pUVar2[3].field_0x1a = param_1;
  }
  return;
}

// GetMapTests @ 148c70e50

void __thiscall
FFunctionalTestingModule::GetMapTests
          (FFunctionalTestingModule *this,bool param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined7 in_register_00000011;
  FFunctionalTestInfo *pFVar7;
  FScriptContainerElement *pFVar8;
  FFunctionalTestInfo *pFVar9;
  undefined1 local_res8 [8];
  FFunctionalTestInfo *local_68;
  ulonglong local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_68 = (FFunctionalTestInfo *)0x0;
  local_60 = 0;
  (**(code **)(this->_padding_ + 0x88))(this,CONCAT71(in_register_00000011,param_1),&local_68);
  uVar2 = local_60;
  uVar6 = (ulonglong)(int)local_60;
  pFVar7 = local_68 + uVar6;
  pFVar9 = local_68;
  while( true ) {
    if ((int)local_60 != (int)uVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FFunctionalTestInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar7) break;
    ::FString::FString(&local_58,&pFVar9->BeautifiedName);
    ::FString::FString(&local_48,&pFVar9->TestCommand);
    ::FString::FString(&local_38,&pFVar9->TestTags);
    pFVar8 = (param_2->AllocatorInstance).Data;
    if ((pFVar8 <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 < pFVar8 + (longlong)param_2->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    FVar3.Data = local_58.Data.AllocatorInstance.Data;
    pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    param_2->ArrayNum = iVar5 + 1;
    *(FScriptContainerElement **)&pFVar8->field_0x0 = (FScriptContainerElement *)0x0;
    iVar5 = local_58.Data.ArrayNum;
    *(int *)&pFVar8[8].field_0x0 = iVar5;
    if (iVar5 == 0) {
      *(int *)(pFVar8 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,(ForAnyElementType *)pFVar8,iVar5,(int *)(pFVar8 + 0xc));
      memcpy(*(FScriptContainerElement **)&pFVar8->field_0x0,FVar3.Data,(longlong)iVar5 * 2);
    }
    pFVar8 = (param_3->AllocatorInstance).Data;
    if ((pFVar8 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 < pFVar8 + (longlong)param_3->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar5 = param_3->ArrayNum;
    if (iVar5 == param_3->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    FVar3.Data = local_48.Data.AllocatorInstance.Data;
    pFVar8 = (param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    param_3->ArrayNum = iVar5 + 1;
    *(FScriptContainerElement **)&pFVar8->field_0x0 = (FScriptContainerElement *)0x0;
    iVar5 = local_48.Data.ArrayNum;
    *(int *)&pFVar8[8].field_0x0 = iVar5;
    if (iVar5 == 0) {
      *(int *)(pFVar8 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,(ForAnyElementType *)pFVar8,iVar5,(int *)(pFVar8 + 0xc));
      memcpy(*(FScriptContainerElement **)&pFVar8->field_0x0,FVar3.Data,(longlong)iVar5 * 2);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    uVar6 = uVar2 & 0xffffffff;
    pFVar9 = pFVar9 + 1;
  }
  DestructItems<FFunctionalTestInfo,int>(local_68,(int)local_60);
  if (local_68 != (FFunctionalTestInfo *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// GetMapTests @ 148c71170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148c71f6d) */
/* WARNING: Removing unreachable block (ram,0x000148c71bea) */
/* WARNING: Removing unreachable block (ram,0x000148c71f7b) */
/* WARNING: Removing unreachable block (ram,0x000148c71bf8) */
/* WARNING: Removing unreachable block (ram,0x000148c71f89) */
/* WARNING: Removing unreachable block (ram,0x000148c71c06) */

void __thiscall
FFunctionalTestingModule::GetMapTests
          (FFunctionalTestingModule *this,bool param_1,
          TArray<FFunctionalTestInfo,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  FName FVar1;
  code *pcVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  FAssetData *pFVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FName *pFVar8;
  FModuleManager *pFVar9;
  IModuleInterface *pIVar10;
  longlong *plVar11;
  UClass *this_01;
  FString *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  wchar_t *pwVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  FAssetData *this_02;
  FScriptContainerElement *pFVar21;
  undefined1 auStackY_cc8 [32];
  undefined1 local_c76;
  undefined1 local_c75;
  uint local_c74;
  FString local_c70;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c60;
  FAssetData *local_c50;
  ulonglong local_c48;
  FString local_c40;
  FString local_c30;
  FString local_c20;
  FString local_c10;
  FString local_c00;
  FString local_bf0;
  uint local_be0;
  FString local_bd8;
  FString local_bc8;
  FString local_bb8;
  FString local_ba8;
  FString local_b98;
  FString local_b88;
  FString local_b78;
  FString local_b68;
  FString local_b58;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_b48;
  FAssetData *local_b40;
  FAssetTagValueRef_u_0 local_b38;
  FString local_b30;
  FTopLevelAssetPath local_b20;
  FAssetData *local_b10;
  TReferenceControllerBase<1> *local_b08;
  FString local_b00;
  FString local_af0;
  FString local_ae0;
  FString local_ad0;
  FString local_ac0;
  FString local_ab0;
  FString local_aa0;
  FString local_a90;
  FString local_a80;
  FString local_a70;
  FString local_a60;
  FString local_a50;
  FString local_a40;
  FName local_a30;
  undefined1 local_a28 [8];
  TReferenceControllerBase<1> *local_a20;
  FString local_a18;
  FString local_a08;
  FName local_9f8;
  FName local_9f0;
  FString local_9e8;
  void *local_9d8;
  undefined8 local_9d0;
  void *local_9c8;
  undefined8 local_9c0;
  FSoftObjectPath *local_9b8;
  undefined8 local_9b0;
  void *local_9a8;
  undefined8 local_9a0;
  ForAnyElementType local_998;
  undefined8 local_990;
  TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_988;
  void *local_948;
  undefined4 local_940;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_938;
  void *local_8f8;
  undefined4 local_8f0;
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_8e8;
  void *local_8a8;
  undefined4 local_8a0;
  undefined1 local_898 [4];
  undefined8 local_894;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_cc8;
  uVar20 = 0;
  local_c74 = 0;
  local_b48 = param_3;
  FModuleManager::Get();
  pFVar8 = ::FName::FName(&local_9f0,"AssetRegistry");
  FVar1 = *pFVar8;
  pFVar9 = FModuleManager::Get();
  pIVar10 = FModuleManager::LoadModuleChecked(pFVar9,FVar1);
  plVar11 = (longlong *)(**(code **)((longlong)*pIVar10 + 0x40))(pIVar10);
  cVar4 = (**(code **)(*plVar11 + 0x388))(plVar11);
  if (cVar4 != '\0') {
    return;
  }
  local_c50 = (FAssetData *)0x0;
  local_c48 = 0;
  local_9d8 = (void *)0x0;
  local_9d0 = 0;
  local_9c8 = (void *)0x0;
  local_9c0 = 0;
  local_9b8 = (FSoftObjectPath *)0x0;
  local_9b0 = 0;
  local_9a8 = (void *)0x0;
  local_9a0 = 0;
  local_998.Data = (FScriptContainerElement *)0x0;
  local_990 = 0;
  local_988._0_8_ = 0;
  local_988._8_8_ = 0;
  local_988._32_8_ = 0;
  local_988._40_4_ = 0;
  local_988._44_4_ = 0x80;
  local_988._48_4_ = 0xffffffff;
  local_988._52_4_ = 0;
  local_948 = (void *)0x0;
  local_940 = 0;
  local_938._0_8_ = 0;
  local_938._8_8_ = 0;
  local_938._32_8_ = 0;
  local_938._40_4_ = 0;
  local_938._44_4_ = 0x80;
  local_938._48_4_ = 0xffffffff;
  local_938._52_4_ = 0;
  local_8f8 = (void *)0x0;
  local_8f0 = 0;
  local_8e8._0_8_ = 0;
  local_8e8._8_8_ = 0;
  local_8e8._32_8_ = 0;
  local_8e8._40_4_ = 0;
  local_8e8._44_4_ = 0x80;
  local_8e8._48_4_ = 0xffffffff;
  local_8e8._52_4_ = 0;
  local_8a8 = (void *)0x0;
  local_8a0 = 0;
  local_898._0_3_ = 0;
  local_894 = 0;
  this_01 = Z_Construct_UClass_UWorld_NoRegister();
  UStruct::GetStructPathName((UStruct *)this_01,&local_b20);
  if (((local_998.Data <= &local_b20) &&
      (&local_b20 < (FTopLevelAssetPath *)(local_998.Data + (longlong)local_990._4_4_ * 0x10))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (int)local_990;
  if ((int)local_990 == local_990._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&local_998,(int *)((longlong)&local_990 + 4));
  }
  local_990 = CONCAT44(local_990._4_4_,iVar6 + 1);
  pFVar21 = local_998.Data + (longlong)iVar6 * 0x10;
  *(uint *)pFVar21 = local_b20.PackageName.ComparisonIndex.Value;
  *(uint *)(pFVar21 + 4) = local_b20.PackageName.Number;
  *(uint *)(pFVar21 + 8) = local_b20.AssetName.ComparisonIndex.Value;
  *(uint *)(pFVar21 + 0xc) = local_b20.AssetName.Number;
  local_898._1_2_ = 0x101;
  cVar4 = (**(code **)(*plVar11 + 0x50))(plVar11,&local_9d8,&local_c50);
  if (cVar4 != '\0') {
    pFVar8 = ::FName::FName(&local_9f8,L"AutomationController");
    FVar1 = *pFVar8;
    pFVar9 = FModuleManager::Get();
    pIVar10 = FModuleManager::LoadModuleChecked(pFVar9,FVar1);
    plVar11 = (longlong *)(**(code **)((longlong)*pIVar10 + 0x40))(pIVar10,local_a28);
    local_b08 = (TReferenceControllerBase<1> *)plVar11[1];
    plVar11 = (longlong *)*plVar11;
    if (local_b08 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_b08->SharedReferenceCount = (atomic<int>)((int)local_b08->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a20);
    if ((plVar11 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = (**(code **)(*plVar11 + 0x100))(plVar11);
    uVar13 = (ulonglong)(int)(uint)local_c48;
    local_b10 = local_c50 + uVar13;
    local_be0 = (uint)local_c48;
    uVar14 = uVar13;
    this_02 = local_c50;
    while( true ) {
      pFVar3 = local_b10;
      local_b40 = this_02;
      if ((int)uVar14 != (int)uVar13) {
        local_c76 = 0;
        `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_c76);
      }
      if (this_02 == pFVar3) break;
      local_888.Base = local_868;
      local_888.CurPos = local_868;
      local_888.End = local_52;
      local_888.bIsDynamic = false;
      local_888.bIsExternal = false;
      if ((this_02->PackageName != (FName)0x0) && (this_02->AssetName != (FName)0x0)) {
        ::FName::AppendString(&this_02->PackageName,&local_888);
        if (local_888.End < local_888.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_888,1);
        }
        *local_888.CurPos = L'.';
        local_888.CurPos = local_888.CurPos + 1;
        ::FName::AppendString(&this_02->AssetName,&local_888);
      }
      local_c70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c70.Data.ArrayNum = 0;
      local_c70.Data.ArrayMax = 0;
      pFVar12 = ::FString::ConstructFromPtrSize
                          (&local_a18,local_888.Base,
                           (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1));
      if (&local_c70 != pFVar12) {
        if (local_c70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c70.Data.AllocatorInstance.Data);
        }
        local_c70.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
        (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c70.Data.ArrayNum = (pFVar12->Data).ArrayNum;
        local_c70.Data.ArrayMax = (pFVar12->Data).ArrayMax;
        (pFVar12->Data).ArrayNum = 0;
        (pFVar12->Data).ArrayMax = 0;
      }
      if (local_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a18.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
      ::FName::ToString(&this_02->PackageName,&local_b30);
      if ((cVar4 == '\0') &&
         (iVar6 = ::FString::Find(&local_b30,L"/Game/Developers",0x10,IgnoreCase,FromStart,-1),
         iVar6 == 0)) {
        if (local_b30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b30.Data.AllocatorInstance.Data);
        }
        if (local_c70.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_148c7201a;
        FMemory::Free(local_c70.Data.AllocatorInstance.Data);
        uVar14 = local_c48 & 0xffffffff;
        this_02 = this_02 + 1;
        uVar13 = (ulonglong)local_be0;
      }
      else {
        MapPackageToAutomationPath(&local_a40,this_02);
        local_c60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c60.ArrayNum = 0;
        local_c60.ArrayMax = 0;
        pwVar15 = L"TestNames";
        if (param_1) {
          pwVar15 = L"TestNamesEditor";
        }
        ::FName::FName(&local_a30,pwVar15);
        FAssetDataTagMapSharedView::FindTag(&this_02->TagsAndValues,(FName)&local_b38);
        if (local_b38.Loose != (FString *)0x0) {
          FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_b38.Fixed,&local_ac0);
          ::FString::ParseIntoArray(&local_ac0,&local_c60,L";",true);
          if (local_ac0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_ac0.Data.AllocatorInstance.Data);
          }
        }
        this_00 = local_b48;
        iVar6 = local_c60.ArrayNum;
        if (local_c60.ArrayNum == 0) {
          if (param_1) {
LAB_148c71cd1:
            bVar5 = false;
          }
          else {
            uVar20 = uVar20 | 1;
            local_c74 = uVar20;
            pFVar12 = ::FName::ToString(&this_02->AssetName,&local_a08);
            bVar5 = ::FString::StartsWith(pFVar12,L"FTEST_",6,IgnoreCase);
            if (!bVar5) goto LAB_148c71cd1;
            bVar5 = true;
          }
          if (((uVar20 & 1) != 0) &&
             (uVar20 = uVar20 & 0xfffffffe, local_c74 = uVar20,
             local_a08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_a08.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            ::FName::ToString(&this_02->AssetName,&local_ad0);
            ::FString::ConcatFC(&local_a50,&local_c70,L";");
            ::FString::ConcatFF(&local_ae0,&local_a50,&local_b30);
            if (local_a50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a50.Data.AllocatorInstance.Data);
            }
            pFVar12 = ::FString::FString(&local_9e8,"");
            FVar19.Data = local_ae0.Data.AllocatorInstance.Data;
            local_ba8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar6 = local_ae0.Data.ArrayNum;
            local_ba8.Data.ArrayNum = iVar6;
            if (iVar6 == 0) {
              local_ba8.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar6,0,(ForAnyElementType *)&local_ba8,iVar6,&local_ba8.Data.ArrayMax)
              ;
              memcpy(local_ba8.Data.AllocatorInstance.Data,FVar19.Data,(longlong)iVar6 * 2);
            }
            FVar19.Data = local_ad0.Data.AllocatorInstance.Data;
            local_bb8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar6 = local_ad0.Data.ArrayNum;
            local_bb8.Data.ArrayNum = iVar6;
            if (iVar6 == 0) {
              local_bb8.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar6,0,(ForAnyElementType *)&local_bb8,iVar6,&local_bb8.Data.ArrayMax)
              ;
              memcpy(local_bb8.Data.AllocatorInstance.Data,FVar19.Data,(longlong)iVar6 * 2);
            }
            ::FString::FString(&local_c40,&local_bb8);
            ::FString::FString(&local_c30,&local_ba8);
            ::FString::FString(&local_c20,pFVar12);
            if (local_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_bb8.Data.AllocatorInstance.Data);
            }
            if (local_ba8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_ba8.Data.AllocatorInstance.Data);
            }
            pFVar21 = (pFVar12->Data).AllocatorInstance.Data;
            if (pFVar21 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar21);
            }
            pFVar21 = (param_2->AllocatorInstance).Data;
            if (((pFVar21 <= (FScriptContainerElement *)&local_c40) &&
                ((FScriptContainerElement *)&local_c40 <
                 pFVar21 + (longlong)param_2->ArrayMax * 0x30)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar6 = param_2->ArrayNum;
            if (iVar6 == param_2->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar6 + 1;
            pFVar21 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
            *(undefined8 *)pFVar21 = 0;
            *(FScriptContainerElement **)pFVar21 = local_c40.Data.AllocatorInstance.Data;
            *(int *)(pFVar21 + 8) = local_c40.Data.ArrayNum;
            *(int *)(pFVar21 + 0xc) = local_c40.Data.ArrayMax;
            *(undefined8 *)(pFVar21 + 0x10) = 0;
            *(FScriptContainerElement **)(pFVar21 + 0x10) = local_c30.Data.AllocatorInstance.Data;
            *(int *)(pFVar21 + 0x18) = local_c30.Data.ArrayNum;
            *(int *)(pFVar21 + 0x1c) = local_c30.Data.ArrayMax;
            *(undefined8 *)(pFVar21 + 0x20) = 0;
            *(FScriptContainerElement **)(pFVar21 + 0x20) = local_c20.Data.AllocatorInstance.Data;
            *(int *)(pFVar21 + 0x28) = local_c20.Data.ArrayNum;
            *(int *)(pFVar21 + 0x2c) = local_c20.Data.ArrayMax;
            local_c20.Data.ArrayNum = 0;
            local_c20.Data.ArrayMax = 0;
            local_c20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c30.Data.ArrayNum = 0;
            local_c30.Data.ArrayMax = 0;
            local_c30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c40.Data.ArrayNum = 0;
            local_c40.Data.ArrayMax = 0;
            local_c40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                      (param_3,&local_c70);
            if (local_ae0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_ae0.Data.AllocatorInstance.Data);
            }
            uVar20 = local_c74;
            if (local_ad0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_ad0.Data.AllocatorInstance.Data);
              uVar20 = local_c74;
            }
          }
        }
        else {
          pFVar21 = local_c60.AllocatorInstance.Data + (longlong)local_c60.ArrayNum * 0x10;
          FVar19.Data = local_c60.AllocatorInstance.Data;
          while( true ) {
            if (local_c60.ArrayNum != iVar6) {
              local_c75 = 0;
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_c75);
            }
            this_02 = local_b40;
            param_3 = local_b48;
            uVar20 = local_c74;
            if (FVar19.Data == pFVar21) break;
            local_bc8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_bc8.Data.ArrayNum = 0;
            local_bc8.Data.ArrayMax = 0;
            local_b58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b58.Data.ArrayNum = 0;
            local_b58.Data.ArrayMax = 0;
            local_bd8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_bd8.Data.ArrayNum = 0;
            local_bd8.Data.ArrayMax = 0;
            local_b68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b68.Data.ArrayNum = 0;
            local_b68.Data.ArrayMax = 0;
            ::FString::FString(&local_ab0,L"|");
            bVar5 = ::FString::Split((FString *)FVar19.Data,&local_ab0,&local_b58,&local_bc8);
            if (local_ab0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_ab0.Data.AllocatorInstance.Data);
            }
            if (bVar5) {
              ::FString::FString(&local_aa0,L"|");
              bVar5 = ::FString::Split(&local_bc8,&local_aa0,&local_bd8,&local_b68);
              if (local_aa0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_aa0.Data.AllocatorInstance.Data);
              }
              if (!bVar5) {
                iVar7 = local_bc8.Data.ArrayNum + -1;
                if (local_bc8.Data.ArrayNum == 0) {
                  iVar7 = 0;
                }
                ::FString::AssignRange
                          (&local_bd8,(wchar_t *)local_bc8.Data.AllocatorInstance.Data,iVar7);
              }
              FVar17.Data = (FScriptContainerElement *)L"";
              if (local_b58.Data.ArrayNum != 0) {
                FVar17.Data = local_b58.Data.AllocatorInstance.Data;
              }
              ::FString::ConcatFC(&local_a90,&local_a40,L".");
              ::FString::ConcatFC(&local_af0,&local_a90,(wchar_t *)FVar17.Data);
              if (local_a90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a90.Data.AllocatorInstance.Data);
              }
              FVar17.Data = (FScriptContainerElement *)L"";
              if (local_bd8.Data.ArrayNum != 0) {
                FVar17.Data = local_bd8.Data.AllocatorInstance.Data;
              }
              ::FString::ConcatFC(&local_a60,&local_c70,L";");
              ::FString::ConcatFF(&local_a70,&local_a60,&local_b30);
              ::FString::ConcatFC(&local_a80,&local_a70,L";");
              ::FString::ConcatFC(&local_b00,&local_a80,(wchar_t *)FVar17.Data);
              if (local_a80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a80.Data.AllocatorInstance.Data);
              }
              if (local_a70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a70.Data.AllocatorInstance.Data);
              }
              if (local_a60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a60.Data.AllocatorInstance.Data);
              }
              FVar17.Data = local_b68.Data.AllocatorInstance.Data;
              lVar18 = (longlong)local_b68.Data.ArrayNum;
              local_b78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_b78.Data.ArrayNum = local_b68.Data.ArrayNum;
              if (local_b68.Data.ArrayNum == 0) {
                local_b78.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_b68.Data.ArrayNum,0,(ForAnyElementType *)&local_b78,
                           local_b68.Data.ArrayNum,&local_b78.Data.ArrayMax);
                memcpy(local_b78.Data.AllocatorInstance.Data,FVar17.Data,lVar18 * 2);
              }
              FVar17.Data = local_b00.Data.AllocatorInstance.Data;
              local_b88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              iVar7 = local_b00.Data.ArrayNum;
              local_b88.Data.ArrayNum = iVar7;
              if (iVar7 == 0) {
                local_b88.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar7,0,(ForAnyElementType *)&local_b88,iVar7,
                           &local_b88.Data.ArrayMax);
                memcpy(local_b88.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar7 * 2);
              }
              FVar17.Data = local_af0.Data.AllocatorInstance.Data;
              local_b98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              iVar7 = local_af0.Data.ArrayNum;
              local_b98.Data.ArrayNum = iVar7;
              if (iVar7 == 0) {
                local_b98.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar7,0,(ForAnyElementType *)&local_b98,iVar7,
                           &local_b98.Data.ArrayMax);
                memcpy(local_b98.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar7 * 2);
              }
              ::FString::FString(&local_c10,&local_b98);
              ::FString::FString(&local_c00,&local_b88);
              ::FString::FString(&local_bf0,&local_b78);
              if (local_b98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b98.Data.AllocatorInstance.Data);
              }
              if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b88.Data.AllocatorInstance.Data);
              }
              if (local_b78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b78.Data.AllocatorInstance.Data);
              }
              pFVar16 = (param_2->AllocatorInstance).Data;
              if (((pFVar16 <= (FScriptContainerElement *)&local_c10) &&
                  ((FScriptContainerElement *)&local_c10 <
                   pFVar16 + (longlong)param_2->ArrayMax * 0x30)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar7 = param_2->ArrayNum;
              if (iVar7 == param_2->ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
              }
              param_2->ArrayNum = iVar7 + 1;
              pFVar16 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
              *(undefined8 *)pFVar16 = 0;
              *(FScriptContainerElement **)pFVar16 = local_c10.Data.AllocatorInstance.Data;
              *(int *)(pFVar16 + 8) = local_c10.Data.ArrayNum;
              *(int *)(pFVar16 + 0xc) = local_c10.Data.ArrayMax;
              *(undefined8 *)(pFVar16 + 0x10) = 0;
              *(FScriptContainerElement **)(pFVar16 + 0x10) = local_c00.Data.AllocatorInstance.Data;
              *(int *)(pFVar16 + 0x18) = local_c00.Data.ArrayNum;
              *(int *)(pFVar16 + 0x1c) = local_c00.Data.ArrayMax;
              *(undefined8 *)(pFVar16 + 0x20) = 0;
              *(FScriptContainerElement **)(pFVar16 + 0x20) = local_bf0.Data.AllocatorInstance.Data;
              *(int *)(pFVar16 + 0x28) = local_bf0.Data.ArrayNum;
              *(int *)(pFVar16 + 0x2c) = local_bf0.Data.ArrayMax;
              local_bf0.Data.ArrayNum = 0;
              local_bf0.Data.ArrayMax = 0;
              local_bf0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_c00.Data.ArrayNum = 0;
              local_c00.Data.ArrayMax = 0;
              local_c00.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_c10.Data.ArrayNum = 0;
              local_c10.Data.ArrayMax = 0;
              local_c10.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                        (this_00,&local_c70);
              if (local_b00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b00.Data.AllocatorInstance.Data);
              }
              if (local_af0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_af0.Data.AllocatorInstance.Data);
              }
            }
            if (local_b68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b68.Data.AllocatorInstance.Data);
            }
            if (local_bd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_bd8.Data.AllocatorInstance.Data);
            }
            if (local_b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b58.Data.AllocatorInstance.Data);
            }
            if (local_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_bc8.Data.AllocatorInstance.Data);
            }
            FVar19.Data = FVar19.Data + 0x10;
          }
        }
        DestructItems<FString,int>((FString *)local_c60.AllocatorInstance.Data,local_c60.ArrayNum);
        if (local_c60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c60.AllocatorInstance.Data);
        }
        if (local_a40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a40.Data.AllocatorInstance.Data);
        }
        if (local_b30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b30.Data.AllocatorInstance.Data);
        }
        if (local_c70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c70.Data.AllocatorInstance.Data);
        }
LAB_148c7201a:
        uVar14 = local_c48 & 0xffffffff;
        this_02 = this_02 + 1;
        uVar13 = (ulonglong)local_be0;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b08);
  }
  local_8a0 = 0;
  if (local_8a8 != (void *)0x0) {
    FMemory::Free(local_8a8);
  }
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_8e8);
  local_8f0 = 0;
  if (local_8f8 != (void *)0x0) {
    FMemory::Free(local_8f8);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_938);
  local_940 = 0;
  if (local_948 != (void *)0x0) {
    FMemory::Free(local_948);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_988);
  if ((FTopLevelAssetPath *)local_998.Data != (FTopLevelAssetPath *)0x0) {
    FMemory::Free(local_998.Data);
  }
  if (local_9a8 != (void *)0x0) {
    FMemory::Free(local_9a8);
  }
  DestructItems<FSoftObjectPath,int>(local_9b8,(int)local_9b0);
  if (local_9b8 != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_9b8);
  }
  if (local_9c8 != (void *)0x0) {
    FMemory::Free(local_9c8);
  }
  if (local_9d8 != (void *)0x0) {
    FMemory::Free(local_9d8);
  }
  DestructItems<FAssetData,int>(local_c50,(uint)local_c48);
  if (local_c50 != (FAssetData *)0x0) {
    FMemory::Free(local_c50);
  }
  return;
}

// GetTestWorld @ 148c929a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FFunctionalTestingModule::GetTestWorld(FFunctionalTestingModule *this)

{
  return GWorld.World;
}

// OnGetAssetTagsForWorld @ 148c957e0

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
FFunctionalTestingModule::OnGetAssetTagsForWorld
          (FFunctionalTestingModule *this,UWorld *param_1,FAssetRegistryTagsContext param_2)

{
  return;
}

