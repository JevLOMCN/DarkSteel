// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 11

// StaticClass @ 146f0de40

UClass * __cdecl UEnvQueryDebugHelpers::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryDebugHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryDebugHelpers",
               &Z_Registration_Info_UClass_UEnvQueryDebugHelpers.InnerSingleton,
               StaticRegisterNativesUEnvQueryDebugHelpers,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryDebugHelpers>,
               InternalVTableHelperCtorCaller<UEnvQueryDebugHelpers>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryDebugHelpers.InnerSingleton;
}

// UEnvQueryDebugHelpers @ 146f2a6e0

UEnvQueryDebugHelpers * __thiscall
UEnvQueryDebugHelpers::UEnvQueryDebugHelpers(UEnvQueryDebugHelpers *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryDebugHelpers__6B_;
  return this;
}

// UEnvQueryDebugHelpers @ 146f2a710

UEnvQueryDebugHelpers * __thiscall
UEnvQueryDebugHelpers::UEnvQueryDebugHelpers
          (UEnvQueryDebugHelpers *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryDebugHelpers__6B_;
  return this;
}

// ~UEnvQueryDebugHelpers @ 146f2e930

void __thiscall UEnvQueryDebugHelpers::~UEnvQueryDebugHelpers(UEnvQueryDebugHelpers *this)

{
  *(undefined ***)this = &___7UEnvQueryDebugHelpers__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BlobArrayToDebugData @ 146f356a0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __cdecl
UEnvQueryDebugHelpers::BlobArrayToDebugData
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,FQueryData *param_2,
          bool param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  ForAnyElementType FVar5;
  int iVar6;
  FNameEntryId FVar7;
  undefined4 extraout_var;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStackX_24;
  ForAnyElementType local_e8;
  int local_e0 [2];
  FArchiveState local_d8;
  undefined8 local_48;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_40;
  undefined8 local_38;
  
  if (!param_3) {
    local_d8._padding_ = 0;
    local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_d8._40_8_ = 0;
    local_d8.ArSerializingDefaults = 0;
    local_d8.ArPortFlags = 0;
    local_d8.ArMaxSerializeSize = 0;
    local_d8.ArUEVer.FileVersionUE4 = 0;
    local_d8.ArUEVer.FileVersionUE5 = 0;
    local_d8.ArLicenseeUEVer = 0;
    local_d8.ArEngineVer.Major = 0;
    local_d8.ArEngineVer.Minor = 0;
    local_d8.ArEngineVer.Patch = 0;
    local_d8.ArEngineVer._6_2_ = 0;
    local_d8.ArEngineVer.Changelist = 0;
    local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_d8.SerializedProperty = (FProperty *)0x0;
    local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_d8.bCustomVersionsAreReset = false;
    local_d8._129_7_ = 0;
    local_d8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_d8);
    local_d8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_38 = 0x7fffffffffffffff;
    local_48 = 0;
    local_40 = param_1;
    FArchiveState::SetIsLoading(&local_d8,true);
    (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
    ::operator<<((FArchive *)&local_d8,param_2);
    FArchive::~FArchive((FArchive *)&local_d8);
    return;
  }
  iVar1 = param_1->ArrayNum;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = *(int *)pFVar3;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar2,&local_e8,local_e0,local_e0 + 1);
  memset(local_e8.Data + iVar6,0,(longlong)iVar2);
  FVar5.Data = local_e8.Data;
  FVar7 = FNameEntryId::FromValidEName((EName)local_res18);
  uStackX_24 = 0;
  local_res20 = *(uint *)CONCAT44(extraout_var,FVar7.Value);
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = local_res20;
  FCompression::UncompressMemory
            (FVar4,FVar5.Data,(longlong)iVar2,pFVar3 + 4,(longlong)(iVar1 + -4),COMPRESS_NoFlags,0);
  local_d8._padding_ = 0;
  local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_d8._40_8_ = 0;
  local_d8.ArSerializingDefaults = 0;
  local_d8.ArPortFlags = 0;
  local_d8.ArMaxSerializeSize = 0;
  local_d8.ArUEVer.FileVersionUE4 = 0;
  local_d8.ArUEVer.FileVersionUE5 = 0;
  local_d8.ArLicenseeUEVer = 0;
  local_d8.ArEngineVer.Major = 0;
  local_d8.ArEngineVer.Minor = 0;
  local_d8.ArEngineVer.Patch = 0;
  local_d8.ArEngineVer._6_2_ = 0;
  local_d8.ArEngineVer.Changelist = 0;
  local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_d8.SerializedProperty = (FProperty *)0x0;
  local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_d8.bCustomVersionsAreReset = false;
  local_d8._129_7_ = 0;
  local_d8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_d8);
  local_48 = 0;
  local_d8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_40 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_e8;
  local_38 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
  ::operator<<((FArchive *)&local_d8,param_2);
  FArchive::~FArchive((FArchive *)&local_d8);
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  return;
}

// DebugDataToBlobArray @ 146f3f520

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __cdecl
UEnvQueryDebugHelpers::DebugDataToBlobArray
          (FQueryData *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  FName FVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  FNameEntryId FVar8;
  int iVar9;
  undefined4 extraout_var;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  int local_res18 [2];
  undefined1 local_res20 [8];
  FScriptContainerElement local_1c8 [8];
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  uint local_1a0;
  undefined4 uStack_19c;
  FArchiveState local_198;
  undefined8 local_108;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_100;
  undefined8 local_f8;
  FArchiveState local_e8;
  undefined8 local_58;
  void **local_50;
  undefined8 local_48;
  
  if (!param_3) {
    local_1b0 = 0;
    local_198._padding_ = 0;
    local_198.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_198.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_198.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_198.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_198._40_8_ = 0;
    local_198.ArSerializingDefaults = 0;
    local_198.ArPortFlags = 0;
    local_198.ArMaxSerializeSize = 0;
    local_198.ArUEVer.FileVersionUE4 = 0;
    local_198.ArUEVer.FileVersionUE5 = 0;
    local_198.ArLicenseeUEVer = 0;
    local_198.ArEngineVer.Major = 0;
    local_198.ArEngineVer.Minor = 0;
    local_198.ArEngineVer.Patch = 0;
    local_198.ArEngineVer._6_2_ = 0;
    local_198.ArEngineVer.Changelist = 0;
    local_198.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_198.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_198.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_198.SerializedProperty = (FProperty *)0x0;
    local_198.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_198.bCustomVersionsAreReset = false;
    local_198._129_7_ = 0;
    local_198.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_198);
    local_108 = 0;
    local_198._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_f8 = 0;
    local_100 = param_2;
    FArchiveState::SetIsSaving(&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_198._padding_ = (longlong)&___7FMemoryWriter__6B_;
    ::operator<<((FArchive *)&local_198,param_1);
    FArchive::~FArchive((FArchive *)&local_198);
    return;
  }
  local_1c0 = (void *)0x0;
  local_1b8 = 0;
  local_1a8 = 0;
  local_e8._padding_ = 0;
  local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_e8._40_8_ = 0;
  local_e8.ArSerializingDefaults = 0;
  local_e8.ArPortFlags = 0;
  local_e8.ArMaxSerializeSize = 0;
  local_e8.ArUEVer.FileVersionUE4 = 0;
  local_e8.ArUEVer.FileVersionUE5 = 0;
  local_e8.ArLicenseeUEVer = 0;
  local_e8.ArEngineVer.Major = 0;
  local_e8.ArEngineVer.Minor = 0;
  local_e8.ArEngineVer.Patch = 0;
  local_e8.ArEngineVer._6_2_ = 0;
  local_e8.ArEngineVer.Changelist = 0;
  local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_e8.SerializedProperty = (FProperty *)0x0;
  local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_e8.bCustomVersionsAreReset = false;
  local_e8._129_7_ = 0;
  local_e8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_e8);
  local_58 = 0;
  local_e8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_50 = &local_1c0;
  local_48 = 0;
  FArchiveState::SetIsSaving(&local_e8,true);
  (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
  local_e8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  ::operator<<((FArchive *)&local_e8,param_1);
  iVar9 = (int)local_1b8;
  local_1c8[0] = (FScriptContainerElement)0x0;
  uVar11 = (int)((float)(int)local_1b8 * __real_3f8ccccd) + 4;
  uVar12 = (ulonglong)uVar11;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_2->ArrayNum;
  piVar2 = &param_2->ArrayMax;
  *piVar1 = 0;
  if (*piVar2 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar11,&param_2->AllocatorInstance,0,piVar2);
  }
  if (0 < (int)uVar11) {
    do {
      pFVar10 = (param_2->AllocatorInstance).Data;
      if (((pFVar10 <= local_1c8) && (local_1c8 < pFVar10 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *piVar1;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&param_2->AllocatorInstance,piVar2);
      }
      *piVar1 = iVar7 + 1;
      (param_2->AllocatorInstance).Data[iVar7] = local_1c8[0];
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  pvVar5 = local_1c0;
  pFVar10 = (param_2->AllocatorInstance).Data;
  local_res18[0] = *piVar1 + -4;
  *(int *)pFVar10 = iVar9;
  FVar8 = FNameEntryId::FromValidEName((EName)local_res20);
  uStack_19c = 0;
  local_1a0 = *(uint *)CONCAT44(extraout_var,FVar8.Value);
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = local_1a0;
  FCompression::CompressMemory(FVar4,pFVar10 + 4,local_res18,pvVar5,iVar9,COMPRESS_BiasMemory,0);
  iVar9 = *piVar1;
  uVar11 = local_res18[0] + 4;
  if (iVar9 < (int)uVar11) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar11 - iVar9,&param_2->AllocatorInstance,piVar1,piVar2);
    memset((param_2->AllocatorInstance).Data + iVar7,0,(longlong)(int)(uVar11 - iVar9));
  }
  else {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if ((int)uVar11 < iVar9) {
      uVar13 = iVar9 - uVar11;
      if (((int)(uVar13 | uVar11) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar13 != 0) {
        pFVar10 = (param_2->AllocatorInstance).Data + (int)uVar11;
        iVar9 = (*piVar1 - uVar13) - uVar11;
        if (iVar9 != 0) {
          memmove(pFVar10,pFVar10 + (int)uVar13,(longlong)iVar9);
        }
        *piVar1 = *piVar1 - uVar13;
      }
    }
  }
  FArchive::~FArchive((FArchive *)&local_e8);
  if (local_1c0 != (void *)0x0) {
    FMemory::Free(local_1c0);
  }
  return;
}

// GetPrivateStaticClass @ 146f57e60

UClass * __cdecl UEnvQueryDebugHelpers::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryDebugHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryDebugHelpers",
               &Z_Registration_Info_UClass_UEnvQueryDebugHelpers.InnerSingleton,
               StaticRegisterNativesUEnvQueryDebugHelpers,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryDebugHelpers>,
               InternalVTableHelperCtorCaller<UEnvQueryDebugHelpers>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryDebugHelpers.InnerSingleton;
}

// LogQueryInternal @ 146f5c990

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
UEnvQueryDebugHelpers::LogQueryInternal
          (FEnvQueryInstance *param_1,FName *param_2,Type param_3,double param_4,
          FVisualLogEntry *param_5)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  FVisualLogLine *pFVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FVisualLogger *this;
  FVisualLogDataBlock *pFVar9;
  FString *pFVar10;
  FText *this_00;
  wchar_t *pwVar11;
  uint uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  FString local_2a8;
  FVisualLogLine local_298;
  undefined8 local_260;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FName local_218;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FQueryData local_1b8;
  FString local_128;
  longlong *local_118 [2];
  FString local_108;
  FString local_f8;
  FArchiveState local_e8;
  undefined8 local_58;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_50;
  undefined8 local_48;
  
  this = FVisualLogger::Get();
  iVar7 = FVisualLogger::GetUniqueId(this,param_4);
  local_1b8.Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Items.ArrayNum = 0;
  local_1b8.Items.ArrayMax = 0;
  local_1b8.Tests.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Tests.ArrayNum = 0;
  local_1b8.Tests.ArrayMax = 0;
  local_1b8.SolidSpheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.SolidSpheres.ArrayNum = 0;
  local_1b8.SolidSpheres.ArrayMax = 0;
  local_1b8.Texts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Texts.ArrayNum = 0;
  local_1b8.Texts.ArrayMax = 0;
  local_1b8.RenderDebugHelpers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.RenderDebugHelpers.ArrayNum = 0;
  local_1b8.RenderDebugHelpers.ArrayMax = 0;
  local_1b8.Options.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Options.ArrayNum = 0;
  local_1b8.Options.ArrayMax = 0;
  local_1b8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Name.Data.ArrayNum = 0;
  local_1b8.Name.Data.ArrayMax = 0;
  QueryToDebugData(param_1,&local_1b8,10);
  local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0;
  local_e8._padding_ = 0;
  local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_260 = 0;
  local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_e8._40_8_ = 0;
  local_e8.ArSerializingDefaults = 0;
  local_e8.ArPortFlags = 0;
  local_e8.ArMaxSerializeSize = 0;
  local_e8.ArUEVer.FileVersionUE4 = 0;
  local_e8.ArUEVer.FileVersionUE5 = 0;
  local_e8.ArLicenseeUEVer = 0;
  local_e8.ArEngineVer.Major = 0;
  local_e8.ArEngineVer.Minor = 0;
  local_e8.ArEngineVer.Patch = 0;
  local_e8.ArEngineVer._6_2_ = 0;
  local_e8.ArEngineVer.Changelist = 0;
  local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_e8.SerializedProperty = (FProperty *)0x0;
  local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_e8.bCustomVersionsAreReset = false;
  local_e8._129_7_ = 0;
  local_e8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_e8);
  local_58 = 0;
  local_e8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_50 = &local_258;
  local_48 = 0;
  FArchiveState::SetIsSaving(&local_e8,true);
  (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
  local_e8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  ::operator<<((FArchive *)&local_e8,&local_1b8);
  FArchive::~FArchive((FArchive *)&local_e8);
  ::FString::PrintfImpl
            (&local_1d0,
             L"Executed EQS: \n - Name: \'%s\' (id=%d, option=%d),\n - All Items: %d,\n - ValidItems: %d"
            );
  _Src.Data = local_1d0.Data.AllocatorInstance.Data;
  local_298.UserData = (long64)(int)param_1->_padding_;
  local_298.Line.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_1d0.Data.ArrayNum == 0) {
    local_298.Line.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1d0.Data.ArrayNum,0,(ForAnyElementType *)&local_298,local_1d0.Data.ArrayNum
               ,&local_298.Line.Data.ArrayMax);
    memcpy(local_298.Line.Data.AllocatorInstance.Data,_Src.Data,
           (longlong)local_1d0.Data.ArrayNum * 2);
  }
  local_298.Category = *param_2;
  pwVar11 = L"";
  if (EVisLogTags::TAG_EQS.Data.ArrayNum != 0) {
    pwVar11 = (wchar_t *)EVisLogTags::TAG_EQS.Data.AllocatorInstance.Data;
  }
  local_298.Color.field0_0x0._s_0 = FColor::White.field0_0x0;
  local_298.UniqueId = -1;
  local_298.TagName.ComparisonIndex.Value = 0;
  local_298.TagName.Number = 0;
  local_298.bMonospace = false;
  local_298.Verbosity.Value = param_3;
  ::FName::FName(&local_218,pwVar11);
  local_298.TagName = local_218;
  local_298.UniqueId = iVar7;
  pFVar9 = FVisualLogEntry::AddDataBlock(param_5,&EVisLogTags::TAG_EQS,&local_258,param_2,param_3);
  pFVar9->UniqueId = iVar7;
  if (0 < local_1b8.NumValidItems) {
    iVar18 = local_1b8.Tests.ArrayNum;
    lVar19 = (longlong)local_1b8.Tests.ArrayNum;
    pFVar10 = ::FString::FString(&local_128,L"\n");
    iVar16 = (pFVar10->Data).ArrayNum;
    iVar7 = iVar16 + -1;
    if (iVar16 == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars(&local_298.Line,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar7);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    uVar2 = *(uint *)((longlong)&param_1->_padding_ + 4);
    iVar7 = local_1b8.Items.ArrayNum;
    uVar12 = 0;
    if ((int)uVar2 < (param_1->Options).ArrayNum) {
      uVar12 = ~uVar2 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar12 = 0;
    pFVar14 = (param_1->Options).AllocatorInstance.Data;
    if (0 < iVar18) {
      lVar15 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar12 < *(int *)(pFVar14 + (longlong)(int)uVar2 * 0x30 + 0x10)) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar3 = *(longlong **)
                  (*(longlong *)(pFVar14 + (longlong)(int)uVar2 * 0x30 + 8) + lVar15 * 8);
        this_00 = (FText *)(**(code **)(*plVar3 + 0x2b8))(plVar3,local_118);
        FText::ToString(this_00);
        ::FString::PrintfImpl(&local_210,L"%d: %s\n");
        iVar16 = local_210.Data.ArrayNum + -1;
        if (local_210.Data.ArrayNum == 0) {
          iVar16 = 0;
        }
        ::FString::AppendChars
                  (&local_298.Line,(wchar_t *)local_210.Data.AllocatorInstance.Data,iVar16);
        if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.Data.AllocatorInstance.Data);
        }
        if (local_118[0] != (longlong *)0x0) {
          (**(code **)(*local_118[0] + 0x10))();
        }
        uVar12 = uVar12 + 1;
        lVar15 = lVar15 + 1;
      } while (lVar15 < lVar19);
    }
    local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a8.Data.ArrayNum = 0;
    local_2a8.Data.ArrayMax = 0;
    ::FString::FString(&local_248,L"Item ");
    iVar16 = local_248.Data.ArrayNum + -1;
    if (local_248.Data.ArrayNum == 0) {
      iVar16 = 0;
    }
    ::FString::AppendChars(&local_2a8,(wchar_t *)local_248.Data.AllocatorInstance.Data,iVar16);
    iVar16 = local_248.Data.ArrayNum + -1;
    if (local_248.Data.ArrayNum == 0) {
      iVar16 = 0;
    }
    if (iVar16 < 0x1b) {
      uVar13 = (ulonglong)(0x1b - iVar16);
      do {
        ::FString::PrintfImpl(&local_200,L" ");
        iVar16 = local_200.Data.ArrayNum + -1;
        if (local_200.Data.ArrayNum == 0) {
          iVar16 = 0;
        }
        ::FString::AppendChars(&local_2a8,(wchar_t *)local_200.Data.AllocatorInstance.Data,iVar16);
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_238,L" | Score");
    iVar16 = local_238.Data.ArrayNum + -1;
    if (local_238.Data.ArrayNum == 0) {
      iVar16 = 0;
    }
    ::FString::AppendChars(&local_2a8,(wchar_t *)local_238.Data.AllocatorInstance.Data,iVar16);
    iVar16 = local_238.Data.ArrayNum + -1;
    if (local_238.Data.ArrayNum == 0) {
      iVar16 = 0;
    }
    if (iVar16 < 8) {
      uVar13 = (ulonglong)(8 - iVar16);
      do {
        ::FString::PrintfImpl(&local_1f0,L" ");
        iVar16 = local_1f0.Data.ArrayNum + -1;
        if (local_1f0.Data.ArrayNum == 0) {
          iVar16 = 0;
        }
        ::FString::AppendChars(&local_2a8,(wchar_t *)local_1f0.Data.AllocatorInstance.Data,iVar16);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    iVar16 = 0;
    if (0 < iVar18) {
      do {
        ::FString::PrintfImpl(&local_228,L" | Test %d  ");
        iVar17 = local_228.Data.ArrayNum + -1;
        if (local_228.Data.ArrayNum == 0) {
          iVar17 = 0;
        }
        ::FString::AppendChars(&local_2a8,(wchar_t *)local_228.Data.AllocatorInstance.Data,iVar17);
        iVar17 = local_228.Data.ArrayNum + -1;
        if (local_228.Data.ArrayNum == 0) {
          iVar17 = 0;
        }
        if (iVar17 < 0xf) {
          uVar13 = (ulonglong)(0xf - iVar17);
          do {
            ::FString::PrintfImpl(&local_1e0,L" ");
            iVar17 = local_1e0.Data.ArrayNum + -1;
            if (local_1e0.Data.ArrayNum == 0) {
              iVar17 = 0;
            }
            ::FString::AppendChars
                      (&local_2a8,(wchar_t *)local_1e0.Data.AllocatorInstance.Data,iVar17);
            if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
            }
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < iVar18);
    }
    iVar16 = local_2a8.Data.ArrayNum + -1;
    if (local_2a8.Data.ArrayNum == 0) {
      iVar16 = 0;
    }
    ::FString::AppendChars(&local_298.Line,(wchar_t *)local_2a8.Data.AllocatorInstance.Data,iVar16);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
    pFVar10 = ::FString::FString(&local_108,L"\n");
    iVar18 = (pFVar10->Data).ArrayNum;
    iVar16 = iVar18 + -1;
    if (iVar18 == 0) {
      iVar16 = 0;
    }
    ::FString::AppendChars(&local_298.Line,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar16)
    ;
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    iVar16 = 0;
    if (0 < iVar7) {
      do {
        ::`anonymous_namespace'::DrawEQSItemDetails(&local_1b8,iVar16,&local_298);
        pFVar10 = ::FString::FString(&local_f8,L"\n");
        iVar17 = (pFVar10->Data).ArrayNum;
        iVar18 = iVar17 + -1;
        if (iVar17 == 0) {
          iVar18 = 0;
        }
        ::FString::AppendChars
                  (&local_298.Line,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar18);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < iVar7);
    }
  }
  pFVar4 = (FVisualLogLine *)(param_5->LogLines).AllocatorInstance.Data;
  if (((pFVar4 <= &local_298) && (&local_298 < pFVar4 + (param_5->LogLines).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (param_5->LogLines).ArrayNum;
  piVar1 = &(param_5->LogLines).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(param_5->LogLines).AllocatorInstance,piVar1);
  }
  (param_5->LogLines).ArrayNum = iVar7 + 1;
  pFVar14 = (param_5->LogLines).AllocatorInstance.Data + (longlong)iVar7 * 0x38;
  ::FString::FString((FString *)pFVar14,&local_298.Line);
  *(FName *)(pFVar14 + 0x10) = local_298.Category;
  pFVar14[0x18].field_0x0 = local_298.Verbosity.Value;
  *(int *)&pFVar14[0x1c].field_0x0 = local_298.UniqueId;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar14[0x20].field_0x0)->AllocatorInstance).
  Data = (FScriptContainerElement *)local_298.UserData;
  *(FName *)&pFVar14[0x28].field_0x0 = local_298.TagName;
  *(FColor_u_0 *)(pFVar14 + 0x30) = local_298.Color.field0_0x0;
  pFVar14[0x34].field_0x0 = local_298.bMonospace;
  if (local_298.Line.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Line.Data.AllocatorInstance.Data);
  }
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.AllocatorInstance.Data);
  }
  EQSDebug::FQueryData::~FQueryData(&local_1b8);
  return;
}

// QueryToBlobArray @ 146f64440

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
UEnvQueryDebugHelpers::QueryToBlobArray
          (FEnvQueryInstance *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  FQueryData local_98;
  
  local_98.Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Items.ArrayNum = 0;
  local_98.Items.ArrayMax = 0;
  local_98.Tests.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Tests.ArrayNum = 0;
  local_98.Tests.ArrayMax = 0;
  local_98.SolidSpheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.SolidSpheres.ArrayNum = 0;
  local_98.SolidSpheres.ArrayMax = 0;
  local_98.Texts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Texts.ArrayNum = 0;
  local_98.Texts.ArrayMax = 0;
  local_98.RenderDebugHelpers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.RenderDebugHelpers.ArrayNum = 0;
  local_98.RenderDebugHelpers.ArrayMax = 0;
  local_98.Options.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Options.ArrayNum = 0;
  local_98.Options.ArrayMax = 0;
  local_98.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Name.Data.ArrayNum = 0;
  local_98.Name.Data.ArrayMax = 0;
  QueryToDebugData(param_1,&local_98,10);
  DebugDataToBlobArray(&local_98,param_2,param_3);
  if (local_98.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Name.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_98.Options.AllocatorInstance.Data,local_98.Options.ArrayNum);
  if (local_98.Options.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Options.AllocatorInstance.Data);
  }
  DestructItems<EQSDebug::FDebugHelper,int>
            ((FDebugHelper *)local_98.RenderDebugHelpers.AllocatorInstance.Data,
             local_98.RenderDebugHelpers.ArrayNum);
  if ((FDebugHelper *)local_98.RenderDebugHelpers.AllocatorInstance.Data != (FDebugHelper *)0x0) {
    FMemory::Free(local_98.RenderDebugHelpers.AllocatorInstance.Data);
  }
  DestructItems<FDebugRenderSceneProxy::FText3d,int>
            ((FText3d *)local_98.Texts.AllocatorInstance.Data,local_98.Texts.ArrayNum);
  if ((FText3d *)local_98.Texts.AllocatorInstance.Data != (FText3d *)0x0) {
    FMemory::Free(local_98.Texts.AllocatorInstance.Data);
  }
  if (local_98.SolidSpheres.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.SolidSpheres.AllocatorInstance.Data);
  }
  DestructItems<EQSDebug::FTestData,int>
            ((FTestData *)local_98.Tests.AllocatorInstance.Data,local_98.Tests.ArrayNum);
  if ((FTestData *)local_98.Tests.AllocatorInstance.Data != (FTestData *)0x0) {
    FMemory::Free(local_98.Tests.AllocatorInstance.Data);
  }
  DestructItems<EQSDebug::FItemData,int>
            ((FItemData *)local_98.Items.AllocatorInstance.Data,local_98.Items.ArrayNum);
  if ((FItemData *)local_98.Items.AllocatorInstance.Data != (FItemData *)0x0) {
    FMemory::Free(local_98.Items.AllocatorInstance.Data);
  }
  return;
}

// QueryToDebugData @ 146f64570

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
UEnvQueryDebugHelpers::QueryToDebugData(FEnvQueryInstance *param_1,FQueryData *param_2,int param_3)

{
  int *piVar1;
  FItemData *pFVar2;
  longlong *plVar3;
  void *_Src;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ForAnyElementType _Src_00;
  TArray<EQSDebug::FTestData,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  UClass *pUVar12;
  FText *pFVar13;
  FString *pFVar14;
  longlong lVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  uint uVar19;
  UObject *pUVar20;
  ulonglong uVar21;
  uint uVar22;
  UObject *pUVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong local_res10;
  uint local_res20;
  undefined4 local_148;
  undefined4 local_144;
  FItemData local_140;
  FString local_108;
  FString local_f8;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  FString local_d0;
  FString local_c0;
  UObject *local_b0;
  TArray<EQSDebug::FTestData,TSizedDefaultAllocator<32>_> *local_a8;
  FName local_a0;
  void *local_98 [2];
  void *local_88 [2];
  longlong *local_78 [2];
  FString local_68;
  longlong *local_58 [3];
  
  pUVar23 = (UObject *)0x0;
  bVar6 = false;
  bVar9 = false;
  EQSDebug::FQueryData::Reset(param_2);
  FEQSSceneProxy::CollectEQSData
            ((FEnvQueryResult *)param_1,param_1,__real_3f800000,true,&param_2->SolidSpheres,
             &param_2->Texts,&param_2->RenderDebugHelpers);
  uVar19 = 0;
  if (0 < (param_1->ItemDetails).ArrayNum) {
    uVar19 = *(uint *)((param_1->ItemDetails).AllocatorInstance.Data + 8);
  }
  iVar11 = (param_1->QueryName).Data.ArrayNum;
  iVar10 = param_1->NumValidItems;
  if (param_3 < param_1->NumValidItems) {
    iVar10 = param_3;
  }
  uVar22 = iVar11 - 1;
  if (iVar11 == 0) {
    uVar22 = 0;
  }
  local_d8 = iVar10;
  ::FString::AssignRange
            (&param_2->Name,(wchar_t *)(param_1->QueryName).Data.AllocatorInstance.Data,uVar22);
  param_2->Id = (int)param_1->_padding_;
  TArray<EQSDebug::FItemData,TSizedDefaultAllocator<32>_>::Reset(&param_2->Items,iVar10);
  local_a8 = &param_2->Tests;
  TArray<EQSDebug::FTestData,TSizedDefaultAllocator<32>_>::Reset(local_a8,uVar19);
  param_2->NumValidItems = param_1->NumValidItems;
  pUVar12 = (UClass *)param_1->_padding_;
  local_b0 = (UObject *)0x0;
  pUVar20 = pUVar23;
  if (pUVar12 != (UClass *)0x0) {
    if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar12);
    }
    pUVar20 = (pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
    local_b0 = pUVar20;
    if (pUVar20 != (UObject *)0x0) {
      pUVar12 = UEnvQueryItemType::StaticClass();
      iVar11 = (int)pUVar12->_padding_;
      if ((iVar11 <= *(int *)(*(longlong *)&pUVar20->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar20->field_0x10 + 0x30) + (longlong)iVar11 * 8) ==
          &pUVar12->_padding_)) goto LAB_146f646d5;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                       ,0x93,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
LAB_146f646d5:
  local_res20 = 0;
  if (0 < iVar10) {
    do {
      uVar21 = 0;
      local_140.Desc.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.Desc.Data.ArrayNum = 0;
      local_140.Desc.Data.ArrayMax = 0;
      local_140.TestValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.TestValues.ArrayNum = 0;
      local_140.TestValues.ArrayMax = 0;
      local_140.TestScores.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.TestScores.ArrayNum = 0;
      local_140.TestScores.ArrayMax = 0;
      uVar22 = (uint)pUVar23;
      local_140.ItemIdx = uVar22;
      if (((int)param_1->_padding_ <= (int)uVar22) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar15 = (longlong)local_140.ItemIdx;
      local_140.TotalScore = *(float *)(param_1->_padding_ + (longlong)pUVar23 * 8);
      uVar25 = 0;
      if (local_140.ItemIdx < (int)param_1->_padding_) {
        uVar25 = (uint)~local_140.ItemIdx >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(*(longlong *)pUVar20 + 0x2c0))
                (pUVar20,local_88,
                 ((longlong)(*(int *)(param_1->_padding_ + 4 + lVar15 * 8) * 2) >> 1) +
                 param_1->_padding_);
      ::FString::PrintfImpl(&local_d0,L"[%d] %s");
      if (local_140.Desc.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Desc.Data.AllocatorInstance.Data);
      }
      local_140.Desc.Data.AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
      local_140.Desc.Data.ArrayNum = local_d0.Data.ArrayNum;
      local_140.Desc.Data.ArrayMax = local_d0.Data.ArrayMax;
      local_d0.Data.ArrayNum = 0;
      local_d0.Data.ArrayMax = 0;
      local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_88[0] != (void *)0x0) {
        FMemory::Free(local_88[0]);
      }
      if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
      if (local_140.TestValues.ArrayMax < (int)uVar19) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar19,&local_140.TestValues.AllocatorInstance,local_140.TestValues.ArrayNum,
                   &local_140.TestValues.ArrayMax);
      }
      if (local_140.TestScores.ArrayMax < (int)uVar19) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar19,&local_140.TestScores.AllocatorInstance,local_140.TestScores.ArrayNum,
                   &local_140.TestScores.ArrayMax);
      }
      uVar24 = uVar21;
      if (0 < (int)uVar19) {
        do {
          lVar15 = (longlong)local_140.ItemIdx;
          uVar22 = 0;
          if (local_140.ItemIdx < (param_1->ItemDetails).ArrayNum) {
            uVar22 = (uint)~local_140.ItemIdx >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar17 = (param_1->ItemDetails).AllocatorInstance.Data;
          iVar11 = (int)uVar21;
          if ((*(int *)(pFVar17 + lVar15 * 0x38 + 8) <= iVar11) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar16 = (longlong)local_140.ItemIdx;
          local_148 = *(undefined4 *)(uVar24 + *(longlong *)(pFVar17 + lVar15 * 0x38));
          uVar22 = 0;
          if (local_140.ItemIdx < (param_1->ItemDetails).ArrayNum) {
            uVar22 = (uint)~local_140.ItemIdx >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar17 = (param_1->ItemDetails).AllocatorInstance.Data;
          if ((*(int *)(pFVar17 + lVar16 * 0x38 + 0x18) <= iVar11) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_144 = *(undefined4 *)(uVar24 + *(longlong *)(pFVar17 + lVar16 * 0x38 + 0x10));
          if (((local_140.TestValues.AllocatorInstance.Data <= (FScriptContainerElement *)&local_148
               ) && ((FScriptContainerElement *)&local_148 <
                     local_140.TestValues.AllocatorInstance.Data +
                     (longlong)local_140.TestValues.ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar10 = local_140.TestValues.ArrayNum;
          if (local_140.TestValues.ArrayNum == local_140.TestValues.ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_140.TestValues.AllocatorInstance,
                                &local_140.TestValues.ArrayMax);
          }
          local_140.TestValues.ArrayNum = iVar10 + 1;
          *(undefined4 *)(local_140.TestValues.AllocatorInstance.Data + (longlong)iVar10 * 4) =
               local_148;
          if (((local_140.TestScores.AllocatorInstance.Data <= (FScriptContainerElement *)&local_144
               ) && ((FScriptContainerElement *)&local_144 <
                     local_140.TestScores.AllocatorInstance.Data +
                     (longlong)local_140.TestScores.ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar10 = local_140.TestScores.ArrayNum;
          if (local_140.TestScores.ArrayNum == local_140.TestScores.ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_140.TestScores.AllocatorInstance,
                                &local_140.TestScores.ArrayMax);
          }
          uVar21 = (ulonglong)(iVar11 + 1U);
          local_140.TestScores.ArrayNum = iVar10 + 1;
          *(undefined4 *)(local_140.TestScores.AllocatorInstance.Data + (longlong)iVar10 * 4) =
               local_144;
          uVar24 = uVar24 + 4;
          uVar22 = local_res20;
          iVar10 = local_d8;
        } while ((int)(iVar11 + 1U) < (int)uVar19);
      }
      pFVar2 = (FItemData *)(param_2->Items).AllocatorInstance.Data;
      if (((pFVar2 <= &local_140) && (&local_140 < pFVar2 + (param_2->Items).ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = (param_2->Items).ArrayNum;
      piVar1 = &(param_2->Items).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,(ForAnyElementType *)param_2,piVar1);
      }
      (param_2->Items).ArrayNum = iVar11 + 1;
      EQSDebug::FItemData::FItemData
                ((FItemData *)((param_2->Items).AllocatorInstance.Data + (longlong)iVar11 * 0x38),
                 &local_140);
      if (local_140.TestScores.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.TestScores.AllocatorInstance.Data);
      }
      if (local_140.TestValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.TestValues.AllocatorInstance.Data);
      }
      if (local_140.Desc.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Desc.Data.AllocatorInstance.Data);
      }
      local_res20 = uVar22 + 1;
      pUVar23 = (UObject *)(ulonglong)local_res20;
      pUVar20 = local_b0;
    } while ((int)local_res20 < iVar10);
  }
  uVar25 = 0;
  uVar19 = *(uint *)((longlong)&param_1->_padding_ + 4);
  uVar22 = 0;
  if ((int)uVar19 < (param_1->Options).ArrayNum) {
    uVar22 = ~uVar19 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar7 = local_a8;
  lVar15 = 0;
  lVar16 = (longlong)
           *(int *)((param_1->Options).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x30 + 0x10)
  ;
  if (0 < lVar16) {
    do {
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar19 = *(uint *)((longlong)&param_1->_padding_ + 4);
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      uVar22 = 0;
      if ((int)uVar19 < (param_1->Options).ArrayNum) {
        uVar22 = ~uVar19 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = (param_1->Options).AllocatorInstance.Data;
      uVar22 = 0;
      if ((int)uVar25 < *(int *)(pFVar17 + (longlong)(int)uVar19 * 0x30 + 0x10)) {
        uVar22 = ~uVar25 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar3 = *(longlong **)
                (*(longlong *)(pFVar17 + (longlong)(int)uVar19 * 0x30 + 8) + lVar15 * 8);
      pFVar13 = (FText *)(**(code **)(*plVar3 + 0x2b8))(plVar3,local_78);
      pFVar14 = FText::ToString(pFVar13);
      if (&local_108 != pFVar14) {
        iVar11 = (pFVar14->Data).ArrayNum;
        pFVar17 = (pFVar14->Data).AllocatorInstance.Data;
        local_108.Data.ArrayNum = iVar11;
        if ((iVar11 == 0) && (local_108.Data.ArrayMax == 0)) {
          local_108.Data.ArrayNum = 0;
          local_108.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar11,local_108.Data.ArrayMax,(ForAnyElementType *)&local_108,iVar11,
                     &local_108.Data.ArrayMax);
          if (iVar11 != 0) {
            memcpy(local_108.Data.AllocatorInstance.Data,pFVar17,(longlong)iVar11 * 2);
          }
        }
      }
      if (local_78[0] != (longlong *)0x0) {
        (**(code **)(*local_78[0] + 0x10))();
      }
      pFVar13 = (FText *)(**(code **)(*plVar3 + 0x2c0))(plVar3,local_58);
      pFVar14 = FText::ToString(pFVar13);
      pFVar14 = ::FString::Replace(pFVar14,&local_68,L"\n",L", ",IgnoreCase);
      if (&local_f8 != pFVar14) {
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        local_f8.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
        (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.Data.ArrayNum = (pFVar14->Data).ArrayNum;
        local_f8.Data.ArrayMax = (pFVar14->Data).ArrayMax;
        (pFVar14->Data).ArrayNum = 0;
        (pFVar14->Data).ArrayMax = 0;
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
      pFVar17 = (pTVar7->AllocatorInstance).Data;
      if (((pFVar17 <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 < pFVar17 + (longlong)pTVar7->ArrayMax * 0x20)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = pTVar7->ArrayNum;
      if (iVar11 == pTVar7->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
      }
      pFVar17 = (pTVar7->AllocatorInstance).Data;
      pTVar7->ArrayNum = iVar11 + 1;
      pFVar17 = pFVar17 + (longlong)iVar11 * 0x20;
      ::FString::FString((FString *)pFVar17,&local_108);
      ::FString::FString((FString *)(pFVar17 + 0x10),&local_f8);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      uVar25 = uVar25 + 1;
      lVar15 = lVar15 + 1;
    } while (lVar15 < lVar16);
  }
  uVar19 = 0;
  param_2->UsedOption = *(int *)((longlong)&param_1->_padding_ + 4);
  local_res10 = (longlong)(param_1->Options).ArrayNum;
  if (0 < local_res10) {
    lVar15 = 0;
    do {
      uVar22 = 0;
      if ((int)uVar19 < (param_1->Options).ArrayNum) {
        uVar22 = ~uVar19 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar16 = *(longlong *)((param_1->Options).AllocatorInstance.Data + lVar15);
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0 = *(int *)(lVar16 + 0x38);
      lVar18 = (longlong)local_e0;
      _Src = *(void **)(lVar16 + 0x30);
      if (local_e0 == 0) {
        local_dc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_e0,0,&local_e8,local_e0,&local_dc);
        memcpy(local_e8.Data,_Src,lVar18 * 2);
      }
      iVar11 = local_e0;
      _Src_00.Data = local_e8.Data;
      if ((local_e0 == 0) || (local_e0 + -1 < 1)) {
        uVar22 = 0;
        if ((int)uVar19 < (param_1->Options).ArrayNum) {
          uVar22 = ~uVar19 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar9 = true;
        local_a0 = *(FName *)(*(longlong *)((param_1->Options).AllocatorInstance.Data + lVar15) +
                             0x18);
        ::FName::ToString(&local_a0,(FString *)local_98);
        pFVar17 = (FScriptContainerElement *)local_98;
      }
      else {
        bVar6 = true;
        local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c0.Data.ArrayNum = local_e0;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_e0,0,(ForAnyElementType *)&local_c0,local_e0,&local_c0.Data.ArrayMax);
        memcpy(local_c0.Data.AllocatorInstance.Data,_Src_00.Data,(longlong)iVar11 * 2);
        pFVar17 = (FScriptContainerElement *)&local_c0;
      }
      pFVar4 = (param_2->Options).AllocatorInstance.Data;
      piVar1 = &(param_2->Options).ArrayMax;
      if (((pFVar4 <= pFVar17) && (pFVar17 < pFVar4 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = (param_2->Options).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(param_2->Options).AllocatorInstance,piVar1);
      }
      (param_2->Options).ArrayNum = iVar11 + 1;
      ::FString::FString((FString *)
                         ((param_2->Options).AllocatorInstance.Data + (longlong)iVar11 * 0x10),
                         (FString *)pFVar17);
      if ((bVar9) && (bVar9 = false, local_98[0] != (void *)0x0)) {
        FMemory::Free(local_98[0]);
      }
      if ((bVar6) &&
         (bVar6 = false, local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      uVar19 = uVar19 + 1;
      lVar15 = lVar15 + 0x30;
      local_res10 = local_res10 + -1;
    } while (local_res10 != 0);
  }
  return;
}

// StaticRegisterNativesUEnvQueryDebugHelpers @ 146f76c90

void __cdecl UEnvQueryDebugHelpers::StaticRegisterNativesUEnvQueryDebugHelpers(void)

{
  return;
}

