// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 27

// FOpenGLProgramBinaryCache @ 145be2a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FOpenGLProgramBinaryCache * __thiscall
FOpenGLProgramBinaryCache::FOpenGLProgramBinaryCache
          (FOpenGLProgramBinaryCache *this,FString *param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uchar *_Str;
  uchar *_Str_00;
  size_t sVar6;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar7;
  FName this_00;
  FString *pFVar8;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar9;
  IFileManager *pIVar10;
  FString *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  undefined1 auStackY_1b8 [32];
  FString local_178;
  undefined1 local_168 [8];
  FString *local_160;
  undefined8 local_158;
  FString local_150;
  FString local_140;
  uint local_130 [2];
  FString local_128;
  FString local_118;
  uchar local_108 [32];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  ::FString::FString(&this->CachePathRoot,param_1);
  pFVar11 = &this->CacheSubDir;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheSubDir).Data.ArrayNum = 0;
  (this->CacheSubDir).Data.ArrayMax = 0;
  (this->CurrentShaderPipelineProperties).CacheVersionGuid.A = 0;
  (this->CurrentShaderPipelineProperties).CacheVersionGuid.B = 0;
  (this->CurrentShaderPipelineProperties).CacheVersionGuid.C = 0;
  (this->CurrentShaderPipelineProperties).CacheVersionGuid.D = 0;
  (this->CurrentShaderPipelineProperties).PipelineCacheName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentShaderPipelineProperties).PipelineCacheName.Data.ArrayNum = 0;
  (this->CurrentShaderPipelineProperties).PipelineCacheName.Data.ArrayMax = 0;
  (this->CurrentShaderPipelineProperties).NumProgramsFlushed = 0;
  (this->CurrentShaderPipelineProperties).LastMappedPosition = 0;
  (this->CurrentShaderPipelineProperties).MappedPrograms = 0;
  *(undefined8 *)&this->ShadersPendingCompilation = 0;
  *(undefined8 *)&(this->ShadersPendingCompilation).field_0x8 = 0;
  *(undefined8 *)&(this->ShadersPendingCompilation).field_0x20 = 0;
  *(undefined4 *)&(this->ShadersPendingCompilation).field_0x28 = 0;
  *(undefined4 *)&(this->ShadersPendingCompilation).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShadersPendingCompilation).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShadersPendingCompilation).field_0x34 = 0;
  *(undefined8 *)&(this->ShadersPendingCompilation).field_0x40 = 0;
  *(undefined4 *)&(this->ShadersPendingCompilation).field_0x48 = 0;
  (this->OnShaderPipelineCacheOpenedDelegate).ID = 0;
  (this->OnShaderPipelineCachePrecompilationCompleteDelegate).ID = 0;
  *(undefined8 *)&(this->ProgramsInCurrentCache).Elements = 0;
  *(undefined8 *)&(this->ProgramsInCurrentCache).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ProgramsInCurrentCache).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ProgramsInCurrentCache).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ProgramsInCurrentCache).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ProgramsInCurrentCache).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProgramsInCurrentCache).Elements.field_0x34 = 0;
  (this->ProgramsInCurrentCache).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ProgramsInCurrentCache).HashSize = 0;
  *(undefined8 *)&this->PendingGLContainerPrograms = 0;
  *(undefined8 *)&(this->PendingGLContainerPrograms).field_0x8 = 0;
  *(undefined8 *)&(this->PendingGLContainerPrograms).field_0x20 = 0;
  *(undefined4 *)&(this->PendingGLContainerPrograms).field_0x28 = 0;
  *(undefined4 *)&(this->PendingGLContainerPrograms).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingGLContainerPrograms).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingGLContainerPrograms).field_0x34 = 0;
  *(undefined8 *)&(this->PendingGLContainerPrograms).field_0x40 = 0;
  *(undefined4 *)&(this->PendingGLContainerPrograms).field_0x48 = 0;
  this->BinaryCacheWriteFileHandle = (FArchive *)0x0;
  this->CurrentBinaryFileState = Uninitialized;
  *(undefined8 *)&this->MappedCacheFiles = 0;
  *(undefined8 *)&(this->MappedCacheFiles).field_0x8 = 0;
  *(undefined8 *)&(this->MappedCacheFiles).field_0x20 = 0;
  *(undefined4 *)&(this->MappedCacheFiles).field_0x28 = 0;
  *(undefined4 *)&(this->MappedCacheFiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->MappedCacheFiles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MappedCacheFiles).field_0x34 = 0;
  *(undefined8 *)&(this->MappedCacheFiles).field_0x40 = 0;
  *(undefined4 *)&(this->MappedCacheFiles).field_0x48 = 0;
  _Str = (*glGetString)(0x1f02);
  _Str_00 = (*glGetString)(0x1f01);
  local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.Data.ArrayNum = 0;
  local_140.Data.ArrayMax = 0;
  sVar6 = strlen((char *)_Str);
  ::FString::AppendChars(&local_140,(char *)_Str,(int)sVar6);
  sVar6 = strlen((char *)_Str_00);
  ::FString::AppendChars(&local_140,(char *)_Str_00,(int)sVar6);
  local_108[0x10] = '\0';
  local_108[0x11] = '\0';
  local_108[0x12] = '\0';
  local_108[0x13] = '\0';
  local_108[0] = '\0';
  local_108[1] = '\0';
  local_108[2] = '\0';
  local_108[3] = '\0';
  local_108[4] = '\0';
  local_108[5] = '\0';
  local_108[6] = '\0';
  local_108[7] = '\0';
  local_108[8] = '\0';
  local_108[9] = '\0';
  local_108[10] = '\0';
  local_108[0xb] = '\0';
  local_108[0xc] = '\0';
  local_108[0xd] = '\0';
  local_108[0xe] = '\0';
  local_108[0xf] = '\0';
  iVar5 = local_140.Data.ArrayNum + -1;
  FVar14.Data = local_140.Data.AllocatorInstance.Data;
  if (local_140.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar14.Data = (FScriptContainerElement *)L"";
  }
  pTVar7 = StringCast<char,128,wchar_t>(&local_e8,(wchar_t *)FVar14.Data);
  FSHA1::HashBuffer(pTVar7->Ptr,(longlong)iVar5,local_108);
  if ((void *)local_e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._padding_);
  }
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  BytesToHex(local_108,0x14,&local_178);
  this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_130);
  pFVar8 = ::FName::ToString((FName *)this_00,&local_128);
  ::FString::ConcatFC(&local_118,pFVar8,L"_");
  ::FString::ConcatFF(&local_150,&local_118,&local_178);
  if (pFVar11 != &local_150) {
    pFVar16 = (pFVar11->Data).AllocatorInstance.Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pFVar11->Data).AllocatorInstance.Data = local_150.Data.AllocatorInstance.Data;
    (this->CacheSubDir).Data.ArrayNum = local_150.Data.ArrayNum;
    (this->CacheSubDir).Data.ArrayMax = local_150.Data.ArrayMax;
    local_150.Data.ArrayNum = 0;
    local_150.Data.ArrayMax = 0;
    local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  this_01 = FPlatformFileManager::Get();
  pIVar9 = FPlatformFileManager::GetPlatformFile(this_01);
  local_160 = (FString *)0x0;
  local_158 = 0;
  pIVar10 = IFileManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar10 + 0x80);
  pFVar11 = ::operator/(&local_128,&this->CachePathRoot,L"*");
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(pIVar10,&local_160,pwVar15);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  uVar12 = (ulonglong)(int)(uint)local_158;
  pFVar8 = local_160 + uVar12;
  local_130[0] = (uint)local_158;
  pFVar11 = local_160;
  do {
    if ((uint)local_158 != (int)uVar12) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_168);
    }
    if (pFVar11 == pFVar8) {
      DestructItems<FString,int>(local_160,(uint)local_158);
      if (local_160 != (FString *)0x0) {
        FMemory::Free(local_160);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      return this;
    }
    iVar4 = (pFVar11->Data).ArrayNum;
    uVar1 = (this->CachePathRoot).Data.ArrayNum;
    iVar5 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    iVar4 = iVar5 + 1;
    if ((uVar1 == 0) && (iVar4 != 0)) {
      iVar4 = iVar5 + 2;
      pFVar16 = (this->CachePathRoot).Data.AllocatorInstance.Data;
LAB_145be2e46:
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar4 != 0) goto LAB_145be2e54;
      local_178.Data.ArrayMax = 0;
      local_178.Data.ArrayNum = uVar1;
    }
    else {
      pFVar16 = (this->CachePathRoot).Data.AllocatorInstance.Data;
      if (uVar1 == 0) goto LAB_145be2e46;
LAB_145be2e54:
      local_178.Data.ArrayNum = uVar1;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar13 = uVar1 + iVar4;
      if ((int)uVar13 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar13,0,(ForAnyElementType *)&local_178,uVar1,&local_178.Data.ArrayMax);
      if (uVar1 != 0) {
        memcpy(local_178.Data.AllocatorInstance.Data,pFVar16,(longlong)(int)uVar1 * 2);
      }
    }
    ::FString::PathAppend(&local_178,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,iVar5);
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_178.Data.ArrayNum != 0) {
      FVar14.Data = local_178.Data.AllocatorInstance.Data;
    }
    cVar3 = (**(code **)((longlong)*pIVar9 + 0x118))(pIVar9,FVar14.Data);
    iVar5 = (this->CacheSubDir).Data.ArrayNum;
    iVar4 = (pFVar11->Data).ArrayNum;
    if (iVar4 == iVar5) {
      if (1 < iVar4) {
        iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar11->Data).AllocatorInstance.Data,
                           (wchar_t *)(this->CacheSubDir).Data.AllocatorInstance.Data);
        bVar17 = iVar5 == 0;
        goto LAB_145be2ef8;
      }
LAB_145be2eff:
      if (cVar3 == '\0') goto LAB_145be2f07;
    }
    else {
      bVar17 = iVar4 + iVar5 == 1;
LAB_145be2ef8:
      if (bVar17) goto LAB_145be2eff;
LAB_145be2f07:
      if (cVar3 == '\0') {
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_178.Data.ArrayNum != 0) {
          FVar14.Data = local_178.Data.AllocatorInstance.Data;
        }
        cVar3 = (**(code **)((longlong)*pIVar9 + 0x88))(pIVar9,FVar14.Data);
      }
      else {
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_178.Data.ArrayNum != 0) {
          FVar14.Data = local_178.Data.AllocatorInstance.Data;
        }
        cVar3 = (**(code **)((longlong)*pIVar9 + 0x1f8))(pIVar9,FVar14.Data);
      }
      if (5 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if ((2 < (byte)LogRHI._0_1_) && (cVar3 == '\0')) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    uVar12 = (ulonglong)local_130[0];
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// ~FOpenGLProgramBinaryCache @ 145be9a30

void __thiscall
FOpenGLProgramBinaryCache::~FOpenGLProgramBinaryCache(FOpenGLProgramBinaryCache *this)

{
  FArchive *pFVar1;
  FDelegateHandle FVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = this->BinaryCacheWriteFileHandle;
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  FVar2.ID = (this->OnShaderPipelineCacheOpenedDelegate).ID;
  if (FVar2.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FShaderPipelineCache::OnCachedOpened,FVar2);
  }
  FVar2.ID = (this->OnShaderPipelineCachePrecompilationCompleteDelegate).ID;
  if (FVar2.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FShaderPipelineCache::OnPrecompilationComplete,FVar2);
  }
  *(undefined4 *)&(this->MappedCacheFiles).field_0x48 = 0;
  pvVar3 = *(void **)&(this->MappedCacheFiles).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MappedCacheFiles);
  *(undefined4 *)&(this->PendingGLContainerPrograms).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PendingGLContainerPrograms).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingGLContainerPrograms);
  (this->ProgramsInCurrentCache).HashSize = 0;
  FVar4 = (this->ProgramsInCurrentCache).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<FOpenGLProgramKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FOpenGLProgramKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ProgramsInCurrentCache).Elements);
  *(undefined4 *)&(this->ShadersPendingCompilation).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ShadersPendingCompilation).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FOpenGLProgramBinaryCache::FPendingShaderCode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FOpenGLProgramBinaryCache::FPendingShaderCode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FOpenGLProgramBinaryCache::FPendingShaderCode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ShadersPendingCompilation);
  pFVar5 = (this->CurrentShaderPipelineProperties).PipelineCacheName.Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->CacheSubDir).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->CachePathRoot).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// AddProgramBinaryDataToBinaryCache @ 145bf1110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLProgramBinaryCache::AddProgramBinaryDataToBinaryCache
          (FOpenGLProgramBinaryCache *this,FOpenGLProgramKey *param_1,FOpenGLProgramBinary *param_2)

{
  FArchive *this_00;
  uint *puVar1;
  code *pcVar2;
  int *piVar3;
  bool bVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStack_1a8 [32];
  int local_188;
  undefined4 local_180;
  uint local_178;
  uint local_170;
  uint local_168;
  uint local_164;
  undefined8 local_160;
  undefined1 local_158 [24];
  FString local_140;
  longlong local_130;
  longlong lStack_128;
  uint local_120;
  uchar local_11c [100];
  longlong local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if ((this->CurrentBinaryFileState != BuildingCacheFile) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBuildingCache_internal()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                         ,0x3a7,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_2->DataView).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BinaryProgramData.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                         ,0x3a8,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = this->BinaryCacheWriteFileHandle;
  uVar9 = 0;
  local_b8[0] = *(longlong *)param_1->ShaderHashes[0].Hash;
  local_b8[1] = *(longlong *)(param_1->ShaderHashes[0].Hash + 8);
  local_a8 = *(undefined8 *)(param_1->ShaderHashes[0].Hash + 0x10);
  uStack_a0 = *(undefined8 *)(param_1->ShaderHashes[1].Hash + 4);
  local_168 = (uint)*(undefined8 *)&(param_2->DataView).ArrayNum;
  local_98 = *(undefined8 *)(param_1->ShaderHashes[1].Hash + 0xc);
  uStack_90 = *(undefined8 *)param_1->ShaderHashes[2].Hash;
  local_164 = (uint)((this_00->field_0x29 & 6) == 0);
  local_88 = *(undefined8 *)(param_1->ShaderHashes[2].Hash + 8);
  uStack_80 = *(undefined8 *)(param_1->ShaderHashes[2].Hash + 0x10);
  local_78 = *(undefined8 *)(param_1->ShaderHashes[3].Hash + 4);
  uStack_70 = *(undefined8 *)(param_1->ShaderHashes[3].Hash + 0xc);
  local_68 = *(undefined8 *)param_1->ShaderHashes[4].Hash;
  uStack_60 = *(undefined8 *)(param_1->ShaderHashes[4].Hash + 8);
  local_58 = *(undefined8 *)(param_1->ShaderHashes[4].Hash + 0x10);
  uStack_50 = *(undefined8 *)(param_1->ShaderHashes[5].Hash + 4);
  local_48 = *(undefined8 *)(param_1->ShaderHashes[5].Hash + 0xc);
  local_158._8_4_ = *(undefined4 *)&(param_2->DataView).DataPtr;
  local_158._12_4_ = *(undefined4 *)((longlong)&(param_2->DataView).DataPtr + 4);
  local_158._16_4_ = (param_2->DataView).ArrayNum;
  local_158[0x14] = (param_2->DataView).field_0xc;
  local_158[0x15] = (param_2->DataView).field_0xd;
  local_158[0x16] = (param_2->DataView).field_0xe;
  local_158[0x17] = (param_2->DataView).field_0xf;
  local_160 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
  local_120 = 0;
  local_11c[0x24] = '\0';
  local_11c[0x25] = '\0';
  local_11c[0x26] = '\0';
  local_11c[0x27] = '\0';
  local_11c[0x10] = '\0';
  local_11c[0x11] = '\0';
  local_11c[0x12] = '\0';
  local_11c[0x13] = '\0';
  local_11c[0x38] = '\0';
  local_11c[0x39] = '\0';
  local_11c[0x3a] = '\0';
  local_11c[0x3b] = '\0';
  local_11c[0x4c] = '\0';
  local_11c[0x4d] = '\0';
  local_11c[0x4e] = '\0';
  local_11c[0x4f] = '\0';
  local_11c[0x60] = '\0';
  local_11c[0x61] = '\0';
  local_11c[0x62] = '\0';
  local_11c[99] = '\0';
  bVar4 = true;
  local_130 = 0;
  lStack_128._0_1_ = '\0';
  lStack_128._1_1_ = '\0';
  lStack_128._2_1_ = '\0';
  lStack_128._3_1_ = '\0';
  lStack_128._4_1_ = '\0';
  lStack_128._5_1_ = '\0';
  lStack_128._6_1_ = '\0';
  lStack_128._7_1_ = '\0';
  local_11c[0] = '\0';
  local_11c[1] = '\0';
  local_11c[2] = '\0';
  local_11c[3] = '\0';
  local_11c[4] = '\0';
  local_11c[5] = '\0';
  local_11c[6] = '\0';
  local_11c[7] = '\0';
  local_11c[8] = '\0';
  local_11c[9] = '\0';
  local_11c[10] = '\0';
  local_11c[0xb] = '\0';
  local_11c[0xc] = '\0';
  local_11c[0xd] = '\0';
  local_11c[0xe] = '\0';
  local_11c[0xf] = '\0';
  local_11c[0x14] = '\0';
  local_11c[0x15] = '\0';
  local_11c[0x16] = '\0';
  local_11c[0x17] = '\0';
  local_11c[0x18] = '\0';
  local_11c[0x19] = '\0';
  local_11c[0x1a] = '\0';
  local_11c[0x1b] = '\0';
  local_11c[0x1c] = '\0';
  local_11c[0x1d] = '\0';
  local_11c[0x1e] = '\0';
  local_11c[0x1f] = '\0';
  local_11c[0x20] = '\0';
  local_11c[0x21] = '\0';
  local_11c[0x22] = '\0';
  local_11c[0x23] = '\0';
  local_11c[0x28] = '\0';
  local_11c[0x29] = '\0';
  local_11c[0x2a] = '\0';
  local_11c[0x2b] = '\0';
  local_11c[0x2c] = '\0';
  local_11c[0x2d] = '\0';
  local_11c[0x2e] = '\0';
  local_11c[0x2f] = '\0';
  local_11c[0x30] = '\0';
  local_11c[0x31] = '\0';
  local_11c[0x32] = '\0';
  local_11c[0x33] = '\0';
  local_11c[0x34] = '\0';
  local_11c[0x35] = '\0';
  local_11c[0x36] = '\0';
  local_11c[0x37] = '\0';
  local_11c[0x3c] = '\0';
  local_11c[0x3d] = '\0';
  local_11c[0x3e] = '\0';
  local_11c[0x3f] = '\0';
  local_11c[0x40] = '\0';
  local_11c[0x41] = '\0';
  local_11c[0x42] = '\0';
  local_11c[0x43] = '\0';
  local_11c[0x44] = '\0';
  local_11c[0x45] = '\0';
  local_11c[0x46] = '\0';
  local_11c[0x47] = '\0';
  local_11c[0x48] = '\0';
  local_11c[0x49] = '\0';
  local_11c[0x4a] = '\0';
  local_11c[0x4b] = '\0';
  local_11c[0x50] = '\0';
  local_11c[0x51] = '\0';
  local_11c[0x52] = '\0';
  local_11c[0x53] = '\0';
  local_11c[0x54] = '\0';
  local_11c[0x55] = '\0';
  local_11c[0x56] = '\0';
  local_11c[0x57] = '\0';
  local_11c[0x58] = '\0';
  local_11c[0x59] = '\0';
  local_11c[0x5a] = '\0';
  local_11c[0x5b] = '\0';
  local_11c[0x5c] = '\0';
  local_11c[0x5d] = '\0';
  local_11c[0x5e] = '\0';
  local_11c[0x5f] = '\0';
  do {
    if (!bVar4) goto LAB_145bf12d5;
    lVar6 = *(longlong *)((longlong)local_b8 + uVar9 * 0x14) -
            *(longlong *)((longlong)&local_130 + uVar9 * 0x14);
    if ((lVar6 == 0) &&
       (lVar6 = *(longlong *)((longlong)local_b8 + uVar9 * 0x14 + 8) -
                *(longlong *)((longlong)&lStack_128 + uVar9 * 0x14), lVar6 == 0)) {
      lVar6 = (ulonglong)*(uint *)((longlong)&local_a8 + uVar9 * 0x14) -
              (ulonglong)(&local_120)[uVar9 * 5];
    }
    bVar4 = lVar6 == 0;
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
  } while (uVar8 < 6);
  if ((bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SerializedProgramKey != FOpenGLProgramKey()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                         ,0x3b1,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145bf12d5:
  plVar10 = local_b8;
  lVar6 = 6;
  do {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,plVar10,0x14);
    plVar10 = (longlong *)((longlong)plVar10 + 0x14);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
  if ((local_168 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ProgramBinarySize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                         ,0x3b4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar1 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar1 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_168,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,&local_168);
    }
  }
  else {
    local_168 = *puVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  piVar3 = (int *)CONCAT44(local_158._12_4_,local_158._8_4_);
  (**(code **)(*(longlong *)this_00 + 0x188))(this_00,piVar3,local_168);
  uVar5 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
  if ((1 < (byte)LogRHI._0_1_) && ((this_00->field_0x29 & 6) != 0)) {
    local_170 = local_164;
    local_178 = local_168;
    local_188 = (int)local_160;
    local_180 = uVar5;
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (6 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  bVar4 = UE::OpenGL::AreBinaryProgramsCompressed();
  if (bVar4) {
    TotalUncompressed = TotalUncompressed + *piVar3;
    TotalCompressed = TotalCompressed + local_168;
    if (5 < (byte)LogRHI._0_1_) {
      local_188 = TotalUncompressed - TotalCompressed;
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  if (6 < (byte)LogRHI._0_1_) {
    FOpenGLProgramKey::ToString(param_1,&local_140);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
  }
  TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>::
  Emplace<FOpenGLProgramKey_const_&>
            (&this->ProgramsInCurrentCache,(FOpenGLProgramKey *)local_158,(bool *)param_1);
  bVar4 = IsPrecachingEnabled();
  if ((bVar4) &&
     (iVar7 = *(int *)&(this->ProgramsInCurrentCache).Elements.field_0x8 -
              *(int *)&(this->ProgramsInCurrentCache).Elements.field_0x34,
     (this->CurrentShaderPipelineProperties).NumProgramsFlushed +
     GBinaryCachePeriodicFlushProgramCount <= iVar7)) {
    MarkValidContent(this,iVar7);
  }
  return;
}

// CacheProgramBinary @ 145bf3f00

void __cdecl
FOpenGLProgramBinaryCache::CacheProgramBinary
          (FOpenGLProgramKey *param_1,TUniqueObj<FOpenGLProgramBinary> *param_2)

{
  FOpenGLProgramBinaryCache *pFVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TPairInitializer<FOpenGLProgramKey_const_&,TUniqueObj<FOpenGLProgramBinary>_&&> local_res18;
  FOpenGLProgramKey *local_18;
  TUniqueObj<FOpenGLProgramBinary> *local_10;
  
  if (CachePtr != (FOpenGLProgramBinaryCache *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&GProgramBinaryFileCacheCS);
    pFVar1 = CachePtr;
    uVar3 = (*FCrc::MemCrc32Func)(param_1,0x78,0);
    iVar4 = TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>::
            FindIndexByHash<FOpenGLProgramKey>(&pFVar1->ProgramsInCurrentCache,uVar3,param_1);
    if (iVar4 == -1) {
      AddProgramBinaryDataToBinaryCache(CachePtr,param_1,(param_2->Obj).Ptr);
      bVar2 = IsPrecachingEnabled();
      if ((bVar2) && (CachePtr != (FOpenGLProgramBinaryCache *)0x0)) {
        EnterCriticalSection((LPCRITICAL_SECTION)&GPendingGLProgramCreateRequestsCS);
        local_18 = param_1;
        local_10 = param_2;
        TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FOpenGLProgramKey_const_&,TUniqueObj<FOpenGLProgramBinary>_&&>_>
                  ((TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
                    *)&CachePtr->PendingGLContainerPrograms,&local_res18,(bool *)&local_18);
        LeaveCriticalSection((LPCRITICAL_SECTION)&GPendingGLProgramCreateRequestsCS);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&GProgramBinaryFileCacheCS);
  }
  return;
}

// CheckPendingGLProgramCreateRequests_internal @ 145bf51f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLProgramBinaryCache::CheckPendingGLProgramCreateRequests_internal
          (FOpenGLProgramBinaryCache *this)

{
  TMap<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>_>
  *pTVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FOpenGLProgramKey *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  float fVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  undefined1 local_c8 [32];
  longlong local_a8;
  TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
  *pTStack_a0;
  longlong *local_98;
  undefined1 auStack_90 [16];
  uint uStack_80;
  uint uStack_7c;
  longlong local_78;
  TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
  *pTStack_70;
  TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
  *local_68;
  undefined2 local_60;
  
  pTVar1 = &this->PendingGLContainerPrograms;
  if (0 < *(int *)&(this->PendingGLContainerPrograms).field_0x8 -
          *(int *)&(this->PendingGLContainerPrograms).field_0x34) {
    fVar9 = (float)GMaxBinaryProgramLoadTimeMS * __real_3a83126f;
    QueryPerformanceCounter(&local_res8);
    dVar4 = __real_4170000000000000;
    dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_c8,
               (TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_60 = 0;
    stack0xffffffffffffff78 = local_c8._16_16_;
    local_98 = (longlong *)local_c8._0_8_;
    auStack_90._0_8_ = local_c8._8_8_;
    local_78 = local_a8;
    pTStack_70 = pTStack_a0;
    uVar7 = local_c8._24_8_ >> 0x20;
    local_68 = (TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_c8._28_4_ < *(int *)(local_c8._16_8_ + 0x18)) {
      do {
        if (fVar9 <= 0.0) break;
        pFVar6 = (FOpenGLProgramKey *)(*local_98 + (longlong)(int)uVar7 * 0x88);
        UE::OpenGL::OnGLProgramLoadedFromBinaryCache
                  (pFVar6,(TUniqueObj<FOpenGLProgramBinary> *)(pFVar6 + 1));
        QueryPerformanceCounter(&local_res8);
        fVar9 = fVar9 - (float)(((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle
                                + dVar4) - (dVar3 + dVar4));
        QueryPerformanceCounter(&local_res10);
        dVar3 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle;
        TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_70,(int)uVar7);
        local_60 = CONCAT11(local_60._1_1_,1);
        uStack_80 = uStack_80 & ~auStack_90._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_90);
        uVar7 = (ulonglong)uStack_7c;
      } while ((int)uStack_7c < *(int *)(auStack_90._8_8_ + 0x18));
      if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
        uVar8 = *(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34;
        if (uVar8 < 4) {
          iVar5 = 1;
        }
        else {
          uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar5 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar8) && (local_68->HashSize < iVar5)) || (iVar5 < local_68->HashSize)) {
          local_68->HashSize = iVar5;
          TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
          ::Rehash(local_68);
        }
      }
    }
    if (5 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  return;
}

// CheckSinglePendingGLProgramCreateRequest @ 145bf5450

bool __cdecl
FOpenGLProgramBinaryCache::CheckSinglePendingGLProgramCreateRequest(FOpenGLProgramKey *param_1)

{
  code *pcVar1;
  FOpenGLProgramBinaryCache *pFVar2;
  TUniqueObj<FOpenGLProgramBinary> TVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FOpenGLProgramBinary *this;
  longlong lVar8;
  TUniqueObj<FOpenGLProgramBinary> local_res10;
  
  if (CachePtr == (FOpenGLProgramBinaryCache *)0x0) {
    return false;
  }
  bVar4 = IsInRenderingThread();
  if (((!bVar4) && (bVar4 = IsInRHIThread(), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() || IsInRHIThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                         ,0x42b,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GPendingGLProgramCreateRequestsCS);
  pFVar2 = CachePtr;
  this = ::operator_new(0x20);
  if (this != (FOpenGLProgramBinary *)0x0) {
    (this->OwnedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->OwnedData).ArrayNum = 0;
    (this->OwnedData).ArrayMax = 0;
    (this->DataView).DataPtr = (uchar *)0x0;
    (this->DataView).ArrayNum = 0;
  }
  uVar6 = (*FCrc::MemCrc32Func)(param_1,0x78,0);
  iVar7 = TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOpenGLProgramKey>
                    ((TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
                      *)&pFVar2->PendingGLContainerPrograms,uVar6,param_1);
  if (iVar7 == -1) {
    if (this != (FOpenGLProgramBinary *)0x0) {
      FOpenGLProgramBinary::~FOpenGLProgramBinary(this);
      ::operator_delete(this,0x20);
    }
    bVar4 = false;
  }
  else {
    lVar8 = (longlong)iVar7 * 0x88 + *(longlong *)&pFVar2->PendingGLContainerPrograms;
    local_res10.Obj.Ptr =
         *(TUniquePtr<FOpenGLProgramBinary,TDefaultDelete<FOpenGLProgramBinary>_> *)(lVar8 + 0x78);
    *(FOpenGLProgramBinary **)(lVar8 + 0x78) = this;
    TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
    ::RemoveByIndex((TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
                     *)&pFVar2->PendingGLContainerPrograms,iVar7);
    UE::OpenGL::OnGLProgramLoadedFromBinaryCache(param_1,&local_res10);
    TVar3.Obj.Ptr = local_res10.Obj.Ptr;
    if (local_res10.Obj.Ptr != (FOpenGLProgramBinary *)0x0) {
      FOpenGLProgramBinary::~FOpenGLProgramBinary((FOpenGLProgramBinary *)local_res10.Obj.Ptr);
      ::operator_delete((void *)TVar3.Obj.Ptr,0x20);
    }
    bVar4 = true;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GPendingGLProgramCreateRequestsCS);
  return bVar4;
}

// CheckSinglePendingGLProgramCreateRequest_internal @ 145bf55c0

bool __thiscall
FOpenGLProgramBinaryCache::CheckSinglePendingGLProgramCreateRequest_internal
          (FOpenGLProgramBinaryCache *this,FOpenGLProgramKey *param_1)

{
  uint uVar1;
  int iVar2;
  TUniqueObj<FOpenGLProgramBinary> this_00;
  longlong lVar3;
  TUniqueObj<FOpenGLProgramBinary> local_res8;
  
  this_00.Obj.Ptr =
       (TUniquePtr<FOpenGLProgramBinary,TDefaultDelete<FOpenGLProgramBinary>_>)::operator_new(0x20);
  if (this_00.Obj.Ptr != (FOpenGLProgramBinary *)0x0) {
    (((FOpenGLProgramBinary *)this_00.Obj.Ptr)->OwnedData).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (((FOpenGLProgramBinary *)this_00.Obj.Ptr)->OwnedData).ArrayNum = 0;
    (((FOpenGLProgramBinary *)this_00.Obj.Ptr)->OwnedData).ArrayMax = 0;
    (((FOpenGLProgramBinary *)this_00.Obj.Ptr)->DataView).DataPtr = (uchar *)0x0;
    (((FOpenGLProgramBinary *)this_00.Obj.Ptr)->DataView).ArrayNum = 0;
  }
  uVar1 = (*FCrc::MemCrc32Func)(param_1,0x78,0);
  iVar2 = TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOpenGLProgramKey>
                    ((TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
                      *)&this->PendingGLContainerPrograms,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x88 + *(longlong *)&this->PendingGLContainerPrograms;
    local_res8.Obj.Ptr =
         *(TUniquePtr<FOpenGLProgramBinary,TDefaultDelete<FOpenGLProgramBinary>_> *)(lVar3 + 0x78);
    *(TUniquePtr<FOpenGLProgramBinary,TDefaultDelete<FOpenGLProgramBinary>_> *)(lVar3 + 0x78) =
         this_00.Obj.Ptr;
    TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
    ::RemoveByIndex((TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
                     *)&this->PendingGLContainerPrograms,iVar2);
    UE::OpenGL::OnGLProgramLoadedFromBinaryCache(param_1,&local_res8);
    this_00.Obj.Ptr = local_res8.Obj.Ptr;
  }
  if (this_00.Obj.Ptr != (FOpenGLProgramBinary *)0x0) {
    FOpenGLProgramBinary::~FOpenGLProgramBinary((FOpenGLProgramBinary *)this_00.Obj.Ptr);
    ::operator_delete((void *)this_00.Obj.Ptr,0x20);
  }
  return iVar2 != -1;
}

// CloseCacheWriteHandle @ 145bf68a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOpenGLProgramBinaryCache::CloseCacheWriteHandle(FOpenGLProgramBinaryCache *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar10;
  TDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> *this_01;
  FName *pFVar11;
  int iVar12;
  ForAnyElementType FVar13;
  FArchive *pFVar14;
  FName local_res8;
  FString local_88;
  FReadAccessScope local_78;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  uint uStack_44;
  FBinaryCacheFileHeader local_40;
  
  if (this->BinaryCacheWriteFileHandle == (FArchive *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("BinaryCacheWriteFileHandle != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                       ,0x36c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
  }
  pFVar14 = this->BinaryCacheWriteFileHandle;
  if ((pFVar14->field_0x29 & 6) == 0) {
    (**(code **)(*(longlong *)pFVar14 + 0x1b8))(pFVar14,0);
    uVar9 = (**(code **)(*(longlong *)pFVar14 + 0x30))(pFVar14);
    uVar3 = (this->CurrentShaderPipelineProperties).CacheVersionGuid.A;
    uVar4 = (this->CurrentShaderPipelineProperties).CacheVersionGuid.B;
    uVar5 = (this->CurrentShaderPipelineProperties).CacheVersionGuid.C;
    uVar6 = (this->CurrentShaderPipelineProperties).CacheVersionGuid.D;
    local_60 = 6;
    uStack_5c = uVar3;
    uStack_58 = uVar4;
    uStack_54 = uVar5;
    uStack_50 = uVar6;
    bVar7 = UE::OpenGL::AreBinaryProgramsCompressed();
    local_40.BinaryCacheGuid.A = uStack_5c;
    local_40.Version = local_60;
    local_40.BinaryCacheGuid.C = uStack_54;
    local_40.BinaryCacheGuid.B = uStack_58;
    uStack_4c = CONCAT31(uStack_4c._1_3_,bVar7);
    local_40._20_4_ = uStack_4c;
    local_40.BinaryCacheGuid.D = uStack_50;
    local_40.ValidSize = uVar9;
    local_40.ProgramCount = param_1;
    iStack_48 = param_1;
    uStack_44 = uVar9;
    UE::OpenGL::operator<<(pFVar14,&local_40);
    pFVar14 = this->BinaryCacheWriteFileHandle;
    if ((pFVar14->field_0x29 & 6) == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = 2;
    }
  }
  else {
    iVar12 = 1;
  }
  (**(code **)(*(longlong *)pFVar14 + 0x210))(pFVar14);
  pFVar14 = this->BinaryCacheWriteFileHandle;
  if (pFVar14 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar14)(pFVar14,1);
  }
  this->BinaryCacheWriteFileHandle = (FArchive *)0x0;
  GetProgramBinaryCacheFilePath(this,&local_88);
  this_00 = FPlatformFileManager::Get();
  pIVar10 = FPlatformFileManager::GetPlatformFile(this_00);
  if (iVar12 != 0) {
    this_01 = RHIGetPanicDelegate();
    pFVar11 = ::FName::FName(&local_res8,"FailedBinaryProgramArchiveWrite");
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_78);
    if ((*(int *)&this_01->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&this_01->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,pFVar11);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (param_1 == 0) {
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar13.Data = local_88.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar10 + 0x88))(pIVar10,FVar13.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return param_1 != 0;
}

// EnqueueBinaryForGLProgramContainer @ 145bfd3d0

void __cdecl
FOpenGLProgramBinaryCache::EnqueueBinaryForGLProgramContainer
          (FOpenGLProgramKey *param_1,TUniqueObj<FOpenGLProgramBinary> *param_2)

{
  TPairInitializer<FOpenGLProgramKey_const_&,TUniqueObj<FOpenGLProgramBinary>_&&> local_res18;
  FOpenGLProgramKey *local_18;
  TUniqueObj<FOpenGLProgramBinary> *local_10;
  
  if (CachePtr != (FOpenGLProgramBinaryCache *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&GPendingGLProgramCreateRequestsCS);
    local_18 = param_1;
    local_10 = param_2;
    TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FOpenGLProgramKey_const_&,TUniqueObj<FOpenGLProgramBinary>_&&>_>
              ((TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
                *)&CachePtr->PendingGLContainerPrograms,&local_res18,(bool *)&local_18);
    LeaveCriticalSection((LPCRITICAL_SECTION)&GPendingGLProgramCreateRequestsCS);
  }
  return;
}

// GetOrAddFileMapping @ 145c03850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145c03d02) */
/* WARNING: Removing unreachable block (ram,0x000145c03d0a) */
/* WARNING: Removing unreachable block (ram,0x000145c03d19) */
/* WARNING: Removing unreachable block (ram,0x000145c03d1e) */
/* WARNING: Removing unreachable block (ram,0x000145c03a79) */

TRefCountPtr<FOpenGLProgramBinaryMapping> __thiscall
FOpenGLProgramBinaryCache::GetOrAddFileMapping
          (FOpenGLProgramBinaryCache *this,FString *param_1,int param_2,long64 param_3,
          long64 param_4)

{
  FCurrentShaderPipelineProperties *pFVar1;
  TMap<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>,0>_>
  *this_00;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  long64 lVar5;
  bool bVar6;
  int iVar7;
  FOpenGLProgramBinaryMapping *pFVar8;
  ulong64 uVar9;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar10;
  FOpenGLProgramBinaryMapping *this_02;
  FOpenGLProgramBinaryMapping *pFVar11;
  undefined8 *puVar12;
  TRefCountPtr<FOpenGLProgramBinaryMapping> TVar13;
  longlong lVar14;
  FOpenGLProgramBinaryMapping *pFVar15;
  ulonglong uVar16;
  undefined4 in_register_00000084;
  wchar_t *pwVar17;
  longlong in_stack_00000030;
  undefined1 auStackY_118 [32];
  longlong local_c8;
  TPairInitializer<FGuid_const_&,TRefCountPtr<FOpenGLProgramBinaryMapping>_const_&> local_c0;
  undefined8 local_b0;
  FOpenGLProgramBinaryMapping *local_a8;
  FGuid *local_a0;
  longlong local_98;
  long64 local_90;
  FGuid *local_88;
  FString *local_80;
  FOpenGLProgramBinaryMapping *local_78 [3];
  byte local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_90 = param_4;
  local_98 = in_stack_00000030;
  pFVar8 = (FOpenGLProgramBinaryMapping *)0x0;
  local_c0.Key._0_4_ = 0;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (GMemoryMapGLProgramCache == false) {
    return (TRefCountPtr<FOpenGLProgramBinaryMapping>)param_1;
  }
  pFVar1 = &this->CurrentShaderPipelineProperties;
  this_00 = &this->MappedCacheFiles;
  local_a0 = &pFVar1->CacheVersionGuid;
  uVar9 = CityHash64((char *)pFVar1,0x10);
  iVar7 = TSet<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>,0>,FDefaultSetAllocator>
                      *)this_00,(uint)uVar9,&pFVar1->CacheVersionGuid);
  if (iVar7 == -1) {
LAB_145c03949:
    pFVar15 = (FOpenGLProgramBinaryMapping *)0x0;
    if (GMemoryMapGLProgramCache != false) {
      this_01 = FPlatformFileManager::Get();
      pIVar10 = FPlatformFileManager::GetPlatformFile(this_01);
      if (*(int *)((undefined8 *)CONCAT44(in_register_00000084,param_2) + 1) == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = *(wchar_t **)CONCAT44(in_register_00000084,param_2);
      }
      (**(code **)((longlong)*pIVar10 + 0x1b0))(pIVar10,local_78,pwVar17,0);
      uVar16 = (ulonglong)local_60;
      if ((2 < uVar16) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        TVar13.Reference = (FOpenGLProgramBinaryMapping *)(*pcVar4)();
        return (TRefCountPtr<FOpenGLProgramBinaryMapping>)TVar13.Reference;
      }
      if ((&`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
            ::__l2::bIsSameType)[uVar16] == '\0') {
        if ((local_60 != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          TVar13.Reference = (FOpenGLProgramBinaryMapping *)(*pcVar4)();
          return (TRefCountPtr<FOpenGLProgramBinaryMapping>)TVar13.Reference;
        }
        pFVar8 = local_78[0];
        local_c0.Value = (TRefCountPtr<FOpenGLProgramBinaryMapping> *)local_78[0];
        local_78[0] = (FOpenGLProgramBinaryMapping *)0x0;
        if ((2 < local_60) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          TVar13.Reference = (FOpenGLProgramBinaryMapping *)(*pcVar4)();
          return (TRefCountPtr<FOpenGLProgramBinaryMapping>)TVar13.Reference;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_60])(local_78);
        local_60 = 2;
        local_c0.Value = (TRefCountPtr<FOpenGLProgramBinaryMapping> *)0x0;
      }
      else {
        local_b0 = 0;
      }
      uVar16 = (ulonglong)local_60;
      if ((2 < local_60) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        TVar13.Reference = (FOpenGLProgramBinaryMapping *)(*pcVar4)();
        return (TRefCountPtr<FOpenGLProgramBinaryMapping>)TVar13.Reference;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16])(local_78);
      pFVar15 = pFVar8;
    }
    this_02 = ::operator_new(0x80);
    pFVar11 = (FOpenGLProgramBinaryMapping *)0x0;
    pFVar8 = pFVar15;
    if (this_02 != (FOpenGLProgramBinaryMapping *)0x0) {
      pFVar8 = (FOpenGLProgramBinaryMapping *)0x0;
      local_a8 = pFVar15;
      pFVar11 = FOpenGLProgramBinaryMapping::FOpenGLProgramBinaryMapping
                          (this_02,(IMappedFileHandle *)&local_a8,(uint)param_3);
    }
    pFVar15 = (FOpenGLProgramBinaryMapping *)(param_1->Data).AllocatorInstance.Data;
    if (pFVar15 != pFVar11) {
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)pFVar11;
      if (pFVar11 != (FOpenGLProgramBinaryMapping *)0x0) {
        LOCK();
        *(int *)&pFVar11->_padding_ = (int)pFVar11->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar15 != (FOpenGLProgramBinaryMapping *)0x0) {
        plVar3 = &pFVar15->_padding_;
        LOCK();
        lVar14 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if (((int)lVar14 == 1) && (plVar3 != (longlong *)0x0)) {
          (**(code **)pFVar15->_padding_)(pFVar15,1);
        }
      }
    }
    local_88 = local_a0;
    local_80 = param_1;
    TSet<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGuid_const_&,TRefCountPtr<FOpenGLProgramBinaryMapping>_const_&>_>
              ((TSet<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>,0>,FDefaultSetAllocator>
                *)this_00,&local_c0,(bool *)&local_88);
    if (pFVar8 == (FOpenGLProgramBinaryMapping *)0x0) goto LAB_145c03b55;
    puVar12 = (undefined8 *)pFVar8->_padding_;
  }
  else {
    lVar14 = (longlong)iVar7 * 0x20 + *(longlong *)&this_00->field_0x0;
    pFVar15 = (FOpenGLProgramBinaryMapping *)(lVar14 + 0x10);
    if (lVar14 == 0) {
      pFVar15 = pFVar8;
    }
    if (pFVar15 == (FOpenGLProgramBinaryMapping *)0x0) goto LAB_145c03949;
    pFVar15 = (FOpenGLProgramBinaryMapping *)pFVar15->_padding_;
    pFVar8 = (FOpenGLProgramBinaryMapping *)(param_1->Data).AllocatorInstance.Data;
    if (pFVar8 == pFVar15) goto LAB_145c03b55;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)pFVar15;
    if (pFVar15 != (FOpenGLProgramBinaryMapping *)0x0) {
      LOCK();
      *(int *)&pFVar15->_padding_ = (int)pFVar15->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar8 == (FOpenGLProgramBinaryMapping *)0x0) goto LAB_145c03b55;
    plVar3 = &pFVar8->_padding_;
    LOCK();
    lVar14 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if (((int)lVar14 != 1) || (plVar3 == (longlong *)0x0)) goto LAB_145c03b55;
    puVar12 = (undefined8 *)pFVar8->_padding_;
  }
  (*(code *)*puVar12)(pFVar8);
LAB_145c03b55:
  if (GMemoryMapGLProgramCache != false) {
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (*(longlong *)(pFVar2 + 0x10) == 0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4257000008441658722>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                         ,0x29e,"MappedCacheFile.IsValid()");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        TVar13.Reference = (FOpenGLProgramBinaryMapping *)(*pcVar4)();
        return (TRefCountPtr<FOpenGLProgramBinaryMapping>)TVar13.Reference;
      }
    }
    else {
      if ((local_98 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                             ,0x2a0,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        TVar13.Reference = (FOpenGLProgramBinaryMapping *)(*pcVar4)();
        return (TRefCountPtr<FOpenGLProgramBinaryMapping>)TVar13.Reference;
      }
      lVar5 = local_90;
      plVar3 = *(longlong **)(pFVar2 + 0x10);
      local_c8 = (**(code **)(*plVar3 + 8))(plVar3,local_90,local_98,0);
      if ((local_c8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("MappedRegion.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                             ,0x2a2,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        TVar13.Reference = (FOpenGLProgramBinaryMapping *)(*pcVar4)();
        return (TRefCountPtr<FOpenGLProgramBinaryMapping>)TVar13.Reference;
      }
      pFVar2 = (param_1->Data).AllocatorInstance.Data;
      if ((((int)lVar5 == 0) && (*(int *)(pFVar2 + 0x20) != 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("MappingRegionOffset != 0 || MappedRegions.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                             ,0xb7,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        TVar13.Reference = (FOpenGLProgramBinaryMapping *)(*pcVar4)();
        return (TRefCountPtr<FOpenGLProgramBinaryMapping>)TVar13.Reference;
      }
      *(int *)(pFVar2 + 0x28) = (int)lVar5;
      if (((*(longlong **)(pFVar2 + 0x18) <= &local_c8) &&
          (&local_c8 < *(longlong **)(pFVar2 + 0x18) + *(int *)(pFVar2 + 0x24))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        TVar13.Reference = (FOpenGLProgramBinaryMapping *)(*pcVar4)();
        return (TRefCountPtr<FOpenGLProgramBinaryMapping>)TVar13.Reference;
      }
      iVar7 = *(int *)(pFVar2 + 0x20);
      if (iVar7 == *(int *)(pFVar2 + 0x24)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(pFVar2 + 0x18),(int *)(pFVar2 + 0x24));
      }
      *(int *)(pFVar2 + 0x20) = iVar7 + 1;
      *(longlong *)(*(longlong *)(pFVar2 + 0x18) + (longlong)iVar7 * 8) = local_c8;
    }
  }
  return (TRefCountPtr<FOpenGLProgramBinaryMapping>)param_1;
}

// GetProgramBinaryCacheFilePath @ 145c04180

FString * __thiscall
FOpenGLProgramBinaryCache::GetProgramBinaryCacheFilePath
          (FOpenGLProgramBinaryCache *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FString local_18;
  
  if ((((this->CurrentShaderPipelineProperties).CacheVersionGuid.D == 0 &&
       (this->CurrentShaderPipelineProperties).CacheVersionGuid.C == 0) &&
      (this->CurrentShaderPipelineProperties).CacheVersionGuid.B == 0) &&
      (this->CurrentShaderPipelineProperties).CacheVersionGuid.A == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentShaderPipelineProperties.CacheVersionGuid != FGuid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                       ,0x3f8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  pTVar5 = &::operator/(&local_18,&this->CachePathRoot,&this->CacheSubDir)->Data;
  iVar3 = (this->CurrentShaderPipelineProperties).PipelineCacheName.Data.ArrayNum;
  iVar6 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar6 = 0;
  }
  if ((pTVar5->ArrayNum != 0) || (iVar3 = 2, iVar6 == -1)) {
    iVar3 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&__return_storage_ptr__->Data,pTVar5,iVar6 + iVar3);
  ::FString::PathAppend
            (__return_storage_ptr__,
             (wchar_t *)
             (this->CurrentShaderPipelineProperties).PipelineCacheName.Data.AllocatorInstance.Data,
             iVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitPrecaching @ 145c057e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FOpenGLProgramBinaryCache::InitPrecaching(FOpenGLProgramBinaryCache *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  IFileManager *pIVar6;
  ulonglong uVar7;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar8;
  FGuid *pFVar9;
  wchar_t *pwVar10;
  FString *pFVar11;
  ForAnyElementType FVar12;
  FString *pFVar13;
  bool bVar14;
  undefined1 local_res10 [8];
  uint local_res18;
  FString local_d8;
  FString *local_c8;
  undefined8 local_c0;
  ForAnyElementType local_b8;
  uint uStack_b0;
  uint uStack_ac;
  FString local_a8;
  FString local_98;
  undefined1 local_88 [8];
  ForAnyElementType local_80;
  int local_78;
  int local_74;
  longlong local_70;
  undefined1 local_60 [4];
  FScriptContainerElement *local_5c;
  undefined8 uStack_54;
  bool local_4c;
  uint local_48;
  
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GProgramBinaryFileCacheCS);
  ::FString::FString(&local_98,L"PrecacheBinaries");
  ::operator/(&local_a8,&this->CachePathRoot,&this->CacheSubDir);
  local_c8 = (FString *)0x0;
  local_c0 = 0;
  pIVar6 = IFileManager::Get();
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar12.Data = local_a8.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar6 + 0x78))(pIVar6,&local_c8,FVar12.Data);
  uVar7 = (ulonglong)(int)(uint)local_c0;
  pFVar13 = local_c8 + uVar7;
  local_res18 = (uint)local_c0;
  pFVar11 = local_c8;
  while( true ) {
    if ((uint)local_c0 != (int)uVar7) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    iVar2 = local_a8.Data.ArrayNum;
    FVar12.Data = local_a8.Data.AllocatorInstance.Data;
    if (pFVar11 == pFVar13) break;
    iVar3 = (pFVar11->Data).ArrayNum;
    iVar5 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    iVar3 = iVar5 + 1;
    if ((local_a8.Data.ArrayNum == 0) && (iVar3 != 0)) {
      iVar3 = iVar5 + 2;
LAB_145c05906:
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar3 != 0) goto LAB_145c0590f;
      local_d8.Data.ArrayMax = 0;
      local_d8.Data.ArrayNum = local_a8.Data.ArrayNum;
    }
    else {
      if (local_a8.Data.ArrayNum == 0) goto LAB_145c05906;
LAB_145c0590f:
      local_d8.Data.ArrayNum = local_a8.Data.ArrayNum;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar4 = local_a8.Data.ArrayNum + iVar3;
      if ((int)uVar4 < local_a8.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar4,0,(ForAnyElementType *)&local_d8,local_a8.Data.ArrayNum,
                 &local_d8.Data.ArrayMax);
      if (iVar2 != 0) {
        memcpy(local_d8.Data.AllocatorInstance.Data,FVar12.Data,(longlong)iVar2 * 2);
      }
    }
    ::FString::PathAppend(&local_d8,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,iVar5);
    if (pFVar11 != &local_d8) {
      pFVar1 = (pFVar11->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar11->Data).AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
      (pFVar11->Data).ArrayNum = local_d8.Data.ArrayNum;
      (pFVar11->Data).ArrayMax = local_d8.Data.ArrayMax;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    uVar7 = (ulonglong)local_res18;
    pFVar11 = pFVar11 + 1;
  }
  iVar2 = (uint)local_c0;
  pFVar13 = local_c8 + (int)(uint)local_c0;
  local_60 = (undefined1  [4])0xffffffff;
  local_5c = (FScriptContainerElement *)0x0;
  uStack_54._0_4_ = 0;
  uStack_54._4_4_ = 0;
  local_48 = 0;
  pFVar11 = local_c8;
  do {
    if ((uint)local_c0 != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar11 == pFVar13) {
      if (((local_60 == (undefined1  [4])0x6) &&
          (bVar14 = UE::OpenGL::AreBinaryProgramsCompressed(), bVar14 == local_4c)) &&
         (local_48 != 0)) {
        pFVar9 = (FGuid *)&local_b8;
        local_b8.Data = local_5c;
        uStack_b0 = (uint)uStack_54;
        uStack_ac = uStack_54._4_4_;
      }
      else {
        pFVar9 = FGuid::NewGuid((FGuid *)local_88);
      }
      FVar12.Data = local_98.Data.AllocatorInstance.Data;
      local_b8.Data = *(FScriptContainerElement **)pFVar9;
      uStack_b0 = pFVar9->C;
      uStack_ac = pFVar9->D;
      local_88[0] = 0;
      local_80.Data = (FScriptContainerElement *)0x0;
      local_78 = local_98.Data.ArrayNum;
      if (local_98.Data.ArrayNum == 0) {
        local_74 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_98.Data.ArrayNum,0,&local_80,local_98.Data.ArrayNum,&local_74);
        memcpy(local_80.Data,FVar12.Data,(longlong)local_98.Data.ArrayNum * 2);
      }
      GShaderCachePrecompileContext.bSlowPrecompileTask = (bool)local_88[0];
      if (GShaderCachePrecompileContext.CacheName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(GShaderCachePrecompileContext.CacheName.Data.AllocatorInstance.Data);
      }
      GShaderCachePrecompileContext.CacheName.Data.ArrayMax = local_74;
      GShaderCachePrecompileContext.CacheName.Data.AllocatorInstance.Data = local_80.Data;
      GShaderCachePrecompileContext.CacheName.Data.ArrayNum = local_78;
      if (4 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      OnShaderPipelineCacheOpened
                (this,&local_98,GRHIGlobals.ShaderPlatformForFeatureLevel[1],1,(FGuid *)&local_b8,
                 &GShaderCachePrecompileContext);
      DestructItems<FString,int>(local_c8,(uint)local_c0);
      if (local_c8 != (FString *)0x0) {
        FMemory::Free(local_c8);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&GProgramBinaryFileCacheCS);
      return;
    }
    FPaths::GetBaseFilename((FString *)&local_b8,pFVar11,true);
    this_00 = FPlatformFileManager::Get();
    pIVar8 = FPlatformFileManager::GetPlatformFile(this_00);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar8 + 0x130))(pIVar8,local_88,pwVar10);
    uVar4 = (uint)_uStack_b0;
    if (uVar4 == local_98.Data.ArrayNum) {
      if (1 < (int)uVar4) {
        iVar5 = wcscmp((wchar_t *)local_b8.Data,(wchar_t *)local_98.Data.AllocatorInstance.Data);
        bVar14 = iVar5 == 0;
        goto LAB_145c05a5e;
      }
LAB_145c05a65:
      if ((GBinaryCacheMaxPermittedSizeMB << 0x14 < local_70) ||
         (bVar14 = UE::OpenGL::IsBinaryCacheValid
                             (pFVar11,(FGuid *)0x0,true,(FBinaryCacheFileHeader *)local_60), !bVar14
         )) goto LAB_145c05a93;
    }
    else {
      bVar14 = uVar4 + local_98.Data.ArrayNum == 1;
LAB_145c05a5e:
      if (bVar14) goto LAB_145c05a65;
LAB_145c05a93:
      if (4 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar8 + 0x88))(pIVar8,pwVar10);
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// Initialize @ 145c07c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FOpenGLProgramBinaryCache::Initialize(void)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  FOpenGLProgramBinaryCache *pFVar6;
  FString *pFVar7;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar8;
  wchar_t *pwVar9;
  FPlatformFileManager *pFVar10;
  IPlatformFile *pIVar11;
  FOpenGLProgramBinaryCache *pFVar12;
  FOpenGLProgramBinaryCache *pFVar13;
  FDelegateHandle FVar14;
  ForAnyElementType FVar15;
  int iVar16;
  ForAnyElementType FVar17;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((CachePtr != (FOpenGLProgramBinaryCache *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachePtr == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                         ,0x141,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar2 = CVarPBCEnable.Ref;
  bVar4 = IsInParallelGameThread();
  pFVar13 = (FOpenGLProgramBinaryCache *)0x0;
  if (!bVar4) {
    bVar4 = IsInGameThread();
    pFVar6 = (FOpenGLProgramBinaryCache *)&DAT_00000004;
    if (!bVar4) goto LAB_145c07cd1;
  }
  pFVar6 = pFVar13;
LAB_145c07cd1:
  iVar16 = 0;
  if (*(int *)((longlong)&(pFVar6->CachePathRoot).Data.AllocatorInstance.Data +
              (longlong)pTVar2->ShadowedValue) == 0) {
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      return;
    }
  }
  else if (glProgramBinary == (_func___cdecl_void_uint_uint_void_ptr_int *)0x0) {
    if (2 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      return;
    }
  }
  else {
    pFVar7 = FPaths::ProjectSavedDir();
    pFVar7 = ::operator/(&local_58,pFVar7,L"ProgramBinaryCache");
    pFVar6 = pFVar13;
    if (&local_38 != pFVar7) {
      pFVar6 = (FOpenGLProgramBinaryCache *)(pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar16 = (pFVar7->Data).ArrayNum;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar7 = FPaths::ProjectSavedDir();
    pTVar8 = &::operator/(&local_48,pFVar7,L"RHICache")->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_88,pTVar8,0x14 - (uint)(pTVar8->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_88,L"ProgramBinaryCache",0x12);
    FVar17.Data = local_88.AllocatorInstance.Data;
    iVar3 = local_88.ArrayNum;
    local_78.Data.AllocatorInstance.Data = local_88.AllocatorInstance.Data;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = local_88.ArrayNum;
    local_78.Data.ArrayMax = local_88.ArrayMax;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pwVar9 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar9,L"ClearOpenGLBinaryProgramCache");
    if (bVar4) {
      if (4 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      pFVar10 = FPlatformFileManager::Get();
      pIVar11 = FPlatformFileManager::GetPlatformFile(pFVar10);
      FVar15.Data = (FScriptContainerElement *)L"";
      if (iVar3 != 0) {
        FVar15.Data = FVar17.Data;
      }
      (**(code **)((longlong)*pIVar11 + 0x1f8))(pIVar11,FVar15.Data);
    }
    pFVar10 = FPlatformFileManager::Get();
    pIVar11 = FPlatformFileManager::GetPlatformFile(pFVar10);
    pFVar12 = (FOpenGLProgramBinaryCache *)L"";
    if (iVar16 != 0) {
      pFVar12 = pFVar6;
    }
    cVar5 = (**(code **)((longlong)*pIVar11 + 0x118))(pIVar11,pFVar12);
    if (cVar5 != '\0') {
      if (4 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      pFVar10 = FPlatformFileManager::Get();
      pIVar11 = FPlatformFileManager::GetPlatformFile(pFVar10);
      pFVar12 = (FOpenGLProgramBinaryCache *)L"";
      if (iVar16 != 0) {
        pFVar12 = pFVar6;
      }
      FVar15.Data = (FScriptContainerElement *)L"";
      if (iVar3 != 0) {
        FVar15.Data = FVar17.Data;
      }
      (**(code **)((longlong)*pIVar11 + 0x210))(pIVar11,FVar15.Data,pFVar12,0);
      pFVar10 = FPlatformFileManager::Get();
      pIVar11 = FPlatformFileManager::GetPlatformFile(pFVar10);
      pFVar12 = (FOpenGLProgramBinaryCache *)L"";
      if (iVar16 != 0) {
        pFVar12 = pFVar6;
      }
      (**(code **)((longlong)*pIVar11 + 0x1f8))(pIVar11,pFVar12);
    }
    pFVar12 = ::operator_new(0x1b8);
    if (pFVar12 != (FOpenGLProgramBinaryCache *)0x0) {
      pFVar13 = FOpenGLProgramBinaryCache(pFVar12,&local_78);
      FVar17.Data = local_78.Data.AllocatorInstance.Data;
    }
    CachePtr = pFVar13;
    if (4 < (byte)LogRHI._0_1_) {
      ::operator/(&local_68,&pFVar13->CachePathRoot,&pFVar13->CacheSubDir);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = IsPrecachingEnabled();
    if (bVar4) {
      InitPrecaching(CachePtr);
    }
    else {
      if (4 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      FVar14 = TMulticastDelegateRegistration<void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&),FDefaultDelegateUserPolicy>
               ::AddRaw<FOpenGLProgramBinaryCache>
                         (&FShaderPipelineCache::OnCachedOpened,
                          (FOpenGLProgramBinaryCache *)&stack0x00000008,(pmf_959b96b6)CachePtr);
                    /* WARNING: Load size is inaccurate */
      (CachePtr->OnShaderPipelineCacheOpenedDelegate).ID = *FVar14.ID;
      FVar14 = TMulticastDelegateRegistration<void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
               ::AddRaw<FOpenGLProgramBinaryCache>
                         ((TMulticastDelegateRegistration<void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
                           *)&FShaderPipelineCache::OnPrecompilationComplete,
                          (FOpenGLProgramBinaryCache *)&stack0x00000010,(pmf_83e8e0b1)CachePtr);
                    /* WARNING: Load size is inaccurate */
      (CachePtr->OnShaderPipelineCachePrecompilationCompleteDelegate).ID = *FVar14.ID;
    }
    if (pFVar6 != (FOpenGLProgramBinaryCache *)0x0) {
      FMemory::Free(pFVar6);
    }
    if (FVar17.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar17.Data);
    }
  }
  return;
}

// IsBuildingCache @ 145c0a9d0

bool __cdecl FOpenGLProgramBinaryCache::IsBuildingCache(void)

{
  if (CachePtr != (FOpenGLProgramBinaryCache *)0x0) {
    return CachePtr->CurrentBinaryFileState == BuildingCacheFile;
  }
  return false;
}

// IsEnabled @ 145c0aa90

bool __cdecl FOpenGLProgramBinaryCache::IsEnabled(void)

{
  return CachePtr != (FOpenGLProgramBinaryCache *)0x0;
}

// MarkValidContent @ 145c0d470

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOpenGLProgramBinaryCache::MarkValidContent(FOpenGLProgramBinaryCache *this,int param_1)

{
  int *piVar1;
  FArchive *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_private:_bool___cdecl_FOpenGLProgramBinaryCache::MarkValidContent(int)_::_2_::FStat_STAT_OpenGLMarkValidBinaryProgramCache>
  FVar15;
  undefined8 uVar16;
  TDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar17;
  FNameEntryId FVar18;
  FName FVar19;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_c8;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  uint uStack_9c;
  FName local_98;
  FName local_90;
  FBinaryCacheFileHeader local_88;
  FReadAccessScope local_68;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_OpenGLMarkValidBinaryProgramCache ==
        (FThreadSafeStaticStat<_private:_bool___cdecl_FOpenGLProgramBinaryCache::MarkValidContent(int)_::_2_::FStat_STAT_OpenGLMarkValidBinaryProgramCache>
         )0x0) {
      pFVar14 = ::FName::FName(&local_res20,"STAT_OpenGLMarkValidBinaryProgramCache");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLMarkValidBinaryProgramCache,
                 *pFVar14,L"STAT_OpenGLMarkValidBinaryProgramCache","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_OpenGLMarkValidBinaryProgramCache;
  if (StatPtr_STAT_OpenGLMarkValidBinaryProgramCache ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_FOpenGLProgramBinaryCache::MarkValidContent(int)_::_2_::FStat_STAT_OpenGLMarkValidBinaryProgramCache>
       )0x0) {
    pFVar14 = ::FName::FName(&local_98,"STAT_OpenGLMarkValidBinaryProgramCache");
    FVar15 = (FThreadSafeStaticStat<_private:_bool___cdecl_FOpenGLProgramBinaryCache::MarkValidContent(int)_::_2_::FStat_STAT_OpenGLMarkValidBinaryProgramCache>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_OpenGLMarkValidBinaryProgramCache,*pFVar14,
                          L"STAT_OpenGLMarkValidBinaryProgramCache","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar15;
  bVar9 = false;
  bVar11 = false;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar17 = FVar19.Number;
  if ((FVar18.Value == 0) && (uVar17 == 0)) {
LAB_145c0d5d1:
    bVar10 = false;
    FVar19.ComparisonIndex.Value = 0;
    FVar19.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar18.Value;
        local_res8.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                   ,0x34b);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145c0d5d1;
    local_res18.s.LowPart = FVar18.Value;
    local_res18.s.HighPart = uVar17;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar10 = true;
  }
  if ((this->BinaryCacheWriteFileHandle == (FArchive *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("BinaryCacheWriteFileHandle != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                          ,0x34c,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  pFVar2 = this->BinaryCacheWriteFileHandle;
  if ((pFVar2->field_0x29 & 6) == 0) {
    uVar16 = (**(code **)(*(longlong *)pFVar2 + 0x28))(pFVar2);
    (**(code **)(*(longlong *)pFVar2 + 0x1b8))(pFVar2,0);
    uVar5 = (this->CurrentShaderPipelineProperties).CacheVersionGuid.A;
    uVar6 = (this->CurrentShaderPipelineProperties).CacheVersionGuid.B;
    uVar7 = (this->CurrentShaderPipelineProperties).CacheVersionGuid.C;
    uVar8 = (this->CurrentShaderPipelineProperties).CacheVersionGuid.D;
    local_b8 = 6;
    uStack_b4 = uVar5;
    uStack_b0 = uVar6;
    uStack_ac = uVar7;
    uStack_a8 = uVar8;
    bVar12 = UE::OpenGL::AreBinaryProgramsCompressed();
    local_88.BinaryCacheGuid.A = uStack_b4;
    local_88.Version = local_b8;
    local_88.BinaryCacheGuid.C = uStack_ac;
    local_88.BinaryCacheGuid.B = uStack_b0;
    uStack_a4 = CONCAT31(uStack_a4._1_3_,bVar12);
    uStack_9c = (uint)uVar16;
    local_88._20_4_ = uStack_a4;
    local_88.BinaryCacheGuid.D = uStack_a8;
    local_88.ValidSize = uStack_9c;
    local_88.ProgramCount = param_1;
    iStack_a0 = param_1;
    if (5 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    UE::OpenGL::operator<<(pFVar2,&local_88);
    (**(code **)(*(longlong *)pFVar2 + 0x1b8))(pFVar2,uVar16);
    (**(code **)(*(longlong *)pFVar2 + 0x208))(pFVar2);
    if ((this->BinaryCacheWriteFileHandle->field_0x29 & 6) == 0) goto LAB_145c0d722;
  }
  this_00 = RHIGetPanicDelegate();
  pFVar14 = ::FName::FName(&local_90,"FailedBinaryProgramArchiveWrite");
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_68);
  if ((*(int *)&this_00->field_0x10 != 0) &&
     (plVar3 = *(longlong **)&this_00->field_0x8, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,pFVar14);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
LAB_145c0d722:
  (this->CurrentShaderPipelineProperties).NumProgramsFlushed = param_1;
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_c8.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_c8.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_c8.StatData.Pad[4] = '\0';
      local_c8.StatData.Pad[5] = '\0';
      local_c8.StatData.Pad[6] = '\0';
      local_c8.StatData.Pad[7] = '\0';
      local_c8.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_c8.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_c8.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_c8.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_c8);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return param_1 != 0;
}

// OnShaderPipelineCacheOpened @ 145c0e840

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLProgramBinaryCache::OnShaderPipelineCacheOpened
          (FOpenGLProgramBinaryCache *this,FString *param_1,EShaderPlatform param_2,uint param_3,
          FGuid *param_4,FShaderCachePrecompileContext *param_5)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  FString local_58;
  FString local_48;
  FString local_38;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GProgramBinaryFileCacheCS);
  if ((((this->CurrentShaderPipelineProperties).CacheVersionGuid.D != 0 ||
       (this->CurrentShaderPipelineProperties).CacheVersionGuid.C != 0) ||
      (this->CurrentShaderPipelineProperties).CacheVersionGuid.B != 0) ||
      (this->CurrentShaderPipelineProperties).CacheVersionGuid.A != 0) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FGuid::AppendString(&(this->CurrentShaderPipelineProperties).CacheVersionGuid,&local_58,Digits);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentShaderPipelineProperties.CacheVersionGuid == FGuid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                       ,0x216,
                       L"OGL: OnShaderPipelineCacheOpened, previous PSO cache %s (%s) has not completed!"
                      );
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar1 = &(this->CurrentShaderPipelineProperties).PipelineCacheName;
  uVar6 = param_4->B;
  uVar7 = param_4->C;
  uVar8 = param_4->D;
  (this->CurrentShaderPipelineProperties).CacheVersionGuid.A = param_4->A;
  (this->CurrentShaderPipelineProperties).CacheVersionGuid.B = uVar6;
  (this->CurrentShaderPipelineProperties).CacheVersionGuid.C = uVar7;
  (this->CurrentShaderPipelineProperties).CacheVersionGuid.D = uVar8;
  if (pFVar1 != &param_5->CacheName) {
    iVar3 = (param_5->CacheName).Data.ArrayNum;
    piVar2 = &(this->CurrentShaderPipelineProperties).PipelineCacheName.Data.ArrayMax;
    iVar4 = *piVar2;
    _Src = (param_5->CacheName).Data.AllocatorInstance.Data;
    (this->CurrentShaderPipelineProperties).PipelineCacheName.Data.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,iVar4,(ForAnyElementType *)pFVar1,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
      }
    }
  }
  if (param_3 == 0) {
    if ((this->CurrentBinaryFileState != Uninitialized) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentBinaryFileState == EBinaryFileState::Uninitialized",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                           ,0x21c,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (5 < (byte)LogRHI._0_1_) {
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      FGuid::AppendString(&(this->CurrentShaderPipelineProperties).CacheVersionGuid,&local_48,Digits
                         );
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if (4 < (byte)LogRHI._0_1_) {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      FGuid::AppendString(&(this->CurrentShaderPipelineProperties).CacheVersionGuid,&local_38,Digits
                         );
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    ScanProgramCacheFile(this);
    if (this->CurrentBinaryFileState == BuildingCacheFile) {
      param_5->bSlowPrecompileTask = true;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145c0eaca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GProgramBinaryFileCacheCS);
  return;
}

// OnShaderPipelineCachePrecompilationComplete @ 145c0eae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLProgramBinaryCache::OnShaderPipelineCachePrecompilationComplete
          (FOpenGLProgramBinaryCache *this,uint param_1,double param_2,
          FShaderCachePrecompileContext *param_3)

{
  EBinaryFileState EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_void___cdecl_FOpenGLProgramBinaryCache::OnShaderPipelineCachePrecompilationComplete(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&)_::_2_::FStat_STAT_OpenGLOnShaderPipelineCachePrecompilationComplete>
  FVar9;
  ulong64 uVar10;
  FName FVar11;
  FString local_90;
  FColor_u_0 local_80 [2];
  FString local_78;
  FName local_68;
  FName local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  FName local_40;
  FName local_38 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_OpenGLOnShaderPipelineCachePrecompilationComplete ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FOpenGLProgramBinaryCache::OnShaderPipelineCachePrecompilationComplete(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&)_::_2_::FStat_STAT_OpenGLOnShaderPipelineCachePrecompilationComplete>
         )0x0) {
      pFVar8 = ::FName::FName(&local_40,"STAT_OpenGLOnShaderPipelineCachePrecompilationComplete");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_OpenGLOnShaderPipelineCachePrecompilationComplete,*pFVar8,
                 L"STAT_OpenGLOnShaderPipelineCachePrecompilationComplete","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_OpenGLOnShaderPipelineCachePrecompilationComplete;
  if (StatPtr_STAT_OpenGLOnShaderPipelineCachePrecompilationComplete ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FOpenGLProgramBinaryCache::OnShaderPipelineCachePrecompilationComplete(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&)_::_2_::FStat_STAT_OpenGLOnShaderPipelineCachePrecompilationComplete>
       )0x0) {
    pFVar8 = ::FName::FName(local_38,"STAT_OpenGLOnShaderPipelineCachePrecompilationComplete");
    FVar9 = (FThreadSafeStaticStat<_private:_void___cdecl_FOpenGLProgramBinaryCache::OnShaderPipelineCachePrecompilationComplete(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&)_::_2_::FStat_STAT_OpenGLOnShaderPipelineCachePrecompilationComplete>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_OpenGLOnShaderPipelineCachePrecompilationComplete,*pFVar8,
                         L"STAT_OpenGLOnShaderPipelineCachePrecompilationComplete","STATGROUP_Quick"
                         ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  if ((FVar11.ComparisonIndex.Value.Value == 0) && (FVar11.Number == 0)) {
LAB_145c0ec49:
    bVar4 = false;
    FVar11 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_80[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_80[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar11.ComparisonIndex.Value.Value;
        local_68.Number = FVar11.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                   ,0x23d);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145c0ec49;
    local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar11;
    FThreadStats::AddMessage(FVar11,CycleScopeStart);
    bVar4 = true;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GProgramBinaryFileCacheCS);
  EVar1 = this->CurrentBinaryFileState;
  uVar10 = CityHash64((char *)&this->CurrentShaderPipelineProperties,0x10);
  TSet<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>,0>,FDefaultSetAllocator>
  ::FindIndexByHash<FGuid>
            ((TSet<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>,0>,FDefaultSetAllocator>
              *)&this->MappedCacheFiles,(uint)uVar10,
             &(this->CurrentShaderPipelineProperties).CacheVersionGuid);
  if (EVar1 == BuildingCacheFile) {
    if ((param_1 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsBuildingCache || Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                           ,0x248,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (((param_1 != 0) && (this->CurrentBinaryFileState != ValidCacheFile)) &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("bIsBuildingCache || Count == 0 || CurrentBinaryFileState == EBinaryFileState::ValidCacheFile"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                              ,0x249,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (4 < (byte)LogRHI._0_1_) {
    local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.Data.ArrayNum = 0;
    local_90.Data.ArrayMax = 0;
    FGuid::AppendString(&(this->CurrentShaderPipelineProperties).CacheVersionGuid,&local_90,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    if ((FName)local_90.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  if (EVar1 == BuildingCacheFile) {
    bVar6 = CloseCacheWriteHandle
                      (this,*(int *)&(this->ProgramsInCurrentCache).Elements.field_0x8 -
                            *(int *)&(this->ProgramsInCurrentCache).Elements.field_0x34);
    if ((!bVar6) || (bVar7 = IsInParallelGameThread(), bVar7)) {
      Reset(this);
      if (!bVar6) goto LAB_145c0eec3;
    }
    else {
      IsInGameThread();
      Reset(this);
    }
    ScanProgramCacheFile(this);
    if (this->CurrentBinaryFileState == BuildingCacheFile) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsBuildingCache_internal()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                         ,0x26c,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (this->CurrentBinaryFileState == BuildingCacheFile) {
        if (1 < (byte)LogRHI._0_1_) {
          local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.Data.ArrayNum = 0;
          local_78.Data.ArrayMax = 0;
          FGuid::AppendString(&(this->CurrentShaderPipelineProperties).CacheVersionGuid,&local_78,
                              Digits);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        CloseCacheWriteHandle
                  (this,*(int *)&(this->ProgramsInCurrentCache).Elements.field_0x8 -
                        *(int *)&(this->ProgramsInCurrentCache).Elements.field_0x34);
      }
    }
  }
LAB_145c0eec3:
  Reset(this);
  local_50 = 0;
  uStack_48 = 0;
  (this->CurrentShaderPipelineProperties).CacheVersionGuid.A = 0;
  (this->CurrentShaderPipelineProperties).CacheVersionGuid.B = 0;
  (this->CurrentShaderPipelineProperties).CacheVersionGuid.C = 0;
  (this->CurrentShaderPipelineProperties).CacheVersionGuid.D = 0;
  ::FString::Reset(&(this->CurrentShaderPipelineProperties).PipelineCacheName,0);
  (this->CurrentShaderPipelineProperties).LastMappedPosition = 0;
  (this->CurrentShaderPipelineProperties).MappedPrograms = 0;
  (this->CurrentShaderPipelineProperties).NumProgramsFlushed = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&GProgramBinaryFileCacheCS);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar11,CycleScopeEnd);
  }
  return;
}

// OpenCacheWriteHandle @ 145c0eff0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOpenGLProgramBinaryCache::OpenCacheWriteHandle
          (FOpenGLProgramBinaryCache *this,FString *param_1,bool param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  IFileManager *pIVar5;
  FArchive *pFVar6;
  wchar_t *pwVar7;
  
  if ((this->BinaryCacheWriteFileHandle != (FArchive *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BinaryCacheWriteFileHandle == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                         ,0x33f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pIVar5 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar6 = (FArchive *)
           (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,pwVar7,(uint)param_2 << 3 | 0x10);
  this->BinaryCacheWriteFileHandle = pFVar6;
  if ((4 < (byte)LogRHI._0_1_) && (pFVar6 != (FArchive *)0x0)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((2 < (byte)LogRHI._0_1_) && (this->BinaryCacheWriteFileHandle == (FArchive *)0x0)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (((1 < (byte)LogRHI._0_1_) && (this->BinaryCacheWriteFileHandle != (FArchive *)0x0)) &&
     ((bVar1 = this->BinaryCacheWriteFileHandle->field_0x29, (bVar1 >> 1 & 1) != 0 ||
      ((bVar1 >> 2 & 1) != 0)))) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return this->BinaryCacheWriteFileHandle != (FArchive *)0x0;
}

// ReadProgramFile_Internal @ 145c249b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOpenGLProgramBinaryCache::ReadProgramFile_Internal
          (FOpenGLProgramBinaryCache *this,uint param_1,long64 param_2,FString *param_3,
          FArchive *param_4)

{
  FScriptContainerElement *pFVar1;
  ulong64 *puVar2;
  int *piVar3;
  longlong *plVar4;
  IMappedFileRegion *pIVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  ForAnyElementType this_00;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_private:_bool___cdecl_FOpenGLProgramBinaryCache::ReadProgramFile_Internal(unsigned_int,__int64,FString_const_&,FArchive_&)_::_2_::FStat_STAT_OpenGLReadBinaryProgramCache>
  FVar14;
  longlong lVar15;
  undefined8 uVar16;
  TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *pTVar17;
  FOpenGLProgramBinary *pFVar18;
  FOpenGLProgramBinary *pFVar19;
  ulonglong uVar20;
  long64 lVar21;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  ForAnyElementType FVar22;
  uint uVar23;
  FNameEntryId FVar24;
  FName FVar25;
  ulonglong uVar26;
  FSHAHash *pFVar27;
  uint uVar28;
  bool bVar29;
  undefined1 auStackY_338 [32];
  uint local_2d4;
  uint local_2d0;
  FString local_2c8;
  FString local_2b8;
  undefined1 local_2a8 [16];
  int local_298 [2];
  FColor_u_0 local_290 [2];
  long64 local_288;
  FString local_280;
  FString local_270;
  FName local_260;
  undefined8 local_258;
  FOpenGLProgramBinary *local_250;
  FOpenGLProgramBinary *local_248;
  FString local_240;
  FString local_230;
  FString local_220;
  FName local_210;
  undefined1 local_200 [8];
  TPairInitializer<FOpenGLProgramKey_&,TUniqueObj<FOpenGLProgramBinary>_&&> local_1f8;
  FOpenGLProgramBinaryCache *local_1e8;
  LARGE_INTEGER local_1e0;
  FString local_1d8;
  FStatMessage local_1c8;
  uchar *local_1b8;
  uint uStack_1b0;
  uchar auStack_1ac [4];
  FOpenGLProgramKey *local_1a8;
  FOpenGLProgramBinary **local_1a0;
  FOpenGLProgramKey *local_198;
  FOpenGLProgramBinary **local_190;
  FName local_188;
  FName local_180;
  TArrayView<unsigned_char_const_,int> local_178;
  FOpenGLProgramKey local_168;
  longlong local_f0 [2];
  uint local_e0 [36];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_338;
  uVar28 = 0;
  local_2d0 = 0;
  local_2b8.Data.ArrayMax = param_1;
  local_288 = param_2;
  local_1e8 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_OpenGLReadBinaryProgramCache ==
        (FThreadSafeStaticStat<_private:_bool___cdecl_FOpenGLProgramBinaryCache::ReadProgramFile_Internal(unsigned_int,__int64,FString_const_&,FArchive_&)_::_2_::FStat_STAT_OpenGLReadBinaryProgramCache>
         )0x0) {
      pFVar13 = ::FName::FName(&local_180,"STAT_OpenGLReadBinaryProgramCache");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLReadBinaryProgramCache,*pFVar13,
                 L"STAT_OpenGLReadBinaryProgramCache","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_OpenGLReadBinaryProgramCache;
  if (StatPtr_STAT_OpenGLReadBinaryProgramCache ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_FOpenGLProgramBinaryCache::ReadProgramFile_Internal(unsigned_int,__int64,FString_const_&,FArchive_&)_::_2_::FStat_STAT_OpenGLReadBinaryProgramCache>
       )0x0) {
    pFVar13 = ::FName::FName(&local_188,"STAT_OpenGLReadBinaryProgramCache");
    FVar14 = (FThreadSafeStaticStat<_private:_bool___cdecl_FOpenGLProgramBinaryCache::ReadProgramFile_Internal(unsigned_int,__int64,FString_const_&,FArchive_&)_::_2_::FStat_STAT_OpenGLReadBinaryProgramCache>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLReadBinaryProgramCache,
                          *pFVar13,L"STAT_OpenGLReadBinaryProgramCache","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar14;
  bVar7 = false;
  bVar8 = false;
  local_210.ComparisonIndex.Value = 0;
  local_210.Number = 0;
  bVar9 = false;
  bVar29 = false;
  FVar24 = FVar25.ComparisonIndex.Value;
  uVar11 = FVar25.Number;
  if ((FVar24.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_290[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_290[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar9 = false;
      bVar29 = true;
      if (-1 < CpuChannel->Enabled) {
        local_260.ComparisonIndex.Value = FVar24.Value;
        local_260.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_260,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                   ,0x308);
        bVar7 = true;
        bVar8 = true;
        bVar9 = true;
        bVar29 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2a8._0_4_ = FVar24.Value;
      local_2a8._4_4_ = uVar11;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar9 = true;
      goto LAB_145c24b54;
    }
  }
  bVar8 = bVar29;
  bVar7 = bVar9;
  bVar9 = false;
  FVar25 = local_210;
LAB_145c24b54:
  uVar11 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&GPendingGLProgramCreateRequestsCS);
  local_1f8.Value = (TUniqueObj<FOpenGLProgramBinary> *)&this->PendingGLContainerPrograms;
  TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
             *)local_1f8.Value,local_2b8.Data.ArrayMax);
  GetOrAddFileMapping(this,&local_2b8,(int)param_3,(ulonglong)(uint)local_2b8.Data.ArrayMax,
                      (this->CurrentShaderPipelineProperties).LastMappedPosition);
  if (4 < (byte)LogRHI._0_1_) {
    FOpenGLProgramBinaryMapping::HasValidMapping
              ((FOpenGLProgramBinaryMapping *)local_2b8.Data.AllocatorInstance.Data);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  lVar15 = (**(code **)(*(longlong *)param_4 + 0x28))(param_4);
  if (lVar15 < local_288) {
    do {
      pFVar27 = local_168.ShaderHashes;
      local_168.ShaderHashes[0].Hash[0x10] = '\0';
      local_168.ShaderHashes[0].Hash[0x11] = '\0';
      local_168.ShaderHashes[0].Hash[0x12] = '\0';
      local_168.ShaderHashes[0].Hash[0x13] = '\0';
      local_168.ShaderHashes[1].Hash[0x10] = '\0';
      local_168.ShaderHashes[1].Hash[0x11] = '\0';
      local_168.ShaderHashes[1].Hash[0x12] = '\0';
      local_168.ShaderHashes[1].Hash[0x13] = '\0';
      local_168.ShaderHashes[0].Hash[0] = '\0';
      local_168.ShaderHashes[0].Hash[1] = '\0';
      local_168.ShaderHashes[0].Hash[2] = '\0';
      local_168.ShaderHashes[0].Hash[3] = '\0';
      local_168.ShaderHashes[0].Hash[4] = '\0';
      local_168.ShaderHashes[0].Hash[5] = '\0';
      local_168.ShaderHashes[0].Hash[6] = '\0';
      local_168.ShaderHashes[0].Hash[7] = '\0';
      local_168.ShaderHashes[0].Hash[8] = '\0';
      local_168.ShaderHashes[0].Hash[9] = '\0';
      local_168.ShaderHashes[0].Hash[10] = '\0';
      local_168.ShaderHashes[0].Hash[0xb] = '\0';
      local_168.ShaderHashes[0].Hash[0xc] = '\0';
      local_168.ShaderHashes[0].Hash[0xd] = '\0';
      local_168.ShaderHashes[0].Hash[0xe] = '\0';
      local_168.ShaderHashes[0].Hash[0xf] = '\0';
      local_168.ShaderHashes[2].Hash[0x10] = '\0';
      local_168.ShaderHashes[2].Hash[0x11] = '\0';
      local_168.ShaderHashes[2].Hash[0x12] = '\0';
      local_168.ShaderHashes[2].Hash[0x13] = '\0';
      lVar15 = 6;
      local_168.ShaderHashes[1].Hash[0] = '\0';
      local_168.ShaderHashes[1].Hash[1] = '\0';
      local_168.ShaderHashes[1].Hash[2] = '\0';
      local_168.ShaderHashes[1].Hash[3] = '\0';
      local_168.ShaderHashes[1].Hash[4] = '\0';
      local_168.ShaderHashes[1].Hash[5] = '\0';
      local_168.ShaderHashes[1].Hash[6] = '\0';
      local_168.ShaderHashes[1].Hash[7] = '\0';
      local_168.ShaderHashes[1].Hash[8] = '\0';
      local_168.ShaderHashes[1].Hash[9] = '\0';
      local_168.ShaderHashes[1].Hash[10] = '\0';
      local_168.ShaderHashes[1].Hash[0xb] = '\0';
      local_168.ShaderHashes[1].Hash[0xc] = '\0';
      local_168.ShaderHashes[1].Hash[0xd] = '\0';
      local_168.ShaderHashes[1].Hash[0xe] = '\0';
      local_168.ShaderHashes[1].Hash[0xf] = '\0';
      local_168.ShaderHashes[3].Hash[0x10] = '\0';
      local_168.ShaderHashes[3].Hash[0x11] = '\0';
      local_168.ShaderHashes[3].Hash[0x12] = '\0';
      local_168.ShaderHashes[3].Hash[0x13] = '\0';
      local_168.ShaderHashes[2].Hash[0] = '\0';
      local_168.ShaderHashes[2].Hash[1] = '\0';
      local_168.ShaderHashes[2].Hash[2] = '\0';
      local_168.ShaderHashes[2].Hash[3] = '\0';
      local_168.ShaderHashes[2].Hash[4] = '\0';
      local_168.ShaderHashes[2].Hash[5] = '\0';
      local_168.ShaderHashes[2].Hash[6] = '\0';
      local_168.ShaderHashes[2].Hash[7] = '\0';
      local_168.ShaderHashes[2].Hash[8] = '\0';
      local_168.ShaderHashes[2].Hash[9] = '\0';
      local_168.ShaderHashes[2].Hash[10] = '\0';
      local_168.ShaderHashes[2].Hash[0xb] = '\0';
      local_168.ShaderHashes[2].Hash[0xc] = '\0';
      local_168.ShaderHashes[2].Hash[0xd] = '\0';
      local_168.ShaderHashes[2].Hash[0xe] = '\0';
      local_168.ShaderHashes[2].Hash[0xf] = '\0';
      local_168.ShaderHashes[4].Hash[0x10] = '\0';
      local_168.ShaderHashes[4].Hash[0x11] = '\0';
      local_168.ShaderHashes[4].Hash[0x12] = '\0';
      local_168.ShaderHashes[4].Hash[0x13] = '\0';
      local_168.ShaderHashes[3].Hash[0] = '\0';
      local_168.ShaderHashes[3].Hash[1] = '\0';
      local_168.ShaderHashes[3].Hash[2] = '\0';
      local_168.ShaderHashes[3].Hash[3] = '\0';
      local_168.ShaderHashes[3].Hash[4] = '\0';
      local_168.ShaderHashes[3].Hash[5] = '\0';
      local_168.ShaderHashes[3].Hash[6] = '\0';
      local_168.ShaderHashes[3].Hash[7] = '\0';
      local_168.ShaderHashes[3].Hash[8] = '\0';
      local_168.ShaderHashes[3].Hash[9] = '\0';
      local_168.ShaderHashes[3].Hash[10] = '\0';
      local_168.ShaderHashes[3].Hash[0xb] = '\0';
      local_168.ShaderHashes[3].Hash[0xc] = '\0';
      local_168.ShaderHashes[3].Hash[0xd] = '\0';
      local_168.ShaderHashes[3].Hash[0xe] = '\0';
      local_168.ShaderHashes[3].Hash[0xf] = '\0';
      local_168.ShaderHashes[5].Hash[0x10] = '\0';
      local_168.ShaderHashes[5].Hash[0x11] = '\0';
      local_168.ShaderHashes[5].Hash[0x12] = '\0';
      local_168.ShaderHashes[5].Hash[0x13] = '\0';
      local_168.ShaderHashes[4].Hash[0] = '\0';
      local_168.ShaderHashes[4].Hash[1] = '\0';
      local_168.ShaderHashes[4].Hash[2] = '\0';
      local_168.ShaderHashes[4].Hash[3] = '\0';
      local_168.ShaderHashes[4].Hash[4] = '\0';
      local_168.ShaderHashes[4].Hash[5] = '\0';
      local_168.ShaderHashes[4].Hash[6] = '\0';
      local_168.ShaderHashes[4].Hash[7] = '\0';
      local_168.ShaderHashes[4].Hash[8] = '\0';
      local_168.ShaderHashes[4].Hash[9] = '\0';
      local_168.ShaderHashes[4].Hash[10] = '\0';
      local_168.ShaderHashes[4].Hash[0xb] = '\0';
      local_168.ShaderHashes[4].Hash[0xc] = '\0';
      local_168.ShaderHashes[4].Hash[0xd] = '\0';
      local_168.ShaderHashes[4].Hash[0xe] = '\0';
      local_168.ShaderHashes[4].Hash[0xf] = '\0';
      local_2d4 = 0;
      local_168.ShaderHashes[5].Hash[0] = '\0';
      local_168.ShaderHashes[5].Hash[1] = '\0';
      local_168.ShaderHashes[5].Hash[2] = '\0';
      local_168.ShaderHashes[5].Hash[3] = '\0';
      local_168.ShaderHashes[5].Hash[4] = '\0';
      local_168.ShaderHashes[5].Hash[5] = '\0';
      local_168.ShaderHashes[5].Hash[6] = '\0';
      local_168.ShaderHashes[5].Hash[7] = '\0';
      local_168.ShaderHashes[5].Hash[8] = '\0';
      local_168.ShaderHashes[5].Hash[9] = '\0';
      local_168.ShaderHashes[5].Hash[10] = '\0';
      local_168.ShaderHashes[5].Hash[0xb] = '\0';
      local_168.ShaderHashes[5].Hash[0xc] = '\0';
      local_168.ShaderHashes[5].Hash[0xd] = '\0';
      local_168.ShaderHashes[5].Hash[0xe] = '\0';
      local_168.ShaderHashes[5].Hash[0xf] = '\0';
      do {
        (**(code **)(*(longlong *)param_4 + 0x188))(param_4,pFVar27,0x14);
        pFVar27 = pFVar27 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      plVar4 = *(longlong **)&param_4->field_0x8;
      if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
        if ((param_4->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_4 + 0x188))(param_4,&local_2d4,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_4,&local_2d4);
        }
      }
      else {
        local_2d4 = *(uint *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      uVar26 = 0;
      local_e0[10] = 0;
      local_e0[0xf] = 0;
      local_e0[0] = 0;
      local_e0[5] = 0;
      local_e0[0x14] = 0;
      local_e0[0x19] = 0;
      bVar29 = true;
      local_f0[0] = 0;
      local_f0[1] = 0;
      local_e0[1] = 0;
      local_e0[2] = 0;
      local_e0[3] = 0;
      local_e0[4] = 0;
      local_e0[6] = 0;
      local_e0[7] = 0;
      local_e0[8] = 0;
      local_e0[9] = 0;
      local_e0[0xb] = 0;
      local_e0[0xc] = 0;
      local_e0[0xd] = 0;
      local_e0[0xe] = 0;
      local_e0[0x10] = 0;
      local_e0[0x11] = 0;
      local_e0[0x12] = 0;
      local_e0[0x13] = 0;
      local_e0[0x15] = 0;
      local_e0[0x16] = 0;
      local_e0[0x17] = 0;
      local_e0[0x18] = 0;
      uVar20 = uVar26;
      do {
        if (!bVar29) goto LAB_145c24dd6;
        lVar15 = *(longlong *)local_168.ShaderHashes[uVar20].Hash -
                 *(longlong *)((longlong)local_f0 + uVar20 * 0x14);
        if ((lVar15 == 0) &&
           (lVar15 = *(longlong *)(local_168.ShaderHashes[uVar20].Hash + 8) -
                     *(longlong *)((longlong)local_f0 + uVar20 * 0x14 + 8), lVar15 == 0)) {
          lVar15 = (ulonglong)*(uint *)(local_168.ShaderHashes[uVar20].Hash + 0x10) -
                   (ulonglong)local_e0[uVar20 * 5];
        }
        bVar29 = lVar15 == 0;
        uVar23 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar23;
      } while (uVar23 < 6);
      if ((bVar29) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("ProgramKey != FOpenGLProgramKey()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                              ,0x317,L""), bVar29)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
LAB_145c24dd6:
      if (local_2d4 == 0) {
        bVar29 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_4257000008441658600>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                            ,0x318,"ProgramBinarySize > 0");
        if (bVar29) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        goto LAB_145c25495;
      }
      local_2b8.Data.ArrayNum = uVar11 + 1;
      uVar16 = (**(code **)(*(longlong *)param_4 + 0x28))(param_4);
      FVar22.Data = local_2b8.Data.AllocatorInstance.Data;
      local_258 = uVar16;
      uVar11 = (*FCrc::MemCrc32Func)(&local_168,0x78,0);
      iVar12 = TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>::
               FindIndexByHash<FOpenGLProgramKey>
                         ((TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>
                           *)(FVar22.Data + 0x30),uVar11,&local_168);
      if ((iVar12 != -1) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Content.Contains(KeyIn)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                              ,0xbc,L""), bVar29)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>::
      Emplace<FOpenGLProgramKey_const_&>
                ((TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>
                  *)(FVar22.Data + 0x30),(FOpenGLProgramKey *)local_200,(bool *)&local_168);
      if (6 < (byte)LogRHI._0_1_) {
        local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2c8.Data.ArrayNum = 0;
        local_2c8.Data.ArrayMax = 0;
        local_e0[0x1a] = 0;
        local_e0[0x1b] = 0;
        local_e0[0x1c] = 0;
        local_e0[0x1d] = 0;
        local_e0[0x1e] = 0;
        if (((local_168.ShaderHashes[0].Hash._0_8_ == 0) &&
            (local_168.ShaderHashes[0].Hash._8_8_ == 0)) &&
           (local_168.ShaderHashes[0].Hash._16_4_ == 0)) {
          local_e0[0x23] = 0;
          local_e0[0x1f] = 0;
          local_e0[0x20] = 0;
          local_e0[0x21] = 0;
          local_e0[0x22] = 0;
          if (((local_168.ShaderHashes[5].Hash._0_8_ != 0) ||
              (local_168.ShaderHashes[5].Hash._8_8_ != 0)) ||
             (local_168.ShaderHashes[5].Hash._16_4_ != 0)) {
            local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_240.Data.ArrayNum = 0;
            local_240.Data.ArrayMax = 0;
            BytesToHex(local_168.ShaderHashes[5].Hash,0x14,&local_240);
            ::FString::ConcatCF(&local_280,L"Program C_",&local_240);
            if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
            }
            local_2c8.Data.AllocatorInstance.Data = local_280.Data.AllocatorInstance.Data;
            local_2c8.Data.ArrayNum = local_280.Data.ArrayNum;
            local_2c8.Data.ArrayMax = local_280.Data.ArrayMax;
            local_280.Data.ArrayNum = 0;
            local_280.Data.ArrayMax = 0;
            local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            FVar22.Data = local_240.Data.AllocatorInstance.Data;
            goto LAB_145c2504e;
          }
          ::FString::operator=(&local_2c8,L"Program with unset key");
        }
        else {
          local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_230.Data.ArrayNum = 0;
          local_230.Data.ArrayMax = 0;
          BytesToHex((uchar *)&local_168,0x14,&local_230);
          ::FString::ConcatCF(&local_270,L"Program V_",&local_230);
          if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
          }
          local_2c8.Data.AllocatorInstance.Data = local_270.Data.AllocatorInstance.Data;
          local_2c8.Data.ArrayNum = local_270.Data.ArrayNum;
          local_2c8.Data.ArrayMax = local_270.Data.ArrayMax;
          local_270.Data.ArrayNum = 0;
          local_270.Data.ArrayMax = 0;
          local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_230.Data.AllocatorInstance.Data);
          }
          local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_220.Data.ArrayNum = 0;
          local_220.Data.ArrayMax = 0;
          BytesToHex(local_168.ShaderHashes[1].Hash,0x14,&local_220);
          ::FString::ConcatCF(&local_1d8,L"_P_",&local_220);
          iVar12 = local_1d8.Data.ArrayNum + -1;
          if (local_1d8.Data.ArrayNum == 0) {
            iVar12 = 0;
          }
          ::FString::AppendChars(&local_2c8,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,iVar12)
          ;
          FVar22.Data = local_220.Data.AllocatorInstance.Data;
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
            FVar22.Data = local_220.Data.AllocatorInstance.Data;
          }
LAB_145c2504e:
          if (FVar22.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar22.Data);
          }
        }
        if (((uVar28 & 1) != 0) &&
           (uVar28 = uVar28 & 0xfffffffe, local_2d0 = uVar28,
           local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
        }
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
        }
      }
      TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>::
      Emplace<FOpenGLProgramKey_const_&>
                (&this->ProgramsInCurrentCache,(FOpenGLProgramKey *)(local_200 + 4),
                 (bool *)&local_168);
      FVar22.Data = local_2b8.Data.AllocatorInstance.Data;
      if ((*(IMappedFileHandle **)(local_2b8.Data.AllocatorInstance.Data + 0x10) ==
           (IMappedFileHandle *)0x0) ||
         (iVar12 = *(int *)(local_2b8.Data.AllocatorInstance.Data + 0x20), iVar12 == 0)) {
LAB_145c25315:
        if ((GMemoryMapGLProgramCache != false) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("!UE::OpenGL::CanMemoryMapGLProgramCache()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                                ,0x329,L""), bVar29)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        uVar20 = (ulonglong)local_2d4;
        pFVar19 = (FOpenGLProgramBinary *)0x0;
        local_298[0] = 0;
        local_298[1] = 0;
        local_2a8._8_8_ = (TUniqueObj<FOpenGLProgramBinary> *)0x0;
        if ((int)local_2d4 < 1) {
          if ((int)local_2d4 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar20);
          }
        }
        else {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_2d4,(ForAnyElementType *)(local_2a8 + 8),local_298,local_298 + 1);
          uVar20 = (ulonglong)local_2d4;
        }
        (**(code **)(*(longlong *)param_4 + 0x188))(param_4,local_2a8._8_8_,uVar20);
        pFVar18 = ::operator_new(0x20);
        if (pFVar18 != (FOpenGLProgramBinary *)0x0) {
          pFVar19 = FOpenGLProgramBinary::FOpenGLProgramBinary
                              (pFVar18,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                                       (local_2a8 + 8));
        }
        local_198 = &local_168;
        local_190 = &local_248;
        local_248 = pFVar19;
        TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FOpenGLProgramKey_&,TUniqueObj<FOpenGLProgramBinary>_&&>_>
                  ((TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
                    *)&this->PendingGLContainerPrograms,
                   (TPairInitializer<FOpenGLProgramKey_&,TUniqueObj<FOpenGLProgramBinary>_&&> *)
                   local_2a8,(bool *)&local_198);
        pFVar19 = local_248;
        if (local_248 != (FOpenGLProgramBinary *)0x0) {
          FOpenGLProgramBinary::~FOpenGLProgramBinary(local_248);
          ::operator_delete(pFVar19,0x20);
        }
        if ((TUniqueObj<FOpenGLProgramBinary> *)local_2a8._8_8_ !=
            (TUniqueObj<FOpenGLProgramBinary> *)0x0) {
          FMemory::Free((void *)local_2a8._8_8_);
        }
      }
      else {
        pFVar1 = local_2b8.Data.AllocatorInstance.Data + 0x18;
        uVar11 = 0;
        if ((int)(iVar12 - 1U) < iVar12) {
          uVar11 = ~(iVar12 - 1U) >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        this_00.Data = local_2b8.Data.AllocatorInstance.Data;
        uVar11 = local_2d4;
        if (*(longlong *)(*(longlong *)pFVar1 + -8 + (longlong)*(int *)(FVar22.Data + 0x20) * 8) ==
            0) goto LAB_145c25315;
        if (((uint)uVar16 < *(uint *)(local_2b8.Data.AllocatorInstance.Data + 0x28)) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("FileOffset >= CurrentMappingRegionOffset",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                                ,0xaf,L""), bVar29)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        uVar28 = (uint)uVar16 - *(uint *)(this_00.Data + 0x28);
        pTVar17 = FOpenGLProgramBinaryMapping::GetCurrentMappedRegion
                            ((FOpenGLProgramBinaryMapping *)this_00.Data);
        puVar2 = &pTVar17->Ptr->MappedSize;
        if (((pTVar17->Ptr->MappedPtr == (uchar *)0x0) || (*puVar2 == 0)) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("MappedPtr && MappedSize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                                ,0x19,L""), uVar16 = local_258, bVar29)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        if (((longlong)*puVar2 < (longlong)(ulonglong)(uVar28 + uVar11)) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("OffsetWithinMapping + NumBytes <= GetCurrentMappedRegion()->GetMappedSize()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                                ,0xb1,L""), bVar29)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        pTVar17 = FOpenGLProgramBinaryMapping::GetCurrentMappedRegion
                            ((FOpenGLProgramBinaryMapping *)this_00.Data);
        pIVar5 = pTVar17->Ptr;
        if (((pIVar5->MappedPtr == (uchar *)0x0) || (pIVar5->MappedSize == 0)) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("MappedPtr && MappedSize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                                ,0x19,L""), bVar29)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        local_1b8 = pIVar5->MappedPtr + uVar28;
        uStack_1b0 = uVar11;
        if (((int)uVar11 < 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar29)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        pFVar18 = ::operator_new(0x20);
        pFVar19 = (FOpenGLProgramBinary *)0x0;
        if (pFVar18 != (FOpenGLProgramBinary *)0x0) {
          local_178._12_1_ = auStack_1ac[0];
          local_178._13_1_ = auStack_1ac[1];
          local_178._14_1_ = auStack_1ac[2];
          local_178._15_1_ = auStack_1ac[3];
          local_178.ArrayNum = uStack_1b0;
          local_178.DataPtr = local_1b8;
          pFVar19 = FOpenGLProgramBinary::FOpenGLProgramBinary(pFVar18,&local_178);
        }
        local_1a8 = &local_168;
        local_1a0 = &local_250;
        local_250 = pFVar19;
        TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FOpenGLProgramKey_&,TUniqueObj<FOpenGLProgramBinary>_&&>_>
                  ((TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
                    *)local_1f8.Value,&local_1f8,(bool *)&local_1a8);
        pFVar19 = local_250;
        if (local_250 != (FOpenGLProgramBinary *)0x0) {
          FOpenGLProgramBinary::~FOpenGLProgramBinary(local_250);
          ::operator_delete(pFVar19,0x20);
        }
        (**(code **)(*(longlong *)param_4 + 0x1b8))(param_4,local_2d4 + (int)uVar16);
        this = local_1e8;
        uVar28 = local_2d0;
      }
      lVar15 = (**(code **)(*(longlong *)param_4 + 0x28))(param_4);
      uVar11 = local_2b8.Data.ArrayNum;
    } while (lVar15 < local_288);
  }
  lVar21 = (**(code **)(*(longlong *)param_4 + 0x28))(param_4);
  (this->CurrentShaderPipelineProperties).LastMappedPosition = lVar21;
  if (6 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((1 < (byte)LogRHI._0_1_) && (uVar11 != local_2b8.Data.ArrayMax)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar26 = 1;
LAB_145c25495:
  if ((FOpenGLProgramBinaryMapping *)local_2b8.Data.AllocatorInstance.Data !=
      (FOpenGLProgramBinaryMapping *)0x0) {
    pFVar1 = local_2b8.Data.AllocatorInstance.Data + 8;
    LOCK();
    iVar12 = *(int *)pFVar1;
    *(int *)pFVar1 = *(int *)pFVar1 + -1;
    UNLOCK();
    if (((iVar12 == 1) && (pFVar1 != (FScriptContainerElement *)0x0)) &&
       ((FOpenGLProgramBinaryMapping *)local_2b8.Data.AllocatorInstance.Data !=
        (FOpenGLProgramBinaryMapping *)0x0)) {
      (*(code *)**(undefined8 **)local_2b8.Data.AllocatorInstance.Data)
                (local_2b8.Data.AllocatorInstance.Data,1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GPendingGLProgramCreateRequestsCS);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar9) && (FVar25 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_1c8.NameAndInfo.Index = FVar25.ComparisonIndex.Value;
      local_1c8.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1e0);
      local_1c8.StatData.Pad[4] = '\0';
      local_1c8.StatData.Pad[5] = '\0';
      local_1c8.StatData.Pad[6] = '\0';
      local_1c8.StatData.Pad[7] = '\0';
      local_1c8.StatData.Pad[0] = local_1e0.s.LowPart._0_1_;
      local_1c8.StatData.Pad[1] = local_1e0.s.LowPart._1_1_;
      local_1c8.StatData.Pad[2] = local_1e0.s.LowPart._2_1_;
      local_1c8.StatData.Pad[3] = local_1e0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_1c8);
      piVar3 = &this_01->ScopeCount;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return SUB81(uVar26,0);
}

// RequiresCaching @ 145c2a090

bool __cdecl FOpenGLProgramBinaryCache::RequiresCaching(FOpenGLProgramKey *param_1)

{
  FOpenGLProgramBinaryCache *pFVar1;
  uint uVar2;
  int iVar3;
  
  if (CachePtr != (FOpenGLProgramBinaryCache *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&GProgramBinaryFileCacheCS);
    pFVar1 = CachePtr;
    uVar2 = (*FCrc::MemCrc32Func)(param_1,0x78,0);
    iVar3 = TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>::
            FindIndexByHash<FOpenGLProgramKey>(&pFVar1->ProgramsInCurrentCache,uVar2,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&GProgramBinaryFileCacheCS);
    return iVar3 == -1;
  }
  return false;
}

// RequiresCaching_Internal @ 145c2a110

bool __thiscall
FOpenGLProgramBinaryCache::RequiresCaching_Internal
          (FOpenGLProgramBinaryCache *this,FOpenGLProgramKey *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (*FCrc::MemCrc32Func)(param_1,0x78,0);
  iVar2 = TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>::
          FindIndexByHash<FOpenGLProgramKey>(&this->ProgramsInCurrentCache,uVar1,param_1);
  return iVar2 == -1;
}

// Reset @ 145c2a700

void __thiscall FOpenGLProgramBinaryCache::Reset(FOpenGLProgramBinaryCache *this)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator> *this_00;
  
  if ((this->BinaryCacheWriteFileHandle != (FArchive *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!BinaryCacheWriteFileHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                         ,0x236,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->CurrentBinaryFileState = Uninitialized;
  this_00 = &this->ProgramsInCurrentCache;
  bVar4 = 1 < (this->ProgramsInCurrentCache).HashSize;
  if (!bVar4) {
    TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>::
    UnhashElements(this_00);
  }
  puVar1 = &(this->ProgramsInCurrentCache).Elements.field_0xc;
  *(undefined4 *)&(this->ProgramsInCurrentCache).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ProgramsInCurrentCache).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProgramsInCurrentCache).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->ProgramsInCurrentCache).Elements.field_0x2c;
  *(undefined4 *)&(this->ProgramsInCurrentCache).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ProgramsInCurrentCache).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ProgramsInCurrentCache).Elements.field_0x10,0);
  }
  if (bVar4) {
    (this->ProgramsInCurrentCache).HashSize = 1;
    TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>::Rehash
              (this_00);
  }
  return;
}

// ScanProgramCacheFile @ 145c2be00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLProgramBinaryCache::ScanProgramCacheFile(FOpenGLProgramBinaryCache *this)

{
  uint *puVar1;
  undefined4 *puVar2;
  FArchive *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar11;
  IFileManager *pIVar12;
  FArchive *this_01;
  longlong lVar13;
  ulonglong uVar14;
  FString *pFVar15;
  long64 lVar16;
  TDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> *this_02;
  FName *pFVar17;
  ForAnyElementType FVar18;
  ForAnyElementType FVar19;
  FName local_res8;
  FBinaryCacheFileHeader local_f8;
  FString local_d8;
  FString local_c8;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FBinaryCacheFileHeader local_68;
  FReadAccessScope local_48;
  
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  GetProgramBinaryCacheFilePath(this,&local_c8);
  ::FString::ConcatFC(&local_d8,&local_c8,L".scan");
  this_00 = FPlatformFileManager::Get();
  pIVar11 = FPlatformFileManager::GetPlatformFile(this_00);
  if ((this->CurrentBinaryFileState != Uninitialized) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentBinaryFileState == EBinaryFileState::Uninitialized",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                          ,0x2b5,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(int *)&(this->ProgramsInCurrentCache).Elements.field_0x8 !=
       *(int *)&(this->ProgramsInCurrentCache).Elements.field_0x34) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ProgramsInCurrentCache.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                          ,0x2b6,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar18.Data = local_d8.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar11 + 0x88))(pIVar11,FVar18.Data);
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar18.Data = local_d8.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar11 + 0xa0))(pIVar11,FVar18.Data);
  pIVar12 = IFileManager::Get();
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar18.Data = local_d8.Data.AllocatorInstance.Data;
  }
  this_01 = (FArchive *)(**(code **)((longlong)*pIVar12 + 0x18))(pIVar12,FVar18.Data);
  if (this_01 == (FArchive *)0x0) {
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
LAB_145c2c317:
    pFVar15 = GetProgramBinaryCacheFilePath(this,&local_78);
    bVar10 = OpenCacheWriteHandle(this,pFVar15,false);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      uVar6 = (this->CurrentShaderPipelineProperties).CacheVersionGuid.A;
      uVar7 = (this->CurrentShaderPipelineProperties).CacheVersionGuid.B;
      uVar8 = (this->CurrentShaderPipelineProperties).CacheVersionGuid.C;
      uVar9 = (this->CurrentShaderPipelineProperties).CacheVersionGuid.D;
      this->CurrentBinaryFileState = BuildingCacheFile;
      local_b8 = 6;
      uStack_b4 = uVar6;
      uStack_b0 = uVar7;
      uStack_ac = uVar8;
      uStack_a8 = uVar9;
      bVar10 = UE::OpenGL::AreBinaryProgramsCompressed();
      local_68.BinaryCacheGuid.A = uStack_b4;
      local_68.Version = local_b8;
      local_68.BinaryCacheGuid.C = uStack_ac;
      local_68.BinaryCacheGuid.B = uStack_b0;
      pFVar3 = this->BinaryCacheWriteFileHandle;
      uStack_a4 = CONCAT31(uStack_a4._1_3_,bVar10);
      uStack_a0 = 0;
      local_68._20_4_ = uStack_a4;
      local_68.BinaryCacheGuid.D = uStack_a8;
      local_68.ProgramCount = 0;
      local_68.ValidSize = 0;
      UE::OpenGL::operator<<(pFVar3,&local_68);
      lVar16 = (**(code **)(*(longlong *)pFVar3 + 0x28))(pFVar3);
      (this->CurrentShaderPipelineProperties).LastMappedPosition = lVar16;
    }
    else {
      this->CurrentBinaryFileState = Uninitialized;
      this_02 = RHIGetPanicDelegate();
      pFVar17 = ::FName::FName(&local_res8,"FailedBinaryProgramArchiveOpen");
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,&local_48);
      if ((*(int *)&this_02->field_0x10 != 0) &&
         (plVar4 = *(longlong **)&this_02->field_0x8, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x68))(plVar4,pFVar17);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if (this_01 == (FArchive *)0x0) goto LAB_145c2c416;
  }
  else {
    local_f8.Version = 0xffffffff;
    local_f8.BinaryCacheGuid.A = 0;
    local_f8.BinaryCacheGuid.B = 0;
    local_f8.BinaryCacheGuid.C = 0;
    local_f8.BinaryCacheGuid.D = 0;
    local_f8.ProgramCount = 0;
    local_f8.ValidSize = 0;
    lVar13 = (**(code **)(*(longlong *)this_01 + 0x30))(this_01);
    if (0 < lVar13) {
      puVar1 = (uint *)**(undefined8 **)&this_01->field_0x8;
      if ((uint *)(*(undefined8 **)&this_01->field_0x8)[1] < puVar1 + 1) {
        if ((this_01->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)this_01 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(this_01,&local_f8.Version);
        }
      }
      else {
        local_f8.Version = *puVar1;
        **(longlong **)&this_01->field_0x8 = **(longlong **)&this_01->field_0x8 + 4;
      }
      if ((this_01->field_0x28 & 1) == 0) {
        if (local_f8.Version != 6) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ar.IsLoading() || Header.IsValidVersion()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                              ,0x85,L"");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          goto LAB_145c2c031;
        }
      }
      else {
LAB_145c2c031:
        if (local_f8.Version != 6) goto LAB_145c2c0e0;
      }
      ::operator<<(this_01,&local_f8.BinaryCacheGuid);
      ::operator<<(this_01,&local_f8.bCacheUsesCompressedBinaries);
      puVar2 = (undefined4 *)**(undefined8 **)&this_01->field_0x8;
      if ((undefined4 *)(*(undefined8 **)&this_01->field_0x8)[1] < puVar2 + 1) {
        if ((this_01->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)this_01 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(this_01,&local_f8.ProgramCount);
        }
      }
      else {
        local_f8.ProgramCount = *puVar2;
        **(longlong **)&this_01->field_0x8 = **(longlong **)&this_01->field_0x8 + 4;
      }
      puVar2 = (undefined4 *)**(undefined8 **)&this_01->field_0x8;
      if ((undefined4 *)(*(undefined8 **)&this_01->field_0x8)[1] < puVar2 + 1) {
        if ((this_01->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)this_01 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(this_01,&local_f8.ValidSize);
        }
      }
      else {
        local_f8.ValidSize = *puVar2;
        **(longlong **)&this_01->field_0x8 = **(longlong **)&this_01->field_0x8 + 4;
      }
    }
LAB_145c2c0e0:
    if ((local_f8.Version != 6) ||
       (bVar10 = UE::OpenGL::AreBinaryProgramsCompressed(),
       bVar10 != local_f8.bCacheUsesCompressedBinaries)) {
LAB_145c2c29b:
      if (2 < (byte)LogRHI._0_1_) {
        (**(code **)(*(longlong *)this_01 + 0x30))(this_01);
        UE::OpenGL::FBinaryCacheFileHeader::ToString(&local_f8,&local_88);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)(*(longlong *)this_01 + 0x210))(this_01);
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_d8.Data.ArrayNum != 0) {
        FVar18.Data = local_d8.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar11 + 0x88))(pIVar11,FVar18.Data);
      goto LAB_145c2c317;
    }
    if (&this->CurrentShaderPipelineProperties != (FCurrentShaderPipelineProperties *)0x0) {
      if (((local_f8.BinaryCacheGuid.D != (this->CurrentShaderPipelineProperties).CacheVersionGuid.D
           || local_f8.BinaryCacheGuid.C !=
              (this->CurrentShaderPipelineProperties).CacheVersionGuid.C) ||
          local_f8.BinaryCacheGuid.B != (this->CurrentShaderPipelineProperties).CacheVersionGuid.B)
          || local_f8.BinaryCacheGuid.A !=
             (this->CurrentShaderPipelineProperties).CacheVersionGuid.A) goto LAB_145c2c29b;
    }
    if (local_f8.ProgramCount == 0) goto LAB_145c2c29b;
    if (2 < (byte)LogRHI._0_1_) {
      (**(code **)(*(longlong *)this_01 + 0x30))(this_01);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>::Reserve
              (&this->ProgramsInCurrentCache,local_f8.ProgramCount);
    bVar10 = ReadProgramFile_Internal
                       (this,local_f8.ProgramCount,(ulonglong)local_f8._24_8_ >> 0x20,&local_d8,
                        this_01);
    if ((!bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("bSuccess",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                            ,0x2d9,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar14 = (**(code **)(*(longlong *)this_01 + 0x28))(this_01);
    (**(code **)(*(longlong *)this_01 + 0x210))(this_01);
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar18.Data = local_d8.Data.AllocatorInstance.Data;
    }
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar19.Data = local_c8.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar11 + 0xa0))(pIVar11,FVar19.Data,FVar18.Data);
    this->CurrentBinaryFileState = ValidCacheFile;
    bVar10 = IsPrecachingEnabled();
    if (bVar10) {
      pFVar15 = GetProgramBinaryCacheFilePath(this,&local_98);
      bVar10 = OpenCacheWriteHandle(this,pFVar15,true);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        if (((uVar14 & 0xffffffff) != (this->CurrentShaderPipelineProperties).LastMappedPosition) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("LastReadPos == CurrentShaderPipelineProperties.LastMappedPosition",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                                ,0x2fe,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar16 = (this->CurrentShaderPipelineProperties).LastMappedPosition;
        this->CurrentBinaryFileState = BuildingCacheFile;
        (**(code **)(*(longlong *)this->BinaryCacheWriteFileHandle + 0x1b8))
                  (this->BinaryCacheWriteFileHandle,lVar16);
      }
    }
  }
  (*(code *)**(undefined8 **)this_01)(this_01,1);
LAB_145c2c416:
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return;
}

// Shutdown @ 145c31340

void __cdecl FOpenGLProgramBinaryCache::Shutdown(void)

{
  FArchive *pFVar1;
  FDelegateHandle FVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  FScriptContainerElement *pFVar5;
  FOpenGLProgramBinaryCache *pFVar6;
  
  pFVar6 = CachePtr;
  if (CachePtr != (FOpenGLProgramBinaryCache *)0x0) {
    pFVar1 = CachePtr->BinaryCacheWriteFileHandle;
    if (pFVar1 != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    }
    FVar2.ID = (pFVar6->OnShaderPipelineCacheOpenedDelegate).ID;
    if (FVar2.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FShaderPipelineCache::OnCachedOpened,FVar2);
    }
    FVar2.ID = (pFVar6->OnShaderPipelineCachePrecompilationCompleteDelegate).ID;
    if (FVar2.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FShaderPipelineCache::OnPrecompilationComplete,FVar2);
    }
    *(undefined4 *)&(pFVar6->MappedCacheFiles).field_0x48 = 0;
    pvVar3 = *(void **)&(pFVar6->MappedCacheFiles).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar6->MappedCacheFiles);
    *(undefined4 *)&(pFVar6->PendingGLContainerPrograms).field_0x48 = 0;
    pvVar3 = *(void **)&(pFVar6->PendingGLContainerPrograms).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar6->PendingGLContainerPrograms);
    (pFVar6->ProgramsInCurrentCache).HashSize = 0;
    FVar4 = (pFVar6->ProgramsInCurrentCache).Hash.SecondaryData;
    if (FVar4 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    TSparseArray<TSparseSetElement<FOpenGLProgramKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FOpenGLProgramKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(pFVar6->ProgramsInCurrentCache).Elements);
    *(undefined4 *)&(pFVar6->ShadersPendingCompilation).field_0x48 = 0;
    pvVar3 = *(void **)&(pFVar6->ShadersPendingCompilation).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,FOpenGLProgramBinaryCache::FPendingShaderCode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FOpenGLProgramBinaryCache::FPendingShaderCode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FOpenGLProgramBinaryCache::FPendingShaderCode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar6->ShadersPendingCompilation);
    pFVar5 = (pFVar6->CurrentShaderPipelineProperties).PipelineCacheName.Data.AllocatorInstance.Data
    ;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar5 = (pFVar6->CacheSubDir).Data.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar5 = (pFVar6->CachePathRoot).Data.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    ::operator_delete(pFVar6,0x1b8);
    CachePtr = (FOpenGLProgramBinaryCache *)0x0;
  }
  return;
}

// TickBinaryCache @ 145c31ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FOpenGLProgramBinaryCache::TickBinaryCache(void)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_static_void___cdecl_FOpenGLProgramBinaryCache::TickBinaryCache(void)_::_9_::FStat_STAT_OpenGLCheckPendingGLProgramCreateRequests>
  FVar8;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_40 [2];
  
  if (CachePtr == (FOpenGLProgramBinaryCache *)0x0) {
    return;
  }
  bVar5 = IsPrecachingEnabled();
  if (bVar5) {
    UpdatePrecacheMapping(CachePtr);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_OpenGLCheckPendingGLProgramCreateRequests ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_FOpenGLProgramBinaryCache::TickBinaryCache(void)_::_9_::FStat_STAT_OpenGLCheckPendingGLProgramCreateRequests>
         )0x0) {
      pFVar7 = ::FName::FName(&local_res20,"STAT_OpenGLCheckPendingGLProgramCreateRequests");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_OpenGLCheckPendingGLProgramCreateRequests,*pFVar7,
                 L"STAT_OpenGLCheckPendingGLProgramCreateRequests","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_OpenGLCheckPendingGLProgramCreateRequests;
  if (StatPtr_STAT_OpenGLCheckPendingGLProgramCreateRequests ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_FOpenGLProgramBinaryCache::TickBinaryCache(void)_::_9_::FStat_STAT_OpenGLCheckPendingGLProgramCreateRequests>
       )0x0) {
    pFVar7 = ::FName::FName(&local_58,"STAT_OpenGLCheckPendingGLProgramCreateRequests");
    FVar8 = (FThreadSafeStaticStat<_public:_static_void___cdecl_FOpenGLProgramBinaryCache::TickBinaryCache(void)_::_9_::FStat_STAT_OpenGLCheckPendingGLProgramCreateRequests>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_OpenGLCheckPendingGLProgramCreateRequests,*pFVar7,
                         L"STAT_OpenGLCheckPendingGLProgramCreateRequests","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar5 = false;
  bVar4 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar5 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                   ,0x407);
        bVar5 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      goto LAB_145c31c5e;
    }
  }
  bVar3 = false;
  FVar11 = local_50;
LAB_145c31c5e:
  bVar6 = IsInRenderingThread();
  if (((!bVar6) && (bVar6 = IsInRHIThread(), !bVar6)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() || IsInRHIThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                         ,0x408,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GPendingGLProgramCreateRequestsCS);
  CheckPendingGLProgramCreateRequests_internal(CachePtr);
  LeaveCriticalSection((LPCRITICAL_SECTION)&GPendingGLProgramCreateRequestsCS);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_40[0].NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_40[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_40[0].StatData.Pad[4] = '\0';
      local_40[0].StatData.Pad[5] = '\0';
      local_40[0].StatData.Pad[6] = '\0';
      local_40[0].StatData.Pad[7] = '\0';
      local_40[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_40[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_40[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_40[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,local_40);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// UpdatePrecacheMapping @ 145c36460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLProgramBinaryCache::UpdatePrecacheMapping(FOpenGLProgramBinaryCache *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_void___cdecl_FOpenGLProgramBinaryCache::UpdatePrecacheMapping(void)_::_2_::FStat_STAT_OpenGLUpdatePrecacheMapping>
  FVar9;
  longlong lVar10;
  IFileManager *pIVar11;
  FString *pFVar12;
  FArchive *pFVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  wchar_t *pwVar15;
  FNameEntryId FVar16;
  FName FVar17;
  int iVar18;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_88;
  FName local_80;
  FName local_78;
  FStatMessage local_68;
  FString local_58;
  FString local_48;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_OpenGLUpdatePrecacheMapping ==
          (FThreadSafeStaticStat<_private:_void___cdecl_FOpenGLProgramBinaryCache::UpdatePrecacheMapping(void)_::_2_::FStat_STAT_OpenGLUpdatePrecacheMapping>
           )0x0) {
        pFVar8 = ::FName::FName(&local_88,"STAT_OpenGLUpdatePrecacheMapping");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLUpdatePrecacheMapping,*pFVar8,
                   L"STAT_OpenGLUpdatePrecacheMapping","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                   ,true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar9 = StatPtr_STAT_OpenGLUpdatePrecacheMapping;
  if (StatPtr_STAT_OpenGLUpdatePrecacheMapping ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FOpenGLProgramBinaryCache::UpdatePrecacheMapping(void)_::_2_::FStat_STAT_OpenGLUpdatePrecacheMapping>
       )0x0) {
    pFVar8 = ::FName::FName(&local_80,"STAT_OpenGLUpdatePrecacheMapping");
    FVar9 = (FThreadSafeStaticStat<_private:_void___cdecl_FOpenGLProgramBinaryCache::UpdatePrecacheMapping(void)_::_2_::FStat_STAT_OpenGLUpdatePrecacheMapping>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLUpdatePrecacheMapping,
                         *pFVar8,L"STAT_OpenGLUpdatePrecacheMapping","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar14 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar16.Value;
        local_res18.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                   ,0x1fc);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar16.Value;
      local_res20.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar5 = true;
      goto LAB_145c365e0;
    }
  }
  bVar5 = false;
  FVar17 = local_78;
LAB_145c365e0:
  EnterCriticalSection((LPCRITICAL_SECTION)&GProgramBinaryFileCacheCS);
  lVar10 = (**(code **)(*(longlong *)this->BinaryCacheWriteFileHandle + 0x28))();
  if ((longlong)(GBinaryCacheMMapAfterEveryMB << 0x14) +
      (this->CurrentShaderPipelineProperties).LastMappedPosition <= lVar10) {
    iVar18 = *(int *)&(this->ProgramsInCurrentCache).Elements.field_0x8 -
             *(int *)&(this->ProgramsInCurrentCache).Elements.field_0x34;
    MarkValidContent(this,iVar18);
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    pIVar11 = IFileManager::Get();
    pcVar3 = *(code **)((longlong)*pIVar11 + 0x18);
    pFVar12 = GetProgramBinaryCacheFilePath(this,&local_58);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    pFVar13 = (FArchive *)(*pcVar3)(pIVar11,pwVar15,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    (**(code **)(*(longlong *)pFVar13 + 0x1b8))
              (pFVar13,(this->CurrentShaderPipelineProperties).LastMappedPosition);
    iVar2 = (this->CurrentShaderPipelineProperties).MappedPrograms;
    pFVar12 = GetProgramBinaryCacheFilePath(this,&local_48);
    bVar7 = ReadProgramFile_Internal(this,iVar18 - iVar2,lVar10,pFVar12,pFVar13);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    (this->CurrentShaderPipelineProperties).MappedPrograms = iVar18;
    if (!bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bSuccess",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                         ,0x20e,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (pFVar13 != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)pFVar13)(pFVar13,1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GProgramBinaryFileCacheCS);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_68);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

