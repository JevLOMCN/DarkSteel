// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 21

// FProjectDescriptor @ 141e0e120

/* WARNING: Enum "Type": Some values do not have unique names */

FProjectDescriptor * __thiscall FProjectDescriptor::FProjectDescriptor(FProjectDescriptor *this)

{
  (this->EngineAssociation).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineAssociation).Data.ArrayNum = 0;
  (this->EngineAssociation).Data.ArrayMax = 0;
  (this->Category).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Category).Data.ArrayNum = 0;
  (this->Category).Data.ArrayMax = 0;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  (this->Modules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modules).ArrayNum = 0;
  (this->Modules).ArrayMax = 0;
  (this->Plugins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Plugins).ArrayNum = 0;
  (this->Plugins).ArrayMax = 0;
  (this->TargetPlatforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetPlatforms).ArrayNum = 0;
  (this->TargetPlatforms).ArrayMax = 0;
  *(undefined8 *)&(this->PreBuildSteps).HostPlatformToCommands = 0;
  *(undefined8 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x8 = 0;
  *(undefined8 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x20 = 0;
  *(undefined4 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x28 = 0;
  *(undefined4 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x2c = 0x80;
  *(undefined4 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x34 = 0;
  *(undefined4 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x40 = 0;
  *(undefined4 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x48 = 0;
  *(undefined8 *)&(this->PostBuildSteps).HostPlatformToCommands = 0;
  *(undefined8 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x8 = 0;
  *(undefined8 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x20 = 0;
  *(undefined4 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x28 = 0;
  *(undefined4 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x2c = 0x80;
  *(undefined4 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x34 = 0;
  *(undefined4 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x40 = 0;
  *(undefined4 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x48 = 0;
  (this->AdditionalPluginDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalPluginDirectories).ArrayNum = 0;
  (this->AdditionalPluginDirectories).ArrayMax = 0;
  (this->AdditionalRootDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalRootDirectories).ArrayNum = 0;
  (this->AdditionalRootDirectories).ArrayMax = 0;
  this->EpicSampleNameHash = 0;
  this->bIsEnterpriseProject = false;
  this->bDisableEnginePluginsByDefault = false;
  this->FileVersion = Latest;
  return this;
}

// ~FProjectDescriptor @ 141e0f8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FProjectDescriptor::~FProjectDescriptor(FProjectDescriptor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FString,int>
            ((FString *)(this->AdditionalRootDirectories).AllocatorInstance.Data,
             (this->AdditionalRootDirectories).ArrayNum);
  pFVar1 = (this->AdditionalRootDirectories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->AdditionalPluginDirectories).AllocatorInstance.Data,
             (this->AdditionalPluginDirectories).ArrayNum);
  pFVar1 = (this->AdditionalPluginDirectories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x48 = 0;
  pvVar2 = *(void **)&(this->PostBuildSteps).HostPlatformToCommands.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PostBuildSteps);
  *(undefined4 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x48 = 0;
  pvVar2 = *(void **)&(this->PreBuildSteps).HostPlatformToCommands.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PreBuildSteps);
  pFVar1 = (this->TargetPlatforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPluginReferenceDescriptor,int>
            ((FPluginReferenceDescriptor *)(this->Plugins).AllocatorInstance.Data,
             (this->Plugins).ArrayNum);
  pFVar1 = (this->Plugins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FModuleDescriptor,int>
            ((FModuleDescriptor *)(this->Modules).AllocatorInstance.Data,(this->Modules).ArrayNum);
  pFVar1 = (this->Modules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Category).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EngineAssociation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 141e12b40

bool __thiscall
`FProjectDescriptor::Read'::__l29::<lambda_1>::operator()(void *this,wchar_t *param_1,bool param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType _Src;
  int iVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  FString local_28;
  FString local_18;
  
  if (param_2) {
    pFVar4 = ::FString::FString(&local_18,param_1);
    FPaths::GetBaseFilename(&local_28,pFVar4,true);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pFVar2 = *(ForAnyElementType **)this;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    iVar3 = *(int *)&pFVar2[1].Data;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar2,piVar1);
    }
    _Src.Data = local_28.Data.AllocatorInstance.Data;
    *(int *)&pFVar2[1].Data = iVar3 + 1;
    pFVar5 = pFVar2->Data + (longlong)iVar3 * 0x10;
    *(undefined8 *)pFVar5 = 0;
    *(int *)(pFVar5 + 8) = local_28.Data.ArrayNum;
    if (local_28.Data.ArrayNum == 0) {
      *(int *)(pFVar5 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar5,local_28.Data.ArrayNum,
                 (int *)(pFVar5 + 0xc));
      memcpy(*(void **)pFVar5,_Src.Data,(longlong)local_28.Data.ArrayNum * 2);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// AddPluginDirectory @ 141e146b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FProjectDescriptor::AddPluginDirectory(FProjectDescriptor *this,FString *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  IFileManager *pIVar10;
  FString *pFVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  void *local_58 [2];
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  pIVar10 = IFileManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar10 + 0x108);
  pFVar11 = FPaths::ProjectPluginsDir(&local_28);
  pwVar13 = L"";
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  puVar12 = (undefined8 *)(*pcVar2)(pIVar10,local_38,pwVar14);
  iVar9 = *(int *)(puVar12 + 1) + -1;
  if (*(int *)(puVar12 + 1) == 0) {
    iVar9 = 0;
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)*puVar12;
  }
  bVar4 = false;
  bVar7 = false;
  bVar6 = ::FString::StartsWith(param_1,pwVar14,iVar9,IgnoreCase);
  if (bVar6) {
LAB_141e147ad:
    bVar6 = true;
    bVar5 = true;
    if (!bVar7) goto LAB_141e147c7;
  }
  else {
    pIVar10 = IFileManager::Get();
    pcVar2 = *(code **)((longlong)*pIVar10 + 0x108);
    pFVar11 = FPaths::EnginePluginsDir(&local_48);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    puVar12 = (undefined8 *)(*pcVar2)(pIVar10,local_58,pwVar14);
    iVar9 = *(int *)(puVar12 + 1) + -1;
    if (*(int *)(puVar12 + 1) == 0) {
      iVar9 = 0;
    }
    else {
      pwVar13 = (wchar_t *)*puVar12;
    }
    bVar4 = true;
    bVar7 = true;
    bVar6 = ::FString::StartsWith(param_1,pwVar13,iVar9,IgnoreCase);
    if (bVar6) goto LAB_141e147ad;
    bVar4 = true;
    bVar5 = false;
  }
  bVar6 = bVar5;
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
LAB_141e147c7:
  if ((bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (!bVar6) {
    this_00 = &this->AdditionalPluginDirectories;
    bVar7 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>(this_00,param_1);
    if (!bVar7) {
      pFVar3 = (this_00->AllocatorInstance).Data;
      if (((pFVar3 <= param_1) &&
          (param_1 < pFVar3 + (longlong)(this->AdditionalPluginDirectories).ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      iVar9 = (this->AdditionalPluginDirectories).ArrayNum;
      piVar1 = &(this->AdditionalPluginDirectories).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&this_00->AllocatorInstance,piVar1);
      }
      (this->AdditionalPluginDirectories).ArrayNum = iVar9 + 1;
      ::FString::FString((FString *)((this_00->AllocatorInstance).Data + (longlong)iVar9 * 0x10),
                         param_1);
      return true;
    }
  }
  return false;
}

// AddRootDirectory @ 141e14a00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FProjectDescriptor::AddRootDirectory(FProjectDescriptor *this,FString *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  IFileManager *pIVar10;
  FString *pFVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  FString *local_res20;
  void *local_68 [2];
  FString local_58;
  void *local_48 [2];
  FString local_38;
  
  bVar6 = FPaths::IsRelative(param_1);
  if ((bVar6) &&
     (local_res20 = param_1,
     bVar6 = `FProjectDescriptor::AddRootDirectory'::__l3::<lambda_1>::operator()(&local_res20),
     !bVar6)) {
    return false;
  }
  pIVar10 = IFileManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar10 + 0x108);
  pFVar11 = FPaths::EngineDir(&local_38);
  pwVar13 = L"";
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  puVar12 = (undefined8 *)(*pcVar2)(pIVar10,local_48,pwVar14);
  iVar9 = *(int *)(puVar12 + 1) + -1;
  if (*(int *)(puVar12 + 1) == 0) {
    iVar9 = 0;
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)*puVar12;
  }
  bVar4 = false;
  bVar6 = false;
  bVar7 = ::FString::StartsWith(param_1,pwVar14,iVar9,IgnoreCase);
  if (bVar7) {
LAB_141e14b29:
    bVar7 = true;
    bVar5 = true;
    if (!bVar6) goto LAB_141e14b43;
  }
  else {
    pIVar10 = IFileManager::Get();
    pcVar2 = *(code **)((longlong)*pIVar10 + 0x108);
    pFVar11 = FPaths::ProjectDir(&local_58);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    puVar12 = (undefined8 *)(*pcVar2)(pIVar10,local_68,pwVar14);
    iVar9 = *(int *)(puVar12 + 1) + -1;
    if (*(int *)(puVar12 + 1) == 0) {
      iVar9 = 0;
    }
    else {
      pwVar13 = (wchar_t *)*puVar12;
    }
    bVar4 = true;
    bVar6 = true;
    bVar7 = ::FString::StartsWith(param_1,pwVar13,iVar9,IgnoreCase);
    if (bVar7) goto LAB_141e14b29;
    bVar4 = true;
    bVar5 = false;
  }
  bVar7 = bVar5;
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
  }
LAB_141e14b43:
  if ((bVar4) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (!bVar7) {
    this_00 = &this->AdditionalRootDirectories;
    bVar6 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>(this_00,param_1);
    if (!bVar6) {
      pFVar3 = (this_00->AllocatorInstance).Data;
      if (((pFVar3 <= param_1) &&
          (param_1 < pFVar3 + (longlong)(this->AdditionalRootDirectories).ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      iVar9 = (this->AdditionalRootDirectories).ArrayNum;
      piVar1 = &(this->AdditionalRootDirectories).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&this_00->AllocatorInstance,piVar1);
      }
      (this->AdditionalRootDirectories).ArrayNum = iVar9 + 1;
      ::FString::FString((FString *)((this_00->AllocatorInstance).Data + (longlong)iVar9 * 0x10),
                         param_1);
      return true;
    }
  }
  return false;
}

// FindPluginReferenceIndex @ 141e20510

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FProjectDescriptor::FindPluginReferenceIndex(FProjectDescriptor *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  if (0 < (this->Plugins).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Plugins).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      pFVar2 = (this->Plugins).AllocatorInstance.Data;
      iVar6 = (param_1->Data).ArrayNum;
      iVar1 = *(int *)(pFVar2 + lVar8 + 8);
      if (iVar1 == iVar6) {
        if (iVar1 < 2) {
          return uVar7;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(pFVar2 + lVar8),
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar4 = iVar6 == 0;
      }
      else {
        bVar4 = iVar1 + iVar6 == 1;
      }
      if (bVar4) {
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0xb8;
    } while ((int)uVar7 < (this->Plugins).ArrayNum);
  }
  return -1;
}

// GetExtension @ 141e247b0

FString * __cdecl FProjectDescriptor::GetExtension(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&ProjectExtension,L"uproject");
      atexit(`FProjectDescriptor::GetExtension'::__l2::
             _dynamic_atexit_destructor_for__ProjectExtension__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  _Src = ProjectExtension.Data.AllocatorInstance;
  iVar2 = ProjectExtension.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar2 * 2);
  return __return_storage_ptr__;
}

// IsSigned @ 141e26d20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FProjectDescriptor::IsSigned(FProjectDescriptor *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  FString *pFVar4;
  int iVar5;
  wchar_t *pwVar6;
  FString local_18;
  
  pFVar4 = FPaths::GetCleanFilename(&local_18,param_1);
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  uVar2 = this->EpicSampleNameHash;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return uVar2 == uVar3;
}

// Load @ 141e27750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FProjectDescriptor::Load(FProjectDescriptor *this,FString *param_1,FText *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  FText *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStackY_1c8 [32];
  FString local_198;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_188;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_180;
  FString local_170;
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  FString local_138;
  FText local_128;
  TArrayView<wchar_t,int> local_118;
  TStringView<wchar_t> local_108;
  FText local_f8;
  FString local_e8;
  FString local_d8;
  FScopedBootTiming local_c8;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  local_b0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId60,"FProjectDescriptor::Load",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\ProjectDescriptor.cpp"
               ,0x3c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId60);
  }
  FScopedBootTiming::FScopedBootTiming(&local_c8,"FProjectDescriptor::Load");
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Data.ArrayNum = 0;
  local_198.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FFileHelper::LoadFileToString(&local_198,pwVar9,None,0);
  FVar2.Data = local_198.Data.AllocatorInstance.Data;
  if (bVar4) {
    local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = local_198.Data.ArrayNum;
    local_198.Data.ArrayNum = 0;
    local_198.Data.ArrayMax = 0;
    local_158 = FVar2.Data;
    if ((iVar3 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    iStack_150 = iVar3;
    local_118._12_4_ = uStack_14c;
    local_118.ArrayNum = iVar3;
    local_118.DataPtr = (wchar_t *)local_158;
    UE::Json::ParseInPlace(&local_b0,&local_118);
    uVar10 = (ulonglong)local_b0.Variant.TypeIndex;
    if ((2 < uVar10) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar10) == '\0') {
      if ((local_b0.Variant.TypeIndex != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      UE::Json::GetRootObject
                (&local_180,
                 (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                  *)&local_b0);
      if (local_180.bIsSet == false) {
        bVar4 = false;
      }
      else {
        pFVar8 = FPaths::GetPath(&local_d8,param_1);
        if ((local_180.bIsSet == false) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        local_188 = local_180.TypedValue.value_;
        bVar4 = Read(this,(GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                           *)&local_188,pFVar8,param_2);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar4 = FFileHelper::LoadFileToString(&local_198,pwVar9,None,0);
      if ((!bVar4) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7792961263713124273>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\ProjectDescriptor.cpp"
                             ,0x4f,"FFileHelper::LoadFileToString(FileContents, *FileName)"), bVar4)
         ) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      if ((local_b0.Variant.TypeIndex != 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      local_148 = local_198.Data.AllocatorInstance.Data;
      iStack_140 = local_198.Data.ArrayNum + -1;
      if (local_198.Data.ArrayNum == 0) {
        iStack_140 = 0;
      }
      local_108._12_4_ = uStack_13c;
      local_108.Size = iStack_140;
      local_108.DataPtr = (wchar_t *)local_198.Data.AllocatorInstance.Data;
      UE::Json::FParseError::CreateMessage((FParseError *)&local_b0,&local_e8,&local_108);
      ::FString::PrintfImpl(&local_138,L"Failed to read file %s: %s");
      pFVar7 = FText::FromString(&local_f8,&local_138);
      FText::operator=(param_2,pFVar7);
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      bVar4 = false;
    }
    if ((2 < local_b0.Variant.TypeIndex) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_b0.Variant.TypeIndex])(&local_b0);
    if (FVar2.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar2.Data);
    }
  }
  else {
    ::FString::PrintfImpl(&local_170,L"Failed to open descriptor file %s");
    pFVar7 = FText::FromString(&local_128,&local_170);
    FText::operator=(param_2,pFVar7);
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  FScopedBootTiming::~FScopedBootTiming(&local_c8);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// MakePathRelativeToProject @ 141e29530

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FProjectDescriptor::MakePathRelativeToProject
          (FProjectDescriptor *this,FString *__return_storage_ptr__,FString *param_1,
          FString *param_2)

{
  code *pcVar1;
  FScriptContainerElement *_Src;
  IFileManager *pIVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  uint uVar5;
  FString local_38;
  FString local_28;
  
  pIVar2 = IFileManager::Get();
  local_38.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar3 = (longlong)local_38.Data.ArrayNum;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x108);
  if (local_38.Data.ArrayNum == 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,0,(ForAnyElementType *)&local_38,0,&local_38.Data.ArrayMax);
  }
  else {
    _Src = (param_2->Data).AllocatorInstance.Data;
    uVar5 = local_38.Data.ArrayNum + 1;
    if ((int)uVar5 < local_38.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar5,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  ::FString::PathAppend(&local_38,L"",0);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar2,&local_28,FVar4.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FPaths::MakePlatformFilename(&local_28);
  ::FString::FString(__return_storage_ptr__,param_1);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
  }
  FPaths::MakePathRelativeTo(__return_storage_ptr__,(wchar_t *)FVar4.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Read @ 141e2da60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FProjectDescriptor::Read
          (FProjectDescriptor *this,
          GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_1,FString *param_2,FText *param_3)

{
  int *piVar1;
  code *pcVar2;
  FName this_00;
  FName FVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FText *pFVar8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar9;
  IFileManager *pIVar10;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *pTVar11;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar12;
  FTextFormat *pFVar13;
  TRefCountPtr<ITextData> TVar14;
  wchar_t *pwVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  ForAnyElementType FVar18;
  ITextData *pIVar19;
  bool bVar20;
  undefined1 auStackY_198 [32];
  Number local_168 [2];
  FName local_158;
  TOptional<FText>_u_0 local_150;
  undefined1 local_140 [16];
  undefined1 local_130 [8];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_128;
  FText local_118;
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  FText local_f8;
  FText local_e8;
  FScopedBootTiming local_d8;
  TStringView<wchar_t> local_c0;
  wchar_t *local_b0;
  undefined4 local_a8;
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar20 = -1 < CpuChannel->Enabled;
  local_118.TextData.Reference = (ITextData *)param_1.value_;
  local_e8.TextData.Reference = (ITextData *)this;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId98,"FProjectDescriptor::Read",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\ProjectDescriptor.cpp"
               ,0x62);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId98);
  }
  FScopedBootTiming::FScopedBootTiming(&local_d8,"FProjectDescriptor::Read");
  local_168[0] = ((param_1.value_)->data_).n;
  local_158 = (FName)((ulonglong)local_158.Number << 0x20);
  bVar5 = UE::Projects::Private::TryGetIntHelper<int>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     local_168,L"FileVersion",L"int32",(int *)&local_158);
  if (!bVar5) {
    local_168[0] = ((param_1.value_)->data_).n;
    bVar5 = UE::Projects::Private::TryGetIntHelper<int>
                      ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       local_168,L"ProjectFileVersion",L"int32",(int *)&local_158);
    if (!bVar5) {
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_140,L"ProjectDescriptor",L"InvalidProjectFileVersion",
                          L"File does not have a valid \'FileVersion\' number.");
      FText::operator=(param_3,pFVar8);
      local_150.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)local_140._0_8_;
      goto LAB_141e2e208;
    }
  }
  this->FileVersion = local_158.ComparisonIndex.Value;
  if (local_158.ComparisonIndex.Value - Initial < 3) {
    local_168[0] = ((param_1.value_)->data_).n;
    UE::Projects::Private::TryGetStringField
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               local_168,L"EngineAssociation",&this->EngineAssociation);
    local_168[0] = ((param_1.value_)->data_).n;
    UE::Projects::Private::TryGetStringField
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               local_168,L"Category",&this->Category);
    local_168[0] = ((param_1.value_)->data_).n;
    UE::Projects::Private::TryGetStringField
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               local_168,L"Description",&this->Description);
    local_168[0] = ((param_1.value_)->data_).n;
    UE::Projects::Private::TryGetBoolField
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               local_168,L"Enterprise",&this->bIsEnterpriseProject);
    local_168[0] = ((param_1.value_)->data_).n;
    UE::Projects::Private::TryGetBoolField
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               local_168,L"DisableEnginePluginsByDefault",&this->bDisableEnginePluginsByDefault);
    local_168[0] = ((param_1.value_)->data_).n;
    UE::Projects::Private::ReadArray<FModuleDescriptor>
              ((TOptional<FText> *)&local_150.TypedValue,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               local_168,L"Modules",&this->Modules);
    if (local_150.TypedValue.TextData.Reference == (ITextData *)0x0) {
      local_168[0] = ((param_1.value_)->data_).n;
      UE::Projects::Private::ReadArray<FPluginReferenceDescriptor>
                ((TOptional<FText> *)&local_150.TypedValue,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 local_168,L"Plugins",&this->Plugins);
      if (local_150.TypedValue.TextData.Reference == (ITextData *)0x0) {
        local_168[0] = ((param_1.value_)->data_).n;
        local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.ArrayNum = 0;
        local_108.ArrayMax = 0;
        bVar5 = UE::Projects::Private::TryGetStringArrayField
                          ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                            *)local_168,L"AdditionalPluginDirectories",&local_108);
        if ((bVar5) && (0 < local_108.ArrayNum)) {
          DestructItems<FString,int>
                    ((FString *)(this->AdditionalPluginDirectories).AllocatorInstance.Data,
                     (this->AdditionalPluginDirectories).ArrayNum);
          piVar1 = &(this->AdditionalPluginDirectories).ArrayMax;
          (this->AdditionalPluginDirectories).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&(this->AdditionalPluginDirectories).AllocatorInstance,0,piVar1);
          }
          pTVar9 = &FPaths::ProjectDir((FString *)local_140)->Data;
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::
          TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                    (&local_128,pTVar9,0x15 - (uint)(pTVar9->ArrayNum != 0));
          ::FString::PathAppend((FString *)&local_128,L"../RemappedPlugins/",0x13);
          if ((ITextData *)local_140._0_8_ != (ITextData *)0x0) {
            FMemory::Free((void *)local_140._0_8_);
          }
          bVar5 = FPaths::IsRelative((FString *)&local_128);
          if (bVar5) {
            pIVar10 = IFileManager::Get();
            FVar18.Data = (FScriptContainerElement *)L"";
            if (local_128.ArrayNum != 0) {
              FVar18.Data = local_128.AllocatorInstance.Data;
            }
            pTVar9 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                     (**(code **)((longlong)*pIVar10 + 0x108))(pIVar10,local_140,FVar18.Data);
            if (&local_128 != pTVar9) {
              if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.AllocatorInstance.Data);
              }
              local_128.AllocatorInstance.Data = (pTVar9->AllocatorInstance).Data;
              (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              local_128.ArrayNum = pTVar9->ArrayNum;
              local_128.ArrayMax = pTVar9->ArrayMax;
              pTVar9->ArrayNum = 0;
              pTVar9->ArrayMax = 0;
            }
            if ((ITextData *)local_140._0_8_ != (ITextData *)0x0) {
              FMemory::Free((void *)local_140._0_8_);
            }
          }
          AddPluginDirectory(this,(FString *)&local_128);
          if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.AllocatorInstance.Data);
          }
        }
        local_168[0] = ((param_1.value_)->data_).n;
        local_158 = (FName)&this->TargetPlatforms;
        UE::Projects::Private::TryGetStringArrayField
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   local_168,L"TargetPlatforms",
                   (TArray<FName,TSizedDefaultAllocator<32>_> *)local_158);
        if (0 < (this->TargetPlatforms).ArrayNum) {
          local_150.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
          local_150._8_8_ = 0;
          pIVar10 = IFileManager::Get();
          local_a8 = 9;
          local_168[0].i64 = (long64)&local_150;
          local_140._8_8_ = local_168;
          local_140._0_8_ =
               UE::Core::Private::Function::
               TFunctionRefCaller<`FProjectDescriptor::Read'::__l29::<lambda_1>,bool,wchar_t_const_*,bool>
               ::Call;
          pcVar2 = *(code **)((longlong)*pIVar10 + 0x90);
          local_c0.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
          iVar7 = (param_2->Data).ArrayNum;
          local_b0 = L"Platforms";
          local_c0.Size = iVar7 + -1;
          if (iVar7 == 0) {
            local_c0.Size = 0;
          }
          FPaths::CombineInternal((FString *)&local_f8,&local_c0,2);
          TVar14.Reference = (ITextData *)L"";
          if (local_f8.Flags != 0) {
            TVar14.Reference = local_f8.TextData.Reference;
          }
          (*pcVar2)(pIVar10,TVar14.Reference,local_140);
          if (local_f8.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_f8.TextData.Reference);
          }
          pTVar11 = FDataDrivenPlatformInfoRegistry::GetAllPlatformInfos();
          this_00 = local_158;
          uVar4 = local_150.TypedValue.Flags;
          pIVar19 = (ITextData *)
                    ((longlong)(int)local_150.TypedValue.Flags * 0x10 +
                    (longlong)local_150.TypedValue.TextData.Reference);
          uVar17 = local_150.TypedValue.TextData.Reference;
          while( true ) {
            if (local_150.TypedValue.Flags != uVar4) {
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_130);
            }
            if ((ITextData *)uVar17 == pIVar19) break;
            if (*(int *)(uVar17 + 8) == 0) {
              pwVar15 = L"";
            }
            else {
              pwVar15 = *(wchar_t **)uVar17;
            }
            ::FName::FName(&local_158,pwVar15);
            FVar3 = local_158;
            uVar6 = ::GetTypeHash(local_158.ComparisonIndex.Value);
            if (*(int *)&pTVar11->field_0x8 == *(int *)&pTVar11->field_0x34) {
LAB_141e2dfc2:
              uVar17 = uVar17 + 0x10;
            }
            else {
              puVar16 = &pTVar11->field_0x38;
              if (*(undefined1 **)&pTVar11->field_0x40 != (undefined1 *)0x0) {
                puVar16 = *(undefined1 **)&pTVar11->field_0x40;
              }
              iVar7 = *(int *)(puVar16 +
                              (ulonglong)(*(int *)&pTVar11->field_0x48 - 1U & FVar3.Number + uVar6)
                              * 4);
              if (iVar7 == -1) goto LAB_141e2dfc2;
              do {
                if (*(FName *)((longlong)iVar7 * 0xa0 + *(longlong *)pTVar11) == FVar3) {
                  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                            ((TArray<FName,TSizedDefaultAllocator<32>_> *)this_00,&local_158);
                  goto LAB_141e2dfc2;
                }
                iVar7 = *(int *)((longlong)iVar7 * 0xa0 + 0x98 + *(longlong *)pTVar11);
              } while (iVar7 != -1);
              uVar17 = uVar17 + 0x10;
            }
          }
          DestructItems<FString,int>
                    ((FString *)local_150.TypedValue.TextData.Reference,local_150.TypedValue.Flags);
          this = (FProjectDescriptor *)local_e8.TextData.Reference;
          param_1.value_ =
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               local_118.TextData.Reference;
          if (local_150.TypedValue.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free((void *)local_150.TypedValue.TextData.Reference);
          }
        }
        local_118.TextData.Reference = *(ITextData **)param_1.value_;
        UE::Projects::Private::TryGetIntHelper<unsigned_int>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_118,L"EpicSampleNameHash",L"uint32",&this->EpicSampleNameHash);
        local_118.TextData.Reference = *(ITextData **)param_1.value_;
        pTVar12 = (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)UE::Projects::Private::ReadCustomBuildSteps
                               ((FCustomBuildSteps *)&local_98,
                                (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                 *)&local_118,L"PreBuildSteps");
        if ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)&this->PreBuildSteps != pTVar12) {
          TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::
          Move<TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
                    ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->PreBuildSteps,pTVar12);
        }
        local_50 = 0;
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_98);
        local_118.TextData.Reference = *(ITextData **)param_1.value_;
        pTVar12 = (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)UE::Projects::Private::ReadCustomBuildSteps
                               ((FCustomBuildSteps *)&local_98,
                                (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                 *)&local_118,L"PostBuildSteps");
        if ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)&this->PostBuildSteps != pTVar12) {
          TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::
          Move<TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
                    ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->PostBuildSteps,pTVar12);
        }
        local_50 = 0;
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_98);
        DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
        if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.AllocatorInstance.Data);
        }
        FScopedBootTiming::~FScopedBootTiming(&local_d8);
        if (bVar20) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      FText::operator=(param_3,&local_150.TypedValue);
    }
    else {
      FText::operator=(param_3,&local_150.TypedValue);
    }
  }
  else {
    ::FString::PrintfImpl((FString *)local_140,L"%d");
    FText::FromString(&local_150.TypedValue,(FString *)local_140);
    if ((ITextData *)local_140._0_8_ != (ITextData *)0x0) {
      FMemory::Free((void *)local_140._0_8_);
    }
    ::FString::PrintfImpl((FString *)local_140,L"%d");
    FText::FromString(&local_f8,(FString *)local_140);
    if ((ITextData *)local_140._0_8_ != (ITextData *)0x0) {
      FMemory::Free((void *)local_140._0_8_);
    }
    local_140._0_8_ = local_f8.TextData.Reference;
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 8))
                (local_f8.TextData.Reference,&local_158);
    }
    local_140._8_4_ = local_f8.Flags;
    local_118.TextData.Reference = (ITextData *)local_150.TypedValue.TextData.Reference;
    if (local_150.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_150.TypedValue.TextData.Reference + 8))
                (local_150.TypedValue.TextData.Reference,&local_158);
    }
    local_118.Flags = local_150.TypedValue.Flags;
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_168[0].i,L"ProjectDescriptor",L"ProjectFileVersionTooLarge",
                        L"File appears to be in a newer version ({0}) of the file format that we can load (max version: {1})."
                       );
    pFVar13 = FTextFormat::FTextFormat((FTextFormat *)&local_c0,pFVar8,Default);
    pFVar8 = FText::Format<FText,FText>(&local_e8,pFVar13,&local_118,(FText *)local_140);
    FText::operator=(param_3,pFVar8);
    if ((FProjectDescriptor *)local_e8.TextData.Reference != (FProjectDescriptor *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    if ((longlong *)local_168[0].i64 != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_168[0] + 0x10))();
    }
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
  }
LAB_141e2e208:
  if (local_150.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_150.TypedValue.TextData.Reference + 0x10))();
  }
  FScopedBootTiming::~FScopedBootTiming(&local_d8);
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return false;
}

// Read @ 141e2e250

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FProjectDescriptor::Read
          (FProjectDescriptor *this,FJsonObject *param_1,FString *param_2,FText *param_3)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res8;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  UE::Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 != '\0') {
    UE::Json::GetRootObject
              (&local_88,
               (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                *)&local_78.s);
    if (local_88.bIsSet != false) {
      local_res8 = local_88.TypedValue.value_;
      bVar1 = Read(this,(GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_res8,param_2,param_3);
      if (local_18 == '\0') {
        return bVar1;
      }
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      return bVar1;
    }
    if (local_18 != '\0') {
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
    }
  }
  return false;
}

// RemovePluginDirectory @ 141e35400

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FProjectDescriptor::RemovePluginDirectory(FProjectDescriptor *this,FString *param_1)

{
  bool bVar1;
  int iVar2;
  FString *local_res18 [2];
  
  bVar1 = FPaths::IsRelative(param_1);
  if (bVar1) {
    local_res18[0] = param_1;
    bVar1 = `FProjectDescriptor::RemovePluginDirectory'::__l3::<lambda_1>::operator()(local_res18);
    if (!bVar1) {
      return false;
    }
  }
  iVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::RemoveSingle
                    (&this->AdditionalPluginDirectories,param_1);
  return 0 < iVar2;
}

// RemoveRootDirectory @ 141e35a70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FProjectDescriptor::RemoveRootDirectory(FProjectDescriptor *this,FString *param_1)

{
  bool bVar1;
  int iVar2;
  FString *local_res18 [2];
  
  bVar1 = FPaths::IsRelative(param_1);
  if (bVar1) {
    local_res18[0] = param_1;
    bVar1 = `FProjectDescriptor::RemoveRootDirectory'::__l3::<lambda_1>::operator()(local_res18);
    if (!bVar1) {
      return false;
    }
  }
  iVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::RemoveSingle
                    (&this->AdditionalRootDirectories,param_1);
  return 0 < iVar2;
}

// Save @ 141e367a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall FProjectDescriptor::Save(FProjectDescriptor *this,FString *param_1,FText *param_2)

{
  char cVar1;
  bool bVar2;
  IProjectManager *pIVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  FString *pFVar7;
  IFileManager *pIVar8;
  wchar_t *pwVar9;
  FString local_78;
  TStringView<wchar_t> local_68;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  pIVar3 = IProjectManager::Get();
  cVar1 = (**(code **)((longlong)*pIVar3 + 200))(pIVar3);
  if (cVar1 == '\0') {
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_58,&local_78,0);
    pFVar7 = FPaths::GetPath((FString *)&local_68,param_1);
    Write(this,local_58.Object,pFVar7);
    if (local_68.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_68.DataPtr);
    }
    (**(code **)((local_58.Object)->_padding_ + 8))(local_58.Object);
    pIVar8 = IFileManager::Get();
    if ((param_1->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    local_68.Size = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      local_68.Size = 0;
    }
    local_68.DataPtr = (wchar_t *)local_78.Data.AllocatorInstance.Data;
    bVar2 = FFileHelper::SaveStringToFile(&local_68,pwVar9,AutoDetect,pIVar8,0);
    if (bVar2) {
      bVar2 = true;
    }
    else {
      pFVar4 = FText::FromString(&local_38,param_1);
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"ProjectDescriptor",L"FailedToWriteOutputFile",
                          L"Failed to write output file \'{0}\'. Perhaps the file is Read-Only?");
      pFVar6 = FTextFormat::FTextFormat(&local_28,pFVar5,Default);
      pFVar4 = FText::Format<FText>((FText *)&local_68,pFVar6,pFVar4);
      FText::operator=(param_2,pFVar4);
      if ((FScriptContainerElement *)local_68.DataPtr != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)local_68.DataPtr + 0x10))();
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      bVar2 = false;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar4 = FText::FromString(&local_48,param_1);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_68,L"ProjectDescriptor",L"FailedToWriteOutputFileSuppressed"
                        ,L"Failed to write output file \'{0}\'. Project file saving is suppressed.")
    ;
    pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_38,pFVar5,Default);
    pFVar4 = FText::Format<FText>((FText *)&local_58,pFVar6,pFVar4);
    FText::operator=(param_2,pFVar4);
    if (local_58.Object != (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x0) {
      (**(code **)((local_58.Object)->_padding_ + 0x10))();
    }
    if (local_68.DataPtr != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_68.DataPtr + 0x10))();
    }
    bVar2 = false;
  }
  return bVar2;
}

// Sign @ 141e37980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FProjectDescriptor::Sign(FProjectDescriptor *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  FString *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  pFVar3 = FPaths::GetCleanFilename(&local_18,param_1);
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  this->EpicSampleNameHash = uVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateSupportedTargetPlatforms @ 141e44780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FProjectDescriptor::UpdateSupportedTargetPlatforms
          (FProjectDescriptor *this,FName *param_1,bool param_2)

{
  int *piVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  
  this_00 = &this->TargetPlatforms;
  if (!param_2) {
    TArray<FName,TSizedDefaultAllocator<32>_>::Remove(this_00,param_1);
    return;
  }
  pFVar2 = (FName *)(this_00->AllocatorInstance).Data;
  if (pFVar2 != pFVar2 + (this->TargetPlatforms).ArrayNum) {
    pFVar7 = pFVar2;
    do {
      if (*pFVar7 == *param_1) {
        if ((int)((longlong)pFVar7 - (longlong)pFVar2 >> 3) != -1) {
          return;
        }
        break;
      }
      pFVar7 = pFVar7 + 1;
    } while (pFVar7 != pFVar2 + (this->TargetPlatforms).ArrayNum);
  }
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->TargetPlatforms).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->TargetPlatforms).ArrayNum;
  piVar1 = &(this->TargetPlatforms).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&this_00->AllocatorInstance,piVar1);
    (this->TargetPlatforms).ArrayNum = iVar6;
  }
  pFVar3 = (this_00->AllocatorInstance).Data;
  (this->TargetPlatforms).ArrayNum = iVar6 + 1;
  *(FName *)(pFVar3 + (longlong)iVar6 * 8) = *param_1;
  return;
}

// Write @ 141e456c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FProjectDescriptor::Write
          (FProjectDescriptor *this,TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_1,
          FString *param_2)

{
  int iVar1;
  FArchive *pFVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  EJsonToken EVar6;
  FString *pFVar7;
  uint uVar8;
  uint uVar9;
  FModuleDescriptor *this_00;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  FModuleDescriptor *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [8];
  FString *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_348 [8];
  undefined2 local_340 [4];
  undefined2 local_338 [4];
  undefined2 local_330 [4];
  undefined2 local_328 [4];
  undefined2 local_320 [4];
  undefined2 local_318 [4];
  undefined2 local_310 [4];
  undefined2 local_308 [4];
  undefined2 local_300 [4];
  undefined2 local_2f8 [4];
  undefined2 local_2f0 [4];
  undefined2 local_2e8 [4];
  undefined2 local_2e0 [4];
  undefined2 local_2d8 [4];
  undefined2 local_2d0 [4];
  undefined2 local_2c8 [4];
  undefined2 local_2c0 [4];
  undefined2 local_2b8 [4];
  undefined2 local_2b0 [4];
  undefined2 local_2a8 [4];
  undefined2 local_2a0 [4];
  undefined2 local_298 [4];
  undefined2 local_290 [4];
  undefined2 local_288 [4];
  undefined2 local_280 [4];
  undefined2 local_278 [4];
  undefined2 local_270 [4];
  undefined2 local_268 [4];
  undefined2 local_260 [4];
  uint local_258;
  Type local_254;
  wchar_t *local_250;
  FString local_248;
  wchar_t *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  FScriptContainerElement *local_228;
  uint uStack_220;
  undefined4 uStack_21c;
  wchar_t *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  FScriptContainerElement *local_208;
  uint uStack_200;
  undefined4 uStack_1fc;
  wchar_t *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  FScriptContainerElement *local_1e8;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  wchar_t *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  TSharedRef<FJsonObject,1> local_1c8;
  FScriptContainerElement *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  wchar_t *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  FScriptContainerElement *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  FString local_168;
  FString local_158;
  wchar_t *local_148;
  undefined8 uStack_140;
  FScriptContainerElement *local_138;
  undefined8 uStack_130;
  wchar_t *local_128;
  undefined8 uStack_120;
  FScriptContainerElement *local_118;
  undefined8 uStack_110;
  wchar_t *local_108;
  undefined8 uStack_100;
  FScriptContainerElement *local_f8;
  undefined8 uStack_f0;
  wchar_t *local_e8;
  undefined8 uStack_e0;
  TSharedPtr<FJsonObject,1> local_d8;
  FScriptContainerElement *local_c8;
  undefined8 uStack_c0;
  FString local_b8;
  FScriptContainerElement *local_a8;
  undefined8 uStack_a0;
  FString local_98;
  FScriptContainerElement *local_88;
  undefined8 uStack_80;
  FString local_78;
  wchar_t *local_68;
  undefined8 uStack_60;
  FScriptContainerElement *local_58;
  undefined8 uStack_50;
  
  local_res18 = param_2;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart(param_1);
  local_254 = Latest;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
  WriteValue<enum_EProjectDescriptorVersion::Type,wchar_t_const_(&)[12]>
            (param_1,(wchar_t (*) [12])L"FileVersion",&local_254);
  iVar1 = (param_1->Stack).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar12 = 0;
  if ((int)uVar8 < iVar1) {
    uVar12 = ~uVar8 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(int *)((param_1->Stack).AllocatorInstance.Data +
               (longlong)(param_1->Stack).ArrayNum * 4 + -4) != 6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EVar6 = param_1->PreviousTokenWritten;
  if ((EVar6 != CurlyOpen) && ((Identifier < EVar6 || ((0x1013U >> (EVar6 & 0x1f) & 1) == 0)))) {
    local_340[0] = 0x2c;
    (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_340,2);
    param_1->PreviousTokenWritten = Comma;
  }
  (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,L"\r\n",4);
  pFVar2 = param_1->Stream;
  if (0 < param_1->IndentLevel) {
    uVar10 = (ulonglong)(uint)param_1->IndentLevel;
    do {
      local_338[0] = 9;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_338,2);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uStack_230 = 0x11;
  local_238 = L"EngineAssociation";
  uStack_140 = CONCAT44(uStack_22c,0x11);
  local_148 = L"EngineAssociation";
  (**(code **)(param_1->_padding_ + 0x28))(param_1,&local_148);
  local_330[0] = 0x3a;
  (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_330,2);
  param_1->PreviousTokenWritten = Identifier;
  local_328[0] = 0x20;
  (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_328,2);
  local_228 = (this->EngineAssociation).Data.AllocatorInstance.Data;
  iVar1 = (this->EngineAssociation).Data.ArrayNum;
  uStack_220 = iVar1 - 1;
  if (iVar1 == 0) {
    uStack_220 = 0;
  }
  uStack_130 = CONCAT44(uStack_21c,uStack_220);
  local_138 = local_228;
  (**(code **)(param_1->_padding_ + 0x28))(param_1,&local_138);
  param_1->PreviousTokenWritten = String;
  iVar1 = (param_1->Stack).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar12 = 0;
  if ((int)uVar8 < iVar1) {
    uVar12 = ~uVar8 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(int *)((param_1->Stack).AllocatorInstance.Data +
               (longlong)(param_1->Stack).ArrayNum * 4 + -4) != 6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EVar6 = param_1->PreviousTokenWritten;
  if ((EVar6 != CurlyOpen) && ((Identifier < EVar6 || ((0x1013U >> (EVar6 & 0x1f) & 1) == 0)))) {
    local_320[0] = 0x2c;
    (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_320,2);
    param_1->PreviousTokenWritten = Comma;
  }
  (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,L"\r\n",4);
  pFVar2 = param_1->Stream;
  if (0 < param_1->IndentLevel) {
    uVar10 = (ulonglong)(uint)param_1->IndentLevel;
    do {
      local_318[0] = 9;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_318,2);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uStack_210 = 8;
  local_218 = L"Category";
  uStack_120 = CONCAT44(uStack_20c,8);
  local_128 = L"Category";
  (**(code **)(param_1->_padding_ + 0x28))(param_1,&local_128);
  local_310[0] = 0x3a;
  (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_310,2);
  param_1->PreviousTokenWritten = Identifier;
  local_308[0] = 0x20;
  (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_308,2);
  local_208 = (this->Category).Data.AllocatorInstance.Data;
  iVar1 = (this->Category).Data.ArrayNum;
  uStack_200 = iVar1 - 1;
  if (iVar1 == 0) {
    uStack_200 = 0;
  }
  uStack_110 = CONCAT44(uStack_1fc,uStack_200);
  local_118 = local_208;
  (**(code **)(param_1->_padding_ + 0x28))(param_1,&local_118);
  param_1->PreviousTokenWritten = String;
  iVar1 = (param_1->Stack).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar12 = 0;
  if ((int)uVar8 < iVar1) {
    uVar12 = ~uVar8 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(int *)((param_1->Stack).AllocatorInstance.Data +
               (longlong)(param_1->Stack).ArrayNum * 4 + -4) != 6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EVar6 = param_1->PreviousTokenWritten;
  if ((EVar6 != CurlyOpen) && ((Identifier < EVar6 || ((0x1013U >> (EVar6 & 0x1f) & 1) == 0)))) {
    local_300[0] = 0x2c;
    (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_300,2);
    param_1->PreviousTokenWritten = Comma;
  }
  (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,L"\r\n",4);
  pFVar2 = param_1->Stream;
  if (0 < param_1->IndentLevel) {
    uVar10 = (ulonglong)(uint)param_1->IndentLevel;
    do {
      local_2f8[0] = 9;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_2f8,2);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uStack_1f0 = 0xb;
  local_1f8 = L"Description";
  uStack_100 = CONCAT44(uStack_1ec,0xb);
  local_108 = L"Description";
  (**(code **)(param_1->_padding_ + 0x28))(param_1,&local_108);
  local_2f0[0] = 0x3a;
  (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_2f0,2);
  param_1->PreviousTokenWritten = Identifier;
  local_2e8[0] = 0x20;
  (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_2e8,2);
  local_1e8 = (this->Description).Data.AllocatorInstance.Data;
  iVar1 = (this->Description).Data.ArrayNum;
  uVar12 = 0;
  uStack_1e0 = iVar1 - 1;
  if (iVar1 == 0) {
    uStack_1e0 = uVar12;
  }
  uStack_f0 = CONCAT44(uStack_1dc,uStack_1e0);
  local_f8 = local_1e8;
  (**(code **)(param_1->_padding_ + 0x28))(param_1,&local_f8);
  param_1->PreviousTokenWritten = String;
  if (this->bDisableEnginePluginsByDefault != false) {
    iVar1 = (param_1->Stack).ArrayNum;
    uVar9 = iVar1 - 1;
    uVar8 = uVar12;
    if ((int)uVar9 < iVar1) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(int *)((param_1->Stack).AllocatorInstance.Data +
                 (longlong)(param_1->Stack).ArrayNum * 4 + -4) != 6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar6 = param_1->PreviousTokenWritten;
    if ((EVar6 != CurlyOpen) && ((Identifier < EVar6 || ((0x1013U >> (EVar6 & 0x1f) & 1) == 0)))) {
      local_2e0[0] = 0x2c;
      (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_2e0,2);
      param_1->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,L"\r\n",4);
    TPrettyJsonPrintPolicy<wchar_t>::WriteTabs(param_1->Stream,param_1->IndentLevel);
    uStack_1d0 = 0x1d;
    local_1d8 = L"DisableEnginePluginsByDefault";
    uStack_e0 = CONCAT44(uStack_1cc,0x1d);
    local_e8 = L"DisableEnginePluginsByDefault";
    (**(code **)(param_1->_padding_ + 0x28))(param_1,&local_e8);
    local_2d8[0] = 0x3a;
    (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_2d8,2);
    param_1->PreviousTokenWritten = Identifier;
    local_2d0[0] = 0x20;
    (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_2d0,2);
    EVar6 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                      (param_1,this->bDisableEnginePluginsByDefault);
    param_1->PreviousTokenWritten = EVar6;
  }
  if (this->bIsEnterpriseProject != false) {
    iVar1 = (param_1->Stack).ArrayNum;
    uVar8 = iVar1 - 1;
    if ((int)uVar8 < iVar1) {
      uVar12 = ~uVar8 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(int *)((param_1->Stack).AllocatorInstance.Data +
                 (longlong)(param_1->Stack).ArrayNum * 4 + -4) != 6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
              (param_1,L"Enterprise");
    local_2c8[0] = 0x20;
    (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_2c8,2);
    EVar6 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                      (param_1,this->bIsEnterpriseProject);
    param_1->PreviousTokenWritten = EVar6;
  }
  local_250 = L"Modules";
  if (0 < (this->Modules).ArrayNum) {
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_*_&>
              (param_1,&local_250);
    iVar1 = (this->Modules).ArrayNum;
    this_00 = (FModuleDescriptor *)(this->Modules).AllocatorInstance.Data;
    pFVar13 = this_00 + iVar1;
    while( true ) {
      if ((this->Modules).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FModuleDescriptor_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (this_00 == pFVar13) break;
      MakeShared<FJsonObject,1>(&local_1c8);
      FModuleDescriptor::UpdateJson(this_00,local_1c8.Object);
      FVar4.ReferenceController = local_1c8.SharedReferenceCount.ReferenceController;
      local_d8.Object = local_1c8.Object;
      local_d8.SharedReferenceCount.ReferenceController =
           local_1c8.SharedReferenceCount.ReferenceController;
      if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
      Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_d8,param_1,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
      this_00 = this_00 + 1;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(param_1);
    param_2 = local_res18;
  }
  FPluginReferenceDescriptor::WriteArray(param_1,L"Plugins",&this->Plugins);
  if (0 < (this->AdditionalPluginDirectories).ArrayNum) {
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[28]>
              (param_1,(wchar_t (*) [28])L"AdditionalPluginDirectories");
    local_258 = (this->AdditionalPluginDirectories).ArrayNum;
    uVar10 = (ulonglong)(int)local_258;
    pFVar14 = (this->AdditionalPluginDirectories).AllocatorInstance.Data;
    pFVar11 = pFVar14 + uVar10 * 0x10;
    while( true ) {
      if ((this->AdditionalPluginDirectories).ArrayNum != (int)uVar10) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar14 == pFVar11) break;
      pFVar7 = MakePathRelativeToProject(this,&local_b8,(FString *)pFVar14,param_2);
      iVar1 = (param_1->Stack).ArrayNum;
      if (0 < iVar1) {
        uVar12 = 0;
        if ((int)(iVar1 - 1U) < iVar1) {
          uVar12 = ~(iVar1 - 1U) >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((*(int *)((param_1->Stack).AllocatorInstance.Data +
                      (longlong)(param_1->Stack).ArrayNum * 4 + -4) != 5) &&
            (param_1->PreviousTokenWritten != Identifier)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CanWriteValueWithoutIdentifier()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0xde,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      EVar6 = param_1->PreviousTokenWritten;
      if (((EVar6 == CurlyOpen) || (EVar6 == SquareOpen)) ||
         ((EVar6 == Identifier || ((EVar6 == Comma || (EVar6 == None)))))) {
        if (3 < EVar6 - Number) goto LAB_141e46107;
        local_2b8[0] = 0x20;
        (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_2b8,2);
      }
      else {
        local_2c0[0] = 0x2c;
        (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_2c0,2);
        param_1->PreviousTokenWritten = Comma;
LAB_141e46107:
        (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,L"\r\n",4);
        pFVar2 = param_1->Stream;
        if (0 < param_1->IndentLevel) {
          uVar10 = (ulonglong)(uint)param_1->IndentLevel;
          do {
            local_2b0[0] = 9;
            (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_2b0,2);
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      local_1b8 = (pFVar7->Data).AllocatorInstance.Data;
      iVar1 = (pFVar7->Data).ArrayNum;
      iStack_1b0 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_1b0 = 0;
      }
      uStack_c0 = CONCAT44(uStack_1ac,iStack_1b0);
      local_c8 = local_1b8;
      (**(code **)(param_1->_padding_ + 0x28))(param_1,&local_c8);
      param_1->PreviousTokenWritten = String;
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      uVar10 = (ulonglong)local_258;
      pFVar14 = pFVar14 + 0x10;
      param_2 = local_res18;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(param_1);
  }
  if (0 < (this->AdditionalRootDirectories).ArrayNum) {
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[26]>
              (param_1,(wchar_t (*) [26])L"AdditionalRootDirectories");
    local_258 = (this->AdditionalRootDirectories).ArrayNum;
    uVar10 = (ulonglong)(int)local_258;
    pFVar14 = (this->AdditionalRootDirectories).AllocatorInstance.Data;
    pFVar11 = pFVar14 + uVar10 * 0x10;
    while( true ) {
      if ((this->AdditionalRootDirectories).ArrayNum != (int)uVar10) {
        local_348[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_348);
      }
      if (pFVar14 == pFVar11) break;
      pFVar7 = MakePathRelativeToProject(this,&local_98,(FString *)pFVar14,param_2);
      iVar1 = (param_1->Stack).ArrayNum;
      if (0 < iVar1) {
        uVar12 = 0;
        if ((int)(iVar1 - 1U) < iVar1) {
          uVar12 = ~(iVar1 - 1U) >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((*(int *)((param_1->Stack).AllocatorInstance.Data +
                      (longlong)(param_1->Stack).ArrayNum * 4 + -4) != 5) &&
            (param_1->PreviousTokenWritten != Identifier)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CanWriteValueWithoutIdentifier()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0xde,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      EVar6 = param_1->PreviousTokenWritten;
      if (((EVar6 == CurlyOpen) || (EVar6 == SquareOpen)) ||
         ((EVar6 == Identifier || ((EVar6 == Comma || (EVar6 == None)))))) {
        if (3 < EVar6 - Number) goto LAB_141e46364;
        local_2a0[0] = 0x20;
        (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_2a0,2);
      }
      else {
        local_2a8[0] = 0x2c;
        (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_2a8,2);
        param_1->PreviousTokenWritten = Comma;
LAB_141e46364:
        (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,L"\r\n",4);
        pFVar2 = param_1->Stream;
        if (0 < param_1->IndentLevel) {
          uVar10 = (ulonglong)(uint)param_1->IndentLevel;
          do {
            local_298[0] = 9;
            (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_298,2);
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      local_1a8 = (pFVar7->Data).AllocatorInstance.Data;
      iVar1 = (pFVar7->Data).ArrayNum;
      iStack_1a0 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_1a0 = 0;
      }
      uStack_a0 = CONCAT44(uStack_19c,iStack_1a0);
      local_a8 = local_1a8;
      (**(code **)(param_1->_padding_ + 0x28))(param_1,&local_a8);
      param_1->PreviousTokenWritten = String;
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      uVar10 = (ulonglong)local_258;
      pFVar14 = pFVar14 + 0x10;
      param_2 = local_res18;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(param_1);
  }
  if (0 < (this->TargetPlatforms).ArrayNum) {
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_(&)[16]>
              (param_1,(wchar_t (*) [16])L"TargetPlatforms");
    uVar12 = 0;
    if (0 < (this->TargetPlatforms).ArrayNum) {
      do {
        uVar8 = 0;
        if ((int)uVar12 < (this->TargetPlatforms).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar7 = ::FName::ToString((FName *)((this->TargetPlatforms).AllocatorInstance.Data +
                                            (longlong)(int)uVar12 * 8),&local_78);
        bVar5 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
                CanWriteValueWithoutIdentifier(param_1);
        if ((!bVar5) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CanWriteValueWithoutIdentifier()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0xde,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        EVar6 = param_1->PreviousTokenWritten;
        if ((((EVar6 == CurlyOpen) || (EVar6 == SquareOpen)) || (EVar6 == Identifier)) ||
           ((EVar6 == Comma || (EVar6 == None)))) {
          if (3 < EVar6 - Number) goto LAB_141e46571;
          local_288[0] = 0x20;
          (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_288,2);
        }
        else {
          local_290[0] = 0x2c;
          (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_290,2);
          param_1->PreviousTokenWritten = Comma;
LAB_141e46571:
          (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,L"\r\n",4);
          pFVar2 = param_1->Stream;
          if (0 < param_1->IndentLevel) {
            uVar10 = (ulonglong)(uint)param_1->IndentLevel;
            do {
              local_280[0] = 9;
              (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_280,2);
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
        }
        local_198 = (pFVar7->Data).AllocatorInstance.Data;
        iVar1 = (pFVar7->Data).ArrayNum;
        iStack_190 = iVar1 + -1;
        if (iVar1 == 0) {
          iStack_190 = 0;
        }
        uStack_80 = CONCAT44(uStack_18c,iStack_190);
        local_88 = local_198;
        (**(code **)(param_1->_padding_ + 0x28))(param_1,&local_88);
        param_1->PreviousTokenWritten = String;
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (this->TargetPlatforms).ArrayNum);
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(param_1);
  }
  if (this->EpicSampleNameHash != 0) {
    ::FString::PrintfImpl(&local_248,L"%u");
    iVar1 = (param_1->Stack).ArrayNum;
    uVar8 = iVar1 - 1;
    uVar12 = 0;
    if ((int)uVar8 < iVar1) {
      uVar12 = ~uVar8 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(int *)((param_1->Stack).AllocatorInstance.Data +
                 (longlong)(param_1->Stack).ArrayNum * 4 + -4) != 6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar6 = param_1->PreviousTokenWritten;
    if ((EVar6 != CurlyOpen) && ((Identifier < EVar6 || ((0x1013U >> (EVar6 & 0x1f) & 1) == 0)))) {
      local_278[0] = 0x2c;
      (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_278,2);
      param_1->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,L"\r\n",4);
    pFVar2 = param_1->Stream;
    if (0 < param_1->IndentLevel) {
      uVar10 = (ulonglong)(uint)param_1->IndentLevel;
      do {
        local_270[0] = 9;
        (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_270,2);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    uStack_180 = 0x12;
    local_188 = L"EpicSampleNameHash";
    uStack_60 = CONCAT44(uStack_17c,0x12);
    local_68 = L"EpicSampleNameHash";
    (**(code **)(param_1->_padding_ + 0x28))(param_1,&local_68);
    local_268[0] = 0x3a;
    (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_268,2);
    param_1->PreviousTokenWritten = Identifier;
    local_260[0] = 0x20;
    (**(code **)(*(longlong *)param_1->Stream + 0x188))(param_1->Stream,local_260,2);
    local_178 = local_248.Data.AllocatorInstance.Data;
    iStack_170 = local_248.Data.ArrayNum + -1;
    if (local_248.Data.ArrayNum == 0) {
      iStack_170 = 0;
    }
    uStack_50 = CONCAT44(uStack_16c,iStack_170);
    local_58 = local_248.Data.AllocatorInstance.Data;
    (**(code **)(param_1->_padding_ + 0x28))(param_1,&local_58);
    param_1->PreviousTokenWritten = String;
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
  }
  if (*(int *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x8 !=
      *(int *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x34) {
    ::FString::FString(&local_168,L"PreBuildSteps");
    FCustomBuildSteps::Write(&this->PreBuildSteps,param_1,&local_168);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  if (*(int *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x8 !=
      *(int *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x34) {
    ::FString::FString(&local_158,L"PostBuildSteps");
    FCustomBuildSteps::Write(&this->PostBuildSteps,param_1,&local_158);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd(param_1);
  return;
}

// operator() @ 150480f60

bool __thiscall `FProjectDescriptor::AddRootDirectory'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7792961263713123953>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_7792961263713123953>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150481020

bool __thiscall
`FProjectDescriptor::RemovePluginDirectory'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7792961263713123962>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_7792961263713123962>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150481080

bool __thiscall `FProjectDescriptor::RemoveRootDirectory'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7792961263713123933>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_7792961263713123933>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

