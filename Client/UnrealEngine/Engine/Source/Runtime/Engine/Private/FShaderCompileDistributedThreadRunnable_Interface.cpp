// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FShaderCompileDistributedThreadRunnable_Interface @ 14850da50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FShaderCompileDistributedThreadRunnable_Interface * __thiscall
FShaderCompileDistributedThreadRunnable_Interface::FShaderCompileDistributedThreadRunnable_Interface
          (FShaderCompileDistributedThreadRunnable_Interface *this,FShaderCompilingManager *param_1,
          IDistributedBuildController *param_2)

{
  FShaderCompileThreadRunnableBase::FShaderCompileThreadRunnableBase
            ((FShaderCompileThreadRunnableBase *)this,param_1);
  this->_padding_ = (longlong)&___7FShaderCompileDistributedThreadRunnable_Interface__6B_;
  *(undefined8 *)&this->DispatchedTasks = 0;
  *(undefined8 *)&(this->DispatchedTasks).field_0x8 = 0;
  *(undefined8 *)&(this->DispatchedTasks).field_0x20 = 0;
  this->NumDispatchedJobs = 0;
  *(undefined4 *)&(this->DispatchedTasks).field_0x28 = 0;
  *(undefined4 *)&(this->DispatchedTasks).field_0x2c = 0x80;
  *(undefined4 *)&(this->DispatchedTasks).field_0x34 = 0;
  *(undefined4 *)&(this->DispatchedTasks).field_0x30 = 0xffffffff;
  this->bIsHung = false;
  this->CachedController = param_2;
  *(undefined8 *)&this->PlatformShaderInputFilesCache = 0;
  *(undefined8 *)&(this->PlatformShaderInputFilesCache).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformShaderInputFilesCache).field_0x20 = 0;
  *(undefined4 *)&(this->PlatformShaderInputFilesCache).field_0x28 = 0;
  *(undefined4 *)&(this->PlatformShaderInputFilesCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlatformShaderInputFilesCache).field_0x34 = 0;
  *(undefined4 *)&(this->PlatformShaderInputFilesCache).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PlatformShaderInputFilesCache).field_0x40 = 0;
  *(undefined4 *)&(this->PlatformShaderInputFilesCache).field_0x48 = 0;
  return this;
}

// ~FShaderCompileDistributedThreadRunnable_Interface @ 148511010

void __thiscall
FShaderCompileDistributedThreadRunnable_Interface::
~FShaderCompileDistributedThreadRunnable_Interface
          (FShaderCompileDistributedThreadRunnable_Interface *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FShaderCompileDistributedThreadRunnable_Interface__6B_;
  *(undefined4 *)&(this->PlatformShaderInputFilesCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PlatformShaderInputFilesCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EShaderPlatform,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EShaderPlatform,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->PlatformShaderInputFilesCache);
  TSparseArray<FDistributedShaderCompilerTask_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FDistributedShaderCompilerTask_*,FDefaultSparseArrayAllocator>
            (&this->DispatchedTasks);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// operator() @ 148514520

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FShaderCompileDistributedThreadRunnable_Interface::DispatchShaderCompileJobsBatch'::__l30::
<lambda_1>::operator()(void *this,FShaderCompileJob *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  
  bVar3 = FShaderCompilerInput::DumpDebugInfoEnabled(&param_1->Input);
  if (bVar3) {
    lVar1 = *(longlong *)this;
    pFVar5 = &(param_1->Input).DumpDebugInfoPath;
    if ((*(undefined1 **)(lVar1 + 0x78) <= pFVar5) &&
       (pFVar5 < *(undefined1 **)(lVar1 + 0x78) + (longlong)*(int *)(lVar1 + 0x84) * 0x10)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = *(int *)(lVar1 + 0x80);
    if (iVar4 == *(int *)(lVar1 + 0x84)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)(lVar1 + 0x78),(int *)(lVar1 + 0x84));
    }
    *(int *)(lVar1 + 0x80) = iVar4 + 1;
    ::FString::FString((FString *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 0x78)),pFVar5);
  }
  return;
}

// CompilingLoop @ 14851c300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
FShaderCompileDistributedThreadRunnable_Interface::CompilingLoop
          (FShaderCompileDistributedThreadRunnable_Interface *this)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  FShaderCommonCompileJob *this_00;
  code *pcVar7;
  byte bVar8;
  FShaderCompilerStats *lpCriticalSection;
  TSparseArray<FDistributedShaderCompilerTask_*,FDefaultSparseArrayAllocator> *pTVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  ECode EVar14;
  int iVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  IFileManager *pIVar19;
  FArchive *pFVar20;
  uint uVar21;
  undefined ***pppuVar22;
  undefined1 *puVar23;
  longlong lVar24;
  wchar_t *pwVar25;
  ulong64 uVar26;
  uint uVar27;
  LPCRITICAL_SECTION p_Var28;
  FScriptContainerElement *pFVar29;
  ForAnyElementType FVar30;
  ForAnyElementType FVar31;
  longlong *plVar32;
  longlong lVar33;
  undefined8 *puVar34;
  EShaderCompileJobPriority EVar35;
  uint uVar36;
  FJobBatch *pFVar37;
  FShaderCompileWorkerDiagnostics *pFVar38;
  uint *puVar39;
  ulonglong uVar40;
  ulong64 uVar41;
  uint uVar42;
  ulonglong uVar43;
  undefined1 *puVar44;
  FScriptContainerElement *pFVar45;
  FShaderCompileDistributedThreadRunnable_Interface *pFVar46;
  char cVar47;
  float fVar48;
  undefined1 auStackY_568 [32];
  ForAnyElementType local_4f8;
  undefined8 local_4f0;
  undefined1 local_4e8;
  undefined1 local_4e7;
  undefined1 local_4e6;
  undefined1 local_4e5 [5];
  FShaderCompileDistributedThreadRunnable_Interface *local_4e0;
  TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> local_4d8;
  uint local_4c8 [2];
  LPCRITICAL_SECTION local_4c0;
  ulonglong local_4b8 [2];
  TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> local_4a8;
  FString local_498;
  int local_488;
  FString local_480;
  FString local_470;
  int local_460;
  uint uStack_45c;
  undefined1 *puStack_458;
  undefined4 local_450;
  int iStack_44c;
  int iStack_448;
  undefined4 uStack_444;
  TRefCountPtr<FShaderCommonCompileJob> local_440;
  TSparseArray<FDistributedShaderCompilerTask_*,FDefaultSparseArrayAllocator> *local_438;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_430;
  undefined8 local_410;
  ulong64 local_408;
  longlong *local_400;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3f8;
  FShaderCompileWorkerDiagnostics local_3d8;
  code *local_3b0 [2];
  undefined **local_3a0;
  longlong local_398;
  undefined ***local_388;
  FArchiveState local_380;
  undefined8 local_2f0;
  FXxHash64Builder local_2c0;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_568;
  uVar17 = 0;
  local_4d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4d8.ArrayNum = 0;
  local_4d8.ArrayMax = 0;
  p_Var28 = (LPCRITICAL_SECTION)(this->_padding_ + 0x68);
  local_4e0 = this;
  if (p_Var28 == (LPCRITICAL_SECTION)0x0) {
LAB_14851d929:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(p_Var28);
  uVar36 = *(uint *)((longlong)&this->_padding_ + 4);
  if ((int)this->_padding_ <= (int)uVar36) {
    do {
      EVar35 = (EShaderCompileJobPriority)uVar36;
      if ((EVar35 == Low) ||
         (iVar13 = DistributedShaderCompilerVariables::MinBatchSize,
         *(char *)(this->_padding_ + 0x11a) != '\0')) {
        iVar13 = 1;
      }
      iVar13 = FShaderJobCache::GetPendingJobs
                         (*(FShaderJobCache **)(this->_padding_ + 0x90),Distributed,EVar35,iVar13,
                          0x7fffffff,&local_4d8);
      if ((0 < iVar13) && (5 < (byte)LogShaderCompilers._0_1_)) {
        if (EVar35 < ForceLocal) {
          if ((EVar35 != ExtraHigh) &&
             (((EVar35 != Low && ((uVar36 & 0xff) != 1)) && ((uVar36 & 0xff) != 2)))) {
LAB_14851c427:
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Enclosing block should never be called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                                ,0x339,L"");
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              iVar13 = (*pcVar7)();
              return iVar13;
            }
          }
        }
        else if ((EVar35 != ForceLocal) && (EVar35 != None)) goto LAB_14851c427;
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
      }
    } while ((local_4d8.ArrayNum < DistributedShaderCompilerVariables::MinBatchSize) &&
            (uVar36 = uVar36 - 1, (int)this->_padding_ <= (int)uVar36));
  }
  LeaveCriticalSection(p_Var28);
  iVar13 = local_4d8.ArrayNum;
  if (0 < local_4d8.ArrayNum) {
    iVar15 = 1;
    if (GIsBuildMachine != false) {
      iVar15 = DistributedShaderCompilerVariables::MinBatchSize;
    }
    fVar48 = logf((float)(local_4d8.ArrayNum + this->NumDispatchedJobs));
    local_488 = (int)ROUND(fVar48 * __real_4038aa3b - __real_3f000000) >> 1;
    if (local_488 < iVar15) {
      local_488 = iVar15;
    }
    if (4 < (byte)LogShaderCompilers._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
      iVar13 = local_4d8.ArrayNum;
    }
    local_4f8.Data = (FScriptContainerElement *)0x0;
    local_4f0 = 0;
    uVar43 = uVar17;
    if (0 < iVar13) {
      local_4c0 = (LPCRITICAL_SECTION)0x0;
      do {
        p_Var28 = local_4c0;
        uVar40 = 0;
        uVar42 = (uint)uVar17;
        uVar21 = 0;
        uVar27 = ~uVar42 >> 0x1f;
        uVar36 = uVar21;
        if ((int)uVar42 < iVar13) {
          uVar36 = uVar27;
        }
        if (uVar36 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            iVar13 = (*pcVar7)();
            return iVar13;
          }
          uVar43 = local_4f0 & 0xffffffff;
          iVar13 = local_4d8.ArrayNum;
        }
        if (*(byte *)(*(longlong *)(local_4d8.AllocatorInstance.Data + (longlong)p_Var28) + 0x31) <
            3) {
          local_4b8[0] = 0;
          uVar36 = uVar21;
          if ((int)uVar42 < iVar13) {
            uVar36 = uVar27;
          }
          if (uVar36 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              iVar13 = (*pcVar7)();
              return iVar13;
            }
            uVar43 = local_4f0 & 0xffffffff;
            iVar13 = local_4d8.ArrayNum;
          }
          uVar17 = uVar40;
          if (*(char *)(*(ulonglong *)(local_4d8.AllocatorInstance.Data + (longlong)p_Var28) + 0x30)
              == '\0') {
            uVar17 = *(ulonglong *)(local_4d8.AllocatorInstance.Data + (longlong)p_Var28);
          }
          if (uVar17 != 0) {
            uVar17 = *(ulonglong *)(uVar17 + 0xb0);
            uVar18 = uVar40;
            if (*(int *)(uVar17 + 8) == 0) {
              uVar18 = uVar17;
            }
            local_4b8[0] = uVar40;
            if (uVar18 != 0) {
              uVar40 = uVar17;
              local_4b8[0] = uVar17;
            }
          }
          iVar15 = (int)uVar43;
          if (iVar15 == 0) {
            uVar36 = uVar21;
            if (local_4f0._4_4_ == 0) {
              uVar36 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x860,&local_4f8,(int *)((longlong)&local_4f0 + 4));
            }
            local_4f0 = CONCAT44(local_4f0._4_4_,uVar36 + 1);
            lVar24 = (longlong)(int)uVar36 * 0x60;
            *(undefined8 *)(local_4f8.Data + lVar24 + 0x20) = 0;
            *(undefined8 *)(local_4f8.Data + lVar24 + 0x20 + 8) = 0;
            *(undefined8 *)(local_4f8.Data + lVar24 + 0x48) = 0;
            *(undefined8 *)(local_4f8.Data + lVar24 + 0x58) = 0;
            *(undefined8 *)(local_4f8.Data + lVar24 + 8) = 0;
            *(undefined8 *)(local_4f8.Data + lVar24 + 0x18) = 0;
            *(undefined8 *)&local_4f8.Data[lVar24].field_0x0 = 0;
            *(undefined8 *)(local_4f8.Data + lVar24 + 0x10) = 0;
            *(undefined8 *)(local_4f8.Data + lVar24 + 0x30) = 0;
            *(undefined4 *)(local_4f8.Data + lVar24 + 0x38) = 0;
            *(undefined4 *)(local_4f8.Data + lVar24 + 0x3c) = 0x80;
            *(undefined4 *)(local_4f8.Data + lVar24 + 0x40) = 0xffffffff;
            *(undefined4 *)(local_4f8.Data + lVar24 + 0x44) = 0;
            *(undefined8 *)(local_4f8.Data + lVar24 + 0x50) = 0;
            if ((int)uVar36 < (int)(uVar36 + 1)) {
              uVar21 = ~uVar36 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              iVar13 = (*pcVar7)();
              return iVar13;
            }
LAB_14851c97c:
            FVar31.Data = (FScriptContainerElement *)(local_4f8.Data + lVar24);
            iVar13 = local_4d8.ArrayNum;
          }
          else {
            FVar31.Data = local_4f8.Data;
            if (uVar40 == 0) {
              if (iVar15 < 1) {
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar10) {
                  pcVar7 = (code *)swi(3);
                  iVar13 = (*pcVar7)();
                  return iVar13;
                }
                FVar31.Data = local_4f8.Data;
                iVar13 = local_4d8.ArrayNum;
              }
            }
            else {
              pFVar29 = local_4f8.Data + 0x44;
              pFVar37 = (FJobBatch *)(local_4f8.Data + (longlong)iVar15 * 0x60);
              while( true ) {
                if ((int)uVar43 != iVar15) {
                  local_4e8 = 0;
                  `TCheckedPointerIterator<`FShaderCompileDistributedThreadRunnable_Interface::CompilingLoop'::__l32::FJobBatch,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_4e8);
                  uVar43 = local_4f0 & 0xffffffff;
                }
                uVar36 = (uint)uVar43;
                if ((FJobBatch *)FVar31.Data == pFVar37) goto LAB_14851c8b3;
                uVar21 = ((uint)(uVar40 >> 0x14) & 0xffff ^ (uint)(uVar40 >> 4)) * -0x7a143595;
                uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
                if (*(int *)(pFVar29 + -0x2c) == *(int *)pFVar29) break;
                pFVar45 = *(FScriptContainerElement **)(pFVar29 + 0xc);
                if (pFVar45 == (FScriptContainerElement *)0x0) {
                  pFVar45 = pFVar29 + 4;
                }
                iVar13 = *(int *)(pFVar45 +
                                 (ulonglong)
                                 (*(int *)(pFVar29 + 0x14) - 1U & (uVar21 >> 0x10 ^ uVar21)) * 4);
                if (iVar13 == -1) break;
                while (*(ulonglong *)(*(longlong *)(pFVar29 + -0x34) + (longlong)iVar13 * 0x10) !=
                       uVar40) {
                  iVar13 = *(int *)(*(longlong *)(pFVar29 + -0x34) + 8 + (longlong)iVar13 * 0x10);
                  if (iVar13 == -1) goto LAB_14851c896;
                }
                FVar31.Data = FVar31.Data + 0x60;
                pFVar29 = pFVar29 + 0x60;
              }
LAB_14851c896:
              if ((FJobBatch *)FVar31.Data == (FJobBatch *)0x0) {
LAB_14851c8b3:
                if (uVar36 == local_4f0._4_4_) {
                  uVar36 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x860,&local_4f8,(int *)((longlong)&local_4f0 + 4));
                }
                local_4f0 = CONCAT44(local_4f0._4_4_,uVar36 + 1);
                lVar24 = (longlong)(int)uVar36 * 0x60;
                *(undefined8 *)(local_4f8.Data + lVar24 + 0x20) = 0;
                *(undefined8 *)(local_4f8.Data + lVar24 + 0x20 + 8) = 0;
                *(undefined8 *)(local_4f8.Data + lVar24 + 0x48) = 0;
                *(undefined8 *)(local_4f8.Data + lVar24 + 0x58) = 0;
                *(undefined8 *)&local_4f8.Data[lVar24].field_0x0 = 0;
                *(undefined8 *)(local_4f8.Data + lVar24 + 8) = 0;
                *(undefined8 *)(local_4f8.Data + lVar24 + 0x10) = 0;
                *(undefined8 *)(local_4f8.Data + lVar24 + 0x18) = 0;
                *(undefined8 *)(local_4f8.Data + lVar24 + 0x30) = 0;
                *(undefined4 *)(local_4f8.Data + lVar24 + 0x38) = 0;
                *(undefined4 *)(local_4f8.Data + lVar24 + 0x3c) = 0x80;
                *(undefined4 *)(local_4f8.Data + lVar24 + 0x40) = 0xffffffff;
                *(undefined4 *)(local_4f8.Data + lVar24 + 0x44) = 0;
                *(undefined8 *)(local_4f8.Data + lVar24 + 0x50) = 0;
                uVar21 = 0;
                if ((int)uVar36 < (int)(uVar36 + 1)) {
                  uVar21 = ~uVar36 >> 0x1f;
                }
                if ((uVar21 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  iVar13 = (*pcVar7)();
                  return iVar13;
                }
                goto LAB_14851c97c;
              }
              iVar13 = local_4d8.ArrayNum;
            }
          }
          uVar36 = 0;
          if ((int)uVar42 < iVar13) {
            uVar36 = ~uVar42 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            iVar13 = (*pcVar7)();
            return iVar13;
          }
          pFVar45 = local_4d8.AllocatorInstance.Data + (longlong)local_4c0;
          pFVar29 = (((FJobBatch *)FVar31.Data)->Jobs).AllocatorInstance.Data;
          if (((pFVar29 <= pFVar45) &&
              (pFVar45 < pFVar29 + (longlong)(((FJobBatch *)FVar31.Data)->Jobs).ArrayMax * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            iVar13 = (*pcVar7)();
            return iVar13;
          }
          iVar13 = (((FJobBatch *)FVar31.Data)->Jobs).ArrayNum;
          piVar1 = &(((FJobBatch *)FVar31.Data)->Jobs).ArrayMax;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)FVar31.Data,piVar1);
          }
          (((FJobBatch *)FVar31.Data)->Jobs).ArrayNum = iVar13 + 1;
          pFVar29 = (((FJobBatch *)FVar31.Data)->Jobs).AllocatorInstance.Data;
          *(undefined8 *)(pFVar29 + (longlong)iVar13 * 8) = 0;
          lVar24 = *(longlong *)pFVar45;
          *(longlong *)(pFVar29 + (longlong)iVar13 * 8) = lVar24;
          if (lVar24 != 0) {
            LOCK();
            *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
            UNLOCK();
          }
          if (uVar40 != 0) {
            TSet<FShaderType_const_*,DefaultKeyFuncs<FShaderType_const_*,0>,FDefaultSetAllocator>::
            Emplace<FShaderType_const_*_const_&>
                      (&((FJobBatch *)FVar31.Data)->UniquePointers,(FShaderType **)&local_410,
                       (bool *)local_4b8);
          }
          this = local_4e0;
          p_Var28 = local_4c0;
          if ((((FJobBatch *)FVar31.Data)->Jobs).ArrayNum != local_488) goto LAB_14851ccaa;
          DispatchShaderCompileJobsBatch
                    (local_4e0,
                     (TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *)
                     FVar31.Data);
          iVar13 = (int)local_4f0;
          uVar43 = (ulonglong)(int)local_4f0;
          pFVar37 = (FJobBatch *)(local_4f8.Data + uVar43 * 0x60);
          if ((FJobBatch *)local_4f8.Data != pFVar37) {
            iVar15 = (((FJobBatch *)FVar31.Data)->Jobs).ArrayNum;
            FVar30.Data = local_4f8.Data;
            do {
              iVar4 = (((FJobBatch *)FVar30.Data)->Jobs).ArrayNum;
              if ((iVar4 == iVar15) &&
                 (bVar10 = CompareItems<TRefCountPtr<FShaderCommonCompileJob>,int>
                                     ((TRefCountPtr<FShaderCommonCompileJob> *)
                                      (((FJobBatch *)FVar30.Data)->Jobs).AllocatorInstance.Data,
                                      (TRefCountPtr<FShaderCommonCompileJob> *)
                                      (((FJobBatch *)FVar31.Data)->Jobs).AllocatorInstance.Data,
                                      iVar4), bVar10)) {
                lVar24 = ((longlong)FVar30.Data - (longlong)local_4f8.Data) / 6 +
                         ((longlong)FVar30.Data - (longlong)local_4f8.Data >> 0x3f);
                uVar36 = (int)(lVar24 >> 4) - (int)(lVar24 >> 0x3f);
                this = local_4e0;
                if (uVar36 != 0xffffffff) {
                  uVar21 = 0;
                  if ((int)(uVar36 + 1) <= iVar13) {
                    uVar21 = ~uVar36 >> 0x1f;
                  }
                  if ((uVar21 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x458,
                                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    iVar13 = (*pcVar7)();
                    return iVar13;
                  }
                  FVar31.Data = local_4f8.Data;
                  pFVar37 = (FJobBatch *)(local_4f8.Data + (longlong)(int)uVar36 * 0x60);
                  DestructItems<_FShaderCompileDistributedThreadRunnable_Interface::CompilingLoop_::__l32::FJobBatch,int>
                            (pFVar37,1);
                  iVar13 = ((int)local_4f0 - uVar36) + -1;
                  if (1 < iVar13) {
                    iVar13 = 1;
                  }
                  if (iVar13 != 0) {
                    memmove(pFVar37,FVar31.Data + (longlong)((int)local_4f0 - iVar13) * 0x60,
                            (longlong)iVar13 * 0x60);
                  }
                  iVar13 = (int)local_4f0 + -1;
                  local_4f0 = CONCAT44(local_4f0._4_4_,iVar13);
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x60,8,&local_4f8,iVar13,(int *)((longlong)&local_4f0 + 4));
                  uVar43 = local_4f0 & 0xffffffff;
                  this = local_4e0;
                }
                break;
              }
              FVar30.Data = FVar30.Data + 0x60;
              this = local_4e0;
            } while ((FJobBatch *)FVar30.Data != pFVar37);
          }
        }
        else {
          if ((int)uVar42 < iVar13) {
            uVar21 = uVar27;
          }
          if ((uVar21 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            iVar13 = (*pcVar7)();
            return iVar13;
          }
          local_440.Reference =
               *(FShaderCommonCompileJob **)(local_4d8.AllocatorInstance.Data + (longlong)p_Var28);
          if (local_440.Reference != (FShaderCommonCompileJob *)0x0) {
            LOCK();
            ((local_440.Reference)->NumRefs).Counter = ((local_440.Reference)->NumRefs).Counter + 1;
            UNLOCK();
          }
          local_4a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4a8.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,1,0,&local_4a8.AllocatorInstance,1,&local_4a8.ArrayMax);
          ConstructItems<TRefCountPtr<FShaderCommonCompileJob>,TRefCountPtr<FShaderCommonCompileJob>,int>
                    (local_4a8.AllocatorInstance.Data,&local_440,1);
          if (local_440.Reference != (FShaderCommonCompileJob *)0x0) {
            FShaderCommonCompileJob::Release(local_440.Reference);
          }
          DispatchShaderCompileJobsBatch(this,&local_4a8);
          DestructItems<TRefCountPtr<FShaderCommonCompileJob>,int>
                    ((TRefCountPtr<FShaderCommonCompileJob> *)local_4a8.AllocatorInstance.Data,
                     local_4a8.ArrayNum);
          if (local_4a8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
LAB_14851ccaa:
            local_4c0 = p_Var28;
            uVar43 = local_4f0 & 0xffffffff;
          }
          else {
            FMemory::Free(local_4a8.AllocatorInstance.Data);
            uVar43 = local_4f0 & 0xffffffff;
            local_4c0 = p_Var28;
          }
        }
        local_4c0 = (LPCRITICAL_SECTION)((longlong)local_4c0 + 8);
        uVar17 = (ulonglong)(uVar42 + 1);
        iVar13 = local_4d8.ArrayNum;
      } while ((int)(uVar42 + 1) < local_4d8.ArrayNum);
    }
    iVar13 = (int)uVar43;
    pFVar37 = (FJobBatch *)(local_4f8.Data + (longlong)iVar13 * 0x60);
    FVar31.Data = local_4f8.Data;
    while( true ) {
      iVar15 = (int)uVar43;
      if (iVar15 != iVar13) {
        local_4e7 = 0;
        `TCheckedPointerIterator<`FShaderCompileDistributedThreadRunnable_Interface::CompilingLoop'::__l32::FJobBatch,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_4e7);
        iVar15 = (int)local_4f0;
      }
      if ((FJobBatch *)FVar31.Data == pFVar37) break;
      DispatchShaderCompileJobsBatch
                (this,(TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *)
                      FVar31.Data);
      uVar43 = local_4f0 & 0xffffffff;
      FVar31.Data = FVar31.Data + 0x60;
    }
    DestructItems<_FShaderCompileDistributedThreadRunnable_Interface::CompilingLoop_::__l32::FJobBatch,int>
              ((FJobBatch *)local_4f8.Data,iVar15);
    if ((FJobBatch *)local_4f8.Data != (FJobBatch *)0x0) {
      FMemory::Free(local_4f8.Data);
    }
  }
  local_380._padding_ = 0;
  local_380.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_380.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_380.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_380.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_380._40_8_ = 0;
  local_380.ArSerializingDefaults = 0;
  local_380.ArPortFlags = 0;
  local_380.ArMaxSerializeSize = 0;
  local_380.ArUEVer.FileVersionUE4 = 0;
  local_380.ArUEVer.FileVersionUE5 = 0;
  local_380.ArLicenseeUEVer = 0;
  local_380.ArEngineVer.Major = 0;
  local_380.ArEngineVer.Minor = 0;
  local_380.ArEngineVer.Patch = 0;
  local_380.ArEngineVer._6_2_ = 0;
  local_380.ArEngineVer.Changelist = 0;
  local_380.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_380.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_380.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_380.SerializedProperty = (FProperty *)0x0;
  local_380.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_380.bCustomVersionsAreReset = false;
  local_380._129_7_ = 0;
  local_380.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_380);
  local_2f0 = 0;
  local_380._padding_ = (longlong)&___7__TMemoryHasher_VFXxHash64Builder__UFXxHash64____6B_;
  FXxHash64Builder::Reset(&local_2c0);
  (**(code **)(local_380._padding_ + 0xd8))(&local_380,1);
  (**(code **)(local_380._padding_ + 0x108))(&local_380,0);
  fVar48 = __real_3c23d70a;
  uStack_45c = 1;
  local_438 = &this->DispatchedTasks;
  iVar13 = *(int *)&(this->DispatchedTasks).field_0x28;
  puStack_458 = &(this->DispatchedTasks).field_0x10;
  local_460 = 0;
  iStack_44c = 0;
  iStack_448 = 0;
  if (iVar13 != 0) {
    puVar39 = *(uint **)&(this->DispatchedTasks).field_0x20;
    if (puVar39 == (uint *)0x0) {
      puVar39 = (uint *)puStack_458;
    }
    uVar36 = *puVar39;
    while (uVar36 == 0) {
      iStack_448 = iStack_448 + 0x20;
      lVar24 = (longlong)local_460;
      local_460 = local_460 + 1;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < local_460) goto LAB_14851ce3d;
      uVar36 = puVar39[lVar24 + 1];
    }
    uStack_45c = -uVar36 & uVar36;
    uVar17 = (ulonglong)uStack_45c * 2 + 1;
    lVar24 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_410._4_4_ = (int)lVar24;
    iStack_44c = local_410._4_4_ + -1 + iStack_448;
    if (iVar13 < iStack_44c) {
LAB_14851ce3d:
      iStack_44c = iVar13;
    }
  }
  local_450 = 0xffffffff;
  bVar10 = false;
  local_430._16_8_ = CONCAT44(iStack_44c,0xffffffff);
  local_430._28_4_ = uStack_444;
  local_430.BaseBitIndex = iStack_448;
  local_430._padding_._0_4_ = local_460;
  local_430._padding_._4_4_ = uStack_45c;
  iVar15 = iStack_44c;
  local_430.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_458;
  bVar12 = false;
  if (iStack_44c < iVar13) {
    do {
      bVar12 = true;
      plVar5 = *(longlong **)(*(longlong *)local_438 + (longlong)iVar15 * 8);
      if ((bVar10) || (bVar10 = false, (int)plVar5[3] != 0)) {
        bVar10 = true;
      }
      if (*plVar5 == 0) {
        cVar47 = '\0';
      }
      else {
        cVar47 = *(char *)(*plVar5 + 0x68);
      }
      puVar39 = (uint *)((longlong)(local_380.ActiveFPLB)->StartFastPathLoadBuffer + 4);
      if ((local_380.ActiveFPLB)->EndFastPathLoadBuffer < puVar39) {
        local_4c8[0] = 0;
        if (local_380.ArIsLoading == 0) {
          local_4c8[0] = (uint)(cVar47 != '\0');
        }
        (**(code **)(local_380._padding_ + 0x188))(&local_380,local_4c8,4);
        if (1 < local_4c8[0]) {
          FArchiveState::SetError(&local_380);
        }
        uVar36 = local_4c8[0];
        if (local_380.ArIsLoading != 0) goto LAB_14851cf34;
      }
      else {
        uVar36 = *(uint *)(local_380.ActiveFPLB)->StartFastPathLoadBuffer;
        (local_380.ActiveFPLB)->StartFastPathLoadBuffer = (uchar *)puVar39;
LAB_14851cf34:
        cVar47 = uVar36 != 0;
      }
      plVar32 = (longlong *)plVar5[2];
      lVar24 = plVar5[3];
      plVar2 = plVar32 + (int)lVar24;
      while( true ) {
        if ((int)plVar5[3] != (int)lVar24) {
          local_4e6 = 0;
          `TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_4e6);
        }
        if (plVar32 == plVar2) break;
        (**(code **)(local_380._padding_ + 0x188))(&local_380,*plVar32 + 0x44);
        plVar32 = plVar32 + 1;
      }
      if (cVar47 != '\0') {
        if (*plVar5 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("State.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x155,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            iVar13 = (*pcVar7)();
            return iVar13;
          }
          if (*plVar5 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L"");
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              iVar13 = (*pcVar7)();
              return iVar13;
            }
          }
        }
        lVar24 = *plVar5;
        while (pFVar46 = local_4e0, *(char *)(lVar24 + 0x68) == '\0') {
          (**(code **)(**(longlong **)(lVar24 + 0x60) + 0x20))
                    (*(longlong **)(lVar24 + 0x60),0xffffffff,0);
        }
        uVar6 = *(undefined8 *)(lVar24 + 0x70);
        local_4e0->NumDispatchedJobs = local_4e0->NumDispatchedJobs - (int)plVar5[3];
        if (((int)uVar6 != 0) && (1 < (byte)LogShaderCompilers._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        }
        if ((char)((ulonglong)uVar6 >> 0x20) == '\0') {
          if (3 < (byte)LogShaderCompilers._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers)
            ;
          }
          p_Var28 = (LPCRITICAL_SECTION)(pFVar46->_padding_ + 0x68);
          if (p_Var28 == (LPCRITICAL_SECTION)0x0) goto LAB_14851d929;
          EnterCriticalSection(p_Var28);
          FShaderJobCache::SubmitJobs
                    (*(FShaderJobCache **)(pFVar46->_padding_ + 0x90),
                     (TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *)
                     (plVar5 + 2));
          LeaveCriticalSection(p_Var28);
        }
        else {
          bVar11 = false;
          pIVar19 = IFileManager::Get();
          if ((int)plVar5[7] == 0) {
            pwVar25 = L"";
          }
          else {
            pwVar25 = (wchar_t *)plVar5[6];
          }
          cVar47 = (**(code **)((longlong)*pIVar19 + 0x50))(pIVar19,pwVar25);
          bVar12 = true;
          if (cVar47 == '\0') {
LAB_14851d216:
            uVar17 = 0;
            if (3 < (byte)LogShaderCompilers._0_1_) {
              UE::Logging::Private::BasicLog<4>
                        ((FStaticBasicLogRecord *)&PTR_u_Rescheduling_sh_151b0ccd0,
                         (FLogCategoryBase *)&LogShaderCompilers);
            }
            local_480.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_480.Data.ArrayNum = 0;
            local_480.Data.ArrayMax = 0;
            uVar43 = uVar17;
            if (0 < (int)plVar5[3]) {
              do {
                uVar21 = (uint)uVar17;
                uVar36 = 0;
                if ((int)uVar21 < (int)plVar5[3]) {
                  uVar36 = ~uVar21 >> 0x1f;
                }
                if (uVar36 == 0) {
                  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar11) {
                    pcVar7 = (code *)swi(3);
                    iVar13 = (*pcVar7)();
                    return iVar13;
                  }
                }
                lVar24 = plVar5[2];
                ::FString::Empty(&local_480);
                (**(code **)(**(longlong **)(uVar43 + lVar24) + 0x10))
                          (*(longlong **)(uVar43 + lVar24),&local_480,uVar17,(int)plVar5[3]);
                if (3 < (byte)LogShaderCompilers._0_1_) {
                  UE::Logging::Private::BasicLog<4>
                            (&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
                }
                FShaderCompileInternalUtilities::DumpDebugInfo
                          (*(FShaderCommonCompileJob **)(uVar43 + lVar24));
                FShaderCompileUtilities::ExecuteShaderCompileJob
                          (*(FShaderCommonCompileJob **)(uVar43 + lVar24));
                uVar17 = (ulonglong)(uVar21 + 1);
                uVar43 = uVar43 + 8;
              } while ((int)(uVar21 + 1) < (int)plVar5[3]);
            }
            if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_480.Data.AllocatorInstance.Data);
            }
          }
          else {
            pIVar19 = IFileManager::Get();
            if ((int)plVar5[7] == 0) {
              pwVar25 = L"";
            }
            else {
              pwVar25 = (wchar_t *)plVar5[6];
            }
            pFVar20 = (FArchive *)(**(code **)((longlong)*pIVar19 + 0x18))(pIVar19,pwVar25,2);
            if (pFVar20 == (FArchive *)0x0) goto LAB_14851d216;
            local_3d8.BatchProcessTime = 0.0;
            pFVar38 = &local_3d8;
            if (GShaderCompilerDumpWorkerDiagnostics == false) {
              pFVar38 = (FShaderCompileWorkerDiagnostics *)0x0;
            }
            bVar12 = false;
            local_3d8.ErrorCode = 0;
            local_3d8.BatchIndex = 0;
            local_3d8.EntryPointTimestamp = 0.0;
            local_3d8.BatchPreparationTime = 0.0;
            EVar14 = FShaderCompileWorkerUtil::ReadTasks
                               ((TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_>
                                 *)(plVar5 + 2),pFVar20,pFVar38,WillRetry);
            if ((EVar14 == Success) &&
               (bVar11 = true, GShaderCompilerDumpWorkerDiagnostics != false)) {
              FPaths::GetCleanFilename(&local_498,(FString *)(plVar5 + 4));
              lpCriticalSection = GShaderCompilerStats;
              lVar24 = plVar5[3];
              if (GShaderCompilerStats == (FShaderCompilerStats *)0x0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::ReportNotNullPtr();
              }
              EnterCriticalSection((LPCRITICAL_SECTION)GShaderCompilerStats);
              iVar13 = (lpCriticalSection->WorkerDiagnostics).ArrayNum;
              piVar1 = &(lpCriticalSection->WorkerDiagnostics).ArrayMax;
              if (iVar13 == *piVar1) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x840,&(lpCriticalSection->WorkerDiagnostics).AllocatorInstance,
                                    piVar1);
              }
              (lpCriticalSection->WorkerDiagnostics).ArrayNum = iVar13 + 1;
              pFVar45 = (lpCriticalSection->WorkerDiagnostics).AllocatorInstance.Data +
                        (longlong)iVar13 * 0x40;
              DefaultConstructItems<FShaderCompilerStats::FWorkerDiagnosticsInfo,int>(pFVar45,1);
              pFVar29 = pFVar45 + 0x28;
              *(ulonglong *)pFVar45 = CONCAT44(local_3d8._4_4_,local_3d8.ErrorCode);
              *(double *)(pFVar45 + 8) = local_3d8.EntryPointTimestamp;
              *(double *)(pFVar45 + 0x10) = local_3d8.BatchPreparationTime;
              *(double *)(pFVar45 + 0x18) = local_3d8.BatchProcessTime;
              *(ulonglong *)(pFVar45 + 0x20) = CONCAT44(local_3d8._36_4_,local_3d8.BatchIndex);
              if (pFVar29 != (FScriptContainerElement *)&local_498) {
                if (*(void **)pFVar29 != (void *)0x0) {
                  FMemory::Free(*(void **)pFVar29);
                }
                *(FScriptContainerElement **)pFVar29 = local_498.Data.AllocatorInstance.Data;
                local_498.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                *(int *)(pFVar45 + 0x30) = local_498.Data.ArrayNum;
                *(int *)(pFVar45 + 0x34) = local_498.Data.ArrayMax;
                local_498.Data.ArrayNum = 0;
                local_498.Data.ArrayMax = 0;
              }
              *(int *)(pFVar45 + 0x38) = (int)lVar24;
              *(undefined4 *)(pFVar45 + 0x3c) = 0;
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
              pFVar46 = local_4e0;
              if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_498.Data.AllocatorInstance.Data);
                pFVar46 = local_4e0;
              }
            }
            (*(code *)**(undefined8 **)pFVar20)(pFVar20,1);
            if (!bVar11) goto LAB_14851d216;
          }
          local_4c0 = (LPCRITICAL_SECTION)(pFVar46->_padding_ + 0x68);
          if (local_4c0 == (LPCRITICAL_SECTION)0x0) goto LAB_14851d929;
          EnterCriticalSection(local_4c0);
          puVar34 = (undefined8 *)plVar5[2];
          lVar24 = plVar5[3];
          puVar3 = puVar34 + (int)lVar24;
          while( true ) {
            if ((int)plVar5[3] != (int)lVar24) {
              local_4e5[0] = 0;
              `TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_4e5);
            }
            if (puVar34 == puVar3) break;
            lVar33 = pFVar46->_padding_;
            this_00 = (FShaderCommonCompileJob *)*puVar34;
            local_3a0 = &UE::Core::Private::Function::
                         TFunction_OwnedObject<`FShaderCompilingManager::ProcessFinishedJob'::`2'::<lambda_1>,0,0>
                         ::_vftable_;
            local_388 = (undefined ***)0x0;
            local_3b0[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<`FShaderCompilingManager::ProcessFinishedJob'::__l2::<lambda_1>,void,FShaderCompileJob_&>
                           ::Call;
            local_398 = lVar33;
            FShaderCommonCompileJob::ForEachSingleShaderJob
                      (this_00,(TFunction<void___cdecl(FShaderCompileJob_&)> *)local_3b0);
            if (local_3b0[0] != (code *)0x0) {
              pppuVar22 = &local_3a0;
              if (local_388 != (undefined ***)0x0) {
                pppuVar22 = local_388;
              }
              (*(code *)(*pppuVar22)[2])();
            }
            FShaderJobCache::ProcessFinishedJob
                      (*(FShaderJobCache **)(lVar33 + 0x90),this_00,CompleteDistributedExecution);
            puVar34 = puVar34 + 1;
            pFVar46 = local_4e0;
          }
          LeaveCriticalSection(local_4c0);
        }
        while( true ) {
          pIVar19 = IFileManager::Get();
          if ((int)plVar5[5] == 0) {
            pwVar25 = L"";
          }
          else {
            pwVar25 = (wchar_t *)plVar5[4];
          }
          cVar47 = (**(code **)((longlong)*pIVar19 + 0x38))(pIVar19,pwVar25,0,1);
          if (cVar47 != '\0') break;
          FWindowsPlatformProcess::Sleep(fVar48);
        }
        if (!bVar12) {
          while( true ) {
            pIVar19 = IFileManager::Get();
            if ((int)plVar5[7] == 0) {
              pwVar25 = L"";
            }
            else {
              pwVar25 = (wchar_t *)plVar5[6];
            }
            cVar47 = (**(code **)((longlong)*pIVar19 + 0x38))(pIVar19,pwVar25,0,1);
            if (cVar47 != '\0') break;
            FWindowsPlatformProcess::Sleep(fVar48);
          }
        }
        uVar6 = local_430._16_8_;
        pTVar9 = local_438;
        iVar13 = local_430.CurrentBitIndex;
        lVar33 = (longlong)local_430.CurrentBitIndex;
        bVar8 = (byte)local_430.CurrentBitIndex & 0x1f;
        uVar36 = 1 << bVar8 | 1U >> 0x20 - bVar8;
        lVar24 = *(longlong *)local_438;
        puVar44 = &local_438->field_0x10;
        if (((longlong)local_430._16_8_ < 0) ||
           (*(int *)&local_438->field_0x28 <= local_430.CurrentBitIndex)) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar12) {
            pcVar7 = (code *)swi(3);
            iVar13 = (*pcVar7)();
            return iVar13;
          }
        }
        puVar23 = puVar44;
        if (*(undefined1 **)&pTVar9->field_0x20 != (undefined1 *)0x0) {
          puVar23 = *(undefined1 **)&pTVar9->field_0x20;
        }
        iVar15 = iVar13;
        if ((longlong)uVar6 < 0) {
          iVar15 = iVar13 + 0x1f;
        }
        if ((*(uint *)(puVar23 + (longlong)(iVar15 >> 5) * 4) & uVar36) == 0) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("AllocationFlags[Index]",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                              ,0xc5,L"");
          if (bVar12) {
            pcVar7 = (code *)swi(3);
            iVar13 = (*pcVar7)();
            return iVar13;
          }
        }
        if (*(int *)&pTVar9->field_0x34 != 0) {
          *(int *)(lVar24 + (longlong)*(int *)&pTVar9->field_0x30 * 8) = iVar13;
        }
        *(undefined4 *)(lVar24 + lVar33 * 8) = 0xffffffff;
        if (*(int *)&pTVar9->field_0x34 < 1) {
          uVar16 = 0xffffffff;
        }
        else {
          uVar16 = *(undefined4 *)&pTVar9->field_0x30;
        }
        *(undefined4 *)(lVar24 + 4 + lVar33 * 8) = uVar16;
        *(int *)&pTVar9->field_0x34 = *(int *)&pTVar9->field_0x34 + 1;
        *(int *)&pTVar9->field_0x30 = iVar13;
        if (((longlong)uVar6 < 0) || (*(int *)&pTVar9->field_0x28 <= iVar13)) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar12) {
            pcVar7 = (code *)swi(3);
            iVar13 = (*pcVar7)();
            return iVar13;
          }
        }
        if (*(undefined1 **)&pTVar9->field_0x20 != (undefined1 *)0x0) {
          puVar44 = *(undefined1 **)&pTVar9->field_0x20;
        }
        if ((longlong)uVar6 < 0) {
          iVar13 = iVar13 + 0x1f;
        }
        *(uint *)(puVar44 + (longlong)(iVar13 >> 5) * 4) =
             *(uint *)(puVar44 + (longlong)(iVar13 >> 5) * 4) & ~uVar36;
        if ((void *)plVar5[6] != (void *)0x0) {
          FMemory::Free((void *)plVar5[6]);
        }
        if ((void *)plVar5[4] != (void *)0x0) {
          FMemory::Free((void *)plVar5[4]);
        }
        DestructItems<TRefCountPtr<FShaderCommonCompileJob>,int>
                  ((TRefCountPtr<FShaderCommonCompileJob> *)plVar5[2],(int)plVar5[3]);
        if ((void *)plVar5[2] != (void *)0x0) {
          FMemory::Free((void *)plVar5[2]);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)plVar5[1]);
        ::operator_delete(plVar5,0x40);
      }
      local_430.UnvisitedBitMask = local_430.UnvisitedBitMask & ~local_430._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_430);
      this = local_4e0;
      iVar15 = local_430.CurrentBitIndex;
      bVar12 = bVar10;
    } while (local_430.CurrentBitIndex < (local_430.Array)->NumBits);
  }
  uVar41 = 0;
  FWindowsPlatformProcess::Sleep(fVar48);
  uVar26 = uVar41;
  if (bVar12) {
    FXxHash64Builder::Finalize(&local_2c0);
    uVar26 = local_408;
  }
  bVar10 = FShaderCompileThreadRunnableBase::WorkerStateHeartbeat
                     ((FShaderCompileThreadRunnableBase *)this,uVar26);
  if (!bVar10) {
    if (3 < (byte)LogShaderCompilers._0_1_) {
      UE::Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_________ShaderC_151b0c910,
                 (FLogCategoryBase *)&LogShaderCompilers);
    }
    local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_470.Data.ArrayNum = 0;
    local_470.Data.ArrayMax = 0;
    TSparseArray<FDistributedShaderCompilerTask_*,FDefaultSparseArrayAllocator>::CreateConstIterator
              (&this->DispatchedTasks,(TConstIterator *)&local_400);
    if (local_3f8.CurrentBitIndex < (local_3f8.Array)->NumBits) {
      do {
        lVar24 = *(longlong *)(*local_400 + (longlong)local_3f8.CurrentBitIndex * 8);
        if (lVar24 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Task != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerDistributed.cpp"
                              ,0x153,
                              L"Task entries in the sparse array of dispatched distributed shader jobs (FDistributedShaderCompilerTask) must not be null"
                             );
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            iVar13 = (*pcVar7)();
            return iVar13;
          }
        }
        if (*(int *)(lVar24 + 0x18) != 0) {
          ::FString::Empty(&local_470);
          uVar17 = uVar41;
          uVar26 = uVar41;
          if (0 < *(int *)(lVar24 + 0x18)) {
            do {
              uVar21 = (uint)uVar17;
              uVar36 = 0;
              if ((int)uVar21 < *(int *)(lVar24 + 0x18)) {
                uVar36 = ~uVar21 >> 0x1f;
              }
              if (uVar36 == 0) {
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar10) {
                  pcVar7 = (code *)swi(3);
                  iVar13 = (*pcVar7)();
                  return iVar13;
                }
              }
              plVar5 = *(longlong **)(uVar26 + *(longlong *)(lVar24 + 0x10));
              (**(code **)(*plVar5 + 0x10))(plVar5,&local_470,uVar17,*(undefined4 *)(lVar24 + 0x18))
              ;
              uVar17 = (ulonglong)(uVar21 + 1);
              uVar26 = uVar26 + 8;
            } while ((int)(uVar21 + 1) < *(int *)(lVar24 + 0x18));
          }
          if (3 < (byte)LogShaderCompilers._0_1_) {
            UE::Logging::Private::BasicLog<4>
                      ((FStaticBasicLogRecord *)&PTR_u_Task___d__d_____151b0c9a8,
                       (FLogCategoryBase *)&LogShaderCompilers);
          }
        }
        local_3f8.UnvisitedBitMask = local_3f8.UnvisitedBitMask & ~local_3f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3f8);
        this = local_4e0;
      } while (local_3f8.CurrentBitIndex < (local_3f8.Array)->NumBits);
    }
    if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_470.Data.AllocatorInstance.Data);
    }
  }
  iVar13 = *(int *)(*(longlong *)(this->_padding_ + 0x90) + 0x80);
  FArchive::~FArchive((FArchive *)&local_380);
  DestructItems<TRefCountPtr<FShaderCommonCompileJob>,int>
            ((TRefCountPtr<FShaderCommonCompileJob> *)local_4d8.AllocatorInstance.Data,
             local_4d8.ArrayNum);
  if (local_4d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.AllocatorInstance.Data);
  }
  return (int)(0 < iVar13);
}

// DispatchShaderCompileJobsBatch @ 148521ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderCompileDistributedThreadRunnable_Interface::DispatchShaderCompileJobsBatch
          (FShaderCompileDistributedThreadRunnable_Interface *this,
          TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FShaderCompilerStats *pFVar3;
  FShaderCompileDistributedThreadRunnable_Interface *pFVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  IFileManager *pIVar12;
  FArchive *pFVar13;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined8 uVar15;
  FString *pFVar16;
  FDistributedShaderCompilerTask *pFVar17;
  undefined8 *puVar18;
  int iVar19;
  ulonglong uVar20;
  undefined ***pppuVar21;
  longlong lVar22;
  wchar_t *pwVar23;
  uint uVar24;
  ForAnyElementType FVar25;
  FDistributedShaderCompilerTask *pFVar26;
  longlong lVar27;
  longlong *plVar28;
  FDistributedShaderCompilerTask *pFVar29;
  int iVar30;
  FScriptContainerElement *pFVar31;
  undefined1 auStackY_b08 [32];
  undefined1 local_ac8;
  undefined1 local_ac7 [7];
  FString local_ac0;
  FString local_ab0;
  undefined8 local_aa0;
  FDistributedShaderCompilerTask *local_a98;
  FString local_a90;
  FString local_a80;
  uint local_a70;
  uint local_a6c;
  FShaderCompileDistributedThreadRunnable_Interface *local_a68;
  FString local_a58;
  ForAnyElementType local_a48;
  undefined8 local_a40;
  FString local_a38;
  FString local_a28;
  FScriptContainerElement *local_a18;
  undefined8 local_a10;
  FScriptContainerElement *local_a08;
  undefined8 local_a00;
  undefined4 local_9f8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_9f0;
  FString *local_9e0;
  undefined8 local_9d8;
  FString local_9c8;
  FString local_9b8;
  FString local_9a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_998;
  FString local_988;
  FString local_978;
  FString local_968;
  FString local_958;
  undefined1 local_948 [8];
  TReferenceControllerBase<1> *local_940;
  code *local_938;
  undefined **local_928;
  FString *local_920;
  undefined ***local_910;
  TStringBuilderBase<wchar_t> local_908;
  wchar_t local_8e8 [64];
  TStringBuilderWithBuffer<wchar_t,1024> local_868;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_b08;
  local_a6c = 0;
  local_a98 = (FDistributedShaderCompilerTask *)param_1;
  local_a68 = this;
  (**(code **)((longlong)*this->CachedController + 0x80))(this->CachedController,&local_a80);
  iVar7 = FWindowsPlatformMisc::GetExternalAppMaxPathLength();
  iVar7 = iVar7 + -5;
  iVar19 = local_a80.Data.ArrayNum + -1;
  if (local_a80.Data.ArrayNum == 0) {
    iVar19 = 0;
  }
  if ((iVar7 < iVar19) && (1 < (byte)LogShaderCompilers._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
  }
  iVar19 = local_a80.Data.ArrayNum;
  local_868._padding_ = (longlong)local_868.StringBuffer;
  local_868._padding_._0_2_ = 0;
  local_868._padding_ = (longlong)local_868.StringBuffer;
  local_868._padding_ = (longlong)local_48;
  pvVar11 = FGenericPlatformString::Memcpy(local_868.StringBuffer,L".",2);
  local_868._padding_ = (longlong)pvVar11 + 2;
  if (param_1->ArrayNum == 1) {
    lVar27 = *(longlong *)(param_1->AllocatorInstance).Data;
    lVar22 = 0;
    if (*(char *)(lVar27 + 0x30) == '\0') {
      lVar22 = lVar27;
    }
    if (lVar22 == 0) goto LAB_148522148;
    iVar8 = (int)(local_868._padding_ - local_868._padding_ >> 1);
    pFVar16 = (FString *)(lVar22 + 0x178);
    iVar30 = *(int *)(lVar22 + 0x180);
    iVar9 = iVar8 + -1 + iVar19;
    if (iVar19 == 0) {
      iVar9 = iVar8;
    }
    iVar19 = iVar30 + -1;
    iVar8 = iVar19;
    if (iVar30 == 0) {
      iVar8 = 0;
    }
    if (iVar7 < iVar8 + iVar9) {
      if (iVar7 - iVar9 < 5) goto LAB_148522148;
      iVar8 = ((iVar7 - iVar9) + -3) / 2;
      if (iVar30 == 0) {
        iVar19 = 0;
        pwVar23 = L"";
      }
      else {
        pwVar23 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
      iVar30 = iVar19;
      if (iVar8 < iVar19) {
        iVar30 = iVar8;
      }
      iVar9 = 0;
      if (0 < iVar30) {
        iVar9 = iVar30;
      }
      ::FString::FString(&local_9a8,
                         (wchar_t *)((longlong)pwVar23 + ((longlong)iVar19 - (longlong)iVar9) * 2));
      iVar30 = *(int *)(lVar22 + 0x180);
      iVar19 = iVar30 + -1;
      if (iVar30 == 0) {
        iVar19 = 0;
      }
      if (iVar8 < iVar19) {
        iVar19 = iVar8;
      }
      iVar8 = 0;
      if (0 < iVar19) {
        iVar8 = iVar19;
      }
      if (iVar30 == 0) {
        pwVar23 = L"";
      }
      else {
        pwVar23 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_9b8,pwVar23,iVar8);
      ::FString::PrintfImpl(&local_968,L"%s---%s");
      if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
      }
      if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
      }
      ConvertDebugNameToFilename(&local_868,&local_968);
      this = local_a68;
      if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_968.Data.AllocatorInstance.Data);
        this = local_a68;
      }
    }
    else {
      ConvertDebugNameToFilename(&local_868,pFVar16);
    }
  }
  else {
LAB_148522148:
    if ((ulonglong)local_868._padding_ < (ulonglong *)((longlong)pvVar11 + 6U)) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_868,2);
    }
    pvVar11 = FGenericPlatformString::Memcpy((void *)local_868._padding_,L"j-",4);
    local_868._padding_ = (longlong)pvVar11 + 4;
    TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)&local_868,L"%d");
  }
  ::FString::AppendChars
            (&local_a80,(wchar_t *)local_868._padding_,
             (int)(local_868._padding_ - local_868._padding_ >> 1));
  iVar30 = 0;
  iVar19 = local_a80.Data.ArrayNum + -1;
  if (local_a80.Data.ArrayNum == 0) {
    iVar19 = iVar30;
  }
  if (iVar7 < iVar19) {
    iVar8 = 0;
    if (local_a80.Data.ArrayNum != 0) {
      iVar8 = local_a80.Data.ArrayNum + -1;
    }
    iVar9 = iVar8 - (iVar19 - iVar7);
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
    iVar9 = iVar30;
    if (0 < iVar8) {
      iVar9 = iVar8;
    }
    ::FString::RemoveAt(&local_a80,iVar9,iVar19 - iVar7,Default);
  }
  ::FString::ConcatFC(&local_ac0,&local_a80,L".in");
  ::FString::ConcatFC(&local_a90,&local_a80,L".out");
  FPaths::GetPath(&local_978,&local_ac0);
  pFVar3 = GShaderCompilerStats;
  iVar7 = param_1->ArrayNum;
  if (GShaderCompilerStats == (FShaderCompilerStats *)0x0) {
LAB_1485228c3:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)GShaderCompilerStats);
  (pFVar3->Counters).DistributedJobBatchesSeen = (pFVar3->Counters).DistributedJobBatchesSeen + 1;
  (pFVar3->Counters).TotalJobsReportedInDistributedJobBatches =
       (longlong)iVar7 + (pFVar3->Counters).TotalJobsReportedInDistributedJobBatches;
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
  pIVar12 = IFileManager::Get();
  FVar25.Data = (FScriptContainerElement *)L"";
  if (local_ac0.Data.ArrayNum != 0) {
    FVar25.Data = local_ac0.Data.AllocatorInstance.Data;
  }
  pFVar13 = (FArchive *)(**(code **)((longlong)*pIVar12 + 0x20))(pIVar12,FVar25.Data);
  FShaderCompileWorkerUtil::WriteTasks(param_1,pFVar13,None);
  if (pFVar13 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar13)(pFVar13,1);
  }
  this->NumDispatchedJobs = this->NumDispatchedJobs + param_1->ArrayNum;
  local_a58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a58.Data.ArrayNum = 0;
  local_a58.Data.ArrayMax = 0;
  local_a48.Data = (FScriptContainerElement *)0x0;
  local_a40 = 0;
  local_a38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a38.Data.ArrayNum = 0;
  local_a38.Data.ArrayMax = 0;
  local_a28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a28.Data.ArrayNum = 0;
  local_a28.Data.ArrayMax = 0;
  local_a18 = (void *)0x0;
  local_a10 = 0;
  local_a08 = (FScriptContainerElement *)0x0;
  local_a00._0_4_ = 0;
  local_a00._4_4_ = 0;
  local_9f8 = 0;
  local_9f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9f0.ArrayNum = 0;
  local_9f0.ArrayMax = 0;
  local_9e0 = (FString *)0x0;
  local_9d8 = 0;
  iVar7 = *(int *)(this->_padding_ + 0x160);
  iVar19 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar19 = iVar30;
  }
  ::FString::AssignRange(&local_a58,*(wchar_t **)(this->_padding_ + 0x158),iVar19);
  FVar25.Data = local_978.Data.AllocatorInstance.Data;
  iVar7 = local_978.Data.ArrayNum;
  local_a40 = CONCAT44(local_a40._4_4_,iVar7);
  if ((iVar7 == 0) && (local_a40._4_4_ == 0)) {
    local_a40 = local_978.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,local_a40._4_4_,&local_a48,iVar7,(int *)((longlong)&local_a40 + 4));
    if (iVar7 != 0) {
      memcpy(local_a48.Data,FVar25.Data,(longlong)iVar7 * 2);
    }
  }
  local_9f8 = *(undefined4 *)(this->_padding_ + 0x114);
  iVar7 = local_ac0.Data.ArrayNum + -1;
  if (local_ac0.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange(&local_a38,(wchar_t *)local_ac0.Data.AllocatorInstance.Data,iVar7);
  iVar7 = local_a90.Data.ArrayNum + -1;
  if (local_a90.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange(&local_a28,(wchar_t *)local_a90.Data.AllocatorInstance.Data,iVar7);
  local_908.Base = local_8e8;
  local_908.bIsDynamic = false;
  local_908.bIsExternal = false;
  local_908.CurPos = local_8e8;
  local_908.End = (wchar_t *)&local_868;
  FCommandLine::BuildSubprocessCommandLine(ProgramContext,false,&local_908);
  if (local_908.End < (TStringBuilderWithBuffer<wchar_t,1024> *)(local_908.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_908,1);
  }
  *local_908.CurPos = L'\0';
  ::FString::PrintfImpl(&local_9c8,L"%s%s");
  if (local_a18 != (void *)0x0) {
    FMemory::Free(local_a18);
  }
  local_a18 = local_9c8.Data.AllocatorInstance.Data;
  local_9c8.Data.ArrayNum = 0;
  local_9c8.Data.ArrayMax = 0;
  local_9c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar14 = GetDependencyFilesForJobs(this,&local_998,param_1);
  if (&local_9f0 != pTVar14) {
    DestructItems<FString,int>((FString *)local_9f0.AllocatorInstance.Data,local_9f0.ArrayNum);
    if (local_9f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9f0.AllocatorInstance.Data);
    }
    local_9f0.AllocatorInstance.Data = (pTVar14->AllocatorInstance).Data;
    (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_9f0.ArrayNum = pTVar14->ArrayNum;
    local_9f0.ArrayMax = pTVar14->ArrayMax;
    pTVar14->ArrayNum = 0;
    pTVar14->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_998.AllocatorInstance.Data,local_998.ArrayNum);
  if (local_998.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_998.AllocatorInstance.Data);
  }
  local_a70 = param_1->ArrayNum;
  uVar20 = (ulonglong)(int)local_a70;
  pFVar31 = (param_1->AllocatorInstance).Data;
  FVar25.Data = pFVar31 + uVar20 * 8;
  local_ab0.Data.AllocatorInstance.Data = FVar25.Data;
  while( true ) {
    pFVar26 = (FDistributedShaderCompilerTask *)0x0;
    if (*(int *)&(((FDistributedShaderCompilerTask *)param_1)->Future).field_0x8 != (int)uVar20) {
      local_ac8 = 0;
      `TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_ac8);
    }
    if (pFVar31 == FVar25.Data) break;
    pFVar17 = *(FDistributedShaderCompilerTask **)pFVar31;
    local_910 = (undefined ***)0x0;
    local_928 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FShaderCompileDistributedThreadRunnable_Interface::DispatchShaderCompileJobsBatch'::`30'::<lambda_1>,0,0>
                 ::_vftable_;
    local_920 = &local_a58;
    local_938 = UE::Core::Private::Function::
                TFunctionRefCaller<`FShaderCompileDistributedThreadRunnable_Interface::DispatchShaderCompileJobsBatch'::__l30::<lambda_1>,void,FShaderCompileJob_&>
                ::Call;
    cVar6 = *(char *)&(pFVar17->OutputFilePath).Data.AllocatorInstance.Data;
    pFVar29 = pFVar26;
    if (cVar6 == '\0') {
      pFVar29 = pFVar17;
    }
    if (pFVar29 == (FDistributedShaderCompilerTask *)0x0) {
      if (cVar6 == '\x01') {
        pFVar26 = pFVar17;
      }
      param_1 = (TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *)
                local_a98;
      if (pFVar26 != (FDistributedShaderCompilerTask *)0x0) {
        plVar28 = *(longlong **)&pFVar26[3].Future.field_0x8;
        iVar7 = *(int *)&pFVar26[3].ShaderJobs.AllocatorInstance.Data;
        plVar1 = plVar28 + iVar7;
        while( true ) {
          if (*(int *)&pFVar26[3].ShaderJobs.AllocatorInstance.Data != iVar7) {
            local_ac7[0] = 0;
            `TCheckedPointerIterator<TRefCountPtr<FShaderCompileJob>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_ac7);
          }
          FVar25.Data = local_ab0.Data.AllocatorInstance.Data;
          param_1 = (TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *)
                    local_a98;
          if (plVar28 == plVar1) break;
          lVar27 = 0;
          if (*(char *)(*plVar28 + 0x30) == '\0') {
            lVar27 = *plVar28;
          }
          if (lVar27 != 0) {
            UE::Core::Private::Function::CheckCallable(local_938);
            pcVar2 = local_938;
            pppuVar21 = &local_928;
            if (local_910 != (undefined ***)0x0) {
              pppuVar21 = local_910;
            }
            uVar15 = (*(code *)(*pppuVar21)[1])();
            (*pcVar2)(uVar15,lVar27);
          }
          plVar28 = plVar28 + 1;
        }
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable
                (UE::Core::Private::Function::
                 TFunctionRefCaller<`FShaderCompileDistributedThreadRunnable_Interface::DispatchShaderCompileJobsBatch'::__l30::<lambda_1>,void,FShaderCompileJob_&>
                 ::Call);
      pcVar2 = local_938;
      pppuVar21 = &local_928;
      if (local_910 != (undefined ***)0x0) {
        pppuVar21 = local_910;
      }
      uVar15 = (*(code *)(*pppuVar21)[1])();
      (*pcVar2)(uVar15,pFVar29);
      FVar25.Data = local_ab0.Data.AllocatorInstance.Data;
    }
    if (local_938 != (code *)0x0) {
      pppuVar21 = &local_928;
      if (local_910 != (undefined ***)0x0) {
        pppuVar21 = local_910;
      }
      (*(code *)(*pppuVar21)[2])();
    }
    uVar20 = (ulonglong)local_a70;
    pFVar31 = pFVar31 + 8;
  }
  if (0 < DistributedShaderCompilerVariables::GDistributedJobDescriptionLevel) {
    iVar7 = *(int *)&(((FDistributedShaderCompilerTask *)param_1)->Future).field_0x8;
    local_ab0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ab0.Data.ArrayNum = 0;
    local_ab0.Data.ArrayMax = 0;
    if (iVar7 != 0) {
      if (0x14 < iVar7) {
        iVar7 = 0x13;
      }
      pFVar17 = pFVar26;
      pFVar29 = pFVar26;
      if (0 < iVar7) {
        do {
          uVar24 = (uint)pFVar17;
          if (0 < (int)uVar24) {
            ::FString::AppendChars(&local_ab0,L"\n",1);
          }
          uVar10 = 0;
          if ((int)uVar24 < *(int *)&(((FDistributedShaderCompilerTask *)param_1)->Future).field_0x8
             ) {
            uVar10 = ~uVar24 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar16 = BuildCompactTaskDescriptionForJob
                              (&local_958,
                               *(FShaderCommonCompileJob **)
                                (*(FScriptContainerElement **)
                                  &((FDistributedShaderCompilerTask *)param_1)->Future +
                                (longlong)pFVar29 * 8));
          iVar19 = (pFVar16->Data).ArrayNum;
          uVar10 = iVar19 - 1;
          if (iVar19 == 0) {
            uVar10 = 0;
          }
          ::FString::AppendChars
                    (&local_ab0,(wchar_t *)(pFVar16->Data).AllocatorInstance.Data,uVar10);
          if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_958.Data.AllocatorInstance.Data);
          }
          pFVar29 = (FDistributedShaderCompilerTask *)&(pFVar29->Future).field_0x1;
          pFVar17 = (FDistributedShaderCompilerTask *)(ulonglong)(uVar24 + 1);
        } while ((longlong)pFVar29 < (longlong)iVar7);
      }
      if (iVar7 < *(int *)&(((FDistributedShaderCompilerTask *)param_1)->Future).field_0x8) {
        ::FString::PrintfImpl(&local_988,L"\n%d more shaders ...\n");
        iVar7 = local_988.Data.ArrayNum + -1;
        if (local_988.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        ::FString::AppendChars(&local_ab0,(wchar_t *)local_988.Data.AllocatorInstance.Data,iVar7);
        if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_988.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_a08 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a08);
    }
    local_a08 = local_ab0.Data.AllocatorInstance.Data;
    local_a00._0_4_ = local_ab0.Data.ArrayNum;
    local_a00._4_4_ = local_ab0.Data.ArrayMax;
  }
  pFVar4 = local_a68;
  pFVar17 = ::operator_new(0x40);
  uVar24 = local_a6c;
  if (pFVar17 != (FDistributedShaderCompilerTask *)0x0) {
    puVar18 = (undefined8 *)
              (**(code **)((longlong)*pFVar4->CachedController + 0x90))
                        (pFVar4->CachedController,local_948,&local_a58);
    *(FScriptContainerElement **)&pFVar17->Future = (FScriptContainerElement *)*puVar18;
    *(undefined8 *)&(pFVar17->Future).field_0x8 = puVar18[1];
    puVar18[1] = 0;
    *puVar18 = 0;
    (pFVar17->ShaderJobs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar17->ShaderJobs).AllocatorInstance.Data =
         *(FScriptContainerElement **)&((FDistributedShaderCompilerTask *)param_1)->Future;
    *(FScriptContainerElement **)&((FDistributedShaderCompilerTask *)param_1)->Future =
         (FScriptContainerElement *)0x0;
    (pFVar17->ShaderJobs).ArrayNum =
         *(int *)&(((FDistributedShaderCompilerTask *)param_1)->Future).field_0x8;
    (pFVar17->ShaderJobs).ArrayMax =
         *(int *)&(((FDistributedShaderCompilerTask *)param_1)->Future).field_0xc;
    *(undefined8 *)&(((FDistributedShaderCompilerTask *)param_1)->Future).field_0x8 = 0;
    (pFVar17->InputFilePath).Data.AllocatorInstance.Data = local_ac0.Data.AllocatorInstance.Data;
    local_ac0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar17->InputFilePath).Data.ArrayNum = local_ac0.Data.ArrayNum;
    (pFVar17->InputFilePath).Data.ArrayMax = local_ac0.Data.ArrayMax;
    local_ac0.Data.ArrayNum = 0;
    local_ac0.Data.ArrayMax = 0;
    (pFVar17->OutputFilePath).Data.AllocatorInstance.Data = local_a90.Data.AllocatorInstance.Data;
    local_a90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar17->OutputFilePath).Data.ArrayNum = local_a90.Data.ArrayNum;
    (pFVar17->OutputFilePath).Data.ArrayMax = local_a90.Data.ArrayMax;
    local_a90.Data.ArrayNum = 0;
    local_a90.Data.ArrayMax = 0;
    pFVar26 = pFVar17;
    uVar24 = 1;
  }
  local_a98 = pFVar26;
  TSparseArray<FDistributedShaderCompilerTask_*,FDefaultSparseArrayAllocator>::Add
            (&pFVar4->DispatchedTasks,&local_a98);
  if ((uVar24 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_940);
  }
  local_aa0 = 0;
  cVar6 = (**(code **)((longlong)*pFVar4->CachedController + 0x88))
                    (pFVar4->CachedController,&local_aa0);
  pFVar3 = GShaderCompilerStats;
  if (cVar6 != '\0') {
    if (GShaderCompilerStats == (FShaderCompilerStats *)0x0) goto LAB_1485228c3;
    EnterCriticalSection((LPCRITICAL_SECTION)GShaderCompilerStats);
    uVar24 = (pFVar3->Counters).MaxRemoteAgents;
    uVar10 = (uint)local_aa0;
    if ((uint)local_aa0 < uVar24) {
      uVar10 = uVar24;
    }
    uVar24 = (pFVar3->Counters).MaxActiveAgentCores;
    (pFVar3->Counters).MaxRemoteAgents = uVar10;
    uVar10 = local_aa0._4_4_;
    if (local_aa0._4_4_ < uVar24) {
      uVar10 = uVar24;
    }
    (pFVar3->Counters).MaxActiveAgentCores = uVar10;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_908);
  DestructItems<FString,int>(local_9e0,(int)local_9d8);
  if (local_9e0 != (FString *)0x0) {
    FMemory::Free(local_9e0);
  }
  DestructItems<FString,int>((FString *)local_9f0.AllocatorInstance.Data,local_9f0.ArrayNum);
  if (local_9f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9f0.AllocatorInstance.Data);
  }
  if (local_a08 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a08);
  }
  if (local_a18 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a18);
  }
  if (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a28.Data.AllocatorInstance.Data);
  }
  if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a38.Data.AllocatorInstance.Data);
  }
  if (local_a48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a48.Data);
  }
  if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a58.Data.AllocatorInstance.Data);
  }
  if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.Data.AllocatorInstance.Data);
  }
  if (local_a90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a90.Data.AllocatorInstance.Data);
  }
  if (local_ac0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ac0.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_868);
  if (local_a80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a80.Data.AllocatorInstance.Data);
  }
  return;
}

// ForEachPendingJob @ 148526f60

void __thiscall
FShaderCompileDistributedThreadRunnable_Interface::ForEachPendingJob
          (FShaderCompileDistributedThreadRunnable_Interface *this,
          TFunction<bool___cdecl(FShaderCommonCompileJob_*)> *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  longlong *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  TSparseArray<FDistributedShaderCompilerTask_*,FDefaultSparseArrayAllocator>::CreateConstIterator
            (&this->DispatchedTasks,(TConstIterator *)&local_48);
  if (local_40.CurrentBitIndex < (local_40.Array)->NumBits) {
    do {
      lVar3 = *(longlong *)(*local_48 + (longlong)local_40.CurrentBitIndex * 8);
      puVar8 = *(undefined8 **)(lVar3 + 0x10);
      iVar2 = *(int *)(lVar3 + 0x18);
      puVar1 = puVar8 + iVar2;
      while( true ) {
        if (*(int *)(lVar3 + 0x18) != iVar2) {
          `TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(&local_res8);
        }
        if (puVar8 == puVar1) break;
        local_res8 = *puVar8;
        UE::Core::Private::Function::CheckCallable(*(void **)param_1);
        pcVar4 = *(code **)param_1;
        plVar7 = *(longlong **)&param_1->field_0x28;
        if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
          plVar7 = (longlong *)&param_1->field_0x10;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        cVar5 = (*pcVar4)(uVar6,&local_res8);
        if (cVar5 == '\0') {
          return;
        }
        puVar8 = puVar8 + 1;
      }
      local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
  }
  return;
}

// GetDependencyFilesForJobs @ 148529e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FShaderCompileDistributedThreadRunnable_Interface::GetDependencyFilesForJobs
          (FShaderCompileDistributedThreadRunnable_Interface *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *param_1)

{
  TMap<EShaderPlatform,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EShaderPlatform,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  void *pvVar4;
  undefined1 *puVar5;
  code *pcVar6;
  uchar *puVar7;
  EShaderPlatform EVar8;
  bool bVar9;
  undefined4 uVar10;
  longlong lVar11;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar12;
  ForElementType<unsigned_int> FVar13;
  ulonglong uVar14;
  EShaderPlatform *pEVar15;
  undefined1 *puVar16;
  longlong lVar17;
  longlong *plVar18;
  FScriptContainerElement *pFVar19;
  int *piVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  EShaderPlatform EVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackY_108 [32];
  EShaderPlatform local_c8 [2];
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2 [2];
  int local_c0;
  uint local_bc;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_b8;
  FString local_b0;
  FString local_a0;
  FShaderCompileDistributedThreadRunnable_Interface *local_90;
  FScriptContainerElement *local_88;
  int *local_80;
  EShaderPlatform *local_78;
  TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *local_70;
  FScriptContainerElement *local_68;
  ForElementType<unsigned_int> local_60;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_108;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar20 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar20 = 0;
  local_60.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_44 = 0x80;
  local_48 = 0x9b;
  local_b8 = __return_storage_ptr__;
  local_90 = this;
  local_80 = piVar20;
  local_70 = param_1;
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
  ResizeAllocation(&local_60,0,5,4);
  local_44 = 0xa0;
  FVar13 = (ForElementType<unsigned_int>)&local_60;
  if (local_60.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar13 = local_60.SecondaryData;
  }
  *(undefined8 *)FVar13 = 0;
  puVar7 = (uchar *)((longlong)FVar13 + 8);
  puVar7[0] = '\0';
  puVar7[1] = '\0';
  puVar7[2] = '\0';
  puVar7[3] = '\0';
  puVar7[4] = '\0';
  puVar7[5] = '\0';
  puVar7[6] = '\0';
  puVar7[7] = '\0';
  *(undefined4 *)((longlong)FVar13 + 0x10) = 0;
  uVar24 = local_48 & 0x8000001f;
  if ((int)uVar24 < 0) {
    uVar24 = (uVar24 - 1 | 0xffffffe0) + 1;
  }
  if (uVar24 != 0) {
    FVar13 = (ForElementType<unsigned_int>)&local_60;
    if (local_60.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar13 = local_60.SecondaryData;
    }
    puVar1 = (uint *)((longlong)FVar13 +
                     (longlong)((int)(local_48 + ((int)local_48 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar24 & 0x1f);
  }
  local_bc = param_1->ArrayNum;
  uVar14 = (ulonglong)(int)local_bc;
  pFVar25 = (param_1->AllocatorInstance).Data;
  local_68 = pFVar25 + uVar14 * 8;
  do {
    pFVar19 = local_68;
    local_88 = pFVar25;
    if (param_1->ArrayNum != (int)uVar14) {
      local_c4 = 0;
      `TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_c4);
    }
    if (pFVar25 == pFVar19) {
      if (local_60.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_60.SecondaryData);
      }
      return __return_storage_ptr__;
    }
    lVar17 = *(longlong *)pFVar25;
    local_c8[0] = SP_PCD3D_SM5;
    lVar11 = 0;
    if (*(char *)(lVar17 + 0x30) == '\0') {
      lVar11 = lVar17;
    }
    if (lVar11 == 0) {
      lVar11 = 0;
      if (*(char *)(lVar17 + 0x30) == '\x01') {
        lVar11 = lVar17;
      }
      if (lVar11 == 0) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        __return_storage_ptr__ = local_b8;
      }
      else {
        plVar18 = *(longlong **)(lVar11 + 200);
        iVar3 = *(int *)(lVar11 + 0xd0);
        plVar2 = plVar18 + iVar3;
        while( true ) {
          if (*(int *)(lVar11 + 0xd0) != iVar3) {
            local_c3 = 0;
            `TCheckedPointerIterator<TRefCountPtr<FShaderCompileJob>_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_c3);
          }
          piVar20 = local_80;
          pFVar25 = local_88;
          this = local_90;
          __return_storage_ptr__ = local_b8;
          if (plVar18 == plVar2) break;
          lVar17 = 0;
          if (*(char *)(*plVar18 + 0x30) == '\0') {
            lVar17 = *plVar18;
          }
          if (lVar17 != 0) {
            EVar23 = (EShaderPlatform)(*(uint *)(lVar17 + 0xd8) >> 4);
            local_a0.Data.ArrayNum = *(int *)(lVar17 + 0x108);
            lVar21 = (longlong)local_a0.Data.ArrayNum;
            pvVar4 = *(void **)(lVar17 + 0x100);
            local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c8[0] = EVar23;
            if (local_a0.Data.ArrayNum == 0) {
              local_a0.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_a0.Data.ArrayNum,0,(ForAnyElementType *)&local_a0,
                         local_a0.Data.ArrayNum,&local_a0.Data.ArrayMax);
              memcpy(local_a0.Data.AllocatorInstance.Data,pvVar4,lVar21 * 2);
            }
            AddShaderSourceFileEntry(local_b8,&local_a0,EVar23,(FName *)0x0);
          }
          plVar18 = plVar18 + 1;
        }
      }
    }
    else {
      EVar23 = (EShaderPlatform)(*(uint *)(lVar11 + 0xd8) >> 4);
      local_b0.Data.ArrayNum = *(int *)(lVar11 + 0x108);
      lVar17 = (longlong)local_b0.Data.ArrayNum;
      pvVar4 = *(void **)(lVar11 + 0x100);
      local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8[0] = EVar23;
      if (local_b0.Data.ArrayNum == 0) {
        local_b0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_b0.Data.ArrayNum,0,(ForAnyElementType *)&local_b0,
                   local_b0.Data.ArrayNum,&local_b0.Data.ArrayMax);
        memcpy(local_b0.Data.AllocatorInstance.Data,pvVar4,lVar17 * 2);
      }
      AddShaderSourceFileEntry(__return_storage_ptr__,&local_b0,EVar23,(FName *)0x0);
      piVar20 = &__return_storage_ptr__->ArrayMax;
    }
    EVar23 = local_c8[0];
    if (((int)local_48 <= (int)(uint)local_c8[0]) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar12;
    }
    EVar8 = local_c8[0];
    FVar13 = (ForElementType<unsigned_int>)&local_60;
    if (local_60.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar13 = local_60.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar13 + (ulonglong)(EVar23 >> 5) * 4) >> (EVar23 & SP_METAL_MRT_TVOS)
        & 1) == 0) {
      if (((int)local_48 <= (int)(uint)local_c8[0]) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar12;
      }
      FVar13 = (ForElementType<unsigned_int>)&local_60;
      if (local_60.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_60.SecondaryData;
      }
      this_00 = &this->PlatformShaderInputFilesCache;
      puVar1 = (uint *)((longlong)FVar13 + (ulonglong)(EVar8 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)EVar8 & 0x1f);
      if (*(int *)&(this->PlatformShaderInputFilesCache).field_0x8 !=
          *(int *)&(this->PlatformShaderInputFilesCache).field_0x34) {
        puVar5 = *(undefined1 **)&(this->PlatformShaderInputFilesCache).field_0x40;
        puVar16 = &(this->PlatformShaderInputFilesCache).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar16 = puVar5;
        }
        uVar10 = *(undefined4 *)
                  (puVar16 +
                  ((ulonglong)(*(int *)&(this->PlatformShaderInputFilesCache).field_0x48 - 1) &
                  (ulonglong)local_c8[0]) * 4);
        if (uVar10 != 0xffffffff) {
          do {
            pEVar15 = (EShaderPlatform *)((longlong)(int)uVar10 * 0x20 + *(longlong *)this_00);
            if (*pEVar15 == local_c8[0]) {
              if (pEVar15 != (EShaderPlatform *)0x0) goto LAB_14852a24e;
              break;
            }
            uVar10 = *(undefined4 *)(pEVar15 + 0xc);
          } while (uVar10 != 0xffffffff);
        }
      }
      local_78 = local_c8;
      TSet<TTuple<enum_EShaderPlatform,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EShaderPlatform,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EShaderPlatform_const_&>_>
                (this_00,(uint)&local_c0,
                 (TKeyInitializer<EShaderPlatform_const_&> *)(ulonglong)local_c8[0],
                 (bool *)&local_78);
      pEVar15 = (EShaderPlatform *)((longlong)local_c0 * 0x20 + *(longlong *)this_00);
LAB_14852a24e:
      pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(pEVar15 + 4);
      if (*(undefined4 *)(pEVar15 + 8) == SP_PCD3D_SM5) {
        GetAllVirtualShaderSourcePaths(pTVar12,local_c8[0],(FName *)0x0);
      }
      if (__return_storage_ptr__->ArrayNum == 0) {
        if (__return_storage_ptr__ != pTVar12) {
          DestructItems<FString,int>((FString *)(__return_storage_ptr__->AllocatorInstance).Data,0);
          uVar10 = *(undefined4 *)(pEVar15 + 8);
          pFVar19 = (pTVar12->AllocatorInstance).Data;
          iVar3 = *piVar20;
          __return_storage_ptr__->ArrayNum = uVar10;
          if ((uVar10 == SP_PCD3D_SM5) && (iVar3 == 0)) {
            *piVar20 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar10,iVar3,&__return_storage_ptr__->AllocatorInstance,uVar10,piVar20
                      );
            ConstructItems<FString,FString,int>
                      ((__return_storage_ptr__->AllocatorInstance).Data,(FString *)pFVar19,uVar10);
          }
        }
      }
      else {
        uVar10 = *(undefined4 *)(pEVar15 + 8);
        pFVar19 = (pTVar12->AllocatorInstance).Data;
        pFVar22 = pFVar19 + (longlong)(int)uVar10 * 0x10;
        while( true ) {
          if (*(undefined4 *)(pEVar15 + 8) != uVar10) {
            local_c2[0] = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_c2);
          }
          this = local_90;
          if (pFVar19 == pFVar22) break;
          TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                    (__return_storage_ptr__,(FString *)pFVar19);
          pFVar19 = pFVar19 + 0x10;
        }
      }
    }
    piVar20 = &__return_storage_ptr__->ArrayMax;
    uVar14 = (ulonglong)local_bc;
    pFVar25 = pFVar25 + 8;
    param_1 = local_70;
  } while( true );
}

// GetThreadName @ 14852ef40

wchar_t * __thiscall
FShaderCompileDistributedThreadRunnable_Interface::GetThreadName
          (FShaderCompileDistributedThreadRunnable_Interface *this)

{
  return L"ShaderCompilingThread-Distributed";
}

// GetWorkerType @ 14852f3c0

EShaderCompilerWorkerType __thiscall
FShaderCompileDistributedThreadRunnable_Interface::GetWorkerType
          (FShaderCompileDistributedThreadRunnable_Interface *this)

{
  return Distributed;
}

// IsSupported @ 148532df0

bool __cdecl FShaderCompileDistributedThreadRunnable_Interface::IsSupported(void)

{
  return true;
}

