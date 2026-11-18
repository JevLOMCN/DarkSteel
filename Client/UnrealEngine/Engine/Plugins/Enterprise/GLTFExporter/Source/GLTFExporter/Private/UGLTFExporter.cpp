// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 14

// StaticClass @ 14e5b5540

UClass * __cdecl UGLTFExporter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFExporter",
               &Z_Registration_Info_UClass_UGLTFExporter.InnerSingleton,
               StaticRegisterNativesUGLTFExporter,0x78,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGLTFExporter>,InternalVTableHelperCtorCaller<UGLTFExporter>,
               local_res8,UExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFExporter.InnerSingleton;
}

// UGLTFExporter @ 14e5d3100

UGLTFExporter * __thiscall UGLTFExporter::UGLTFExporter(UGLTFExporter *this,FVTableHelper *param_1)

{
  UExporter::UExporter((UExporter *)this,param_1);
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  return this;
}

// UGLTFExporter @ 14e5d3130

/* WARNING: Removing unreachable block (ram,0x00014e5d33f3) */
/* WARNING: Removing unreachable block (ram,0x00014e5d3247) */
/* WARNING: Removing unreachable block (ram,0x00014e5d331d) */
/* WARNING: Removing unreachable block (ram,0x00014e5d34c9) */

UGLTFExporter * __thiscall
UGLTFExporter::UGLTFExporter(UGLTFExporter *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UGLTFExporter *pUVar4;
  undefined8 *puVar5;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  UExporter::UExporter((UExporter *)this,param_1);
  *(uint *)&this->field_0x60 = *(uint *)&this->field_0x60 & 0xfffffffe;
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x58 = 0;
  ::FString::FString(&local_58,L"gltf");
  if (((*(FString **)&this->field_0x38 <= &local_58) &&
      (&local_58 < *(FString **)&this->field_0x38 + *(int *)&this->field_0x44)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UGLTFExporter *)(*pcVar1)();
    return pUVar4;
  }
  iVar3 = *(int *)&this->field_0x40;
  if (iVar3 == *(int *)&this->field_0x44) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->field_0x38,(int *)&this->field_0x44);
  }
  *(int *)&this->field_0x40 = iVar3 + 1;
  puVar5 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)&this->field_0x38);
  *puVar5 = 0;
  *puVar5 = local_58.Data.AllocatorInstance.Data;
  *(int *)(puVar5 + 1) = local_58.Data.ArrayNum;
  *(int *)((longlong)puVar5 + 0xc) = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_48,L"GL Transmission Format");
  if (((*(FString **)&this->field_0x48 <= &local_48) &&
      (&local_48 < *(FString **)&this->field_0x48 + *(int *)&this->field_0x54)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UGLTFExporter *)(*pcVar1)();
    return pUVar4;
  }
  iVar3 = *(int *)&this->field_0x50;
  if (iVar3 == *(int *)&this->field_0x54) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->field_0x48,(int *)&this->field_0x54);
  }
  *(int *)&this->field_0x50 = iVar3 + 1;
  puVar5 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)&this->field_0x48);
  *puVar5 = 0;
  *puVar5 = local_48.Data.AllocatorInstance.Data;
  *(int *)(puVar5 + 1) = local_48.Data.ArrayNum;
  *(int *)((longlong)puVar5 + 0xc) = local_48.Data.ArrayMax;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_38,L"glb");
  if (((*(FString **)&this->field_0x38 <= &local_38) &&
      (&local_38 < *(FString **)&this->field_0x38 + *(int *)&this->field_0x44)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UGLTFExporter *)(*pcVar1)();
    return pUVar4;
  }
  iVar3 = *(int *)&this->field_0x40;
  if (iVar3 == *(int *)&this->field_0x44) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->field_0x38,(int *)&this->field_0x44);
  }
  *(int *)&this->field_0x40 = iVar3 + 1;
  puVar5 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)&this->field_0x38);
  *puVar5 = 0;
  *puVar5 = local_38.Data.AllocatorInstance.Data;
  *(int *)(puVar5 + 1) = local_38.Data.ArrayNum;
  *(int *)((longlong)puVar5 + 0xc) = local_38.Data.ArrayMax;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_28,L"GL Transmission Format (Binary)");
  if (((*(FString **)&this->field_0x48 <= &local_28) &&
      (&local_28 < *(FString **)&this->field_0x48 + *(int *)&this->field_0x54)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UGLTFExporter *)(*pcVar1)();
    return pUVar4;
  }
  iVar3 = *(int *)&this->field_0x50;
  if (iVar3 == *(int *)&this->field_0x54) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->field_0x48,(int *)&this->field_0x54);
  }
  *(int *)&this->field_0x50 = iVar3 + 1;
  puVar5 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)&this->field_0x48);
  *puVar5 = 0;
  *puVar5 = local_28.Data.AllocatorInstance.Data;
  *(int *)(puVar5 + 1) = local_28.Data.ArrayNum;
  *(int *)((longlong)puVar5 + 0xc) = local_28.Data.ArrayMax;
  return this;
}

// ~UGLTFExporter @ 14e5d7f60

void __thiscall UGLTFExporter::~UGLTFExporter(UGLTFExporter *this)

{
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  UExporter::~UExporter((UExporter *)this);
  return;
}

// AddObject @ 14e5de7b0

bool __thiscall
UGLTFExporter::AddObject(UGLTFExporter *this,FGLTFContainerBuilder *param_1,UObject *param_2)

{
  return false;
}

// ExportBinary @ 14e5f0f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UGLTFExporter::ExportBinary
          (UGLTFExporter *this,UObject *param_1,wchar_t *param_2,FArchive *param_3,
          FFeedbackContext *param_4,int param_5,uint param_6)

{
  FScriptContainerElement *_Src;
  int iVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UGLTFExportOptions *pUVar7;
  FString *pFVar8;
  longlong lVar9;
  undefined1 auStackY_b08 [32];
  FString local_ac8;
  FGCObject local_ab8;
  UGLTFExportOptions *local_aa8;
  FGLTFExporterAnalytics local_aa0;
  LARGE_INTEGER local_a78;
  LARGE_INTEGER local_a70;
  FString local_a68;
  FString local_a58;
  undefined1 local_a48 [32];
  void *local_a28;
  undefined4 local_a20;
  uint local_a1c;
  undefined4 local_a18;
  undefined4 local_a14;
  ForElementType<FSetElementId> local_a08;
  int local_a00;
  FGLTFConvertBuilder local_9f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b08;
  lVar9 = *(longlong *)&this->field_0x68;
  if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x60) != 0)) {
    pUVar5 = UGLTFExportOptions::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)(lVar9 + 0x60),pUVar5);
    if ((bVar2) &&
       (pUVar7 = *(UGLTFExportOptions **)(lVar9 + 0x60), pUVar7 != (UGLTFExportOptions *)0x0))
    goto LAB_14e5f0f81;
  }
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = NewObject<UGLTFExportOptions>(pUVar6);
  if (pUVar7 == (UGLTFExportOptions *)0x0) {
    return false;
  }
LAB_14e5f0f81:
  QueryPerformanceCounter(&local_a70);
  local_ab8.bCanMakeInitialReferences = false;
  local_ab8.bReferenceAdded = false;
  local_ab8._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject(&local_ab8);
  local_ab8._padding_ = (longlong)&___7__TGCObjectScopeGuard___CBVUObject____6B_;
  local_aa8 = pUVar7;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_a48._0_8_ = (FScriptContainerElement *)0x0;
  local_a48._8_8_ = 0;
  local_a28 = (void *)0x0;
  local_a20 = 0;
  local_a1c = 0x80;
  local_a18 = 0xffffffff;
  local_a14 = 0;
  local_a08 = (ForElementType<FSetElementId>)0x0;
  local_a00 = 0;
  if (*(longlong *)&this->field_0x68 == 0) {
    pFVar8 = &UExporter::CurrentFilename;
  }
  else {
    pFVar8 = (FString *)(*(longlong *)&this->field_0x68 + 0x38);
  }
  local_ac8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ac8.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  lVar9 = (longlong)local_ac8.Data.ArrayNum;
  _Src = (pFVar8->Data).AllocatorInstance.Data;
  if (local_ac8.Data.ArrayNum == 0) {
    local_ac8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_ac8.Data.ArrayNum,0,(ForAnyElementType *)&local_ac8,local_ac8.Data.ArrayNum
               ,&local_ac8.Data.ArrayMax);
    memcpy(local_ac8.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
  }
  FPaths::GetCleanFilename(&local_a58,&local_ac8);
  FPaths::GetPath(&local_a68,&local_ac8);
  FGLTFConvertBuilder::FGLTFConvertBuilder
            (&local_9f8,&local_a58,pUVar7,
             (TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)local_a48);
  DestructItems<FString,int>((FString *)local_9f8._padding_,(int)local_9f8._padding_);
  local_9f8._padding_._0_4_ = 0;
  if (local_9f8._padding_._4_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&local_9f8._padding_,0,
               (int *)((longlong)&local_9f8._padding_ + 4));
  }
  DestructItems<FString,int>((FString *)local_9f8._padding_,(int)local_9f8._padding_);
  local_9f8._padding_._0_4_ = 0;
  if (local_9f8._padding_._4_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&local_9f8._padding_,0,
               (int *)((longlong)&local_9f8._padding_ + 4));
  }
  DestructItems<FString,int>((FString *)local_9f8._padding_,(int)local_9f8._padding_);
  local_9f8._padding_._0_4_ = 0;
  if (local_9f8._padding_._4_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&local_9f8._padding_,0,
               (int *)((longlong)&local_9f8._padding_ + 4));
  }
  cVar3 = (**(code **)(*(longlong *)this + 800))(this);
  bVar2 = false;
  if (cVar3 != '\0') {
    FGLTFTaskBuilder::ProcessSlowTasks((FGLTFTaskBuilder *)&local_9f8,param_4);
    FGLTFTaskBuilder::ProcessSlowTasks((FGLTFTaskBuilder *)&local_9f8,(FFeedbackContext *)0x0);
    if ((char)local_9f8._padding_ == '\0') {
      FGLTFJsonBuilder::WriteJsonArchive((FGLTFJsonBuilder *)&local_9f8,param_3);
    }
    else {
      FGLTFContainerBuilder::WriteGlbArchive((FGLTFContainerBuilder *)&local_9f8,param_3);
    }
    bVar2 = FGLTFFileBuilder::WriteExternalFiles((FGLTFFileBuilder *)&local_9f8,&local_a68,0);
  }
  bVar4 = FApp::IsUnattended();
  if ((bVar4) ||
     ((*(longlong *)&this->field_0x68 != 0 &&
      (*(char *)(*(longlong *)&this->field_0x68 + 0x4b) != '\0')))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  QueryPerformanceCounter(&local_a78);
  if (param_1 == (UObject *)0x0) {
    local_aa0.AssetType = (UClass *)0x0;
  }
  else {
    local_aa0.AssetType = *(UClass **)&param_1->field_0x10;
  }
  local_aa0.ExportOptions = (UGLTFExportOptions *)local_9f8._padding_;
  local_aa0.bExportAsGLB = (bool)(char)local_9f8._padding_;
  local_aa0.bSelectedOnly =
       local_9f8.SelectedActors.Elements._8_4_ != local_9f8.SelectedActors.Elements._52_4_;
  local_aa0.bInitiatedByTask = true;
  local_aa0.ExportDuration =
       (double)(ulonglong)(local_a78.QuadPart - (longlong)local_a70) *
       FGenericPlatformTime::SecondsPerCycle64;
  local_aa0.Builder = &local_9f8;
  local_aa0.bExportAutomated = bVar4;
  local_aa0.bExportSuccessful = bVar2;
  FGLTFExporterAnalytics::Send(&local_aa0);
  FApp::IsUnattended();
  FGLTFConvertBuilder::~FGLTFConvertBuilder(&local_9f8);
  if (local_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a68.Data.AllocatorInstance.Data);
  }
  if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a58.Data.AllocatorInstance.Data);
  }
  if (local_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ac8.Data.AllocatorInstance.Data);
  }
  local_a00 = 0;
  if (local_a08 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a08);
  }
  iVar1 = SUB84(local_a48._8_8_,4);
  local_a48._8_8_ = local_a48._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_a48,0,(int *)(local_a48 + 0xc));
  }
  local_a14 = 0;
  local_a20 = 0;
  local_a18 = 0xffffffff;
  if (0x80 < local_a1c) {
    local_a1c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a48 + 0x10),0);
  }
  if (local_a28 != (void *)0x0) {
    FMemory::Free(local_a28);
  }
  if ((FScriptContainerElement *)local_a48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a48._0_8_);
  }
  local_ab8._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject(&local_ab8);
  return bVar2;
}

// ExportToGLTF @ 14e5f1380

bool __cdecl
UGLTFExporter::ExportToGLTF
          (UObject *param_1,FString *param_2,UGLTFExportOptions *param_3,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_4)

{
  bool bVar1;
  FGLTFExportMessages local_38;
  
  local_38.Suggestions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Suggestions.ArrayNum = 0;
  local_38.Suggestions.ArrayMax = 0;
  local_38.Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Warnings.ArrayNum = 0;
  local_38.Warnings.ArrayMax = 0;
  local_38.Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Errors.ArrayNum = 0;
  local_38.Errors.ArrayMax = 0;
  bVar1 = ExportToGLTF(param_1,param_2,param_3,param_4,&local_38);
  DestructItems<FString,int>
            ((FString *)local_38.Errors.AllocatorInstance.Data,local_38.Errors.ArrayNum);
  if (local_38.Errors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Errors.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_38.Warnings.AllocatorInstance.Data,local_38.Warnings.ArrayNum);
  if (local_38.Warnings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Warnings.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_38.Suggestions.AllocatorInstance.Data,local_38.Suggestions.ArrayNum);
  if (local_38.Suggestions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Suggestions.AllocatorInstance.Data);
  }
  return bVar1;
}

// ExportToGLTF @ 14e5f1420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e5f1822) */
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
UGLTFExporter::ExportToGLTF
          (UObject *param_1,FString *param_2,UGLTFExportOptions *param_3,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_4,
          FGLTFExportMessages *param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  UExporter *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_ae8 [32];
  FString *local_ac8;
  FScriptContainerElement *local_ac0;
  longlong local_ab8;
  longlong local_ab0;
  undefined8 local_aa8;
  FString local_a98;
  FString local_a88;
  FGLTFExporterAnalytics local_a78;
  LARGE_INTEGER local_a50;
  LARGE_INTEGER local_a48;
  FName local_a40;
  FString local_a38;
  FString local_a28;
  FString local_a18;
  undefined1 local_a08 [72];
  TArray<FString,TSizedDefaultAllocator<32>_> local_9c0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_9b0 [115];
  int local_278;
  int local_24c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_ae8;
  if ((param_1 == (UObject *)0x0) &&
     (param_1 = (UObject *)UEngine::GetCurrentPlayWorld(GEngine,(UWorld *)0x0),
     (UWorld *)param_1 == (UWorld *)0x0)) {
    ::FString::FString(&local_a98,L"No object to export");
    pFVar11 = (param_5->Errors).AllocatorInstance.Data;
    if ((pFVar11 <= (FScriptContainerElement *)&local_a98) &&
       (lVar10 = (longlong)(param_5->Errors).ArrayMax,
       (FScriptContainerElement *)&local_a98 < pFVar11 + lVar10 * 0x10)) {
      local_ab0 = (longlong)(param_5->Errors).ArrayNum;
      local_aa8 = 0x10;
      local_ac8 = &local_a98;
      local_ac0 = pFVar11;
      local_ab8 = lVar10;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar7 = (param_5->Errors).ArrayNum;
    piVar1 = &(param_5->Errors).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(param_5->Errors).AllocatorInstance,piVar1);
      (param_5->Errors).ArrayNum = iVar7 + 1;
    }
    else {
      (param_5->Errors).ArrayNum = iVar7 + 1;
    }
    pFVar11 = (param_5->Errors).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_a98.Data.AllocatorInstance.Data;
    local_a98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar11 + 8) = local_a98.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_a98.Data.ArrayMax;
    local_a98.Data.ArrayNum = 0;
    local_a98.Data.ArrayMax = 0;
    local_a38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    pUVar8 = UExporter::FindExporter(param_1,L"gltf");
    if (pUVar8 != (UExporter *)0x0) {
      pUVar9 = StaticClass();
      iVar7 = (int)pUVar9->_padding_;
      if ((iVar7 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
          &pUVar9->_padding_)) {
        QueryPerformanceCounter(&local_a48);
        FPaths::GetCleanFilename(&local_a18,param_2);
        FPaths::GetPath(&local_a28,param_2);
        FGLTFConvertBuilder::FGLTFConvertBuilder
                  ((FGLTFConvertBuilder *)local_a08,&local_a18,param_3,param_4);
        cVar5 = (**(code **)(pUVar8->_padding_ + 800))(pUVar8,local_a08);
        TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                  (&param_5->Suggestions,
                   (TArray<FString,TSizedDefaultAllocator<32>_> *)(local_a08 + 0x38));
        TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&param_5->Warnings,&local_9c0);
        TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&param_5->Errors,local_9b0);
        bVar3 = false;
        if (cVar5 != '\0') {
          FGLTFTaskBuilder::ProcessSlowTasks((FGLTFTaskBuilder *)local_a08,(FFeedbackContext *)0x0);
          bVar3 = FGLTFContainerBuilder::WriteAllFiles
                            ((FGLTFContainerBuilder *)local_a08,&local_a28,0);
        }
        bVar6 = FApp::IsUnattended();
        QueryPerformanceCounter(&local_a50);
        if ((UWorld *)param_1 == (UWorld *)0x0) {
          local_a78.AssetType = (UClass *)0x0;
        }
        else {
          local_a78.AssetType = (UClass *)((UWorld *)param_1)->_padding_;
        }
        local_a78.ExportOptions = (UGLTFExportOptions *)local_a08._24_8_;
        local_a78.bExportAsGLB = (bool)local_a08[0x10];
        local_a78.bSelectedOnly = local_278 != local_24c;
        local_a78.bInitiatedByTask = false;
        local_a78.ExportDuration =
             (double)(ulonglong)(local_a50.QuadPart - (longlong)local_a48) *
             FGenericPlatformTime::SecondsPerCycle64;
        local_a78.Builder = (FGLTFConvertBuilder *)local_a08;
        local_a78.bExportAutomated = bVar6;
        local_a78.bExportSuccessful = bVar3;
        FGLTFExporterAnalytics::Send(&local_a78);
        FGLTFConvertBuilder::~FGLTFConvertBuilder((FGLTFConvertBuilder *)local_a08);
        if (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a28.Data.AllocatorInstance.Data);
        }
        if (local_a18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return bVar3;
        }
        FMemory::Free(local_a18.Data.AllocatorInstance.Data);
        return bVar3;
      }
    }
    local_a40 = *(FName *)(((UWorld *)param_1)->_padding_ + 0x18);
    ::FName::ToString(&local_a40,&local_a38);
    ::FString::PrintfImpl(&local_a88,L"Couldn\'t find exporter for object of type %s");
    pFVar11 = (param_5->Errors).AllocatorInstance.Data;
    if ((pFVar11 <= (FScriptContainerElement *)&local_a88) &&
       (lVar10 = (longlong)(param_5->Errors).ArrayMax,
       (FScriptContainerElement *)&local_a88 < pFVar11 + lVar10 * 0x10)) {
      local_ab0 = (longlong)(param_5->Errors).ArrayNum;
      local_aa8 = 0x10;
      local_ac8 = &local_a88;
      local_ac0 = pFVar11;
      local_ab8 = lVar10;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar7 = (param_5->Errors).ArrayNum;
    piVar1 = &(param_5->Errors).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(param_5->Errors).AllocatorInstance,piVar1);
      (param_5->Errors).ArrayNum = iVar7 + 1;
    }
    else {
      (param_5->Errors).ArrayNum = iVar7 + 1;
    }
    pFVar11 = (param_5->Errors).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_a88.Data.AllocatorInstance.Data;
    *(int *)(pFVar11 + 8) = local_a88.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_a88.Data.ArrayMax;
    local_a88.Data.ArrayNum = 0;
    local_a88.Data.ArrayMax = 0;
    local_a88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a38.Data.AllocatorInstance.Data);
  }
  return false;
}

// GetExportOptions @ 14e5f5e30

UGLTFExportOptions * __thiscall UGLTFExporter::GetExportOptions(UGLTFExporter *this)

{
  longlong lVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UGLTFExportOptions *pUVar5;
  
  lVar1 = *(longlong *)&this->field_0x68;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x60) != 0)) {
    pUVar3 = UGLTFExportOptions::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)(lVar1 + 0x60),pUVar3);
    if ((bVar2) && (*(UGLTFExportOptions **)(lVar1 + 0x60) != (UGLTFExportOptions *)0x0)) {
      return *(UGLTFExportOptions **)(lVar1 + 0x60);
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = NewObject<UGLTFExportOptions>(pUVar4);
  return pUVar5;
}

// GetFilePath @ 14e5f6280

FString * __thiscall UGLTFExporter::GetFilePath(UGLTFExporter *this,FString *__return_storage_ptr__)

{
  if (*(longlong *)&this->field_0x68 != 0) {
    ::FString::FString(__return_storage_ptr__,(FString *)(*(longlong *)&this->field_0x68 + 0x38));
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,&UExporter::CurrentFilename);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e5fc560

UClass * __cdecl UGLTFExporter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFExporter",
               &Z_Registration_Info_UClass_UGLTFExporter.InnerSingleton,
               StaticRegisterNativesUGLTFExporter,0x78,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGLTFExporter>,InternalVTableHelperCtorCaller<UGLTFExporter>,
               local_res8,UExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFExporter.InnerSingleton;
}

// IsAutomated @ 14e601800

bool __thiscall UGLTFExporter::IsAutomated(UGLTFExporter *this)

{
  bool bVar1;
  
  bVar1 = FApp::IsUnattended();
  if ((!bVar1) &&
     ((*(longlong *)&this->field_0x68 == 0 ||
      (*(char *)(*(longlong *)&this->field_0x68 + 0x4b) == '\0')))) {
    return false;
  }
  return true;
}

// StaticRegisterNativesUGLTFExporter @ 14e614cc0

void __cdecl UGLTFExporter::StaticRegisterNativesUGLTFExporter(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UGLTFExporter_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execExportToGLTF @ 14e6209a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UGLTFExporter::execExportToGLTF(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  bool bVar3;
  FGLTFExportMessages *pFVar4;
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *pTVar5;
  undefined1 auStackY_f8 [32];
  UGLTFExportOptions *local_c8;
  UObject *local_c0;
  FString local_b8;
  FGLTFExportMessages local_a8;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_c0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_c8 = (UGLTFExportOptions *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_a8.Suggestions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Suggestions.ArrayNum = 0;
  local_a8.Suggestions.ArrayMax = 0;
  pTVar5 = (TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)local_78;
  if ((TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)
      param_2->MostRecentPropertyAddress !=
      (TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)0x0) {
    pTVar5 = (TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)
             param_2->MostRecentPropertyAddress;
  }
  local_a8.Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Warnings.ArrayNum = 0;
  local_a8.Warnings.ArrayMax = 0;
  local_a8.Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Errors.ArrayNum = 0;
  local_a8.Errors.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pFVar4 = &local_a8;
  if ((FGLTFExportMessages *)param_2->MostRecentPropertyAddress != (FGLTFExportMessages *)0x0) {
    pFVar4 = (FGLTFExportMessages *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = ExportToGLTF(local_c0,&local_b8,local_c8,pTVar5,pFVar4);
  *(bool *)param_3 = bVar3;
  DestructItems<FString,int>
            ((FString *)local_a8.Errors.AllocatorInstance.Data,local_a8.Errors.ArrayNum);
  if (local_a8.Errors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Errors.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.Warnings.AllocatorInstance.Data,local_a8.Warnings.ArrayNum);
  if (local_a8.Warnings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Warnings.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.Suggestions.AllocatorInstance.Data,local_a8.Suggestions.ArrayNum);
  if (local_a8.Suggestions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Suggestions.AllocatorInstance.Data);
  }
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

