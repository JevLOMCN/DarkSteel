// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// DumpLibraryContents @ 145e522f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::ShaderLibrary::Private::FNamedShaderLibrary::DumpLibraryContents
          (FNamedShaderLibrary *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  AcquireSRWLockShared((PSRWLOCK)&this->ComponentsMutex);
  pFVar3 = (this->Components).AllocatorInstance.Data;
  iVar2 = (this->Components).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Components).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (3 < (byte)LogShaderLibrary._0_1_) {
      (**(code **)(*(longlong *)**(undefined8 **)pFVar3 + 0x20))();
      (**(code **)(*(longlong *)**(undefined8 **)pFVar3 + 0x10))();
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
    }
    pFVar3 = pFVar3 + 8;
  }
                    /* WARNING: Could not recover jumptable at 0x000145e52401. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->ComponentsMutex);
  return;
}

// FindShaderLibraryForShader @ 145e54a50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderLibraryInstance * __thiscall
UE::ShaderLibrary::Private::FNamedShaderLibrary::FindShaderLibraryForShader
          (FNamedShaderLibrary *this,FSHAHash *param_1,int *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FShaderLibraryInstance *pFVar5;
  undefined1 local_res8 [8];
  
  AcquireSRWLockShared((PSRWLOCK)&this->ComponentsMutex);
  pFVar4 = (this->Components).AllocatorInstance.Data;
  iVar2 = (this->Components).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Components).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    iVar3 = (**(code **)(*(longlong *)**(undefined8 **)pFVar4 + 0x60))
                      ((longlong *)**(undefined8 **)pFVar4,param_1);
    if (iVar3 != -1) {
      *param_2 = iVar3;
      pFVar5 = *(FShaderLibraryInstance **)pFVar4;
LAB_145e54acc:
      ReleaseSRWLockShared((PSRWLOCK)&this->ComponentsMutex);
      return pFVar5;
    }
    pFVar4 = pFVar4 + 8;
  }
  pFVar5 = (FShaderLibraryInstance *)0x0;
  goto LAB_145e54acc;
}

// FindShaderLibraryForShaderMap @ 145e54de0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderLibraryInstance * __thiscall
UE::ShaderLibrary::Private::FNamedShaderLibrary::FindShaderLibraryForShaderMap
          (FNamedShaderLibrary *this,FSHAHash *param_1,int *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FShaderLibraryInstance *pFVar5;
  undefined1 local_res8 [8];
  
  AcquireSRWLockShared((PSRWLOCK)&this->ComponentsMutex);
  pFVar4 = (this->Components).AllocatorInstance.Data;
  iVar2 = (this->Components).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Components).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    iVar3 = (**(code **)(*(longlong *)**(undefined8 **)pFVar4 + 0x58))
                      ((longlong *)**(undefined8 **)pFVar4,param_1);
    if (iVar3 != -1) {
      *param_2 = iVar3;
      pFVar5 = *(FShaderLibraryInstance **)pFVar4;
LAB_145e54e5c:
      ReleaseSRWLockShared((PSRWLOCK)&this->ComponentsMutex);
      return pFVar5;
    }
    pFVar4 = pFVar4 + 8;
  }
  pFVar5 = (FShaderLibraryInstance *)0x0;
  goto LAB_145e54e5c;
}

// GetShaderCount @ 145e59d90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall
UE::ShaderLibrary::Private::FNamedShaderLibrary::GetShaderCount(FNamedShaderLibrary *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  AcquireSRWLockShared((PSRWLOCK)&this->ComponentsMutex);
  pFVar4 = (this->Components).AllocatorInstance.Data;
  uVar5 = 0;
  iVar2 = (this->Components).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Components).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    iVar3 = (**(code **)(*(longlong *)**(undefined8 **)pFVar4 + 0x20))();
    uVar5 = uVar5 + iVar3;
    pFVar4 = pFVar4 + 8;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->ComponentsMutex);
  return uVar5;
}

// OnPakFileMounted @ 145e63ce0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UE::ShaderLibrary::Private::FNamedShaderLibrary::OnPakFileMounted
          (FNamedShaderLibrary *this,FMountedPakFileInfo *param_1,FString *param_2)

{
  uint uVar1;
  longlong lVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  int local_res8 [2];
  FString local_28;
  
  uVar1 = param_1->ChunkId;
  if (*(int *)&(this->PresentChunks).Elements.field_0x8 !=
      *(int *)&(this->PresentChunks).Elements.field_0x34) {
    FVar5 = (this->PresentChunks).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->PresentChunks).Hash;
    }
    iVar4 = *(int *)((longlong)FVar5 + (ulonglong)((this->PresentChunks).HashSize - 1U & uVar1) * 4)
    ;
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->PresentChunks).Elements;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar4 * 0xc) == uVar1) {
          return;
        }
        iVar4 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0xc);
      } while (iVar4 != -1);
    }
  }
  iVar4 = (this->LogicalName).Data.ArrayNum;
  if (uVar1 == 0xffffffff) {
    _Src = (this->LogicalName).Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = iVar4;
    if (iVar4 == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar4,0,(ForAnyElementType *)&local_28,iVar4,&local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,(longlong)iVar4 * 2);
    }
  }
  else {
    ::FString::PrintfImpl(&local_28,L"%s_Chunk%d");
  }
  bVar3 = OpenShaderCode(this,param_2,&local_28);
  if (bVar3) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->PresentChunks,local_res8,(bool *)&param_1->ChunkId);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// OpenShaderCode @ 145e65590

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::ShaderLibrary::Private::FNamedShaderLibrary::OpenShaderCode
          (FNamedShaderLibrary *this,FString *param_1,FString *param_2)

{
  FPlatformRWLock *SRWLock;
  int *piVar1;
  TArray<TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  FShaderLibraryInstance *this_00;
  FStaticBasicLogRecord *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  FLLMScope local_res20 [2];
  FMemScope local_40;
  
  FLLMScope::FLLMScope(local_res20,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_40,Shaders,true);
  SRWLock = &this->ComponentsMutex;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pTVar2 = &this->Components;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  iVar8 = (this->Components).ArrayNum;
  pFVar3 = pFVar10 + (longlong)iVar8 * 8;
  do {
    if ((this->Components).ArrayNum != iVar8) {
      `TCheckedPointerIterator<TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar3) {
      ReleaseSRWLockExclusive((PSRWLOCK)&this->ComponentsMutex);
      this_00 = FShaderLibraryInstance::Create(this->ShaderPlatform,param_1,param_2);
      if (this_00 != (FShaderLibraryInstance *)0x0) {
        AcquireSRWLockExclusive((PSRWLOCK)&this->ComponentsMutex);
        pFVar10 = (pTVar2->AllocatorInstance).Data;
        iVar8 = (this->Components).ArrayNum;
        pFVar3 = pFVar10 + (longlong)iVar8 * 8;
        break;
      }
      if (5 < (byte)LogShaderLibrary._0_1_) {
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
      }
      bVar11 = false;
      goto LAB_145e65846;
    }
    plVar5 = *(longlong **)pFVar10;
    iVar7 = (param_2->Data).ArrayNum;
    iVar4 = *(int *)(*plVar5 + 0x28);
    if (iVar4 == iVar7) {
      if (1 < iVar4) {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*plVar5 + 0x20),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar11 = iVar7 == 0;
        goto LAB_145e65643;
      }
LAB_145e6564a:
      iVar7 = (int)plVar5[0x165];
      if (iVar7 < 2) goto LAB_145e65685;
      iVar4 = (param_1->Data).ArrayNum;
      if (iVar7 == iVar4) {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)plVar5[0x164],
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar11 = iVar7 == 0;
      }
      else {
        bVar11 = iVar7 + iVar4 == 1;
      }
      if (bVar11) goto LAB_145e65685;
    }
    else {
      bVar11 = iVar4 + iVar7 == 1;
LAB_145e65643:
      if (bVar11) goto LAB_145e6564a;
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
LAB_145e65702:
  if ((this->Components).ArrayNum != iVar8) {
    `TCheckedPointerIterator<TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_>,int,0>
    ::operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (pFVar10 == pFVar3) {
    cVar6 = (**(code **)(((this_00->Library).Reference)->_padding_ + 0x10))();
    if (cVar6 == '\0') {
      if (3 < (byte)LogShaderLibrary._0_1_) {
        pFVar9 = &::LOG_Static;
        goto LAB_145e65802;
      }
    }
    else if (3 < (byte)LogShaderLibrary._0_1_) {
      if ((param_2->Data).ArrayNum == 0) {
        pFVar9 = &::LOG_Static;
      }
      else {
        pFVar9 = &::LOG_Static;
      }
LAB_145e65802:
      Logging::Private::BasicLog<4>(pFVar9,(FLogCategoryBase *)&LogShaderLibrary);
    }
    iVar8 = (this->Components).ArrayNum;
    piVar1 = &(this->Components).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    bVar11 = true;
    (this->Components).ArrayNum = iVar8 + 1;
    *(FShaderLibraryInstance **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = this_00;
    goto LAB_145e6583b;
  }
  plVar5 = *(longlong **)pFVar10;
  iVar7 = (param_2->Data).ArrayNum;
  iVar4 = *(int *)(*plVar5 + 0x28);
  if (iVar4 == iVar7) {
    if (1 < iVar4) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)(*plVar5 + 0x20),
                         (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar11 = iVar7 == 0;
      goto LAB_145e65749;
    }
LAB_145e65750:
    iVar7 = (int)plVar5[0x165];
    if (iVar7 < 2) goto LAB_145e6578b;
    iVar4 = (param_1->Data).ArrayNum;
    if (iVar7 == iVar4) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)plVar5[0x164],(wchar_t *)(param_1->Data).AllocatorInstance.Data)
      ;
      bVar11 = iVar7 == 0;
    }
    else {
      bVar11 = iVar7 + iVar4 == 1;
    }
    if (bVar11) goto LAB_145e6578b;
  }
  else {
    bVar11 = iVar4 + iVar7 == 1;
LAB_145e65749:
    if (bVar11) goto LAB_145e65750;
  }
  pFVar10 = pFVar10 + 8;
  goto LAB_145e65702;
LAB_145e65685:
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  bVar11 = false;
  goto LAB_145e65846;
LAB_145e6578b:
  FShaderLibraryInstance::~FShaderLibraryInstance(this_00);
  ::operator_delete(this_00,0xb30);
  bVar11 = false;
LAB_145e6583b:
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
LAB_145e65846:
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res20);
  return bVar11;
}

